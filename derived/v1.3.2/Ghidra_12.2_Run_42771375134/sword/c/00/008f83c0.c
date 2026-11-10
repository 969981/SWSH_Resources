/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f83c0; name: FUN_008f83c0
 */


void FUN_008f83c0(long param_1)

{
  *(byte *)(param_1 + 0x183) = *(byte *)(param_1 + 0x183) | 1;
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_008fe420();
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_008fe420();
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_008fe420();
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_008fe420();
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_008fe420();
  }
  if (*(char *)(param_1 + 0x184) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x008f8444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x90) + 0xa38))(*(long **)(param_1 + 0x90),1);
    return;
  }
  return;
}


