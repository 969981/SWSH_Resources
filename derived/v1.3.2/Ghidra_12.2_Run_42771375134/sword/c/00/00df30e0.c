/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df30e0; name: FUN_00df30e0
 */


void FUN_00df30e0(long *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long local_78;
  undefined *puStack_70;
  undefined8 local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  *(int *)((long)param_1 + 100) = (int)param_1[0xc];
  (**(code **)(*param_1 + 0x68))();
  if (5 < (int)param_1[0xc] - 1U) {
    return;
  }
  plVar5 = (long *)param_1[0xe];
  switch((int)param_1[0xc]) {
  case 1:
    if ((int)param_1[0x14] == 0) {
      *(undefined4 *)(param_1 + 0xc) = 7;
      *(undefined2 *)((long)param_1 + 0x69) = 1;
      return;
    }
    if (0 < *(int *)((long)param_1 + 0xac)) {
      uVar8 = 2;
      goto LAB_00df36c4;
    }
    break;
  case 2:
    iVar2 = *(int *)((long)param_1 + 0xac);
    iVar1 = iVar2 + -1;
    *(int *)((long)param_1 + 0xac) = iVar1;
    if (iVar1 != 0 && 0 < iVar2) {
      return;
    }
    break;
  case 3:
    uVar3 = FUN_0131acf0(param_1[0x1d]);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_0131ad60(param_1[0x1d]), (uVar3 & 1) == 0)) {
      return;
    }
    lVar6 = param_1[0x1d];
    uVar3 = FUN_0131acf0(lVar6);
    if (((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x130) != 0)) {
      local_68 = DAT_02653a30;
      local_78 = DAT_02653a20;
      puStack_70 = PTR_s_turn_start_duration_02653a28;
      local_80 = DAT_02653a48;
      local_90 = DAT_02653a38;
      puStack_88 = PTR_s_turn_end_duration_02653a40;
      local_98 = DAT_02653a60;
      local_a0 = PTR_s_turn_start_offset_02653a58;
      local_a8 = DAT_02653a50;
      FUN_00c58c00(&local_b0,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
      lVar6 = param_1[0x1d];
      FUN_0131acf0(lVar6);
      piVar4 = *(int **)(lVar6 + 0x130);
      uVar8 = 0;
      if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar3 != 0)) {
        uVar8 = *(undefined4 *)((long)piVar4 + uVar3);
      }
      local_28 = local_b0;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)param_1[0xe] + 0x10))(&local_40);
      local_38 = local_40;
      local_40 = 0;
      FUN_006cf0a0(&local_60,&local_78);
      FUN_00ca13c0(uVar8,&local_28,&local_38,&local_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      lVar6 = param_1[0x1d];
      FUN_0131acf0(lVar6);
      piVar4 = *(int **)(lVar6 + 0x130);
      uVar8 = 0;
      if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar3 != 0)) {
        uVar8 = *(undefined4 *)((long)piVar4 + uVar3);
      }
      local_28 = local_b0;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)param_1[0xe] + 0x10))(&local_40);
      local_38 = local_40;
      local_40 = 0;
      FUN_006cf0a0(&local_60,&local_90);
      FUN_00ca13c0(uVar8,&local_28,&local_38,&local_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      lVar6 = param_1[0x1d];
      FUN_0131acf0(lVar6);
      piVar4 = *(int **)(lVar6 + 0x130);
      uVar8 = 0;
      if ((10 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
         (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar3 != 0)) {
        uVar8 = *(undefined4 *)((long)piVar4 + uVar3);
      }
      local_28 = local_b0;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)param_1[0xe] + 0x10))(&local_40);
      local_38 = local_40;
      local_40 = 0;
      FUN_006cf0a0(&local_60,&local_a8);
      FUN_00ca13c0(uVar8,&local_28,&local_38,&local_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
        local_b0 = 0;
      }
    }
    goto LAB_00df36b8;
  case 4:
    uVar3 = FUN_00df4200(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
    *(undefined4 *)(param_1 + 0xc) = 5;
  case 5:
    lVar6 = param_1[0x16];
    iVar2 = (int)lVar6 + -1;
    *(int *)(param_1 + 0x16) = iVar2;
    if (iVar2 != 0 && 0 < (int)lVar6) {
      *(float *)(param_1 + 0x15) = *(float *)((long)param_1 + 0xa4) + *(float *)(param_1 + 0x15);
      auVar7 = FUN_0075e7d0(param_1 + 0x10,param_1 + 0x12);
      *(undefined1 *)(plVar5 + 0x18) = 1;
      *(undefined1 (*) [16])(plVar5 + 0x14) = auVar7;
      return;
    }
    plVar5[0x15] = param_1[0x13];
    plVar5[0x14] = param_1[0x12];
    *(undefined1 *)(plVar5 + 0x18) = 1;
    (**(code **)(*plVar5 + 0x10))(&local_78,plVar5);
    local_60 = local_78;
    local_78 = 0;
    uVar3 = FUN_00e7cb20(&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if ((uVar3 & 1) == 0) {
LAB_00df3654:
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      *(undefined4 *)(param_1 + 0xc) = 7;
      FUN_00df4540(param_1);
      *(undefined1 *)((long)param_1 + 0x69) = 1;
      return;
    }
    local_60 = 0x4c11a2e6098d711a;
    local_58 = &DAT_01d290aa;
    local_50 = 4;
    local_48 = 0;
    (**(code **)(*(long *)param_1[0xe] + 0x1a8))((long *)param_1[0xe],&local_60,0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    uVar8 = 6;
    goto LAB_00df36c4;
  case 6:
    uVar3 = FUN_00df3e20(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    goto LAB_00df3654;
  }
  (**(code **)(*plVar5 + 0x10))(&local_78,plVar5);
  local_60 = local_78;
  local_78 = 0;
  uVar3 = FUN_00e7cb20(&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00df36e0(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
LAB_00df36b8:
    FUN_00df3910(param_1);
    uVar8 = 4;
  }
  else {
    uVar3 = FUN_00df3e20();
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_00df4080(param_1);
    uVar8 = 3;
  }
LAB_00df36c4:
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  return;
}


