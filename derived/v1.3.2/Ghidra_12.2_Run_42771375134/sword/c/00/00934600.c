/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934600; name: FUN_00934600
 */


undefined8 FUN_00934600(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x14) = *param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}


