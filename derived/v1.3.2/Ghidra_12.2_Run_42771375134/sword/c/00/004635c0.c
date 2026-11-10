/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004635c0; name: FUN_004635c0
 */


void FUN_004635c0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027130e8;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


