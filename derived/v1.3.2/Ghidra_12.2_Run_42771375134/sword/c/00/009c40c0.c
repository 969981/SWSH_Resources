/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c40c0; name: FUN_009c40c0
 */


void FUN_009c40c0(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)PTR_DAT_02710940 != 0) {
      FUN_011faf30();
    }
  }
  else if (*(long *)PTR_DAT_02710940 != 0) {
    FUN_011faf20();
    *(byte *)(param_1 + 0x76) = param_2 & 1;
    return;
  }
  *(byte *)(param_1 + 0x76) = param_2 & 1;
  return;
}


