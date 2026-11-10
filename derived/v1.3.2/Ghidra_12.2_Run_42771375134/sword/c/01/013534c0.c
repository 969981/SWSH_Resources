/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013534c0; name: FUN_013534c0
 */


void FUN_013534c0(long *param_1)

{
  undefined *puVar1;
  
  FUN_01311a80(param_1,0);
  puVar1 = PTR_DAT_02728568;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  *(undefined8 *)((long)param_1 + 0xa4) = 0x55;
  return;
}


