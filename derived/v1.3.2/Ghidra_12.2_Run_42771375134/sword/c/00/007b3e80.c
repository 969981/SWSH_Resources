/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b3e80; name: FUN_007b3e80
 */


void FUN_007b3e80(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02716a18 + 0x10);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    FUN_017cd7a0();
  }
  FUN_017cb220(param_1);
  return;
}


