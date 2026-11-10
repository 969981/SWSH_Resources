/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d84b0; name: FUN_006d84b0
 */


void FUN_006d84b0(long *param_1,undefined1 param_2)

{
  undefined *puVar1;
  
  FUN_006d8520();
  puVar1 = PTR_DAT_02715098;
  *(undefined2 *)(param_1 + 0xc) = 0x8080;
  *(undefined1 *)((long)param_1 + 99) = 0x80;
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  *(undefined1 *)((long)param_1 + 0x62) = param_2;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  return;
}


