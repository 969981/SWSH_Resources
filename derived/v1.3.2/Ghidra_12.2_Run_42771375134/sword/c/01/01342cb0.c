/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01342cb0; name: FUN_01342cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01342cb0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_01311a80(param_1,0);
  puVar3 = PTR_DAT_027281a0;
  *(undefined2 *)((long)param_1 + 0xa1) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  lVar2 = _UNK_01d4b578;
  lVar1 = _DAT_01d4b570;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[9] = (long)(puVar3 + 0x90);
  param_1[10] = (long)(puVar3 + 0xd0);
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = lVar2;
  param_1[0x18] = lVar1;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  return;
}


