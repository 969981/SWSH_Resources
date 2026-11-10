/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468b10; name: FUN_00468b10
 */


void FUN_00468b10(long *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x88))();
  if (param_1 == (long *)0x0) {
    return;
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712e28;
  (**(code **)*param_1)(param_1);
  FUN_00404870(uVar1,param_1);
  return;
}


