/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a3db0; name: FUN_007a3db0
 */


void FUN_007a3db0(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_02716658;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


