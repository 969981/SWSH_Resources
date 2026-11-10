/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f74d0; name: FUN_014f74d0
 */


void FUN_014f74d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(char *)(*(long *)(param_1 + 0x620) + 0x5c) == '\0') {
    FUN_014f7350(param_1,"pane_T_param_00","msg_ui_report_title_00");
    FUN_0102ad30(&local_78);
  }
  else {
    FUN_014f7350(param_1,"pane_T_param_00","msg_ui_report_title_05");
    lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
    if (lVar1 == 0) {
      FUN_01519940(&local_b0,0);
      local_68 = local_a0;
      local_78 = local_b0;
      local_70 = local_a8;
      local_50 = local_88;
      local_48 = local_80;
      local_58 = local_90;
      local_60 = local_98;
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01519940(&local_b0,lVar1);
      local_68 = local_a0;
      local_70 = local_a8;
      local_78 = local_b0;
      local_48 = local_80;
      local_50 = local_88;
      local_58 = local_90;
      local_60 = local_98;
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  FUN_014ca220(*(undefined8 *)(param_1 + 0x608),0,local_68._4_4_ + 0x76c,4,2,1);
  FUN_014ca220(*(undefined8 *)(param_1 + 0x608),1,(int)local_68 + 1,2,2,1);
  FUN_014ca220(*(undefined8 *)(param_1 + 0x608),2,local_70._4_4_,2,2,1);
  uVar2 = *(undefined8 *)(param_1 + 0x618);
  local_b0 = 0xd9a9ef243ab803e6;
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar1 == 0) {
    FUN_0077eb10(uVar2,&local_b0,0);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar2,&local_b0,lVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar2 = *(undefined8 *)(param_1 + 0x608);
  uVar4 = *(undefined8 *)(param_1 + 0x5d0);
  plVar3 = (long *)(lVar1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_014c62d0(uVar2,uVar4,lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  uVar2 = FUN_0077d470(*(undefined8 *)(param_1 + 0x5d0));
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_param_03",uVar2,10);
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  FUN_014ca220(*(undefined8 *)(param_1 + 0x608),0,local_70 & 0xffffffff,2,2,1);
  FUN_014ca220(*(undefined8 *)(param_1 + 0x608),1,local_78._4_4_,2,2,1);
  uVar2 = *(undefined8 *)(param_1 + 0x618);
  local_b0 = 0x3d0ca7a8fc1df13d;
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar1 == 0) {
    FUN_0077eb10(uVar2,&local_b0,0);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar2,&local_b0,lVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar2 = *(undefined8 *)(param_1 + 0x608);
  uVar4 = *(undefined8 *)(param_1 + 0x5d8);
  plVar3 = (long *)(lVar1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_014c62d0(uVar2,uVar4,lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar3);
  uVar2 = FUN_0077d470(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_param_04",uVar2,10);
  return;
}


