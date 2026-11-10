/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfe1f0; name: FUN_00bfe1f0
 */


void FUN_00bfe1f0(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x5f0) + 0x58) & 1) == 0) {
    return;
  }
  FUN_01036300();
  return;
}


