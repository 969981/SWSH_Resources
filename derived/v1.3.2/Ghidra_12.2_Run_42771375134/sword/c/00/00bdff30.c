/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdff30; name: FUN_00bdff30
 */


undefined8 FUN_00bdff30(long param_1)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return 1;
}


