/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adce0; name: FUN_014adce0
 */


undefined4 FUN_014adce0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = FUN_008790d0(param_1,0);
  iVar2 = FUN_008790d0(param_1,1);
  iVar3 = FUN_008790d0(param_1,2);
  iVar4 = FUN_008790d0(param_1,3);
  iVar5 = FUN_008790d0(param_1,4);
  iVar6 = FUN_008790d0(param_1,5);
  uVar7 = 0;
  iVar6 = iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1;
  if (0x5a < iVar6) {
    if (0x78 < iVar6) {
      uVar7 = 2;
      if (0x96 < iVar6) {
        uVar7 = 3;
      }
      return uVar7;
    }
    uVar7 = 1;
  }
  return uVar7;
}


