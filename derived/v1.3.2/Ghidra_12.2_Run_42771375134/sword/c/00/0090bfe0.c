/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090bfe0; name: FUN_0090bfe0
 */


undefined8 FUN_0090bfe0(long param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((*(undefined **)(param_1 + 0xd0) != PTR_LAB_02717cf8) ||
     (*(ulong *)(param_1 + 0xd8) != 0 &&
      ((*(ulong *)(param_1 + 0xd8) & 1) != 0 || *(undefined **)(param_1 + 0xd0) != (undefined *)0x0)
     )) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_008f9470(uVar6,uVar3,*param_3);
    if (*param_2 == 1) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x358) + 0x2c0))();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
LAB_0090c0dc:
      *param_2 = *param_2 + 1;
      return 0;
    }
    if ((*param_2 == 0) && ((uVar1 & 0xff) != 5)) {
      uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
      lVar4 = FUN_008df7f0(uVar3,uVar1);
      if ((lVar4 != 0) &&
         (((uVar5 = FUN_008e1600(), (uVar5 & 1) == 0 &&
           (uVar5 = FUN_008e1920(lVar4,0), (uVar5 & 1) == 0)) &&
          (uVar5 = FUN_008e1810(lVar4,3), (uVar5 & 1) == 0)))) {
        uVar2 = FUN_008f9590(*(undefined8 *)(param_1 + 0x58),uVar1);
        uVar1 = param_3[1];
        if (uVar1 - 1 < 2) {
          (**(code **)(**(long **)(param_1 + 0x358) + 0x2b8))(*(long **)(param_1 + 0x358),uVar2,0xd)
          ;
          uVar1 = param_3[1];
        }
        if ((uVar1 | 2) == 2) {
          (**(code **)(**(long **)(param_1 + 0x358) + 0x2b8))(*(long **)(param_1 + 0x358),uVar2,10);
        }
        goto LAB_0090c0dc;
      }
    }
  }
  return 1;
}


