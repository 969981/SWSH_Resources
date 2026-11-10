/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b2b70; name: FUN_007b2b70
 */


void FUN_007b2b70(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027169b0 + 0x10);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    FUN_017cd7a0();
  }
  FUN_017cb220(param_1);
  return;
}


