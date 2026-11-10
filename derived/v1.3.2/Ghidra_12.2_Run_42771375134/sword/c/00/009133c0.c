/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009133c0; name: FUN_009133c0
 */


void FUN_009133c0(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 4) && (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x3d))) {
    *(undefined1 *)(param_1 + (ulong)param_2 * 0x3d + (ulong)param_3 + 1) = 1;
  }
  return;
}


