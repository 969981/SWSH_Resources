/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054fb60; name: FUN_0054fb60
 */


undefined8 FUN_0054fb60(long param_1)

{
  if (*(long *)(param_1 + 0x88) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x40);
}


