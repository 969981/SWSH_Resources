/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7740; name: FUN_004d7740
 */


void FUN_004d7740(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28,*(undefined8 *)(param_1 + 0x20));
  return;
}


