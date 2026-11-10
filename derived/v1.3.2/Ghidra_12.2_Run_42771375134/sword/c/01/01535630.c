/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535630; name: FUN_01535630
 */


ulong FUN_01535630(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = FUN_014ae400(0);
  if ((uint)uVar3 == 0) {
    uVar3 = FUN_014ae400(1,param_2);
    if ((uint)uVar3 == 0) {
      uVar3 = FUN_014ae400(2,param_2);
      if ((uint)uVar3 == 0) {
        return uVar3;
      }
      bVar1 = 0xd2 < (uint)uVar3;
      uVar5 = 0xd1;
      iVar4 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar3;
      uVar5 = 0xd2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    uVar5 = 399;
    bVar1 = 400 < (uint)uVar3;
  }
  uVar2 = ((uint)uVar3 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar5 < uVar2) {
    return 0;
  }
  if (iVar4 == 2) {
    param_1 = param_1 + 0x72f0;
    lVar6 = param_1 + (ulong)uVar2 * 0x30;
  }
  else if (iVar4 == 1) {
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
  uVar3 = (ulong)uVar2;
  if (((*(long *)(param_1 + uVar3 * 0x30) == 0) && (*(long *)(param_1 + uVar3 * 0x30 + 8) == 0)) &&
     (*(long *)(param_1 + uVar3 * 0x30 + 0x10) == 0)) {
    return (ulong)(*(long *)(param_1 + uVar3 * 0x30 + 0x18) != 0);
  }
  return 1;
}


