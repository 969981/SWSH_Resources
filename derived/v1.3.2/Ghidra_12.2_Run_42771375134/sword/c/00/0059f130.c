/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059f130; name: FUN_0059f130
 */


undefined8 FUN_0059f130(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0059f160();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 0;
}


