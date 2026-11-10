/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e5510; name: FUN_001e5510
 */


void FUN_001e5510(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027110d0;
  *(undefined4 *)(param_1 + 1) = 0x30005;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = (long)(puVar1 + 0xe0);
  FUN_003b23d0(param_1 + 4);
  return;
}


