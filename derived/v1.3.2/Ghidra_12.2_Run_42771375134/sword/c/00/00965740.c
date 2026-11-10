/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965740; name: FUN_00965740
 */


undefined1 FUN_00965740(long param_1)

{
  if ((((*(char *)(param_1 + 0x34) == '\0') && (*(char *)(param_1 + 0x40) == '\0')) &&
      (*(char *)(param_1 + 0x4c) == '\0')) && (*(char *)(param_1 + 0x58) == '\0')) {
    return *(undefined1 *)(param_1 + 100);
  }
  return 1;
}


