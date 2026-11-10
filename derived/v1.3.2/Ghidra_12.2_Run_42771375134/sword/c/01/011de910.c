/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011de910; name: FUN_011de910
 */


void FUN_011de910(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725b08;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  return;
}


