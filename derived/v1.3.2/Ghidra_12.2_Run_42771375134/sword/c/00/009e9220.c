/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e9220; name: FUN_009e9220
 */


void FUN_009e9220(byte param_1,undefined8 param_2)

{
  if (param_1 < 5) {
    *(undefined8 *)(PTR_DAT_02718b30 + (ulong)param_1 * 8) = param_2;
  }
  return;
}


