/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004160b0; name: FUN_004160b0
 */


void FUN_004160b0(void)

{
  if (DAT_02737a00 != 0) {
    DAT_02737a08 = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    DAT_02737a00 = 0;
    DAT_02737a0c = 0;
  }
  if (DAT_02737a10 != 0) {
    DAT_02737a18 = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    DAT_02737a10 = 0;
    DAT_02737a1c = 0;
  }
  return;
}


