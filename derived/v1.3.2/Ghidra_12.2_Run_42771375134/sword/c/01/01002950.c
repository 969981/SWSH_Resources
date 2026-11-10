/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002950; name: FUN_01002950
 */


undefined8 FUN_01002950(long param_1)

{
  if ((((*(int *)(param_1 + 0xb30) < 0) && (*(char *)(param_1 + 0x408) == '\0')) &&
      ((*(byte *)(param_1 + 0xb90) >> 4 & 1) == 0)) && ((*(ushort *)(param_1 + 0xac2) & 0x981) == 0)
     ) {
    if (*(int *)(param_1 + 0x54) == 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x54) == 1) && (*(char *)(param_1 + 0x409) == '\0')) {
      return 0;
    }
  }
  return 1;
}


