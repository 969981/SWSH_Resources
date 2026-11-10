/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cae9b0; name: FUN_00cae9b0
 */


void FUN_00cae9b0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5,long param_6,long param_7,undefined1 *param_8,undefined8 param_9,
                 undefined1 *param_10,undefined8 param_11,undefined1 *param_12)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  long local_110;
  undefined8 local_108;
  byte *pbStack_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  byte *local_70;
  
  local_78 = (byte *)0x0;
  local_70 = (byte *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_00ca6310(param_1,&local_a8,param_4,param_5);
  (**(code **)(*param_1 + 0x10))(&local_130,param_1);
  uVar5 = local_98;
  uVar4 = local_a8;
  puVar3 = local_130;
  *(undefined4 *)(param_6 + 8) = 3;
  *(undefined8 *)(param_6 + 0x10) = param_2;
  *(undefined4 *)(param_6 + 0x18) = param_3;
  if (local_130 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_6 + 0x20);
  *(undefined **)(param_6 + 0x20) = puVar3;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  pbVar13 = local_78;
  *(undefined8 *)(param_6 + 0x28) = uVar4;
  *(undefined8 *)(param_6 + 0x30) = uVar5;
  *(undefined8 *)(param_6 + 0x38) = 0;
  if (local_78 == (byte *)0x0) {
    uVar14 = 0;
    if (param_1[0x2b0] == 0) goto LAB_00caec44;
LAB_00caec28:
    FUN_00c80dd0(&local_130);
  }
  else {
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_b8 = 0;
    local_b0 = 0;
    puVar1 = PTR_DAT_0271c258 + 0x10;
    local_c8 = 0;
    local_c0 = 0;
    local_128 = 7;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = 0;
    pbStack_100 = (byte *)0x0;
    local_130 = puVar1;
    local_120 = FUN_00c65240();
    local_118 = 8;
    (**(code **)(*param_1 + 0x10))(&local_138,param_1);
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    }
    local_110 = local_138;
    local_108 = local_88;
    pbStack_100 = pbVar13;
    local_f8 = FUN_00c65260();
    FUN_00c9a820(param_9,&local_130);
    local_130 = puVar1;
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      local_c8 = 0;
    }
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = 0;
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
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
    local_130 = PTR_DAT_0271c260 + 0x10;
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = 0;
    }
    uVar14 = 1;
    if (param_1[0x2b0] != 0) goto LAB_00caec28;
LAB_00caec44:
    local_130 = (undefined *)0x0;
  }
  plVar9 = (long *)FUN_00cbe970(local_130,0x1f);
  if (*param_5 == *plVar9) {
    bVar7 = false;
  }
  else {
    if (param_1[0x2b0] == 0) {
      local_138 = 0;
    }
    else {
      FUN_00c80dd0(&local_138);
    }
    plVar9 = (long *)FUN_00cbe970(local_138,0x20);
    bVar7 = *param_5 != *plVar9;
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
  }
  if (local_130 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = (undefined *)0x0;
  }
  lVar8 = local_90;
  if (bVar7) {
    uVar15 = 0;
    if (local_90 != 0) {
      (**(code **)(*param_1 + 0x10))(&local_130,param_1);
      uVar4 = local_a0;
      puVar1 = local_130;
      *(undefined8 *)(param_7 + 0x10) = param_2;
      *(undefined4 *)(param_7 + 8) = 4;
      *(undefined4 *)(param_7 + 0x18) = param_3;
      if (local_130 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(param_7 + 0x20);
      *(undefined **)(param_7 + 0x20) = puVar1;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      }
      *(undefined8 *)(param_7 + 0x28) = uVar4;
      *(long *)(param_7 + 0x30) = lVar8;
      *(undefined8 *)(param_7 + 0x38) = 0;
      if (puVar1 != (undefined *)0x0) {
        (**(code **)(*(long *)(puVar1 + 0x48) + 0x18))(puVar1 + 0x48);
      }
      uVar15 = 1;
    }
    pbVar6 = local_70;
    if ((pbVar13 == (byte *)0x0) || (local_70 == (byte *)0x0)) {
      *param_8 = uVar15;
      *param_10 = uVar14;
      *param_12 = 0;
      goto joined_r0x00caefb4;
    }
    bVar2 = *pbVar13;
    uVar11 = 0xcbf29ce484222645;
    uVar12 = 0xcbf29ce484222645;
    if (bVar2 != 0) {
      uVar12 = 0xcbf29ce484222645;
      do {
        pbVar13 = pbVar13 + 1;
        uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar13;
      } while (bVar2 != 0);
    }
    bVar2 = *local_70;
    pbVar13 = local_70;
    while (bVar2 != 0) {
      pbVar13 = pbVar13 + 1;
      uVar11 = (uVar11 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar13;
    }
    if (uVar12 != uVar11) {
      local_b8 = 0;
      local_b0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      puVar1 = PTR_DAT_0271c258 + 0x10;
      local_110 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_128 = 7;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_108 = 0;
      pbStack_100 = (byte *)0x0;
      local_130 = puVar1;
      local_120 = FUN_00c65240();
      local_118 = 8;
      (**(code **)(*param_1 + 0x10))(&local_138,param_1);
      local_110 = local_138;
      local_108 = local_80;
      pbStack_100 = pbVar6;
      local_f8 = FUN_00c65260();
      FUN_00c9a820(param_11,&local_130);
      local_130 = puVar1;
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
        local_b0 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      if (local_c0 != 0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = 0;
      }
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        local_c8 = 0;
      }
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
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
      local_130 = PTR_DAT_0271c260 + 0x10;
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
        local_110 = 0;
      }
      *param_8 = uVar15;
      *param_10 = uVar14;
      *param_12 = 1;
      goto joined_r0x00caefb4;
    }
  }
  else {
    uVar15 = 0;
  }
  *param_8 = uVar15;
  *param_10 = uVar14;
  *param_12 = 0;
joined_r0x00caefb4:
  if (puVar3 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x18))(puVar3 + 0x48);
  }
  return;
}


