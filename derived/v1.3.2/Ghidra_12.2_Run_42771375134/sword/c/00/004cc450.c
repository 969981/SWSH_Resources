/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc450; name: FUN_004cc450
 */


void FUN_004cc450(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713540 + 0x10);
  if ((param_1[2] != 0) && ((*(byte *)((long)param_1 + 0x82) >> 4 & 1) == 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_004cbd50(param_1);
  return;
}


