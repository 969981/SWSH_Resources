/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a40d0; name: FUN_009a40d0
 */


void FUN_009a40d0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar4 = FUN_00942620();
  if (iVar4 == 2) {
    uVar8 = FUN_009424b0(param_1,4);
    FUN_008e0b60();
    bVar3 = FUN_008e5f50();
    uVar1 = (uint)bVar3;
    if (bVar3 != 0) {
      uVar5 = FUN_00942820(param_1,0);
      uVar2 = 0;
      if (bVar3 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      if (uVar5 == uVar2 * uVar1) {
        uVar6 = FUN_008ebfa0(uVar1);
        uVar9 = FUN_009423b0(param_1);
        uVar7 = FUN_008e0a00(uVar8);
        FUN_00939b40(uVar9,uVar7,uVar6);
        return;
      }
      uVar9 = FUN_009423b0(param_1);
      uVar6 = FUN_008e0a00(uVar8);
      FUN_00939ac0(uVar9,uVar6);
      return;
    }
  }
  return;
}


