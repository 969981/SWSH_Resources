/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d5940; name: FUN_004d5940
 */


void FUN_004d5940(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713570 + 0x10);
  if (param_1[2] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
  }
  if (param_1[6] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
  }
  if (param_1[7] == 0) {
    return;
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
  return;
}


