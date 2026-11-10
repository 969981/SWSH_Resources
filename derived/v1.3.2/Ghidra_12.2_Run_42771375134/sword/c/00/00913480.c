/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913480; name: FUN_00913480
 */


bool FUN_00913480(long param_1,byte param_2,byte param_3)

{
  if (3 < param_2) {
    return false;
  }
  if (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x3d)) {
    return *(char *)(param_1 + (ulong)param_2 * 0x3d + (ulong)param_3 + 1) != '\0';
  }
  return false;
}


