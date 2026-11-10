/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acf460; name: FUN_00acf460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acf460(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_00ac8d10(param_1,0);
  lVar4 = param_3[1];
  lVar3 = param_3[2];
  lVar1 = param_3[3];
  param_1[0x9e] = *param_3;
  *(int *)(param_1 + 0xa1) = (int)lVar1;
  param_1[0xa0] = lVar3;
  param_1[0x9f] = lVar4;
  lVar4 = *(long *)(param_1[0x78] + 0x528);
  if (lVar4 == 0) {
    puVar2 = (undefined8 *)FUN_00c79e90(0,0x19);
    uVar6 = *puVar2;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    puVar2 = (undefined8 *)FUN_00c79e90(lVar4,0x19);
    uVar6 = *puVar2;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_50 = 0;
  local_48 = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar4 == 0) {
    FUN_0101cb00(0,&local_50);
    lVar4 = *(long *)(param_1[0x78] + 0x528);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0101cb00(lVar4,&local_50);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(param_1[0x78] + 0x528);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_c0,param_1);
  lVar1 = local_c0;
  local_c0 = 0;
  local_b8[0] = 0;
  local_a8 = (undefined4)*param_3;
  local_a4 = *(undefined2 *)((long)param_3 + 4);
  local_a0 = (undefined4)param_3[1];
  local_9c = *(undefined1 *)((long)param_3 + 0xc);
  local_9b = *(undefined1 *)((long)param_3 + 0xd);
  local_98 = (undefined4)param_3[2];
  local_94 = *(undefined4 *)((long)param_3 + 0x14);
  local_90 = (undefined4)param_3[3];
  local_80 = 1;
  local_78 = lVar1;
  local_b0 = param_2;
  local_88 = uVar6;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_68 = local_48;
  local_70 = local_50;
  local_5c = 0;
  local_60 = 1;
  FUN_00c79ed0(&local_58,lVar4,1,local_b8);
  if (param_1[0xa2] != 0) {
    (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
    param_1[0xa2] = 0;
  }
  lVar3 = local_58;
  local_58 = 0;
  param_1[0xa2] = lVar3;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar1 = _UNK_01d4a138;
  lVar4 = _DAT_01d4a130;
  *(undefined1 *)((long)param_1 + 0x4d4) = 1;
  *(undefined2 *)((long)param_1 + 0x50c) = 0;
  *(undefined1 *)((long)param_1 + 0x50e) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 2;
  param_1[0x83] = lVar1;
  param_1[0x82] = lVar4;
  if (*(int *)((long)param_1 + 0x504) == 0) {
    FUN_00aceb40(param_1,param_2,2);
  }
  return;
}


