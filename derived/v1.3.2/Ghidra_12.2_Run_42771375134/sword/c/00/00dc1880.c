/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1880; name: FUN_00dc1880
 */


void FUN_00dc1880(long *param_1,long param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_170;
  long local_168;
  long local_160;
  code *local_158;
  long local_150;
  code *local_148;
  undefined1 auStack_140 [96];
  long local_e0;
  code *local_d8;
  long local_d0;
  code *local_c8;
  undefined1 auStack_c0 [96];
  long local_58;
  
  puVar5 = PTR_DAT_027164d8;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_170 = PTR_DAT_027164d8 + 0x10;
  local_168 = 0;
  uVar10 = *(ulong *)(param_2 + 0x50);
  if (uVar10 != 0) {
    uVar8 = *param_3;
    uVar11 = uVar10 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar9 = uVar11 & uVar8;
      plVar12 = *(long **)(*(long *)(param_2 + 0x48) + uVar9 * 8);
    }
    else {
      uVar9 = uVar8;
      if (uVar10 <= uVar8) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar8 / uVar10;
        }
        uVar9 = uVar8 - uVar9 * uVar10;
      }
      plVar12 = *(long **)(*(long *)(param_2 + 0x48) + uVar9 * 8);
    }
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if ((uVar11 & uVar10) == 0) {
        do {
          uVar10 = plVar12[1];
          if (uVar10 != uVar8 && (uVar10 & uVar11) != uVar9) break;
          if ((uVar10 == uVar8) && (plVar12[2] == uVar8)) goto LAB_00dc1a38;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar12[1];
          if (uVar11 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_00dc1a38;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar3 * uVar10;
            }
            if (uVar11 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  local_168 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)local_170;
  param_1[1] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
LAB_00dc19b4:
  local_170 = PTR_DAT_027164e0 + 0x10;
  *(undefined8 *)((ulong)&local_170 | 8) = 0;
  pcVar4 = local_d8;
joined_r0x00dc1d14:
  local_d8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(auStack_c0);
  }
  pcVar4 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = (code *)0x0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar4)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  return;
LAB_00dc1a38:
  if ((char)plVar12[0x2c] == '\0') {
    if ((param_5 & 1) == 0) {
      FUN_00a8ba70(&local_58,*(undefined8 *)PTR_DAT_02710788,0,plVar12 + 4,0,param_4,0);
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
      }
      local_168 = local_58;
      if (local_58 != 0) {
        plVar12 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        if ((local_160 != 0) || (local_e0 != 0)) {
          FUN_006e1e70(local_58,&local_170,1);
        }
        FUN_006e1be0(local_58);
        goto LAB_00dc1bf0;
      }
    }
    else {
      FUN_00a8ba70(&local_58,*(undefined8 *)PTR_DAT_02710788,1,plVar12 + 4,0,param_4,0);
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
      }
      local_168 = local_58;
      if (local_58 != 0) {
        plVar12 = (long *)(local_58 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        if ((local_160 != 0) || (local_e0 != 0)) {
          FUN_006e1e70(local_58,&local_170,1);
        }
LAB_00dc1bf0:
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    puVar6 = PTR_DAT_027164e0;
    *param_1 = (long)(PTR_DAT_027164e0 + 0x10);
    param_1[2] = 0;
    param_1[1] = local_168;
    local_168 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    if (local_148 != (code *)0x0) {
      (*local_148)(auStack_140,param_1 + 6);
      pcVar4 = local_158;
      param_1[2] = local_160;
      param_1[3] = (long)local_158;
      param_1[4] = local_150;
      param_1[5] = (long)local_148;
      if (local_158 != (code *)0x0) {
        local_150 = 0;
        local_148 = (code *)0x0;
        local_160 = 0;
        local_158 = (code *)0x0;
        (*pcVar4)(auStack_140);
      }
    }
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    if (local_c8 != (code *)0x0) {
      (*local_c8)(auStack_c0,param_1 + 0x16);
      pcVar4 = local_d8;
      param_1[0x12] = local_e0;
      param_1[0x13] = (long)local_d8;
      param_1[0x14] = local_d0;
      param_1[0x15] = (long)local_c8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        local_c8 = (code *)0x0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar4)(auStack_c0);
      }
    }
    *param_1 = (long)(puVar5 + 0x10);
    local_170 = puVar6 + 0x10;
    if (local_168 == 0) {
      *(undefined8 *)((ulong)&local_170 | 8) = 0;
      pcVar4 = local_d8;
    }
    else {
      FUN_006e2100(local_168,&local_170);
      *(undefined8 *)((ulong)&local_170 | 8) = 0;
      pcVar4 = local_d8;
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
        pcVar4 = local_d8;
      }
    }
    goto joined_r0x00dc1d14;
  }
  *param_1 = (long)(PTR_DAT_027164e0 + 0x10);
  lVar7 = plVar12[0xb];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if ((code *)plVar12[0xe] != (code *)0x0) {
    (*(code *)plVar12[0xe])(plVar12 + 0x10,param_1 + 6);
    lVar7 = plVar12[0xc];
    lVar1 = plVar12[0xd];
    lVar2 = plVar12[0xf];
    param_1[4] = plVar12[0xe];
    param_1[5] = lVar2;
    param_1[2] = lVar7;
    param_1[3] = lVar1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if ((code *)plVar12[0x1e] != (code *)0x0) {
    (*(code *)plVar12[0x1e])(plVar12 + 0x20,param_1 + 0x16);
    lVar7 = plVar12[0x1c];
    lVar1 = plVar12[0x1d];
    lVar2 = plVar12[0x1f];
    param_1[0x14] = plVar12[0x1e];
    param_1[0x15] = lVar2;
    param_1[0x12] = lVar7;
    param_1[0x13] = lVar1;
  }
  *param_1 = (long)(puVar5 + 0x10);
  goto LAB_00dc19b4;
}


