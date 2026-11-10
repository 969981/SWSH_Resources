/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f1180; name: FUN_004f1180
 */


void FUN_004f1180(long *param_1)

{
  FUN_004f1200(param_1 + 4);
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  FUN_004f1200(param_1 + 4);
  return;
}


