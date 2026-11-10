/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de7170; name: FUN_00de7170
 */


undefined8 FUN_00de7170(long param_1)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_00de71f0(param_1);
    *(undefined1 *)(param_1 + 0x2b0) = 1;
    return 1;
  }
  return 1;
}


