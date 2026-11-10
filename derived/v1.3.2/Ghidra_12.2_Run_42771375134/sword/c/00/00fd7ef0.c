/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd7ef0; name: FUN_00fd7ef0
 */


undefined8 FUN_00fd7ef0(long param_1)

{
  if (*(char *)(param_1 + 0x72) != '\0') {
    FUN_00fd7f70(param_1);
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  if (*(char *)(param_1 + 0x71) != '\0') {
    return 1;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0xc0) == '\0') {
    return 0;
  }
  FUN_00fd8240(param_1);
  *(undefined1 *)(param_1 + 0x71) = 1;
  return 1;
}


