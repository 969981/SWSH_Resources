/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115eb10; name: FUN_0115eb10
 */


void FUN_0115eb10(long param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5d0);
  if (param_2 == 0) {
    local_48 = 0xe7a08ef954badf47;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,&local_48,0);
      lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    }
    else {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar1,&local_48,lVar2);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    }
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar1 = FUN_0077d470(lVar2);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_select_detail_00_T_netbtl_b_d_03",uVar1,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
    uVar1 = 0;
  }
  else {
    local_48 = 0xe7a08ff954bae0fa;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,&local_48,0);
    }
    else {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar1,&local_48,lVar2);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_0077d520(*(undefined8 *)(param_1 + 0x718),param_2);
    FUN_014c7aa0(*(undefined8 *)(param_1 + 0x710),0,*(undefined8 *)(param_1 + 0x718),param_3,0,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
    uVar1 = *(undefined8 *)(param_1 + 0x710);
    uVar3 = *(undefined8 *)(param_1 + 0x720);
    plVar4 = (long *)(lVar2 + 0x48);
    if (lVar2 != 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    FUN_014c62d0(uVar1,uVar3,lVar2);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x720);
  }
  uVar1 = FUN_0077d470(uVar1);
  FUN_00ffd6a0(param_1 + 0x100,"pane_L_select_detail_00_T_netbtl_b_d_03",uVar1,10);
  return;
}


