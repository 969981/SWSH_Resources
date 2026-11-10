/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152a8f0; name: FUN_0152a8f0
 */


undefined1 FUN_0152a8f0(long param_1,uint param_2)

{
  if (0x96 < param_2) {
    return 0;
  }
  if ((*(char *)(param_1 + (long)(int)param_2 * 0xb0 + 0x60) == '\0') &&
     (*(char *)(param_1 + (long)(int)param_2 * 0xb0 + 0x61) == '\0')) {
    return *(undefined1 *)(param_1 + (long)(int)param_2 * 0xb0 + 0x62);
  }
  return 1;
}


