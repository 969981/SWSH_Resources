/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b9d0; name: FUN_0041b9d0
 */


void FUN_0041b9d0(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_00419240(param_1,param_3);
  puVar1 = PTR_DAT_02712c08;
  param_1[0x12] = (long)param_2;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = (long)(puVar1 + 0x140);
  param_1[5] = (long)(puVar1 + 0x168);
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0041ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}


