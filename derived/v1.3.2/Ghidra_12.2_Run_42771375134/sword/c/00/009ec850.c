/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ec850; name: FUN_009ec850
 */


bool FUN_009ec850(byte param_1)

{
  if (param_1 < 0x1e) {
    return PTR_DAT_02718b38[param_1] != '\0';
  }
  return false;
}


