/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943f90; name: FUN_00943f90
 */


void FUN_00943f90(long param_1,byte param_2,undefined4 param_3)

{
  if ((ushort)param_2 < (*(ushort *)(param_1 + 2) >> 7 & 0x7f)) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 4) = param_3;
  }
  return;
}


