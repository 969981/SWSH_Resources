/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534080; name: FUN_01534080
 */


long FUN_01534080(long param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = FUN_014ae670(param_2,param_3);
  uVar5 = FUN_014ae400(0,uVar4);
  if (uVar5 == 0) {
    uVar5 = FUN_014ae400(1,uVar4);
    if (uVar5 == 0) {
      uVar5 = FUN_014ae400(2,uVar4);
      if (uVar5 == 0) {
        return 0;
      }
      bVar1 = 0xd2 < uVar5;
      uVar7 = 0xd1;
      iVar6 = 2;
    }
    else {
      bVar1 = 0xd3 < uVar5;
      uVar7 = 0xd2;
      iVar6 = 1;
    }
  }
  else {
    iVar6 = 0;
    uVar7 = 399;
    bVar1 = 400 < uVar5;
  }
  uVar5 = (uVar5 & 0xffff) - 1;
  if (bVar1) {
    uVar5 = 0xffffffff;
  }
  if (uVar7 < uVar5) {
    return 0;
  }
  lVar2 = param_1 + 0x60;
  if (iVar6 == 1) {
    lVar2 = param_1 + 0x4b60;
  }
  lVar3 = param_1 + 0x72f0;
  if (iVar6 != 2) {
    lVar3 = lVar2;
  }
  return lVar3 + (ulong)uVar5 * 0x30;
}


