/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e4910; name: FUN_009e4910
 */


undefined8 FUN_009e4910(undefined8 param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(undefined8 *)(*(long *)PTR_DAT_02718af8 + (ulong)(byte)(param_2 + 7) * 0x20 + 8);
  }
  return 0;
}


