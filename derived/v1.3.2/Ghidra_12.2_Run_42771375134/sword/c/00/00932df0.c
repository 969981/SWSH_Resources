/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932df0; name: FUN_00932df0
 */


undefined8 FUN_00932df0(long param_1,uint param_2,short param_3)

{
  if ((((int)param_2 < 10) && (*(int *)(param_1 + (ulong)param_2 * 4 + 0x180) != 0)) &&
     (*(short *)(param_1 + (ulong)param_2 * 2 + 0x1a8) == param_3)) {
    return 1;
  }
  return 0;
}


