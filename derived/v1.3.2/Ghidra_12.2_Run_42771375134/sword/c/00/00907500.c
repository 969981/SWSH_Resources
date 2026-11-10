/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00907500; name: FUN_00907500
 */


undefined8 FUN_00907500(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (*param_2 == 1) {
    uVar9 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1f8))();
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  }
  else if (*param_2 == 0) {
    uVar3 = *param_3;
    uVar1 = param_3[2];
    uVar2 = param_3[3];
    iVar4 = param_3[4];
    if ((*(undefined **)(param_1 + 0xd0) == PTR_LAB_02717cf8) &&
       (*(ulong *)(param_1 + 0xd8) == 0 ||
        (*(ulong *)(param_1 + 0xd8) & 1) == 0 && *(undefined **)(param_1 + 0xd0) == (undefined *)0x0
       )) {
      return 1;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_008f9470(uVar10,uVar8,uVar3);
    uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar8 = FUN_008df7f0(uVar8,uVar5);
    iVar6 = FUN_008ec980(uVar1,uVar8);
    if ((iVar4 == 0) && (uVar9 = FUN_008f8930(*(undefined8 *)(param_1 + 0x58)), (uVar9 & 1) != 0)) {
      if ((uVar2 & 0xff) == 5) {
        uVar7 = 0;
      }
      else {
        uVar9 = FUN_008f9440(*(undefined8 *)(param_1 + 0x58),uVar5,uVar2);
        uVar7 = 0;
        if ((iVar6 == 0) && ((uVar9 & 1) != 0)) {
          uVar7 = FUN_00880a00(uVar1,0xf);
          uVar7 = uVar7 ^ 1;
        }
      }
    }
    else {
      uVar7 = 1;
    }
    (**(code **)(**(long **)(param_1 + 0x358) + 0x1c8))
              (*(long **)(param_1 + 0x358),uVar3,uVar1,uVar5,uVar2,iVar6,uVar7 & 1);
    *param_2 = *param_2 + 1;
  }
  return 0;
}


