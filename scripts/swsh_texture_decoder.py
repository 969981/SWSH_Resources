#!/usr/bin/env python3
"""SWSHTextureDecoder: bounded mip0 2D decoding, local PNG only."""
import io
import struct
import numpy as np
from PIL import Image
from swsh_image_resource_audit import bntx, checked, num, endian_at

VERSION="0.1.0"
FORMATS={
    0x1a01:("BC1",4,8,b"DXT1"), 0x1b01:("BC2",4,16,b"DXT3"),
    0x1c01:("BC3",4,16,b"DXT5"), 0x1d01:("BC4",4,8,b"ATI1"),
    0x1e01:("BC5",4,16,b"ATI2"), 0x2001:("BC7",4,16,b"DX10"),
    0x0b01:("RGBA8",1,4,None), 0x0501:("RGB5A1",1,2,None)
}
def surface(data,t):
    e=endian_at(data,0xc)
    p=t["brti_offset"]
    fmt=int(t["format_raw"],16)
    name,block,bpp,_=FORMATS[fmt]
    w,h=t["width"],t["height"]
    if t["depth"]!=1 or t["array_count_raw"]!=1:
        raise ValueError("array or volume texture requires independent surface parser")
    if w*h>64*1024*1024:
        raise ValueError("texture size limit")
    tile=num(data,p+0x10,"B",e)
    flags=num(data,p+0x12,"H",e)
    log=num(data,p+0x34,"I",e)
    if tile not in (0,1) or not 0<=log<=5:
        raise ValueError(f"unsupported tile/layout {tile}/{log}")
    table=num(data,p+0x70,"Q",e)
    ptr=[num(data,table+i*8,"Q",e) for i in range(t["mip_count"])]
    size=num(data,p+0x50,"I",e)
    if not ptr or ptr!=sorted(set(ptr)) or ptr[-1]>=ptr[0]+size:
        raise ValueError("invalid mip offsets")
    checked(data,ptr[0],size)
    stop=ptr[1] if len(ptr)>1 else ptr[0]+size
    raw=checked(data,ptr[0],stop-ptr[0])
    bx,by=(w+block-1)//block,(h+block-1)//block
    y=np.arange(by,dtype=np.int64)[:,None]
    x=np.arange(bx,dtype=np.int64)[None,:]*bpp
    if tile==0:
        pitch=((bx*bpp+31)//32)*32
        pos=y*pitch+x
    else:
        bh=1<<log
        gobs=(bx*bpp+63)//64
        pos=(y//(8*bh))*512*bh*gobs+(x//64)*512*bh+(y%(8*bh)//8)*512
        pos=pos+(x%64//32)*256+(y%8//2)*64+(x%32//16)*32+(y%2)*16+x%16
    if int(pos.max())+bpp>len(raw):
        raise ValueError("mip0 surface out of range")
    addr=pos[...,None]+np.arange(bpp,dtype=np.int64)
    linear=np.frombuffer(raw,dtype=np.uint8)[addr].tobytes()
    selectors=list(checked(data,p+0x58,4))
    if any(i>5 for i in selectors):
        raise ValueError(f"invalid channel selectors {selectors}")
    return linear,dict(format=name,format_raw=t["format_raw"],tile_mode=tile,flags_raw=flags,
        block_height_log2=log,component_selectors=selectors,mip_offsets=ptr,
        image_size=size,width=w,height=h,mip_count=t["mip_count"],
        coverage="mip0_layer0",color_space="UNORM_NO_TRANSFER_ASSUMED",alpha_mode="UNKNOWN")

def dds(data,w,h,code):
    fourcc=FORMATS[code][3]
    flags=0x00081007
    hdr=struct.pack("<7I",124,flags,h,w,len(data),0,1)+bytes(44)
    hdr+=struct.pack("<II4s5I",32,4,fourcc,0,0,0,0,0)
    hdr+=struct.pack("<5I",0x1000,0,0,0,0)
    if fourcc==b"DX10":
        hdr+=struct.pack("<5I",98,3,0,1,0)
    return b"DDS "+hdr+data

def packed_primary(data,w,h):
    v=np.frombuffer(data,dtype="<u2").reshape(h,w)
    a=np.empty((h,w,4),dtype=np.uint8)
    for i in range(3):
        c=(v>>(5*i))&31
        a[...,i]=(c<<3)|(c>>2)
    a[...,3]=((v>>15)&1)*255
    return a

def primary(data,w,h,code):
    if code==0x0501: return packed_primary(data,w,h)
    if code==0x0b01: return np.frombuffer(data,dtype=np.uint8).reshape(h,w,4).copy()
    with Image.open(io.BytesIO(dds(data,w,h,code))) as im:
        im.load()
        if code==0x1d01:
            a=np.zeros((h,w,4),dtype=np.uint8); a[...,0]=np.asarray(im); a[...,3]=255
        else:
            a=np.asarray(im.convert("RGBA")).copy()
            if code==0x1e01: a[...,2]=0; a[...,3]=255
        return a

def select_channels(a,sel):
    out=np.empty_like(a)
    for i,s in enumerate(sel):
        out[...,i]=0 if s==0 else 255 if s==1 else a[...,s-2]
    return out

def decode(data,t):
    linear,meta=surface(data,t)
    code=int(t["format_raw"],16)
    rgba=select_channels(primary(linear,meta["width"],meta["height"],code),meta["component_selectors"])
    return rgba,linear,meta

def encode_png(rgba,path=None):
    im=Image.fromarray(rgba,"RGBA")
    buf=io.BytesIO()
    im.save(buf,format="PNG")
    png=buf.getvalue()
    with Image.open(io.BytesIO(png)) as read:
        read.load()
        if read.mode!="RGBA" or read.size!=im.size or read.tobytes()!=rgba.tobytes():
            raise ValueError("PNG roundtrip pixel mismatch")
    if path is not None:
        path.parent.mkdir(parents=True,exist_ok=True)
        path.write_bytes(png)
    return png
