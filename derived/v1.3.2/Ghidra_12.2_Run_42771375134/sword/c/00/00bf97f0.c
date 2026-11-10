/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf97f0; name: FUN_00bf97f0
 */


void FUN_00bf97f0(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 local_28;
  
  if (param_2 == 2) {
    pcVar3 = "grid_Menu3";
  }
  else if (param_2 == 1) {
    pcVar3 = "grid_Menu2";
  }
  else {
    if (param_2 != 0) {
      return;
    }
    pcVar3 = "grid_Menu";
  }
  uVar1 = FUN_00ffdc80(param_1 + 0x100,pcVar3);
  local_28 = 0;
  FUN_016b7990(uVar1,&local_28,1,0);
  FUN_00befe50(param_1,1);
  plVar2 = (long *)FUN_00ffdc80(param_1 + 0x100,pcVar3);
  (**(code **)(*plVar2 + 0x50))();
  return;
}


