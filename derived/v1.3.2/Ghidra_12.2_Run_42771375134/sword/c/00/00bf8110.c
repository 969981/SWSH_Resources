/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf8110; name: FUN_00bf8110
 */


void FUN_00bf8110(long param_1,int param_2)

{
  if (param_2 == 2) {
    FUN_00befe50(param_1,0);
    FUN_00ffdc80(param_1 + 0x100,"grid_Menu3");
    FUN_016b2eb0();
    return;
  }
  if (param_2 == 1) {
    FUN_00befe50(param_1,0);
    FUN_00ffdc80(param_1 + 0x100,"grid_Menu2");
    FUN_016b2eb0();
    return;
  }
  if (param_2 == 0) {
    FUN_00befe50(param_1);
    FUN_00ffdc80(param_1 + 0x100,"grid_Menu");
    FUN_016b2eb0();
    return;
  }
  return;
}


