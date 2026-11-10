/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d86d0; name: FUN_006d86d0
 */


void FUN_006d86d0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  FUN_006d8520();
  *(undefined4 *)(param_1 + 0xc) = param_2;
  puVar1 = PTR_DAT_02715098;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  *(undefined4 *)(param_1 + 0xe) = 1;
  return;
}


