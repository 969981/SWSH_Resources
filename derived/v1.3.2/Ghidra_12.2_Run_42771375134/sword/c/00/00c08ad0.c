/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c08ad0; name: FUN_00c08ad0
 */


void FUN_00c08ad0(long param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00befe50(param_1,0);
  if (7 < param_2) {
    return;
  }
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  param_1 = param_1 + 0x100;
  if ((uVar1 & 0x3c) != 0) {
    FUN_00ffdc80(param_1,"grid_Menu3");
    FUN_016b2eb0();
    return;
  }
  if ((uVar1 & 3) == 0) {
    FUN_00ffdc80(param_1,"grid_Menu2");
    FUN_016b2eb0();
    return;
  }
  FUN_00ffdc80(param_1,"grid_Menu4");
  FUN_016b2eb0();
  return;
}


