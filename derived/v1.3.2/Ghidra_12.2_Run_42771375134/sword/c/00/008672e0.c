/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008672e0; name: FUN_008672e0
 */


ulong FUN_008672e0(ulong param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((short)param_1 < 0x100) {
    return param_1;
  }
  switch((int)(short)param_1) {
  case 0x100:
    break;
  case 0x101:
    if (param_2 == (ulong *)0x0) {
      uVar4 = FUN_008660d0(0x10);
      return uVar4;
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = uVar5 ^ uVar4;
    *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
    param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
    return (ulong)((int)uVar5 + (int)uVar4 & 0xf);
  case 0x102:
    if (param_2 == (ulong *)0x0) {
      iVar3 = FUN_008660d0(0x20);
      return (ulong)(iVar3 + 0x10);
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = uVar5 ^ uVar4;
    *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
    param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
    return (ulong)(((int)uVar5 + (int)uVar4 & 0x1fU) + 0x10);
  case 0x103:
    if (param_2 == (ulong *)0x0) {
      iVar3 = FUN_008660d0(0xa0);
      return (ulong)(iVar3 + 0x30);
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    do {
      uVar6 = uVar4 ^ uVar5;
      iVar2 = (int)uVar5;
      iVar3 = (int)uVar4;
      uVar5 = uVar6 >> 0x1b | uVar6 << 0x25;
      uVar4 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
      uVar1 = iVar3 + iVar2 & 0xff;
    } while (0x9f < uVar1);
    *param_2 = uVar4;
    param_2[1] = uVar5;
    return (ulong)(uVar1 + 0x30);
  case 0x104:
    if (param_2 == (ulong *)0x0) {
      iVar3 = FUN_008660d0(0x20);
      return (ulong)(iVar3 + 0xd0);
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = uVar5 ^ uVar4;
    *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
    param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
    return (ulong)(((int)uVar5 + (int)uVar4 & 0x1fU) + 0xd0);
  case 0x105:
    if (param_2 == (ulong *)0x0) {
      iVar3 = FUN_008660d0(0x10);
      return (ulong)(iVar3 + 0xf0);
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = uVar5 ^ uVar4;
    *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
    param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
    return (ulong)(((int)uVar5 + (int)uVar4 & 0xfU) + 0xf0);
  default:
    return 0x80;
  }
  if (param_2 == (ulong *)0x0) {
    iVar3 = FUN_008660d0(0x81);
    iVar2 = FUN_008660d0(0x80);
    return (ulong)(uint)(iVar2 + iVar3);
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  do {
    uVar7 = uVar4 ^ uVar5;
    uVar6 = uVar7 ^ (uVar4 >> 0x28 | uVar4 << 0x18);
    iVar2 = (int)uVar5;
    iVar3 = (int)uVar4;
    uVar5 = uVar7 >> 0x1b | uVar7 << 0x25;
    uVar4 = uVar6 ^ uVar7 << 0x10;
    uVar1 = iVar3 + iVar2 & 0xff;
  } while (0x80 < uVar1);
  uVar5 = uVar5 ^ uVar4;
  *param_2 = uVar5 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar5 << 0x10;
  param_2[1] = uVar5 >> 0x1b | uVar5 << 0x25;
  return (ulong)(((int)(uVar7 >> 0x1b) + (int)uVar6 & 0x7fU) + uVar1);
}


