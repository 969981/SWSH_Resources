/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529f10; name: FUN_00529f10
 */


undefined4 FUN_00529f10(long param_1,int param_2)

{
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x298);
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x2a8) + (long)param_2 * 0x50 + 0x38);
}


