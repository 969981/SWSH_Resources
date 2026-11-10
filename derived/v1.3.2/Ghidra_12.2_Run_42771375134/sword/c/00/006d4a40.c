/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4a40; name: FUN_006d4a40
 */


void FUN_006d4a40(long *param_1)

{
  undefined *puVar1;
  
  FUN_006d0990();
  param_1[0x52] = 0;
  puVar1 = PTR_DAT_02715360;
  *(undefined1 *)((long)param_1 + 0x29c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  *(undefined4 *)(param_1 + 0x53) = 1;
  return;
}


