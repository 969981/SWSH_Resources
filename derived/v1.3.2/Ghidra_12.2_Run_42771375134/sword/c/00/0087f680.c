/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f680; name: FUN_0087f680
 */


uint FUN_0087f680(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return (uint)*(byte *)(param_1 + 0x10);
  case 1:
    return (uint)*(byte *)(param_1 + 0x11);
  case 2:
    return (uint)*(byte *)(param_1 + 0x12);
  case 3:
    return (uint)*(byte *)(param_1 + 0x13);
  case 4:
    return (uint)*(byte *)(param_1 + 0x14);
  case 5:
    return (uint)*(byte *)(param_1 + 0x15);
  case 6:
    return (uint)*(byte *)(param_1 + 0x16);
  case 7:
    return (uint)*(byte *)(param_1 + 0x17);
  case 8:
    return (uint)*(byte *)(param_1 + 0x18);
  case 9:
    return (uint)*(ushort *)(param_1 + 0x32);
  case 10:
    return *(ushort *)(param_1 + 0x1a) & 3;
  case 0xb:
    return *(ushort *)(param_1 + 0x1a) >> 2 & 3;
  case 0xc:
    return *(ushort *)(param_1 + 0x1a) >> 4 & 3;
  case 0xd:
    return *(ushort *)(param_1 + 0x1a) >> 6 & 3;
  case 0xe:
    return *(byte *)(param_1 + 0x1b) & 3;
  case 0xf:
    return *(ushort *)(param_1 + 0x1a) >> 10 & 3;
  case 0x10:
    return *(ushort *)(param_1 + 0x1a) >> 0xc & 1;
  case 0x11:
    return (uint)*(ushort *)(param_1 + 0x1c);
  case 0x12:
    return (uint)*(ushort *)(param_1 + 0x1e);
  case 0x13:
    return (uint)*(ushort *)(param_1 + 0x20);
  case 0x14:
    return (uint)*(byte *)(param_1 + 0x22);
  case 0x15:
    return (uint)*(byte *)(param_1 + 0x23);
  case 0x16:
    return (uint)*(byte *)(param_1 + 0x24);
  case 0x17:
    return (uint)*(byte *)(param_1 + 0x25);
  case 0x18:
    return (uint)*(byte *)(param_1 + 0x26);
  case 0x19:
    return (uint)*(byte *)(param_1 + 0x27);
  case 0x1a:
    return (uint)*(ushort *)(param_1 + 0x28);
  case 0x1b:
    return (uint)*(ushort *)(param_1 + 0x2a);
  case 0x1c:
    return (uint)*(ushort *)(param_1 + 0x2c);
  case 0x1d:
    return (uint)*(ushort *)(param_1 + 0x2e);
  case 0x1e:
    return (uint)*(byte *)(param_1 + 0x30);
  case 0x1f:
    return *(byte *)(param_1 + 0x31) & 0x3f;
  case 0x20:
    return (uint)*(byte *)(param_1 + 0x19);
  case 0x21:
    return (uint)*(ushort *)(param_1 + 0x34);
  case 0x22:
    return (uint)*(ushort *)(param_1 + 0x36);
  case 0x23:
    return *(uint *)(param_1 + 0x38);
  case 0x24:
    return *(uint *)(param_1 + 0x3c);
  case 0x25:
    return *(uint *)(param_1 + 0x40);
  case 0x26:
    return *(uint *)(param_1 + 0x44);
  case 0x27:
    return *(uint *)(param_1 + 0x48);
  case 0x28:
    return *(uint *)(param_1 + 0x4c);
  case 0x29:
    return *(uint *)(param_1 + 0x50);
  case 0x2a:
    return *(uint *)(param_1 + 0x54);
  case 0x2b:
    return *(uint *)(param_1 + 0x58);
  case 0x2c:
    return (uint)*(ushort *)(param_1 + 0x5c);
  case 0x2d:
    return (uint)*(ushort *)(param_1 + 0x60);
  case 0x2e:
    return (uint)*(ushort *)(param_1 + 0x62);
  case 0x2f:
    return (uint)*(ushort *)(param_1 + 100);
  case 0x31:
    return (uint)*(ushort *)(param_1 + 0x66);
  case 0x32:
    return (uint)*(ushort *)(param_1 + 0x68);
  case 0x33:
    return (uint)*(ushort *)(param_1 + 0x6e);
  case 0x34:
    return *(ushort *)(param_1 + 0x6a) & 1;
  case 0x35:
    return *(ushort *)(param_1 + 0x6a) >> 2 & 1;
  case 0x36:
    return (uint)*(ushort *)(param_1 + 0x6c);
  case 0x37:
    return (uint)*(ushort *)(param_1 + 0x70);
  case 0x38:
    return (uint)*(ushort *)(param_1 + 0x72);
  case 0x39:
    return (uint)*(ushort *)(param_1 + 0x74);
  case 0x3a:
    return (uint)*(ushort *)(param_1 + 0x76);
  case 0x3b:
    return (uint)*(ushort *)(param_1 + 0x78);
  case 0x3c:
    return (uint)*(byte *)(param_1 + 0x8e);
  case 0x3d:
    return (uint)*(byte *)(param_1 + 0x8f);
  case 0x3e:
    return (uint)*(byte *)(param_1 + 0x90);
  case 0x3f:
    return (uint)*(byte *)(param_1 + 0x91);
  case 0x40:
    return (uint)*(byte *)(param_1 + 0x92);
  case 0x41:
    return (uint)*(byte *)(param_1 + 0x93);
  case 0x42:
    return (uint)*(byte *)(param_1 + 0x94);
  case 0x43:
    return (uint)*(byte *)(param_1 + 0x95);
  case 0x44:
    return (uint)*(byte *)(param_1 + 0x96);
  case 0x45:
    return (uint)*(byte *)(param_1 + 0x97);
  case 0x46:
    return (uint)*(byte *)(param_1 + 0x98);
  case 0x47:
    return (uint)*(byte *)(param_1 + 0x99);
  case 0x48:
    return (uint)*(byte *)(param_1 + 0x9a);
  case 0x49:
    return (uint)*(byte *)(param_1 + 0x9b);
  case 0x4a:
    return (uint)*(byte *)(param_1 + 0x9c);
  case 0x4b:
    return (uint)*(byte *)(param_1 + 0x9d);
  case 0x4c:
    return (uint)*(byte *)(param_1 + 0x9e);
  case 0x4d:
    return (uint)*(byte *)(param_1 + 0x9f);
  case 0x4e:
    return (uint)*(byte *)(param_1 + 0xa0);
  case 0x4f:
    uVar1 = (uint)*(byte *)(param_1 + 0xa1);
    break;
  case 0x50:
    return (uint)*(byte *)(param_1 + 0x7a);
  case 0x51:
    return (uint)*(byte *)(param_1 + 0x7b);
  case 0x52:
    return (uint)*(byte *)(param_1 + 0x7c);
  case 0x53:
    return (uint)*(byte *)(param_1 + 0x7d);
  case 0x54:
    return (uint)*(byte *)(param_1 + 0x7e);
  case 0x55:
    return (uint)*(byte *)(param_1 + 0x7f);
  case 0x56:
    return (uint)*(byte *)(param_1 + 0x80);
  case 0x57:
    return (uint)*(byte *)(param_1 + 0x81);
  case 0x58:
    return (uint)*(byte *)(param_1 + 0x82);
  case 0x59:
    return (uint)*(byte *)(param_1 + 0x83);
  case 0x5a:
    return (uint)*(byte *)(param_1 + 0x84);
  case 0x5b:
    return (uint)*(byte *)(param_1 + 0x85);
  case 0x5c:
    return (uint)*(byte *)(param_1 + 0x86);
  case 0x5d:
    return (uint)*(byte *)(param_1 + 0x87);
  case 0x5e:
    return (uint)*(byte *)(param_1 + 0x88);
  case 0x5f:
    return (uint)*(byte *)(param_1 + 0x89);
  case 0x60:
    return (uint)*(byte *)(param_1 + 0x8a);
  case 0x61:
    return (uint)*(byte *)(param_1 + 0x8b);
  case 0x62:
    return (uint)*(byte *)(param_1 + 0x8c);
  case 99:
    return (uint)*(byte *)(param_1 + 0x8d);
  case 100:
    return (uint)*(ushort *)(param_1 + 0xa2);
  case 0x65:
    return (uint)*(ushort *)(param_1 + 0xa4);
  case 0x66:
    return (uint)*(ushort *)(param_1 + 0xa6);
  case 0x67:
    return (uint)*(ushort *)(param_1 + 0xa8);
  case 0x68:
    return (uint)*(ushort *)(param_1 + 0xaa);
  case 0x69:
    return (uint)*(ushort *)(param_1 + 0xac);
  case 0x6a:
    return (uint)*(ushort *)(param_1 + 0xae);
  case 0x6b:
    return (uint)*(ushort *)(param_1 + 0xb0);
  case 0x6c:
    return (uint)*(ushort *)(param_1 + 0xb2);
  case 0x6d:
    return (uint)*(ushort *)(param_1 + 0xb4);
  case 0x6e:
    return *(uint *)(param_1 + 0xb8);
  case 0x6f:
    return (uint)*(ushort *)(param_1 + 0xbc);
  case 0x70:
    return (uint)*(ushort *)(param_1 + 0xbe);
  }
  return uVar1;
}


