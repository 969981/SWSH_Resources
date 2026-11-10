/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040aff0; name: FUN_0040aff0
 */


void FUN_0040aff0(long param_1)

{
  FUN_00408f40();
  if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x60) != 0)) {
    FUN_0040c140();
    return;
  }
  return;
}


