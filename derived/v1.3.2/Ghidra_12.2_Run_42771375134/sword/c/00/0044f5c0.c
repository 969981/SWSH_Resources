/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f5c0; name: FUN_0044f5c0
 */


void FUN_0044f5c0(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return;
  }
  FUN_00479810(*(long *)(param_1 + 0x50),0);
  return;
}


