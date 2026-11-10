/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005012d0; name: FUN_005012d0
 */


void FUN_005012d0(long *param_1)

{
  undefined *puVar1;
  
  FUN_004fa1c0();
  puVar1 = PTR_DAT_02713848;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xc6] = 0;
  return;
}


