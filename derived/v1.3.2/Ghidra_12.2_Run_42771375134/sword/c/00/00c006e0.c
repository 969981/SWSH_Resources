/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c006e0; name: FUN_00c006e0
 */


void FUN_00c006e0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x6ebef26bc30fc897;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_00c00350(param_1,param_2,7);
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_matchmake_r_03",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_matchmake_r_03",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


