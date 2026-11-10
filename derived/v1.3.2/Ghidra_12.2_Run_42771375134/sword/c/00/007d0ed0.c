/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d0ed0; name: FUN_007d0ed0
 */


void FUN_007d0ed0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716ca0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  return;
}


