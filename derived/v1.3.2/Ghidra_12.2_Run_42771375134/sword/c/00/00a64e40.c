/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a64e40; name: FUN_00a64e40
 */


void FUN_00a64e40(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long local_200;
  long local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 auStack_1d0 [96];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long *aplStack_150 [12];
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined **local_c0;
  long *plStack_b8;
  undefined ***local_a0;
  undefined **local_90 [4];
  undefined ***local_70;
  undefined8 local_60;
  long local_48;
  long local_38;
  
  lVar8 = *(long *)PTR_DAT_02710848;
  lVar5 = *(long *)(lVar8 + 0x90);
  if (lVar5 == 0) {
    FUN_01009f40(&local_38,0);
    uVar2 = FUN_00fb2000(local_38);
    if ((uVar2 & 1) != 0) goto LAB_00a64eac;
LAB_00a64f80:
    lVar5 = *(long *)(lVar8 + 0x88);
    if (lVar5 == 0) {
      FUN_010673a0(&local_48,0);
    }
    else {
      plVar7 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_010673a0(&local_48,lVar5);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    uVar6 = *(undefined8 *)(param_1[0xb7] + 0x88);
    local_f0 = *(long *)(param_1[0x3c3] + 0x400);
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
    }
    local_e8 = param_1[0x7f];
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x10))();
    }
    local_e0 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_d0 = *(long *)(param_1[0xb7] + 0xa0);
    local_d8 = uVar6;
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
    }
    local_a0 = &local_c0;
    local_c0 = &PTR_LAB_026310a8;
    local_90[0] = &PTR_LAB_026310f0;
    local_60 = *(undefined8 *)(param_1[0x3c3] + 0x3a8);
    plStack_b8 = param_1;
    local_70 = local_90;
    FUN_00fb1a20(local_38,&local_f0);
    if (local_90 == local_70) {
      pcVar4 = (code *)(*local_70)[4];
LAB_00a650a0:
      (*pcVar4)();
    }
    else if (local_70 != (undefined ***)0x0) {
      pcVar4 = (code *)(*local_70)[5];
      goto LAB_00a650a0;
    }
    if (&local_c0 == local_a0) {
      pcVar4 = (code *)(*local_a0)[4];
LAB_00a650d0:
      (*pcVar4)();
    }
    else if (local_a0 != (undefined ***)0x0) {
      pcVar4 = (code *)(*local_a0)[5];
      goto LAB_00a650d0;
    }
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = 0;
    }
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = 0;
    }
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
    }
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_01009f40(&local_38,lVar5);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    uVar2 = FUN_00fb2000(local_38);
    if ((uVar2 & 1) == 0) goto LAB_00a64f80;
LAB_00a64eac:
    local_170 = &LAB_00a8f870;
    local_168 = FUN_00a8f970;
    local_160 = &LAB_00a8f980;
    local_158 = &LAB_00a8f990;
    local_1f0 = &LAB_00a8f9a0;
    local_1e8 = FUN_00a8fa90;
    local_1e0 = &LAB_00a8faa0;
    local_1d8 = &LAB_00a8fab0;
    aplStack_150[0] = param_1;
    FUN_00fb1db0(local_38,&local_170,&local_1f0);
    pcVar4 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (undefined1 *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar4)(auStack_1d0);
    }
    pcVar4 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar4)(aplStack_150);
      local_1f8 = param_1[0x80];
      lVar5 = local_38;
      goto joined_r0x00a64f60;
    }
  }
  local_1f8 = param_1[0x80];
  lVar5 = local_38;
joined_r0x00a64f60:
  local_38 = lVar5;
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x10))();
  }
  local_200 = param_1[0x87];
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x10))();
  }
  FUN_00fb1d10(lVar5,&local_1f8,&local_200);
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
    local_1f8 = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0xa50))(param_1);
  if (lVar5 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = *(byte *)(lVar5 + 0x140) - 1;
    if (uVar1 < 4) {
      iVar3 = (uVar1 & 0xff) + 9;
    }
    else {
      iVar3 = 0xd;
      if (*(char *)(lVar5 + 0x141) != '\x01') {
        iVar3 = 0;
      }
    }
  }
  FUN_00fb1fa0(local_38);
  FUN_00fb3ce0(local_38,iVar3,1);
  FUN_00fb3d30(local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


