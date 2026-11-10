/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e0600; name: FUN_009e0600
 */


undefined8 FUN_009e0600(uint param_1)

{
  if ((int)param_1 < 5) {
    return *(undefined8 *)(PTR_DAT_02718ac0 + (ulong)param_1 * 8);
  }
  return 0;
}


