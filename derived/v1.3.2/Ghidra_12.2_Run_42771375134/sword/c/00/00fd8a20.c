/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd8a20; name: FUN_00fd8a20
 */


undefined8 FUN_00fd8a20(long param_1)

{
  if (*(char *)(param_1 + 0x73) != '\0') {
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  return 1;
}


