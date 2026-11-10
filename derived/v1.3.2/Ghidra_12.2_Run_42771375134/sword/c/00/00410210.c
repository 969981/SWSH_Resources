/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00410210; name: FUN_00410210
 */


void FUN_00410210(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_0040ad90(param_1,param_3);
  puVar1 = PTR_DAT_02712ba0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = (long)param_2;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar1 + 0x130);
  param_1[3] = (long)(puVar1 + 0x108);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00410284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}


