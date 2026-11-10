/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82000; name: FUN_00a82000
 */


void FUN_00a82000(long param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 8;
  *(undefined4 *)(param_1 + 0x17b4) = param_3;
  *(undefined4 *)(param_1 + 0x17b8) = param_4;
  return;
}


