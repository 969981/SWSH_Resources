/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d760; name: FUN_0090d760
 */


undefined4 FUN_0090d760(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  uVar2 = *param_2;
  uVar5 = param_2[1];
  uVar10 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar10 = FUN_008df7f0(uVar10,uVar2);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = FUN_008fb3c0(uVar13,uVar2);
  uVar11 = FUN_008f9370(uVar13,uVar9);
  if ((uVar11 & 1) != 0) {
    FUN_008fb450(*(undefined8 *)(param_1 + 0x58),uVar10,uVar1);
  }
  uVar11 = FUN_008f8930(*(undefined8 *)(param_1 + 0x58));
  if ((uVar11 & 1) != 0) {
    uVar13 = FUN_009319a0(*(undefined8 *)(param_1 + 0x70));
    uVar9 = FUN_008e0a00(uVar10);
    uVar11 = FUN_00913dd0(uVar13,uVar9);
    if ((uVar11 & 1) != 0) {
      uVar9 = param_2[4];
      uVar6 = param_2[5];
      iVar3 = param_2[6];
      iVar7 = param_2[7];
      iVar8 = param_2[8];
      if (((((uVar5 & 0xff) == 5) ||
           (uVar11 = FUN_008f9440(*(undefined8 *)(param_1 + 0x58),uVar2,uVar5), iVar8 != 0)) ||
          ((uVar11 & 1) == 0)) || (uVar11 = FUN_00880a00(uVar1,0xf), (uVar11 & 1) != 0)) {
        uVar12 = 1;
        if (iVar3 != 0) {
          uVar12 = 2;
        }
        (**(code **)(**(long **)(param_1 + 0x358) + 0x208))
                  (*(long **)(param_1 + 0x358),uVar2,uVar5,uVar1,uVar4,iVar8,uVar9,uVar6,iVar3 != 0,
                   iVar7 != 0);
        return uVar12;
      }
    }
  }
  return 0;
}


