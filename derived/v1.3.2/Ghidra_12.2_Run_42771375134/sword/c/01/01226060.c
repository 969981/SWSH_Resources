/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01226060; name: FUN_01226060
 */


undefined8 FUN_01226060(int *param_1)

{
  if (*param_1 - 1U < 2) {
    *param_1 = 4;
    param_1[0x94] = 2;
    return 1;
  }
  return 0;
}


