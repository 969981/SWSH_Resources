/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65a70; name: FUN_00e65a70
 */


void FUN_00e65a70(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4ec) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x4b0) = 0;
  }
  return;
}


