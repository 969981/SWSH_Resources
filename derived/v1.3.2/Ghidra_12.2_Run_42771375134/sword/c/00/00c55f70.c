/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c55f70; name: FUN_00c55f70
 */


undefined8 FUN_00c55f70(long param_1,int param_2)

{
  if (param_2 < 0) {
    return 0;
  }
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3)) {
    return *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)param_2 * 8);
  }
  return 0;
}


