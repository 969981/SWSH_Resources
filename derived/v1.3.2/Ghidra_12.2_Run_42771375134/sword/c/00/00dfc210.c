/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfc210; name: FUN_00dfc210
 */


void FUN_00dfc210(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  ulong local_1d0 [6];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  ulong local_d0;
  ulong uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_68;
  
  FUN_00a658b0(&local_68,param_1 + 0x50);
  *(undefined1 *)(*(long *)(local_68 + 0x570) + 0x1e0) = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if ((int)param_2[0x36] == 2) {
    uVar14 = FUN_00e8fe60();
    if ((uVar14 & 1) != 0) {
      *(undefined1 *)(*(long *)(local_68 + 0x570) + 0x1e0) = 1;
    }
    uVar14 = FUN_00dfc860(uVar14,param_2,param_2 + 0x3c,&local_d0);
    if ((uVar14 & 1) != 0) {
LAB_00dfc830:
      FUN_00e8ffc0(local_68,&local_d0);
      goto LAB_00dfc838;
    }
  }
  else {
    if ((int)param_2[0x36] == 1) {
      if (1 < *(int *)((long)param_2 + 0x194)) {
        if ((int)param_2[0x46] == 2) {
          FUN_00dd5de0(param_2,param_2 + 0x38,param_2 + 0x3a,&local_d0);
        }
        else {
          if ((int)param_2[0x46] != 1) goto LAB_00dfc55c;
          uStack_88 = 0;
          local_90 = 0;
          FUN_00dd5de0(param_2,param_2 + 0x54,param_2 + 0x56,&local_90);
          uStack_98 = 0;
          local_a0 = 0;
          local_90 = CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)local_90);
          FUN_00dd5de0(param_2,param_2 + 100,param_2 + 0x66,&local_a0);
          uVar8 = DAT_01d4c4d4;
          local_a0 = CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)local_a0);
          uStack_a8 = 0;
          local_b0 = 0;
          local_1d0[1] = param_2[1];
          local_1d0[0] = *param_2 & 0xffffffff;
          local_1d0[3] = uStack_88;
          local_1d0[2] = local_90 & 0xffffffff;
          iVar12 = FUN_00dd5eb0(DAT_01d4c4d4,local_1d0,local_1d0 + 2,param_2 + 100,param_2 + 0x66,
                                &local_b0);
          local_1d0[3] = uStack_98;
          local_1d0[2] = local_a0 & 0xffffffff;
          iVar13 = FUN_00dd5eb0(uVar8,local_1d0,local_1d0 + 2,param_2 + 0x54,param_2 + 0x56,
                                &local_b0);
          if (iVar12 - 1U < 2) {
            uStack_c8 = uStack_88;
            local_d0 = local_90;
          }
          else if (iVar13 - 1U < 2) {
            uStack_c8 = uStack_98;
            local_d0 = local_a0;
          }
          else {
            uStack_c8 = param_2[0x49];
            local_d0 = param_2[0x48];
          }
        }
        local_d0 = CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)local_d0);
        goto LAB_00dfc830;
      }
      FUN_00dd5de0(param_2,param_2 + 0x38,param_2 + 0x3a,&local_d0);
      local_d0 = CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)local_d0);
      bVar9 = (int)param_3[0x36] != 1;
      uVar19 = param_2[0x34];
      uVar18 = param_3[0x34];
      bVar1 = *(int *)((long)param_3 + 0x194) < 2;
      bVar10 = (int)param_3[0x46] == 2;
      uVar14 = param_2[0x36];
      fVar24 = *(float *)(param_2 + 0x44);
      bVar6 = !bVar9;
      bVar7 = !bVar1;
      if (bVar10 && (bVar6 && bVar7)) {
        local_1d0[1] = param_3[0x55];
        local_1d0[0] = param_3[0x54];
        uStack_88 = param_3[0x57];
        local_90 = param_3[0x56];
        uStack_98 = param_3[0x65];
        local_a0 = param_3[100];
        uStack_a8 = param_3[0x67];
        local_b0 = param_3[0x66];
        bVar11 = FUN_00dd5f90(local_1d0,&local_90,&local_a0,&local_b0);
      }
      else {
        bVar11 = 0;
      }
      local_1d0[1] = param_3[1];
      local_1d0[0] = *param_3;
      local_1d0[3] = param_2[1];
      local_1d0[2] = *param_2;
      iVar12 = FUN_00dd5eb0(DAT_01d4c4d4,local_1d0,local_1d0 + 2,param_2 + 0x38,param_2 + 0x3a,0);
      if ((!bVar10 || (!bVar6 || !bVar7)) || fVar24 <= 0.0) {
        bVar11 = 0;
      }
      else {
        bVar11 = bVar11 & 1 < iVar12 - 1U;
      }
      if ((((byte)(0.0 < fVar24 & ((bVar10 && (bVar6 && bVar7)) ^ 0xffU) &
                   (uVar19 != uVar18 && 1 < iVar12 - 1U) | bVar11) == 1) && ((param_4 & 1) == 0)) &&
         ((char)param_3[0xd2] == '\0')) {
        uVar18 = param_2[1];
        uVar14 = *param_2;
        memcpy(param_2,param_3,0x690);
        *(undefined1 *)(param_2 + 0xd2) = 1;
        param_2[1] = uVar18;
        *param_2 = uVar14;
        goto joined_r0x00dfc568;
      }
      if (uVar19 == uVar18 || (!bVar10 || (bVar1 || (bVar9 || ((int)uVar14 != 1 || fVar24 <= 0.0))))
         ) goto LAB_00dfc830;
      local_198 = 3;
      local_1d0[0] = local_1d0[0] & 0xffffffffffff0000;
      local_1d0[3] = *(ulong *)(local_68 + 0x568);
      local_1d0[2] = *(ulong *)(local_68 + 0x560);
      local_1d0[5] = uStack_c8;
      local_1d0[4] = local_d0;
      uStack_19c = (undefined4)param_2[0x44];
      local_1a0 = 0;
      FUN_00e8ff50(local_68,local_1d0);
