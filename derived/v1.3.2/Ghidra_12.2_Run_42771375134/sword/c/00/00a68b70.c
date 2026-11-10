/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a68b70; name: FUN_00a68b70
 */


void FUN_00a68b70(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long local_c0 [12];
  long local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  pcVar3 = *(code **)(param_1 + 0x1928);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1930) = 0;
    *(undefined8 *)(param_1 + 0x1938) = 0;
    *(undefined8 *)(param_1 + 0x1920) = 0;
    *(undefined8 *)(param_1 + 0x1928) = 0;
    (*pcVar3)(param_1 + 0x1940);
  }
  *(long *)(param_1 + 0x1940) = param_1;
  *(undefined8 *)(param_1 + 0x1920) = FUN_00a8aeb0;
  *(undefined1 **)(param_1 + 0x1928) = &LAB_00a8aef0;
  *(undefined1 **)(param_1 + 0x1930) = &LAB_00a8af00;
  *(undefined1 **)(param_1 + 0x1938) = &LAB_00a8af10;
  lVar5 = *(long *)(param_1 + 0x1918);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x1910,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_00a66de0(&local_e0,"bin/battle/data_table/wait_camera.prmb");
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,1,&local_e0,0,uVar4,0);
  if (*(long *)(param_1 + 0x1918) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1918) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1918) = 0;
  }
  lVar5 = local_58;
  *(long *)(param_1 + 0x1918) = local_58;
  if (local_58 != 0) {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x1920) != 0) || (*(long *)(param_1 + 0x19a0) != 0)) {
      FUN_006e1e70(lVar5,param_1 + 0x1910,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (code *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
  }
  local_e0 = (code *)&LAB_00a8af20;
  local_d8 = FUN_00a8af70;
  local_d0 = FUN_00a8af80;
  local_c8 = &LAB_00a8af90;
  pcVar3 = *(code **)(param_1 + 0x1a48);
  local_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB_00a691d8:
    (*local_d0)(local_c0,param_1 + 0x1a60);
    *(undefined1 **)(param_1 + 0x1a58) = local_c8;
    *(code **)(param_1 + 0x1a48) = local_d8;
    *(code **)(param_1 + 0x1a50) = local_d0;
    *(undefined8 *)(param_1 + 0x1a40) = local_e0;
    lVar5 = *(long *)(param_1 + 0x1a38);
  }
  else {
    *(undefined8 *)(param_1 + 0x1a50) = 0;
    *(undefined8 *)(param_1 + 0x1a58) = 0;
    *(undefined8 *)(param_1 + 0x1a40) = 0;
    *(undefined8 *)(param_1 + 0x1a48) = 0;
    (*pcVar3)(param_1 + 0x1a60);
    if (local_d0 != (code *)0x0) goto LAB_00a691d8;
    lVar5 = *(long *)(param_1 + 0x1a38);
  }
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x1a30,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(local_c0);
  }
  FUN_00a66de0(&local_e0,"bin/battle/data_table/battle_misc.prmb");
  FUN_006dccd0(&local_58,*(undefined8 *)puVar1,1,&local_e0,0,uVar4,0);
  if (*(long *)(param_1 + 0x1a38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1a38) = 0;
  }
  lVar5 = local_58;
  *(long *)(param_1 + 0x1a38) = local_58;
  if (local_58 != 0) {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x1a40) != 0) || (*(long *)(param_1 + 0x1ac0) != 0)) {
      FUN_006e1e70(lVar5,param_1 + 0x1a30,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (code *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
    local_c0[0] = 0;
  }
  FUN_00a69260(&local_e0,
               "bin/battle/wait_camera_lens_distortion/wait_camera_lens_distortion_data.bin");
  FUN_006dccd0(&local_58,*(undefined8 *)puVar1,1,&local_e0,0,uVar4,0);
  if (*(long *)(param_1 + 7000) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 7000) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 7000) = 0;
  }
  lVar5 = local_58;
  *(long *)(param_1 + 7000) = local_58;
  if (local_58 != 0) {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x1b60) != 0) || (*(long *)(param_1 + 0x1be0) != 0)) {
      FUN_006e1e70(lVar5,param_1 + 0x1b50,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (code *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
  }
  local_e0 = FUN_00a8b020;
  local_d8 = FUN_00a8b1b0;
  local_d0 = FUN_00a8b830;
  local_c8 = &LAB_00a8b840;
  pcVar3 = *(code **)(param_1 + 0x1c78);
  local_c0[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1c80) = 0;
    *(undefined8 *)(param_1 + 0x1c88) = 0;
    *(undefined8 *)(param_1 + 0x1c70) = 0;
    *(undefined8 *)(param_1 + 0x1c78) = 0;
    (*pcVar3)(param_1 + 0x1c90);
    if (local_d0 == (code *)0x0) {
      lVar5 = *(long *)(param_1 + 0x1c68);
      goto joined_r0x00a69250;
    }
  }
  (*local_d0)(local_c0,param_1 + 0x1c90);
  *(undefined1 **)(param_1 + 0x1c88) = local_c8;
  *(code **)(param_1 + 0x1c78) = local_d8;
  *(code **)(param_1 + 0x1c80) = local_d0;
  *(undefined8 *)(param_1 + 0x1c70) = local_e0;
  lVar5 = *(long *)(param_1 + 0x1c68);
joined_r0x00a69250:
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x1c60,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(local_c0);
  }
  FUN_001060b0(&local_e0,"bin/battle/data_table/battle_wazamsg.prmb");
  FUN_006dccd0(&local_58,*(undefined8 *)puVar1,1,&local_e0,0,uVar4,0);
  if (*(long *)(param_1 + 0x1c68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1c68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1c68) = 0;
  }
  *(long *)(param_1 + 0x1c68) = local_58;
  if (local_58 != 0) {
    plVar6 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x1c70) != 0) || (*(long *)(param_1 + 0x1cf0) != 0)) {
      FUN_006e1e70(local_58,param_1 + 0x1c60,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (code *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
    local_c0[0] = 0;
  }
  local_e0 = (code *)0x4fa76c0a53cee789;
  local_d8 = (code *)0x1d14cb9;
  local_d0 = (code *)0x16;
  local_c8 = (undefined1 *)0x0;
  FUN_008932e0(param_1 + 0x1828,&local_e0,1);
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c8 + 0x48) + 0x18))();
    local_c8 = (undefined1 *)0x0;
  }
  bVar2 = FUN_008934e0(param_1 + 0x1828);
  *(byte *)(param_1 + 0x1840) = bVar2 & 1;
  return;
}


