/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932f00; name: FUN_00932f00
 */


undefined4 FUN_00932f00(long param_1,uint param_2)

{
  if (9 < (int)param_2) {
    return 0;
  }
  if (*(int *)(param_1 + (ulong)param_2 * 4 + 0x180) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x158);
}


