/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01563500; name: FUN_01563500
 */


void FUN_01563500(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x50] == '\0') {
    return;
  }
  uVar1 = FUN_01564f90();
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  FUN_01564f20(param_1,param_2);
  FUN_0076ce70(param_1);
                    /* WARNING: Could not recover jumptable at 0x0156355c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}


