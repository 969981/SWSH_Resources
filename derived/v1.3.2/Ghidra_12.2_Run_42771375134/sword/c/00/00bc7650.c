/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7650; name: FUN_00bc7650
 */


void FUN_00bc7650(long param_1,int param_2,ulong param_3)

{
  int param3;
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  char acStack_80 [64];
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar2 == 0) {
    param3 = FUN_01509eb0(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    param3 = FUN_01509eb0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  snprintf(acStack_80,0x40,"anime_L_box_change_00_L_icon_box_%02d_%02d_catch",param3,param_2);
  FUN_00ffcf80(param_1 + 0x100,acStack_80);
  if ((param_3 & 1) == 0) {
    uVar4 = 0x3f800000;
  }
  else {
    uVar4 = 0;
  }
  FUN_00ffd450(uVar4,param_1 + 0x100,acStack_80);
  return;
}