LAB_00dfc838:
      FUN_00e8fff0(local_68,1);
      goto joined_r0x00dfc568;
    }
    if (((int)param_3[0x36] == 1) && ((int)param_3[0x46] == 2)) {
      uVar3 = *(uint *)((long)param_3 + 0x194);
      if (0 < (int)uVar3) {
        uVar14 = 0;
        puVar15 = param_3 + 0x54;
        puVar16 = local_1d0;
        do {
          if (7 < uVar14) goto LAB_00dfc850;
          uVar18 = puVar15[1];
          puVar16[3] = puVar15[3];
          puVar16[1] = uVar18;
          uVar18 = *puVar15;
          puVar2 = puVar15 + 2;
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 0x10;
          puVar16[2] = *puVar2;
          *puVar16 = uVar18;
          puVar16 = puVar16 + 4;
        } while ((long)uVar14 < (long)(int)uVar3);
      }
      uStack_88 = param_2[1];
      local_90 = *param_2 & 0xffffffff;
      if ((int)uVar3 < 1) {
LAB_00dfc850:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = 0;
      uVar17 = 0xffffffff;
      puVar15 = local_1d0 + 2;
      dVar25 = DAT_01cd5020;
      do {
        local_a0 = puVar15[-2];
        uStack_98 = puVar15[-1];
        local_b0 = *puVar15;
        uStack_a8 = puVar15[1];
        fStack_bc = 0.0;
        local_c0 = 0.0;
        uStack_b8 = 0;
        FUN_00dd5de0(&local_90,&local_a0,&local_b0,&local_c0);
        fVar24 = (float)local_90 - local_c0;
        fVar20 = (float)(local_90 >> 0x20) - fStack_bc;
        fVar21 = (float)uStack_88 - (float)uStack_b8;
        fVar22 = (float)(uStack_88 >> 0x20) - uStack_b8._4_4_;
        fVar24 = fVar24 * fVar24;
        fVar20 = fVar20 * fVar20;
        fVar21 = fVar21 * fVar21;
        fVar22 = fVar22 * fVar22;
        auVar23._4_4_ = fVar20;
        auVar23._0_4_ = fVar24;
        auVar23._8_4_ = fVar21;
        auVar23._12_4_ = fVar22;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = fVar24;
        auVar4._8_4_ = fVar21;
        auVar4._12_4_ = fVar22;
        auVar23 = NEON_ext(auVar23,auVar4,8,1);
        dVar5 = (double)(auVar23._0_4_ + fVar24 + auVar23._4_4_ + fVar20);
        if (dVar5 <= dVar25) {
          uVar17 = (uint)uVar14;
          dVar25 = dVar5;
        }
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 4;
      } while (uVar3 != uVar14);
      if (7 < uVar17) goto LAB_00dfc850;
      if (param_3[0x34] != param_3[(long)(int)uVar17 + 0x4a]) {
        local_1d0[0] = local_1d0[0] & 0xffffffffffff0000;
        local_198 = 3;
        local_1d0[3] = *(ulong *)(local_68 + 0x568);
        local_1d0[2] = *(ulong *)(local_68 + 0x560);
        uStack_19c = (undefined4)param_3[0x44];
        local_1a0 = 0;
        local_1d0[4] = local_1d0[2];
        local_1d0[5] = local_1d0[3];
        FUN_00e8ff50(local_68,local_1d0);
      }
    }
  }
LAB_00dfc55c:
  FUN_00e8fff0(local_68,0);
joined_r0x00dfc568:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


