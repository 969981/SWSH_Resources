/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01536020; name: FUN_01536020
 */


ulong FUN_01536020(long param_1,int param_2,short param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = FUN_014ae400(0);
  if ((uint)uVar3 == 0) {
    uVar3 = FUN_014ae400(1,param_2);
    if ((uint)uVar3 == 0) {
      uVar3 = FUN_014ae400(2,param_2);
      if ((uint)uVar3 == 0) {
        return uVar3;
      }
      bVar1 = 0xd2 < (uint)uVar3;
      uVar6 = 0xd1;
      iVar4 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar3;
      uVar6 = 0xd2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    uVar6 = 399;
    bVar1 = 400 < (uint)uVar3;
  }
  uVar2 = ((uint)uVar3 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar6 < uVar2) {
    return 0;
  }
  if (iVar4 == 2) {
    param_1 = param_1 + 0x72f0;
    lVar5 = param_1 + (ulong)uVar2 * 0x30;
  }
  else if (iVar4 == 1) {
    param_1 = param_1 + 0x4b60;
    lVar5 = param_1 + (ulong)uVar2 * 0x30;
  }
  else {
    param_1 = param_1 + 0x60;
    lVar5 = param_1 + (ulong)uVar2 * 0x30;
  }
  if (lVar5 == 0) {
    return 0;
  }
  uVar3 = FUN_01534550(uVar3,param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((param_2 == 0x37c) && (param_3 == 1)) {
    return (ulong)(*(byte *)(param_1 + (ulong)uVar2 * 0x30 + 0x28) & 1);
  }
  return (ulong)(*(byte *)(param_1 + (ulong)uVar2 * 0x30 + 0x20) >> 1 & 1);
}


