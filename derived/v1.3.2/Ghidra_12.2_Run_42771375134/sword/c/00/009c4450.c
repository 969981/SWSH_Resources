/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4450; name: FUN_009c4450
 */


void FUN_009c4450(long param_1)

{
  if (*(long *)PTR_DAT_02710940 != 0) {
    FUN_011faf30();
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  if (*(long *)PTR_DAT_02710490 == 0) {
    return;
  }
  FUN_011f8e00();
  return;
}


