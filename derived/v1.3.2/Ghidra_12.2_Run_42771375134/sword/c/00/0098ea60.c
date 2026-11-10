/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098ea60; name: FUN_0098ea60
 */


undefined8 FUN_0098ea60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar1 = FUN_008e2920(param_2);
  uVar2 = FUN_008e2150(param_3);
  if ((uVar2 & 0xff) != 0) {
    uVar8 = 0;
    do {
      iVar3 = FUN_008e2240(param_3,uVar8);
      iVar4 = FUN_00880b40();
      if (iVar4 == 9) {
        return 1;
      }
      uVar6 = FUN_00880c60(iVar3);
      if ((uVar6 & 1) != 0) {
        if (iVar3 == 0xed) {
          uVar5 = FUN_008e0a00(param_3);
          uVar7 = FUN_00940ed0(param_1,uVar5);
          iVar3 = FUN_008eba60(uVar7,uVar1);
        }
        else {
          uVar7 = FUN_00880ae0(iVar3);
          iVar3 = FUN_008eba60(uVar7,uVar1);
        }
        if (7 < iVar3) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < (uVar2 & 0xff));
  }
  return 0;
}


