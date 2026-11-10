/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013995c0; name: FUN_013995c0
 */


void FUN_013995c0(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_00794740();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00794740();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00794740();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00794740();
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  FUN_00794740();
  return;
}


