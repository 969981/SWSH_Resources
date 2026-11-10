/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6bca0; name: FUN_00c6bca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6bca0(long *param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long local_210;
  long local_208;
  long local_200;
  undefined1 local_1f4 [4];
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined1 local_164 [4];
  undefined *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 local_d4 [4];
  undefined *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_0271c258;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_90 = PTR_DAT_0271c248 + 0x10;
  local_68 = 0;
  local_88 = 3;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d0 = PTR_DAT_0271c250 + 0x10;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_d4[0] = 0;
  local_150 = 0;
  local_148 = 0;
  local_c8 = 4;
  local_1f0 = PTR_DAT_0271c258 + 0x10;
  local_130 = 0;
  local_158 = 7;
  local_164[0] = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1c0 = 0;
  local_1e8 = 7;
  local_1f4[0] = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_178 = 0;
  local_170 = 0;
  local_188 = 0;
  local_180 = 0;
  local_198 = 0;
  local_190 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_160 = local_1f0;
  FUN_00c6c510(param_1,param_3,&local_90,&local_d0,local_d4,&local_160,local_164,&local_1f0,
               local_1f4);
  if ((local_78 & 0xfffffffe) == 4) {
    if (param_1[0xe] == 0) {
      local_208 = 0;
    }
    else {
      FUN_00c62ba0(&local_208);
    }
    FUN_00cacde0(&local_200,local_208,param_2 & 1,&local_90,&local_d0,local_d4[0],&local_160,
                 local_164[0],&local_1f0,local_1f4[0],0);
    if (param_1[0x1b] != 0) {
      (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
      param_1[0x1b] = 0;
    }
    lVar7 = local_200;
    local_200 = 0;
    param_1[0x1b] = lVar7;
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
      local_208 = 0;
      lVar7 = param_1[0x1b];
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) goto LAB_00c6c03c;
    puVar9 = *(undefined8 **)(param_1[0x1b] + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00c72e20();
    for (; plVar3 != (long *)lVar7; plVar3 = (long *)*plVar3) {
    }
    if ((puVar9[3] == 0) || (*(int *)(puVar9[3] + 0x54) == 0)) goto LAB_00c6c03c;
    puVar9 = *(undefined8 **)(param_1[0x1b] + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00c72e20();
    for (; plVar3 != (long *)lVar7; plVar3 = (long *)*plVar3) {
    }
    lVar7 = puVar9[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = param_1[0x1c];
    param_1[0x1c] = lVar7;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    puVar9 = *(undefined8 **)(param_1[0x1b] + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00c72e20();
    for (; plVar3 != (long *)lVar7; plVar3 = (long *)*plVar3) {
    }
    lVar7 = puVar9[4];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = param_1[0x1d];
    param_1[0x1d] = lVar7;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    puVar9 = *(undefined8 **)(param_1[0x1b] + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00c72e20();
    for (; plVar3 != (long *)lVar7; plVar3 = (long *)*plVar3) {
    }
    lVar7 = puVar9[5];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = param_1[0x1e];
    param_1[0x1e] = lVar7;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    puVar9 = *(undefined8 **)(param_1[0x1b] + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00c72e20();
    for (; plVar3 != (long *)lVar7; plVar3 = (long *)*plVar3) {
    }
    lVar7 = puVar9[6];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = param_1[0x1f];
    param_1[0x1f] = lVar7;
    if (lVar4 == 0) goto LAB_00c6c254;
    plVar3 = (long *)(lVar4 + 0x48);
    pcVar8 = *(code **)(*plVar3 + 0x18);
  }
  else {
LAB_00c6c03c:
    plVar3 = (long *)FUN_00c72f10(&local_200,param_1[0xd]);
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x10))();
    }
    (**(code **)(*plVar3 + 0x10))(&local_200,plVar3);
    lVar7 = local_200;
    if (param_1[0xe] == 0) {
      lVar4 = 0;
    }
    else {
      FUN_00c62ba0(&local_200);
      lVar4 = local_200;
    }
    local_210 = lVar7;
    local_200 = lVar4;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_00cadb90(lVar4,&local_210,param_2 & 1,&local_90,&local_d0,local_d4[0],&local_160,
                 local_164[0],&local_1f0,local_1f4[0],0);
    if (local_210 != 0) {
      (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
      local_210 = 0;
    }
    if (local_200 != 0) {
      (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
      local_200 = 0;
    }
    if ((lVar7 != 0) && (puVar9 = *(undefined8 **)(lVar7 + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar4 = FUN_00c72e20();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) {
          puVar10 = puVar9 + -10;
          lVar4 = puVar9[3];
          goto joined_r0x00c6c508;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
    lVar4 = _DAT_00000068;
joined_r0x00c6c508:
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar6 = param_1[0x1c];
    param_1[0x1c] = lVar4;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar4 = puVar10[0xe];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar6 = param_1[0x1d];
    param_1[0x1d] = lVar4;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar4 = puVar10[0xf];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar6 = param_1[0x1e];
    param_1[0x1e] = lVar4;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar4 = puVar10[0x10];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar6 = param_1[0x1f];
    param_1[0x1f] = lVar4;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
    }
    if (lVar7 == 0) goto LAB_00c6c254;
    plVar3 = (long *)(lVar7 + 0x48);
    pcVar8 = *(code **)(*plVar3 + 0x18);
  }
  (*pcVar8)(plVar3);
LAB_00c6c254:
  if ((param_2 & 1) == 0) {
    FUN_00c6bae0(param_1);
    *(undefined4 *)((long)param_1 + 0x94) = 3;
    if (*(char *)((long)param_1 + 0x7c) != '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,param_1[0xd]);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x94) = 2;
  }
  local_1f0 = puVar1 + 0x10;
  if (local_170 != 0) {
    local_1f0 = puVar1 + 0x10;
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
  }
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    local_1a0 = 0;
  }
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  if (local_1b0 != 0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = 0;
  }
  puVar2 = PTR_DAT_0271c260;
  local_1f0 = PTR_DAT_0271c260 + 0x10;
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
    local_1d0 = 0;
  }
  local_160 = puVar1 + 0x10;
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
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    local_110 = 0;
  }
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
    local_118 = 0;
  }
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  puVar1 = puVar2 + 0x10;
  local_160 = puVar1;
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  local_d0 = puVar1;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  local_90 = puVar2 + 0x10;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


