/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8fa0; name: FUN_008f8fa0
 */


undefined1 FUN_008f8fa0(long param_1)

{
  if (**(int **)(param_1 + 0x88) == 0) {
    return (char)(*(int **)(param_1 + 0x88))[0x2a0];
  }
  return 0;
}


