/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e790; name: FUN_0044e790
 */


void FUN_0044e790(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713010 + 0x10);
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1 + 0x27) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x26] = 0;
    *(undefined4 *)((long)param_1 + 0x13c) = 0;
  }
  FUN_00479c10(param_1 + 10);
  FUN_004a4550(param_1);
  return;
}


