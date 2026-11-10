/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041c0d0; name: FUN_0041c0d0
 */


void FUN_0041c0d0(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_00419240(param_1,param_3);
  puVar1 = PTR_DAT_02712c10;
  param_1[0x12] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = (long)(puVar1 + 0x140);
  param_1[5] = (long)(puVar1 + 0x168);
  FUN_00416950(param_1 + 0x13,param_2);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if ((long *)param_1[0x12] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0041c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x12] + 0x10))();
  return;
}


