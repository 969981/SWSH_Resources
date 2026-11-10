/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001416c0; name: FUN_001416c0
 */


void FUN_001416c0(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_02710d10;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x90);
  return;
}


