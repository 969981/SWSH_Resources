/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004df0e0; name: FUN_004df0e0
 */


void FUN_004df0e0(long *param_1)

{
  undefined *puVar1;
  
  FUN_004cc400();
  puVar1 = PTR_DAT_027135f0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


