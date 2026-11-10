/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043ec90; name: thunk_FUN_0043d3e0
 */


void thunk_FUN_0043d3e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02712f08 + 0x10);
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  FUN_0043d950(param_1);
  return;
}


