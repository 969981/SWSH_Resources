/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a05530; name: FUN_00a05530
 */


void FUN_00a05530(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_02718d88;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  return;
}


