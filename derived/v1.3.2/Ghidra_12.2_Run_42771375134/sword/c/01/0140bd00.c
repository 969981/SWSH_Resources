/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140bd00; name: FUN_0140bd00
 */


void FUN_0140bd00(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_48;
  
  *param_1 = param_3;
  FUN_0140bea0(&local_48,"pane_L_curry_00_P_curry_",&DAT_0269e1c8);
  plVar2 = (long *)PTR_DAT_02710920;
  plVar1 = (long *)PTR_DAT_02710920;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar4 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar4;
  uVar3 = FUN_0103bd80(*(undefined8 *)(*param_1 + 0x1b0),&local_48);
  FUN_0168b110(param_1 + 2,param_2,uVar3,0);
  *(undefined1 *)((long)param_1 + 0x3d1) = 1;
  FUN_0140bea0(&local_48,"pane_L_curry_00_P_curry_",&DAT_0269e1e0);
  plVar1 = plVar2;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar4 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar4;
  uVar3 = FUN_0103bd80(*(undefined8 *)(*param_1 + 0x1b0),&local_48);
  FUN_0168b110(param_1 + 0x7c,param_2,uVar3,0);
  *(undefined1 *)((long)param_1 + 0x7a1) = 1;
  FUN_0140bea0(&local_48,"pane_L_curry_00_P_curry_",&DAT_0269e1f8);
  if (local_48 != 0) {
    plVar2 = (long *)(local_48 + 0x58);
  }
  lVar4 = *plVar2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar4;
  uVar3 = FUN_0103bd80(*(undefined8 *)(*param_1 + 0x1b0),&local_48);
  FUN_0168b110(param_1 + 0xf6,param_2,uVar3,0);
  *(undefined1 *)((long)param_1 + 0xb71) = 1;
  return;
}


