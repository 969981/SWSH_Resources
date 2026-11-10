/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fe1a0; name: FUN_009fe1a0
 */


uint FUN_009fe1a0(long param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 < 0xc) || (param_2 == 0xd)) {
    lVar2 = *(long *)(param_1 + 0x180);
    if (lVar2 == 0) {
      return 0;
    }
    if ((param_2 < 0xc) || (param_2 == 0xd)) goto joined_r0x009fe224;
  }
  if (*(long *)(param_1 + 0x188) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x180);
joined_r0x009fe224:
  if (0x1b < param_2) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x188);
  switch(param_2) {
  case 0:
    return (uint)*(byte *)(lVar2 + 0x2346);
  case 1:
    return (uint)*(byte *)(lVar2 + 0x2347);
  case 2:
    return (uint)*(byte *)(lVar2 + 0x2348);
  case 3:
    return (uint)*(byte *)(lVar2 + 0x2349);
  case 4:
    return (uint)*(byte *)(lVar2 + 0x234a);
  case 5:
    return (uint)*(byte *)(lVar2 + 0x234b);
  case 6:
    uVar1 = (uint)*(byte *)(lVar2 + 0x2355);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x5a1) == '\b')) {
      return *(uint *)(lVar3 + 0x618);
    }
    break;
  case 7:
    uVar1 = (uint)*(byte *)(lVar2 + 0x2356);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x5a1) == '\b')) {
      return *(uint *)(lVar3 + 0x61c);
    }
    break;
  case 8:
    return (uint)*(byte *)(lVar2 + 0x2357);
  case 9:
    return (uint)*(byte *)(lVar2 + 0x235b);
  case 10:
    return (uint)*(byte *)(lVar2 + 0x2344);
  case 0xb:
    return (uint)*(byte *)(lVar2 + 0x2352);
  case 0xc:
    return *(uint *)(lVar3 + 0x60);
  case 0xd:
    return *(uint *)(lVar2 + 0x1100);
  case 0xe:
    return (uint)*(byte *)(lVar3 + 0x5a3);
  case 0xf:
    return (uint)*(byte *)(lVar3 + 0x5a4);
  case 0x10:
    return (uint)*(byte *)(lVar3 + 0x5a5);
  case 0x11:
    return (uint)*(byte *)(lVar3 + 0x5a6);
  case 0x12:
    return (uint)*(ushort *)(lVar3 + 0x598);
  case 0x13:
    return (uint)*(byte *)(lVar3 + 0x59c);
  case 0x14:
    return (uint)*(byte *)(lVar3 + 0x59d);
  case 0x15:
    return (uint)*(ushort *)(lVar3 + 0x59a);
  case 0x16:
    return (uint)*(byte *)(lVar3 + 0x59e);
  case 0x17:
    return (uint)*(byte *)(lVar3 + 0x59f);
  case 0x18:
    return (uint)*(byte *)(lVar3 + 0x5a0);
  case 0x19:
    return *(uint *)(lVar3 + 0x610);
  case 0x1a:
    return *(uint *)(lVar3 + 0x624);
  case 0x1b:
    uVar1 = *(uint *)(lVar3 + 0x620);
    if (uVar1 == 0) {
      uVar1 = FUN_008d3750();
      uVar1 = uVar1 & 0xff;
    }
  }
  return uVar1;
}


