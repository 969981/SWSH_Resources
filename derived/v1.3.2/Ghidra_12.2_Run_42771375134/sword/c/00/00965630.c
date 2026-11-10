/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965630; name: FUN_00965630
 */


undefined4 FUN_00965630(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x35) == param_2) {
    return *(undefined4 *)(param_1 + 0x38);
  }
  if (*(char *)(param_1 + 0x41) == param_2) {
    return *(undefined4 *)(param_1 + 0x44);
  }
  if (*(char *)(param_1 + 0x4d) == param_2) {
    return *(undefined4 *)(param_1 + 0x50);
  }
  if (*(char *)(param_1 + 0x59) == param_2) {
    return *(undefined4 *)(param_1 + 0x5c);
  }
  if (*(char *)(param_1 + 0x65) == param_2) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return 0;
}


