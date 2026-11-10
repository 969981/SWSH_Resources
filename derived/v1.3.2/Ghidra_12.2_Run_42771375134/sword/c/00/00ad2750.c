/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad2750; name: FUN_00ad2750
 */


void FUN_00ad2750(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined4 uVar9;
  long local_98;
  long local_90;
  long local_88;
  undefined **local_80;
  char *local_78;
  undefined1 *local_70;
  long local_68;
  undefined ***local_60;
  long local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  char local_28 [4];
  char local_24 [4];
  
  uVar3 = (**(code **)(*param_1 + 400))();
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_24[0] = '\0';
  local_28[0] = '\0';
  local_34[0] = 0;
  uVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,0);
  if ((((uVar3 & 1) != 0) && ((char)param_1[0x97] != '\0')) &&
     (uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,0), (uVar3 & 1) != 0)) {
    if (*(char *)((long)param_1 + 0x4b9) == '\0') {
      local_24[0] = '\x01';
      if ((char)param_1[0xae] != '\0') {
        local_34[0] = 1;
      }
    }
    else {
      local_28[0] = '\x01';
    }
  }
  local_38[0] = 0;
  local_3c[0] = 0;
  local_40[0] = 0;
  uVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,1);
  if ((((uVar3 & 1) == 0) || ((char)param_1[0x97] == '\0')) ||
     (uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,1), (uVar3 & 1) == 0)) {
LAB_00ad285c:
    lVar8 = *(long *)(param_1[0x78] + 0x528);
  }
  else {
    if (*(char *)((long)param_1 + 0x4b9) == '\0') {
      local_38[0] = 1;
      if (*(char *)((long)param_1 + 0x571) != '\0') {
        local_40[0] = 1;
      }
      goto LAB_00ad285c;
    }
    local_3c[0] = 1;
    lVar8 = *(long *)(param_1[0x78] + 0x528);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_48 = param_1[0xa2];
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_80 = &PTR_LAB_02634048;
  local_78 = local_24;
  local_70 = local_38;
  local_60 = &local_80;
  FUN_00c7a240(lVar8,&local_48,&local_80);
  if (&local_80 == local_60) {
    pcVar7 = (code *)(*local_60)[4];
LAB_00ad28e4:
    (*pcVar7)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_60)[5];
    goto LAB_00ad28e4;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (((param_1[0xa3] != 0) && (*(int *)(param_1[0xa3] + 0x54) != 0)) &&
     (*(char *)((long)param_1 + 0x4e1) != '\0')) {
    lVar8 = *(long *)(param_1[0x78] + 0x528);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_88 = param_1[0xa3];
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
    }
    local_80 = &PTR_LAB_02634090;
    local_78 = local_28;
    local_70 = local_3c;
    local_60 = &local_80;
    FUN_00c7a240(lVar8,&local_88,&local_80);
    if (&local_80 == local_60) {
      pcVar7 = (code *)(*local_60)[4];
LAB_00ad29b8:
      (*pcVar7)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_60)[5];
      goto LAB_00ad29b8;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  if ((param_1[0xb3] == 0) || (*(int *)(param_1[0xb3] + 0x54) == 0)) {
    lVar8 = *(long *)(param_1[0x78] + 0x528);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_98 = param_1[0xa2];
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
    }
    local_80 = &PTR_LAB_02634120;
    local_78 = local_34;
    local_70 = local_40;
    local_60 = &local_80;
    FUN_00c7a240(lVar8,&local_98,&local_80);
    if (&local_80 == local_60) {
      pcVar7 = (code *)(*local_60)[4];
LAB_00ad2b04:
      (*pcVar7)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_60)[5];
      goto LAB_00ad2b04;
    }
    lVar1 = 0;
    lVar2 = local_90;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
      lVar1 = local_98;
      lVar2 = local_90;
    }
  }
  else {
    lVar8 = *(long *)(param_1[0x78] + 0x528);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    local_90 = param_1[0xb3];
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
    }
    local_80 = &PTR_LAB_026340d8;
    local_78 = local_34;
    local_70 = local_40;
    local_60 = &local_80;
    FUN_00c7a240(lVar8,&local_90,&local_80);
    if (&local_80 == local_60) {
      pcVar7 = (code *)(*local_60)[4];
LAB_00ad2b30:
      (*pcVar7)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_60)[5];
      goto LAB_00ad2b30;
    }
    lVar1 = local_98;
    lVar2 = 0;
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
      lVar1 = local_98;
      lVar2 = local_90;
    }
  }
  local_90 = lVar2;
  local_98 = lVar1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  plVar4 = (long *)param_1[0xab];
  if (plVar4 != (long *)0x0) {
    if ((local_28[0] == '\0') && (*(char *)((long)param_1 + 0x4ba) != '\0')) {
      (**(code **)(*plVar4 + 0x1a0))(plVar4,local_24[0],0);
      plVar4 = (long *)param_1[0xab];
      pcVar7 = *(code **)(*plVar4 + 0x1a0);
      uVar6 = 1;
      cVar5 = local_24[0];
    }
    else {
      pcVar7 = *(code **)(*plVar4 + 0x1a0);
      uVar6 = 2;
      cVar5 = '\0';
    }
    (*pcVar7)(plVar4,cVar5,uVar6);
  }
  if (param_1[0xac] != 0) {
    FUN_014a5f90(param_1[0xac],local_24[0],*(undefined4 *)((long)param_1 + 0x4bc));
  }
  if ((int)param_1[0x9a] != 2) {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,0);
  if (((uVar3 & 1) != 0) && ((char)param_1[0x97] != '\0')) {
    if (*(char *)((long)param_1 + 0x4b9) == '\0') {
      if (*(char *)((long)param_1 + 0x50e) != '\0') {
        return;
      }
      uVar9 = 0x3f800000;
      *(undefined1 *)((long)param_1 + 0x50e) = 1;
      goto LAB_00ad2c18;
    }
    local_28[0] = '\x01';
  }
  if (*(char *)((long)param_1 + 0x50e) == '\0') {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x50e) = 0;
  uVar9 = 0;
LAB_00ad2c18:
  local_80 = (undefined **)0xa6a33dcbade6c01f;
  local_78 = "PM_Visible";
  local_70 = (undefined1 *)0xa;
  local_68 = 0;
  FUN_00ad17f0(uVar9,param_1,&local_80,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


