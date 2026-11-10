/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00670a90; name: FUN_00670a90
 */


undefined8 FUN_00670a90(long param_1,long *param_2)

{
  undefined *puVar1;
  
  FUN_00683020(param_2,0x10,0);
  puVar1 = PTR_DAT_02713e78;
  if (*(undefined **)(param_1 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
  }
  (**(code **)(*param_2 + 0x1d0))(param_2,puVar1,1);
  FUN_00683020(param_2,0x10,0);
  (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined4 *)(param_1 + 0x48),1);
  (**(code **)(*param_2 + 400))(param_2,*(undefined4 *)(param_1 + 0x50),1);
  if (0 < *(int *)(param_1 + 0x50)) {
    (**(code **)(*param_2 + 0x160))
              (param_2,*(undefined8 *)(param_1 + 0x58),(long)*(int *)(param_1 + 0x50),1);
  }
  return 1;
}


