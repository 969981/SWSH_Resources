/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d8040; name: FUN_010d8040
 */


void FUN_010d8040(long param_1,ulong param_2)

{
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    if ((param_2 & 1) != 0) {
      FUN_010364c0(param_1,1);
    }
    FUN_010364c0(param_1,3);
    *(undefined1 *)(param_1 + 0x5cb) = 0;
  }
  return;
}


