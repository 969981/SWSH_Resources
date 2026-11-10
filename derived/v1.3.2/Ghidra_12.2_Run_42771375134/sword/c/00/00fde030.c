/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde030; name: FUN_00fde030
 */


undefined8 FUN_00fde030(long param_1)

{
  if (*(char *)(param_1 + 0x23) != '\0') {
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  return 1;
}


