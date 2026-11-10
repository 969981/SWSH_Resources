/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535c40; name: FUN_01535c40
 */


ulong FUN_01535c40(long param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  uVar3 = FUN_008d3750();
  if ((uVar3 & 0xff) == param_3) {
    return 1;
  }
  uVar4 = FUN_014ae400(0,param_2);
  if ((uint)uVar4 == 0) {
    uVar4 = FUN_014ae400(1,param_2);
    if ((uint)uVar4 == 0) {
      uVar4 = FUN_014ae400(2,param_2);
      if ((uint)uVar4 == 0) {
        return uVar4;
      }
      bVar1 = 0xd2 < (uint)uVar4;
      uVar3 = 0xd1;
      iVar5 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar4;
      uVar3 = 0xd2;
      iVar5 = 1;
    }
  }
  else {
    iVar5 = 0;
    uVar3 = 399;
    bVar1 = 400 < (uint)uVar4;
  }
  uVar2 = ((uint)uVar4 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar3 < uVar2) {
    return 0;
  }
  if (iVar5 == 2) {
    param_1 = param_1 + 0x72f0;
    lVar6 = param_1 + (ulong)uVar2 * 0x30;
  }
  else if (iVar5 == 1) {
    param_1 = param_1 + 0x4b60;
    lVar6 = param_1 + (ulong)uVar2 * 0x30;
  }
  else {
    param_1 = param_1 + 0x60;
    lVar6 = param_1 + (ulong)uVar2 * 0x30;
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (param_3 - 2 < 9) {
    uVar3 = *(uint *)(&DAT_02172f60 + (long)(int)(param_3 - 2) * 4);
  }
  else {
    uVar3 = 0;
  }
  return (ulong)((*(uint *)(param_1 + (ulong)uVar2 * 0x30 + 0x20) >> 2 & 0x1fff &
                 1 << (ulong)(uVar3 & 0x1f)) != 0);
}


