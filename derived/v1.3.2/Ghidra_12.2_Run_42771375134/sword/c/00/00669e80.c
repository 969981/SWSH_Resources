/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00669e80; name: FUN_00669e80
 */


undefined8 FUN_00669e80(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((param_2 != (long *)0x0) && (param_3 != 0)) {
    if (*(long *)(param_3 + 0x58) == 0) {
      uVar4 = 0;
    }
    else {
      FUN_00683020(param_2,0x10,0);
      puVar2 = PTR_DAT_02713e78;
      uVar4 = 1;
      puVar1 = PTR_DAT_02713e78;
      if (*(undefined **)(param_3 + 0x10) != (undefined *)0x0) {
        puVar1 = *(undefined **)(param_3 + 0x10);
      }
      (**(code **)(*param_2 + 0x1d0))(param_2,puVar1,1);
      FUN_00683020(param_2,0x10,0);
      (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_3 + 0x38),1);
      lVar3 = (**(code **)(**(long **)(param_3 + 0x58) + 0x28))();
      if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
        puVar2 = *(undefined **)(lVar3 + 8);
      }
      (**(code **)(*param_2 + 0x1d0))(param_2,puVar2,1);
      FUN_00683020(param_2,0x10,0);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x40),1);
      (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_3 + 0x70),1);
      if (0 < *(int *)(param_3 + 0x70)) {
        lVar3 = 0;
        do {
          FUN_00669ff0(param_1,param_2,param_3,
                       *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar3 * 8));
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_3 + 0x70));
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


