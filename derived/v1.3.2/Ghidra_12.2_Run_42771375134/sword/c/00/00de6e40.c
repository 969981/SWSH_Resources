/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de6e40; name: FUN_00de6e40
 */


undefined8
FUN_00de6e40(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,ulong param_5,
            undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_110 [2];
  undefined1 *local_100;
  long local_f8;
  long local_f0;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  long local_58;
  
  pcVar4 = *(code **)(param_1 + 0x198);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*pcVar4)(param_1 + 0x1b0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x1b0);
    uVar5 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x1a0) = param_3[2];
    *(undefined8 *)(param_1 + 0x1a8) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar5;
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  pcVar4 = *(code **)(param_1 + 0xf8);
  local_e0 = &LAB_00de7470;
  lVar1 = param_1 + 0x60;
  local_d8 = FUN_00de7480;
  local_d0 = FUN_00de7490;
  local_c8 = &LAB_00de74a0;
  alStack_c0[0] = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_00de6f10:
    (*local_d0)(alStack_c0,param_1 + 0x110);
    *(undefined1 **)(param_1 + 0x108) = local_c8;
    *(code **)(param_1 + 0xf8) = local_d8;
    *(code **)(param_1 + 0x100) = local_d0;
    *(undefined8 *)(param_1 + 0xf0) = local_e0;
  }
  else {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar4)(param_1 + 0x110);
    if (local_d0 != (code *)0x0) goto LAB_00de6f10;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_006e1e70(lVar6,lVar1,2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_008d48d0(local_110,param_2);
  if ((param_5 & 1) == 0) {
    FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,0,local_110,0,param_4,param_6);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_58;
    if (local_58 != 0) {
      plVar7 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
        FUN_006e1e70(local_58,lVar1,1);
      }
      FUN_006e1be0(local_58);
      goto LAB_00de7090;
    }
  }
  else {
    FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,1,local_110,0,param_4,param_6);
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = local_58;
    if (local_58 != 0) {
      plVar7 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
        FUN_006e1e70(local_58,lVar1,1);
      }
LAB_00de7090:
      (**(code **)(*plVar7 + 0x18))(plVar7);
      uVar5 = 1;
      goto joined_r0x00de70d0;
    }
  }
  uVar5 = 0;
joined_r0x00de70d0:
  if ((local_f8 != 0) && (local_110[0] != 0)) {
    (**(code **)(*(long *)(local_110[0] + 0x48) + 0x18))();
  }
  local_110[0] = 0;
  local_110[1] = 0xcbf29ce484222645;
  local_100 = &DAT_01d38550;
  local_f8 = 0;
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  pcVar4 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar4)(alStack_c0);
  }
  return uVar5;
}


