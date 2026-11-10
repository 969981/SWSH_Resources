/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043d900; name: FUN_0043d900
 */


void FUN_0043d900(long *param_1,undefined2 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  FUN_004635c0(param_1,param_3);
  puVar1 = PTR_DAT_02712f10;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = 0;
  *(undefined2 *)((long)param_1 + 0x34) = param_2;
  *(undefined1 *)((long)param_1 + 0x36) = 4;
  return;
}


