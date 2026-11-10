/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9a70; name: FUN_006a9a70
 */


void FUN_006a9a70(long *param_1)

{
  undefined *puVar1;
  
  FUN_006a0050();
  puVar1 = PTR_DAT_02715128;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


