/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011652d0; name: FUN_011652d0
 */


void FUN_011652d0(long param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined1 auStack_410 [32];
  undefined1 local_3f0 [4];
  char local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  char local_3a0 [80];
  char local_350 [4];
  char local_34c;
  char local_348;
  undefined8 local_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined5 uStack_310;
  undefined3 local_30b;
  undefined5 uStack_308;
  char local_300;
  undefined7 uStack_2ff;
  undefined4 local_2f0 [4];
  char local_2e0;
  char local_2d8;
  char local_2c8;
  char local_2a4;
  char local_290;
  char local_254;
  undefined1 local_250;
  char local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  char local_200;
  char local_140;
  char local_f0;
  undefined4 local_8c;
  long local_88 [5];
  
  if (*(long *)PTR_DAT_027185f8 == 0) {
    return;
  }
  lVar17 = *(long *)(*(long *)(param_1 + 0x90) + 0x68);
  if (lVar17 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_02710958;
  if (lVar12 == 0) {
    return;
  }
  lVar19 = *(long *)PTR_DAT_02718f20;
  if (lVar19 == 0) {
    return;
  }
  if (*(char *)(lVar17 + 0xf50) == '\0') {
    return;
  }
  local_88[0] = *(long *)(lVar17 + 0xf58);
  local_88[1] = *(long *)(lVar17 + 0xf60);
  local_88[2] = *(undefined8 *)(lVar17 + 0xf68);
  local_88[3] = *(undefined8 *)(lVar17 + 0xf70);
  bVar2 = *(byte *)(lVar17 + 0x45a);
  uVar18 = (ulong)bVar2;
  lVar7 = FUN_0120e640();
  local_8c = 0;
  uVar8 = FUN_01164670(*(undefined8 *)(param_1 + 0x90));
  uVar3 = local_8c;
  iVar4 = *(int *)(lVar17 + 0xb88);
  if ((uVar8 & 1) == 0) {
    if ((iVar4 == 4) || (iVar4 == 1)) {
      *(undefined1 *)((long)local_88 + (uVar18 - 4)) = 1;
      FUN_011ffbe0(&local_300,lVar19,local_88[1 - uVar18]);
      if (CONCAT71(uStack_2ff,local_300) == 0) {
        lVar20 = 0;
LAB_0116544c:
        iVar4 = *(int *)(lVar17 + 0xb88);
      }
      else {
        lVar20 = *(long *)(CONCAT71(uStack_2ff,local_300) + 8);
        if (lVar20 == 0) goto LAB_0116544c;
        (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
        iVar4 = *(int *)(lVar17 + 0xb88);
      }
      lVar9 = lVar20;
      if (iVar4 != 3) goto LAB_01165458;
LAB_0116545c:
      *(undefined1 *)((long)local_88 + (-3 - uVar18)) = 1;
      FUN_011ffbe0(&local_300,lVar19,local_88[uVar18]);
      lVar20 = lVar9;
      if (CONCAT71(uStack_2ff,local_300) != 0) {
        lVar20 = *(long *)(CONCAT71(uStack_2ff,local_300) + 8);
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
      }
      iVar4 = *(int *)(lVar17 + 0xb88);
    }
    else {
      lVar20 = 0;
      lVar9 = lVar20;
      if (iVar4 == 3) goto LAB_0116545c;
LAB_01165458:
      lVar9 = lVar20;
      if (iVar4 == 0) goto LAB_0116545c;
    }
    if (iVar4 == 2) {
      local_8c = local_8c & 0xffff0000;
    }
  }
  else {
    if ((iVar4 == 4) || (iVar4 == 1)) {
      if ((bVar2 | 2) == 2) {
        local_8c = CONCAT31(local_8c._1_3_,1);
        uVar11 = local_8c;
        local_8c._3_1_ = SUB41(uVar3,3);
        local_8c._0_2_ = (undefined2)uVar11;
        local_8c._0_3_ = CONCAT12(1,(undefined2)local_8c);
        FUN_011ffbe0(&local_300,lVar19,local_88[1]);
        lVar20 = CONCAT71(uStack_2ff,local_300);
        if (lVar20 != 0) goto LAB_011654f0;
        lVar20 = 0;
        iVar4 = *(int *)(lVar17 + 0xb88);
        goto joined_r0x011653c0;
      }
      local_8c._0_2_ = CONCAT11(1,(undefined1)local_8c);
      local_8c = CONCAT13(1,(undefined3)local_8c);
      FUN_011ffbe0(&local_300,lVar19,local_88[0]);
      lVar20 = CONCAT71(uStack_2ff,local_300);
      if (lVar20 == 0) {
        lVar20 = 0;
      }
      else {
LAB_011654f0:
        lVar20 = *(long *)(lVar20 + 8);
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
          iVar4 = *(int *)(lVar17 + 0xb88);
          goto joined_r0x011653c0;
        }
      }
      iVar4 = *(int *)(lVar17 + 0xb88);
      lVar9 = lVar20;
      if (iVar4 != 3) goto LAB_01165528;
LAB_0116552c:
      uVar3 = local_8c;
      if ((bVar2 | 2) == 2) {
        local_8c._0_2_ = CONCAT11(1,(undefined1)local_8c);
        local_8c = CONCAT13(1,(undefined3)local_8c);
        lVar20 = local_88[0];
      }
      else {
        local_8c = CONCAT31(local_8c._1_3_,1);
        uVar11 = local_8c;
        local_8c._3_1_ = SUB41(uVar3,3);
        local_8c._0_2_ = (undefined2)uVar11;
        local_8c._0_3_ = CONCAT12(1,(undefined2)local_8c);
        lVar20 = local_88[1];
      }
      FUN_011ffbe0(&local_300,lVar19,lVar20);
      lVar20 = lVar9;
      if (CONCAT71(uStack_2ff,local_300) != 0) {
        lVar20 = *(long *)(CONCAT71(uStack_2ff,local_300) + 8);
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
      }
    }
    else {
      lVar20 = 0;
joined_r0x011653c0:
      lVar9 = lVar20;
      if (iVar4 == 3) goto LAB_0116552c;
LAB_01165528:
      lVar9 = lVar20;
      if (iVar4 == 0) goto LAB_0116552c;
    }
    if (*(int *)(lVar17 + 0xb88) == 2) {
      local_8c = 0;
    }
  }
  plVar21 = *(long **)(param_1 + 8);
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar21;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar21 + 0x10))(plVar21,0x80,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar21 + 0xb8))(plVar21);
  }
  FUN_0077d050(lVar9,0xd);
  *(long **)(lVar9 + 8) = plVar21;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x80;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (lVar20 != 0) {
    FUN_01524b90(lVar20,lVar9);
  }
  uVar8 = FUN_01164670(*(undefined8 *)(param_1 + 0x90));
  if ((uVar8 & 1) == 0) {
    iVar4 = FUN_01164690(*(undefined8 *)(param_1 + 0x90));
    if (iVar4 == 0) {
      uVar11 = 6;
    }
    else {
      iVar4 = FUN_01164690(*(undefined8 *)(param_1 + 0x90));
      if (iVar4 != 1) goto LAB_01165a94;
      uVar11 = 7;
    }
  }
  else {
    uVar11 = 8;
  }
  puVar22 = (undefined8 *)((ulong)local_3a0 | 4);
  lVar17 = 0;
  puVar13 = (undefined8 *)((ulong)auStack_410 | 3);
  do {
    lVar23 = local_88[lVar17];
    FUN_011ffd20(&local_300,lVar19,lVar23);
    if (local_300 != '\0') {
      pcVar10 = (char *)FUN_01225e80(local_2f0);
      local_350[0] = '\0';
      if (*pcVar10 != '\0') {
        local_34c = pcVar10[4];
        local_348 = pcVar10[8] != '\0';
        if ((bool)local_348) {
          local_344 = *(undefined8 *)(pcVar10 + 0xc);
          local_33c = *(undefined8 *)(pcVar10 + 0x14);
          uStack_334 = *(undefined8 *)(pcVar10 + 0x1c);
          local_32c = *(undefined4 *)(pcVar10 + 0x24);
        }
        local_328 = *(undefined8 *)(pcVar10 + 0x28);
        local_320 = *(undefined8 *)(pcVar10 + 0x30);
        local_318 = *(undefined8 *)(pcVar10 + 0x38);
        uStack_308 = (undefined5)((ulong)*(undefined8 *)(pcVar10 + 0x45) >> 0x18);
        uStack_310 = (undefined5)*(undefined8 *)(pcVar10 + 0x40);
        local_30b = (undefined3)((ulong)*(undefined8 *)(pcVar10 + 0x40) >> 0x28);
        local_350[0] = '\x01';
        pcVar10 = (char *)FUN_01225e60(local_2f0);
        local_3a0[0] = '\0';
        if (*pcVar10 != '\0') {
          uVar14 = *(undefined8 *)(pcVar10 + 0xc);
          *puVar22 = *(undefined8 *)(pcVar10 + 4);
          puVar22[1] = uVar14;
          uVar14 = *(undefined8 *)(pcVar10 + 0x14);
          uVar15 = *(undefined8 *)(pcVar10 + 0x1c);
          uVar16 = *(undefined8 *)(pcVar10 + 0x2c);
          puVar22[4] = *(undefined8 *)(pcVar10 + 0x24);
          puVar22[5] = uVar16;
          puVar22[2] = uVar14;
          puVar22[3] = uVar15;
          uVar14 = *(undefined8 *)(pcVar10 + 0x34);
          uVar15 = *(undefined8 *)(pcVar10 + 0x3c);
          uVar16 = *(undefined8 *)(pcVar10 + 0x44);
          *(undefined4 *)(puVar22 + 9) = *(undefined4 *)(pcVar10 + 0x4c);
          puVar22[6] = uVar14;
          puVar22[7] = uVar15;
          puVar22[8] = uVar16;
          uVar5 = uVar11;
          if (*(char *)((long)local_88 + lVar17 + -4) == '\0') {
            uVar5 = 0xffffffff;
          }
          local_3a0[0] = '\x01';
          FUN_0121b630(local_3f0,uVar5);
          uVar5 = FUN_0121bc20((ulong)local_350 | 4);
          FUN_0121bc30(local_3f0,uVar5);
          uVar14 = FUN_0077d470(lVar9);
          uVar5 = FUN_0121d1c0(puVar22);
          uVar6 = FUN_0121d1f0(puVar22);
          FUN_0121bba0(local_3f0,uVar14,uVar5,uVar6);
          if (lVar23 == lVar7) {
            FUN_010a1250(*(undefined8 *)PTR_DAT_027108d8,local_3f0);
          }
          else {
            bVar1 = local_3ec != '\0';
            if (bVar1) {
              *(undefined4 *)(puVar13 + 3) = local_3d0;
              *puVar13 = local_3e8;
              puVar13[1] = uStack_3e0;
              puVar13[2] = local_3d8;
            }
            local_2f0[0] = 0;
            local_250 = local_3f0[0];
            if (local_254 == '\0') {
              if (bVar1) {
                local_230 = *(undefined4 *)(puVar13 + 3);
                local_248 = *puVar13;
                local_240 = puVar13[1];
                uStack_238 = puVar13[2];
              }
              local_254 = '\x01';
              local_24c = bVar1;
            }
            else if (local_24c == '\0') {
              if (bVar1) {
                local_230 = *(undefined4 *)(puVar13 + 3);
                local_248 = *puVar13;
                local_240 = puVar13[1];
                uStack_238 = puVar13[2];
                local_24c = '\x01';
              }
            }
            else if (bVar1) {
              local_248 = *puVar13;
              local_240 = puVar13[1];
              local_230 = CONCAT31(local_230._1_3_,*(undefined1 *)(puVar13 + 3));
              uStack_238 = puVar13[2];
            }
            else {
              local_24c = '\0';
            }
            FUN_01210d60(lVar12,0,local_2f0);
          }
          if (local_3ec != '\0') {
            local_3ec = '\0';
          }
          if (local_3a0[0] != '\0') {
            local_3a0[0] = '\0';
          }
        }
        if (local_350[0] != '\0') {
          if (local_348 != '\0') {
            local_348 = '\0';
          }
          local_350[0] = '\0';
        }
      }
      if (local_300 != '\0') {
        if (local_f0 != '\0') {
          local_f0 = '\0';
        }
        if (local_140 != '\0') {
          local_140 = '\0';
        }
        if (local_200 != '\0') {
          local_200 = '\0';
        }
        if (local_254 != '\0') {
          if (local_24c != '\0') {
            local_24c = '\0';
          }
          local_254 = '\0';
        }
        if (local_290 != '\0') {
          local_290 = '\0';
        }
        if (local_2a4 != '\0') {
          local_2a4 = '\0';
        }
        if (local_2c8 != '\0') {
          local_2c8 = '\0';
        }
        if (local_2d8 != '\0') {
          local_2d8 = '\0';
        }
        if (local_2e0 != '\0') {
          local_2e0 = '\0';
        }
        local_300 = '\0';
      }
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 4);
LAB_01165a94:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
  }
  return;
}


