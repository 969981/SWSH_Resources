/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416420; name: FUN_01416420
 */


undefined8 FUN_01416420(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x5d8);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x5d8);
  }
  return uRam00000000000005d8;
}


