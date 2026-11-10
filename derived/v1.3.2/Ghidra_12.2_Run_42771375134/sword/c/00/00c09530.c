/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c09530; name: FUN_00c09530
 */


void FUN_00c09530(long param_1,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  
  FUN_00c094b0();
  FUN_00befe50(param_1,1);
  if (7 < param_2) {
    return;
  }
  if ((1 << (ulong)(param_2 & 0x1f) & 0x3cU) == 0) {
    if ((1 << (ulong)(param_2 & 0x1f) & 3U) == 0) {
      pcVar2 = "grid_Menu2";
    }
    else {
      pcVar2 = "grid_Menu4";
    }
  }
  else {
    pcVar2 = "grid_Menu3";
  }
  plVar1 = (long *)FUN_00ffdc80(param_1 + 0x100,pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00c095c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))();
  return;
}


