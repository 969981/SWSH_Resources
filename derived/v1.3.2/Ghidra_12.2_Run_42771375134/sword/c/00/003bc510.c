/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc510; name: FUN_003bc510
 */


bool FUN_003bc510(long param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return true;
  }
  return 0xfffffffd < *(uint *)(**(long **)(param_1 + 0x28) + 0xb8);
}


