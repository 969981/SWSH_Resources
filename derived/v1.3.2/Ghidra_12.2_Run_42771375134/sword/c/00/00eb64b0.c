/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb64b0; name: FUN_00eb64b0
 */


void FUN_00eb64b0(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,PTR_DAT_02720200,0);
  *(undefined1 *)((long)param_1 + 0x914) = 1;
  param_1[0x16a] = 0;
  *(undefined4 *)((long)param_1 + 0xb4c) = 0;
  return;
}


