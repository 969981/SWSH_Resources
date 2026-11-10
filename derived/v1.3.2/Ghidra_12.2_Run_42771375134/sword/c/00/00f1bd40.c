/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f1bd40; name: FUN_00f1bd40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f1bd40(long param_1)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  uint uVar27;
  bool bVar28;
  undefined4 uVar29;
  ulong uVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  long lVar42;
  undefined8 *puVar43;
  float fVar44;
  long extraout_d0;
  long extraout_d0_00;
  long extraout_d0_01;
  undefined1 auVar45 [16];
  long extraout_var;
  long extraout_var_00;
  long extraout_var_01;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  ulong uVar60;
  long local_370;
  undefined8 local_310;
  char *local_308;
  undefined8 local_300;
  long local_2f8;
  undefined4 local_2e8;
  undefined2 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long lStack_298;
  undefined8 local_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  char *pcStack_258;
  undefined8 local_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  char *pcStack_218;
  undefined8 local_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  char *pcStack_158;
  undefined8 local_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  uVar32 = *(undefined8 *)PTR_DAT_027194d8;
  lVar33 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x48) + 0x10))();
  }
  lVar42 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar42 != 0) {
    (**(code **)(*(long *)(lVar42 + 0x48) + 0x10))();
  }
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x48) + 0x18))((long *)(lVar33 + 0x48));
  }
  plVar22 = (long *)FUN_00df1bc0(uVar32,&local_2e0);
  if (plVar22 != (long *)0x0) {
    uVar23 = (**(code **)(*plVar22 + 0x70))();
    fVar44 = DAT_01d4c098;
    if (((uVar23 & 1) != 0) && (*(long *)(*(long *)PTR_DAT_0271efa0 + 0xd8) == 0)) {
      plVar31 = *(long **)(param_1 + 0x798);
      plVar34 = *(long **)(param_1 + 0x7a0);
      if (plVar31 != plVar34) {
        while (lVar33 = FUN_00f1bc10(*plVar31 + 0x50), lVar33 != 0) {
          auVar45 = FUN_00de1340(lVar33 + 0x3b0,0);
          pcVar12 = _UNK_01d4ac98;
          uVar32 = _DAT_01d4ac90;
          fVar47 = *(float *)(plVar22 + 0x16) - auVar45._0_4_;
          fVar50 = *(float *)((long)plVar22 + 0xb4) - auVar45._4_4_;
          fVar52 = *(float *)(plVar22 + 0x17) - auVar45._8_4_;
          fVar54 = *(float *)((long)plVar22 + 0xbc) - auVar45._12_4_;
          auVar57._0_4_ = fVar47 * fVar47;
          auVar57._4_4_ = fVar50 * fVar50;
          auVar57._8_4_ = fVar52 * fVar52;
          auVar57._12_4_ = fVar54 * fVar54;
          auVar56 = NEON_ext(auVar57,auVar57,8,1);
          if (auVar56._0_4_ + auVar57._0_4_ + auVar56._4_4_ + auVar57._4_4_ < fVar44) {
            *(undefined1 *)(plVar22 + 0x18) = 1;
            auVar56._0_8_ =
                 CONCAT44(auVar45._4_4_ + (float)((ulong)uVar32 >> 0x20),
                          auVar45._0_4_ + (float)uVar32);
            auVar56._8_4_ = auVar45._8_4_ + SUB84(pcVar12,0);
            auVar56._12_4_ = auVar45._12_4_ + (float)((ulong)pcVar12 >> 0x20);
            plVar22[0x17] = auVar56._8_8_;
            plVar22[0x16] = auVar56._0_8_;
            lVar33 = *(long *)PTR_DAT_027194e8;
            if ((lVar33 != 0) && (lVar41 = *(long *)(lVar33 + 0x50), lVar41 != 0)) {
              plVar31 = (long *)(lVar41 + 0x48);
              (**(code **)(*plVar31 + 0x10))(plVar31);
              piVar1 = (int *)(lVar41 + 0x54);
              if (*piVar1 == 0) goto LAB_00f1bfcc;
              FUN_00dfa940(lVar33);
              puVar17 = PTR_DAT_02719530;
              puVar11 = PTR_DAT_02719528;
              iVar20 = *piVar1;
              goto joined_r0x00f1bf18;
            }
            break;
          }
          plVar31 = plVar31 + 1;
          if (plVar34 == plVar31) break;
        }
      }
      goto LAB_00f1bfdc;
    }
  }
  uVar32 = 0;
  goto joined_r0x00f1d7c0;
  while( true ) {
    cVar2 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar28) {
      *piVar1 = iVar20 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar20 = iVar18;
    if (cVar2 == '\0') break;
joined_r0x00f1bf18:
    if (iVar20 == 0) goto LAB_00f1bfc4;
    plVar34 = *(long **)(lVar41 + 0x58);
    if (((*puVar11 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar11), iVar18 != 0)) {
      uVar32 = FUN_015b5410();
      *(undefined8 *)puVar17 = uVar32;
      __cxa_guard_release(puVar11);
    }
    while( true ) {
      if (plVar34 == (long *)0x0) goto LAB_00f1bfc4;
      if (plVar34 == (long *)puVar17) break;
      plVar34 = (long *)*plVar34;
    }
    iVar18 = *piVar1;
    if (iVar18 != iVar20) {
      ClearExclusiveLocal();
      iVar20 = iVar18;
      goto joined_r0x00f1bf18;
    }
  }
  lVar33 = *(long *)(lVar41 + 0x60);
  if (lVar33 == 0) {
LAB_00f1bfc4:
    FUN_00e8fec0(0);
  }
  else {
    FUN_00e8fec0(lVar33 + -0x50);
    (**(code **)(*(long *)(lVar33 + -8) + 0x18))((long *)(lVar33 + -8));
  }
LAB_00f1bfcc:
  (**(code **)(*plVar31 + 0x18))(plVar31);
LAB_00f1bfdc:
  uVar26 = *(long *)(param_1 + 2000) - *(long *)(param_1 + 0x7c8);
  local_bc = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  uVar23 = (ulong)*(uint *)(param_1 + 0x760);
  iVar20 = (int)(uVar26 >> 3);
  if ((int)*(uint *)(param_1 + 0x760) < 1) {
    bVar28 = false;
    local_d8 = 0xffffffffffffffff;
    uStack_d0 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
  }
  else {
    uVar30 = *(long *)(param_1 + 0x830) - *(long *)(param_1 + 0x828);
    if ((int)(uVar30 >> 3) < 1) {
      local_d8 = 0xffffffffffffffff;
      uStack_d0 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
    }
    else {
      lVar33 = 0;
LAB_00f1c048:
      do {
        lVar41 = 0;
        do {
          lVar24 = FUN_00eca190(*(long *)(*(long *)(param_1 + 0x828) + lVar41 * 8) + 0x50);
          if (((lVar24 != 0) && (*(char *)((long)&local_c0 + lVar41) == '\0')) &&
             (*(float *)(*(long *)(param_1 + lVar33 * 0x80 + 0x360) + 0xb8) <
              *(float *)(lVar24 + 0xb8))) {
            *(int *)((long)&local_b8 + lVar33 * 4) = (int)lVar41;
            uVar23 = FUN_01510f00(lVar42,*(undefined8 *)(lVar24 + 0x5d0));
            if ((uVar23 & 1) != 0) {
              *(undefined1 *)((long)&local_c8 + lVar33) = 1;
            }
            *(undefined1 *)((long)&local_c0 + lVar41) = 1;
            uVar23 = (ulong)*(int *)(param_1 + 0x760);
            lVar33 = lVar33 + 1;
            if (lVar33 < (long)uVar23) goto LAB_00f1c048;
            goto LAB_00f1c0d4;
          }
          lVar41 = lVar41 + 1;
        } while (lVar41 < (long)(uVar30 * 0x20000000) >> 0x20);
        uVar23 = (ulong)*(int *)(param_1 + 0x760);
        lVar33 = lVar33 + 1;
      } while (lVar33 < (long)uVar23);
LAB_00f1c0d4:
      local_d8 = 0xffffffffffffffff;
      uStack_d0 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
      if ((int)uVar23 < 1) {
        bVar28 = false;
        goto LAB_00f1c218;
      }
    }
    local_e0 = 0xffffffffffffffff;
    uStack_d0 = 0xffffffffffffffff;
    local_d8 = 0xffffffffffffffff;
    if (0 < iVar20) {
      uStack_d0 = 0xffffffffffffffff;
      local_d8 = 0xffffffffffffffff;
      local_e0 = 0xffffffffffffffff;
      uVar30 = uVar26 >> 3 & 0xffffffff;
      uVar60 = uVar26 >> 3 & 1;
      lVar33 = 0;
      do {
        while( true ) {
          plVar31 = (long *)(param_1 + lVar33 * 0x80 + 0x360);
          uVar29 = (undefined4)lVar33;
          if (uVar30 == 1) {
            lVar41 = 0;
          }
          else {
            lVar41 = 0;
            do {
              if ((*(int *)((long)&local_e0 + lVar41 * 4) == -1) &&
                 (*(float *)(*plVar31 + 0xb8) <
                  *(float *)(*(long *)(*(long *)(param_1 + 0x7c8) + lVar41 * 8) + 0xb8))) {
                *(undefined4 *)((long)&local_e0 + lVar41 * 4) = uVar29;
              }
              if ((*(int *)((long)&local_e0 + lVar41 * 4 + 4) == -1) &&
                 (*(float *)(*plVar31 + 0xb8) <
                  *(float *)(*(long *)(*(long *)(param_1 + 0x7c8) + lVar41 * 8 + 8) + 0xb8))) {
                *(undefined4 *)((long)&local_e0 + lVar41 * 4 + 4) = uVar29;
              }
              lVar41 = lVar41 + 2;
            } while (uVar30 - uVar60 != lVar41);
          }
          if (((uVar60 != 0) && (*(int *)((long)&local_e0 + lVar41 * 4) == -1)) &&
             (*(float *)(*plVar31 + 0xb8) <
              *(float *)(*(long *)(*(long *)(param_1 + 0x7c8) + lVar41 * 8) + 0xb8))) break;
          lVar33 = lVar33 + 1;
          if ((int)uVar23 <= lVar33) goto LAB_00f1c204;
        }
        *(undefined4 *)((long)&local_e0 + lVar41 * 4) = uVar29;
        lVar33 = lVar33 + 1;
      } while (lVar33 < (int)uVar23);
    }
LAB_00f1c204:
    bVar28 = true;
  }
LAB_00f1c218:
  fVar47 = DAT_01d4c47c;
  fVar44 = DAT_01d4c34c;
  uVar16 = DAT_01d4c0d0;
  uVar29 = DAT_01d4be68;
  lVar15 = _UNK_01d4b468;
  lVar14 = _DAT_01d4b460;
  lVar13 = _UNK_01d4aca8;
  lVar24 = _DAT_01d4aca0;
  lVar41 = _UNK_01d4a9d8;
  lVar33 = _DAT_01d4a9d0;
  local_2e4 = 0;
  uStack_2d8 = _UNK_01d4ac98;
  local_2e0 = _DAT_01d4ac90;
  local_2c8 = _UNK_01d4a228;
  local_2d0 = _DAT_01d4a220;
  local_2e8 = 0;
  lStack_298 = _UNK_01d4a228;
  local_2a0 = _DAT_01d4a220;
  lStack_288 = _UNK_01d4a228;
  local_290 = _DAT_01d4a220;
  uStack_278 = _UNK_01d4a788;
  uStack_280 = _DAT_01d4a780;
  uStack_e8 = _UNK_01d4b538;
  local_f0 = _DAT_01d4b530;
  uStack_2b8 = _UNK_01d4a788;
  local_2c0 = _DAT_01d4a780;
  uStack_2a8 = _UNK_01d4b538;
  uStack_2b0 = _DAT_01d4b530;
  uStack_268 = _UNK_01d4b538;
  local_270 = _DAT_01d4b530;
  pcStack_258 = _UNK_01d4ac98;
  uStack_260 = _DAT_01d4ac90;
  lStack_248 = _UNK_01d4a228;
  local_250 = _DAT_01d4a220;
  uStack_238 = _UNK_01d4a788;
  uStack_240 = _DAT_01d4a780;
  uStack_228 = _UNK_01d4b538;
  local_230 = _DAT_01d4b530;
  pcStack_218 = _UNK_01d4ac98;
  uStack_220 = _DAT_01d4ac90;
  lStack_208 = _UNK_01d4a228;
  local_210 = _DAT_01d4a220;
  uStack_1f8 = _UNK_01d4a788;
  uStack_200 = _DAT_01d4a780;
  uStack_1e8 = _UNK_01d4b538;
  local_1f0 = _DAT_01d4b530;
  pcStack_1d8 = _UNK_01d4ac98;
  uStack_1e0 = _DAT_01d4ac90;
  lStack_1c8 = _UNK_01d4a228;
  local_1d0 = _DAT_01d4a220;
  uStack_1b8 = _UNK_01d4a788;
  uStack_1c0 = _DAT_01d4a780;
  uStack_1a8 = _UNK_01d4b538;
  local_1b0 = _DAT_01d4b530;
  pcStack_198 = _UNK_01d4ac98;
  uStack_1a0 = _DAT_01d4ac90;
  lStack_188 = _UNK_01d4a228;
  local_190 = _DAT_01d4a220;
  uStack_178 = _UNK_01d4a788;
  uStack_180 = _DAT_01d4a780;
  uStack_168 = _UNK_01d4b538;
  local_170 = _DAT_01d4b530;
  pcStack_158 = _UNK_01d4ac98;
  uStack_160 = _DAT_01d4ac90;
  lStack_148 = _UNK_01d4a228;
  local_150 = _DAT_01d4a220;
  uStack_138 = _UNK_01d4a788;
  uStack_140 = _DAT_01d4a780;
  uStack_128 = _UNK_01d4b538;
  local_130 = _DAT_01d4b530;
  pcStack_118 = _UNK_01d4ac98;
  uStack_120 = _DAT_01d4ac90;
  lStack_108 = _UNK_01d4a228;
  local_110 = _DAT_01d4a220;
  uStack_f8 = _UNK_01d4a788;
  uStack_100 = _DAT_01d4a780;
  if (bVar28) {
    uVar60 = 0;
    uVar30 = 0;
    do {
      if (*(char *)((long)&local_c8 + uVar30) != '\0' && 0 < iVar20) {
        lVar36 = 0;
        iVar18 = 0;
        do {
          if (uVar30 == *(uint *)((long)&local_e0 + lVar36 * 4)) {
            auVar45 = *(undefined1 (*) [16])
                       (*(long *)(*(long *)(param_1 + 0x828) +
                                 (long)*(int *)((long)&local_b8 + uVar30 * 4) * 8) + 0xb0);
            pfVar3 = (float *)(&local_2e0 + uVar30 * 8 + (long)iVar18 * 2);
            lVar35 = *(long *)(param_1 + 0x7c8);
            fVar52 = auVar45._0_4_ + *pfVar3;
            fVar54 = auVar45._4_4_ + pfVar3[1];
            fVar58 = auVar45._8_4_ + pfVar3[2];
            fVar59 = auVar45._12_4_ + pfVar3[3];
            fVar50 = fVar44;
            if ((plVar22[0x52] != 0) && (lVar38 = *(long *)(plVar22[0x52] + 0x80), lVar38 != 0)) {
              plVar31 = (long *)(lVar38 + 0x48);
              (**(code **)(*plVar31 + 0x10))(plVar31);
              puVar40 = *(undefined8 **)(lVar38 + 0x60);
              if (puVar40 != (undefined8 *)0x0) {
                plVar34 = (long *)(**(code **)*puVar40)(puVar40);
                if (((*PTR_DAT_02715290 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(PTR_DAT_02715290), iVar21 != 0)) {
                  uVar32 = FUN_01590a70();
                  *(undefined8 *)PTR_DAT_02715298 = uVar32;
                  __cxa_guard_release(PTR_DAT_02715290);
                }
                for (; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
                  if (plVar34 == (long *)PTR_DAT_02715298) {
                    puVar40 = puVar40 + -10;
                    goto LAB_00f1c3fc;
                  }
                }
                puVar40 = (undefined8 *)0x0;
              }
LAB_00f1c3fc:
              (**(code **)(*plVar31 + 0x18))(plVar31);
              if ((puVar40 != (undefined8 *)0x0) && (*(int *)(puVar40 + 0x12) == 1)) {
                fVar50 = *(float *)(puVar40 + 0x16);
              }
            }
            fVar48 = *(float *)(plVar22 + 0x16) - fVar52;
            fVar51 = *(float *)((long)plVar22 + 0xb4) - fVar54;
            fVar53 = *(float *)(plVar22 + 0x17) - fVar58;
            fVar55 = *(float *)((long)plVar22 + 0xbc) - fVar59;
            auVar45._0_4_ = fVar48 * fVar48;
            auVar45._4_4_ = fVar51 * fVar51;
            auVar45._8_4_ = fVar53 * fVar53;
            auVar45._12_4_ = fVar55 * fVar55;
            fVar50 = fVar50 + fVar47 + 5.0;
            auVar57 = NEON_ext(auVar45,auVar45,8,1);
            if (auVar57._0_4_ + auVar45._0_4_ + auVar57._4_4_ + auVar45._4_4_ <= fVar50 * fVar50) {
              uVar27 = (uint)uVar30 & 0x7fffffff;
              if (uVar27 == 3) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar60;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar60;
                FUN_00a92cd0(uVar29,auVar8 << 0x40,auVar9 << 0x40);
                plVar22[0x15] = extraout_var_01;
                plVar22[0x14] = extraout_d0_01;
                *(undefined1 *)(plVar22 + 0x18) = 1;
                plVar22[0x17] = lVar15;
                plVar22[0x16] = lVar14;
                lVar38 = *(long *)PTR_DAT_027194e8;
                if ((lVar38 != 0) && (local_370 = *(long *)(lVar38 + 0x50), local_370 != 0)) {
                  plVar31 = (long *)(local_370 + 0x48);
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  piVar1 = (int *)(local_370 + 0x54);
                  if (*piVar1 != 0) {
                    FUN_00dfa940(lVar38);
                    iVar21 = *piVar1;
                    puVar11 = PTR_DAT_02719530;
                    do {
                      while( true ) {
                        if (iVar21 == 0) goto LAB_00f1c858;
                        plVar34 = *(long **)(local_370 + 0x58);
                        if ((*PTR_DAT_02719528 & 1) == 0) {
                          iVar19 = __cxa_guard_acquire(PTR_DAT_02719528);
                          puVar11 = PTR_DAT_02719530;
                          if (iVar19 != 0) {
                            uVar32 = FUN_015b5410();
                            *(undefined8 *)PTR_DAT_02719530 = uVar32;
                            __cxa_guard_release(PTR_DAT_02719528);
                            puVar11 = PTR_DAT_02719530;
                          }
                        }
                        while( true ) {
                          if (plVar34 == (long *)0x0) goto LAB_00f1c858;
                          if (plVar34 == (long *)puVar11) break;
                          plVar34 = (long *)*plVar34;
                        }
                        iVar19 = *piVar1;
                        if (iVar19 == iVar21) break;
                        ClearExclusiveLocal();
                        iVar21 = iVar19;
                      }
                      cVar2 = '\x01';
                      bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar28) {
                        *piVar1 = iVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      iVar21 = iVar19;
                      puVar11 = PTR_DAT_02719530;
                    } while (cVar2 != '\0');
LAB_00f1c834:
                    lVar38 = *(long *)(local_370 + 0x60);
                    if (lVar38 == 0) {
LAB_00f1c858:
                      FUN_00e8fec0(0);
                    }
                    else {
                      FUN_00e8fec0(lVar38 + -0x50);
                      (**(code **)(*(long *)(lVar38 + -8) + 0x18))((long *)(lVar38 + -8));
                    }
                  }
LAB_00f1c860:
                  (**(code **)(*plVar31 + 0x18))(plVar31);
                }
              }
              else if (uVar27 == 2) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar60;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar60;
                FUN_00a92cd0(uVar16,auVar6 << 0x40,auVar7 << 0x40);
                plVar22[0x15] = extraout_var_00;
                plVar22[0x14] = extraout_d0_00;
                *(undefined1 *)(plVar22 + 0x18) = 1;
                plVar22[0x17] = lVar41;
                plVar22[0x16] = lVar33;
                lVar38 = *(long *)PTR_DAT_027194e8;
                if ((lVar38 != 0) && (local_370 = *(long *)(lVar38 + 0x50), local_370 != 0)) {
                  plVar31 = (long *)(local_370 + 0x48);
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  piVar1 = (int *)(local_370 + 0x54);
                  if (*piVar1 != 0) {
                    FUN_00dfa940(lVar38);
                    iVar21 = *piVar1;
                    puVar11 = PTR_DAT_02719530;
                    do {
                      while( true ) {
                        if (iVar21 == 0) goto LAB_00f1c858;
                        plVar34 = *(long **)(local_370 + 0x58);
                        if ((*PTR_DAT_02719528 & 1) == 0) {
                          iVar19 = __cxa_guard_acquire(PTR_DAT_02719528);
                          puVar11 = PTR_DAT_02719530;
                          if (iVar19 != 0) {
                            uVar32 = FUN_015b5410();
                            *(undefined8 *)PTR_DAT_02719530 = uVar32;
                            __cxa_guard_release(PTR_DAT_02719528);
                            puVar11 = PTR_DAT_02719530;
                          }
                        }
                        while( true ) {
                          if (plVar34 == (long *)0x0) goto LAB_00f1c858;
                          if (plVar34 == (long *)puVar11) break;
                          plVar34 = (long *)*plVar34;
                        }
                        iVar19 = *piVar1;
                        if (iVar19 == iVar21) break;
                        ClearExclusiveLocal();
                        iVar21 = iVar19;
                      }
                      cVar2 = '\x01';
                      bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar28) {
                        *piVar1 = iVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      iVar21 = iVar19;
                      puVar11 = PTR_DAT_02719530;
                    } while (cVar2 != '\0');
                    goto LAB_00f1c834;
                  }
                  goto LAB_00f1c860;
                }
              }
              else if (uVar27 == 1) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar60;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar60;
                FUN_00a92cd0(uVar29,auVar4 << 0x40,auVar5 << 0x40);
                plVar22[0x15] = extraout_var;
                plVar22[0x14] = extraout_d0;
                *(undefined1 *)(plVar22 + 0x18) = 1;
                plVar22[0x17] = lVar13;
                plVar22[0x16] = lVar24;
                lVar38 = *(long *)PTR_DAT_027194e8;
                if ((lVar38 != 0) && (local_370 = *(long *)(lVar38 + 0x50), local_370 != 0)) {
                  plVar31 = (long *)(local_370 + 0x48);
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  piVar1 = (int *)(local_370 + 0x54);
                  if (*piVar1 != 0) {
                    FUN_00dfa940(lVar38);
                    iVar21 = *piVar1;
                    puVar11 = PTR_DAT_02719530;
                    do {
                      while( true ) {
                        if (iVar21 == 0) goto LAB_00f1c858;
                        plVar34 = *(long **)(local_370 + 0x58);
                        if ((*PTR_DAT_02719528 & 1) == 0) {
                          iVar19 = __cxa_guard_acquire(PTR_DAT_02719528);
                          puVar11 = PTR_DAT_02719530;
                          if (iVar19 != 0) {
                            uVar32 = FUN_015b5410();
                            *(undefined8 *)PTR_DAT_02719530 = uVar32;
                            __cxa_guard_release(PTR_DAT_02719528);
                            puVar11 = PTR_DAT_02719530;
                          }
                        }
                        while( true ) {
                          if (plVar34 == (long *)0x0) goto LAB_00f1c858;
                          if (plVar34 == (long *)puVar11) break;
                          plVar34 = (long *)*plVar34;
                        }
                        iVar19 = *piVar1;
                        if (iVar19 == iVar21) break;
                        ClearExclusiveLocal();
                        iVar21 = iVar19;
                      }
                      cVar2 = '\x01';
                      bVar28 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar28) {
                        *piVar1 = iVar21 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      iVar21 = iVar19;
                      puVar11 = PTR_DAT_02719530;
                    } while (cVar2 != '\0');
                    goto LAB_00f1c834;
                  }
                  goto LAB_00f1c860;
                }
              }
            }
            lVar39 = lVar36 * 8;
            lVar38 = *(long *)(lVar35 + lVar39);
            *(ulong *)(lVar38 + 0xb8) = CONCAT44(fVar59,fVar58);
            *(ulong *)(lVar38 + 0xb0) = CONCAT44(fVar54,fVar52);
            *(undefined1 *)(lVar38 + 0xc0) = 1;
            lVar38 = *(long *)(lVar35 + lVar39);
            uVar32 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
            *(undefined8 *)(lVar38 + 0xa0) = *(undefined8 *)PTR_DAT_027152c0;
            *(undefined8 *)(lVar38 + 0xa8) = uVar32;
            *(undefined1 *)(lVar38 + 0xc0) = 1;
            local_310 = 0;
            local_308 = (char *)0x0;
            FUN_00db3cc0(fVar47,*(undefined8 *)(lVar35 + lVar39),&local_310,2);
            *(undefined4 *)(param_1 + lVar39 + 0x7f8) = 0;
            lVar35 = FUN_00f21680(*(long *)(*(long *)(param_1 + 0x7c8) + lVar39) + 0x1e0);
            if (lVar35 != 0) {
              *(undefined1 *)(lVar35 + 0x69) = 1;
            }
            plVar34 = *(long **)(*(long *)(param_1 + 0x7c8) + lVar36 * 8);
            plVar31 = (long *)(**(code **)plVar34[10])();
            lVar35 = FUN_01590f40();
            for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
              if (plVar31 == (long *)lVar35) {
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar60;
                (**(code **)(*plVar34 + 0x180))(auVar10 << 0x40,plVar34,PTR_DAT_0271e870);
                (**(code **)(*plVar34 + 0x1e0))(plVar34);
                break;
              }
            }
            *(undefined1 *)((long)&local_2e8 + lVar36) = 1;
            if (2 < iVar18) break;
            iVar18 = iVar18 + 1;
          }
          lVar36 = lVar36 + 1;
        } while (lVar36 < (long)(uVar26 * 0x20000000) >> 0x20);
        uVar23 = (ulong)*(uint *)(param_1 + 0x760);
      }
      uVar30 = uVar30 + 1;
    } while ((long)uVar30 < (long)(int)uVar23);
  }
  puVar11 = PTR_DAT_02715298;
  local_310 = 0x98585525af8f443c;
  local_308 = "quick";
  local_300 = 5;
  local_2f8 = 0;
  puVar40 = *(undefined8 **)(param_1 + 0x7c8);
  puVar43 = *(undefined8 **)(param_1 + 2000);
  if (puVar40 != puVar43) {
    lVar33 = -1;
    do {
      if (*(char *)((long)&local_2e8 + lVar33 + 1) == '\0') {
        plVar31 = (long *)*puVar40;
        plVar22 = (long *)(**(code **)plVar31[10])();
        lVar41 = FUN_01590f40();
        for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
          if (plVar22 == (long *)lVar41) goto LAB_00f1ca30;
        }
        plVar31 = (long *)0x0;
LAB_00f1ca30:
        bVar28 = true;
        (**(code **)(*plVar31 + 0x1a8))(plVar31,&local_310,1);
        if (plVar31[0x6c] == 0) {
          lVar41 = 0;
          lVar24 = FUN_00f21680(plVar31 + 0x3c);
        }
        else {
          lVar41 = *(long *)(plVar31[0x6c] + 0x80);
          if (lVar41 == 0) {
            bVar28 = true;
            lVar24 = FUN_00f21680(plVar31 + 0x3c);
          }
          else {
            (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))((long *)(lVar41 + 0x48));
            if (*(int *)(lVar41 + 0x54) == 0) {
              bVar28 = false;
              lVar24 = FUN_00f21680(plVar31 + 0x3c);
            }
            else {
              puVar37 = *(undefined8 **)(lVar41 + 0x60);
              plVar22 = (long *)(**(code **)*puVar37)(puVar37);
              if (((*PTR_DAT_02715290 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_02715290), iVar20 != 0)) {
                uVar32 = FUN_01590a70();
                *(undefined8 *)puVar11 = uVar32;
                __cxa_guard_release(PTR_DAT_02715290);
              }
              for (; plVar22 != (long *)puVar11; plVar22 = (long *)*plVar22) {
              }
              bVar28 = false;
              *(undefined1 *)(puVar37 + 2) = 0;
              lVar24 = FUN_00f21680(plVar31 + 0x3c);
            }
          }
        }
        if (lVar24 != 0) {
          FUN_00f26790();
        }
        if (!bVar28) {
          (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
        }
      }
      puVar40 = puVar40 + 1;
      lVar33 = lVar33 + 1;
    } while (puVar40 != puVar43);
    if (local_2f8 != 0) {
      (**(code **)(*(long *)(local_2f8 + 0x48) + 0x18))();
      local_2f8 = 0;
    }
  }
  iVar21 = FUN_015114c0(lVar42,*(undefined8 *)(param_1 + 0xa08));
  iVar18 = *(int *)(param_1 + 0x760);
  iVar20 = iVar18;
  if (iVar21 <= iVar18) {
    iVar20 = iVar21;
  }
  *(int *)(param_1 + 0x9b0) = iVar20;
  puVar17 = PTR_DAT_027208d0;
  puVar11 = PTR_DAT_027208c8;
  if (iVar20 < 1) {
LAB_00f1ce64:
    if (iVar20 != iVar18) {
LAB_00f1ce6c:
      puVar17 = PTR_DAT_0271fd60;
      puVar11 = PTR_DAT_0271fd58;
      local_2e0 = 0x98585525af8f443c;
      uStack_2d8 = "quick";
      local_2d0 = 5;
      local_2c8 = 0;
      puVar40 = *(undefined8 **)(param_1 + 0x70);
      puVar43 = *(undefined8 **)(param_1 + 0x78);
      if (puVar40 != puVar43) {
        do {
          plVar31 = (long *)*puVar40;
          plVar22 = (long *)(**(code **)plVar31[10])();
          if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
            uVar32 = FUN_01590f40();
            *(undefined8 *)puVar17 = uVar32;
            __cxa_guard_release(puVar11);
          }
          for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
            if (plVar22 == (long *)puVar17) goto LAB_00f1cf10;
          }
          plVar31 = (long *)0x0;
LAB_00f1cf10:
          (**(code **)(*plVar31 + 0x1a8))(plVar31,&local_2e0,1);
          puVar40 = puVar40 + 1;
        } while (puVar40 != puVar43);
        if (local_2c8 != 0) {
          (**(code **)(*(long *)(local_2c8 + 0x48) + 0x18))();
          local_2c8 = 0;
        }
      }
    }
  }
  else {
    lVar33 = 0;
    do {
      lVar24 = *(long *)(param_1 + lVar33 * 0x80 + 0x360);
      *(undefined1 *)(lVar24 + 0x218) = 0;
      lVar41 = nn::os::GetCurrentThread();
      plVar22 = (long *)(lVar24 + 0xf0);
      do {
        if (*plVar22 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0xe4));
            while (*plVar22 == 0) {
              cVar2 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar28) {
                *plVar22 = lVar41;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00f1cbec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar28) {
          *plVar22 = lVar41;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00f1cbec:
      plVar31 = *(long **)(lVar24 + 0x140);
      plVar34 = *(long **)(lVar24 + 0x148);
      if (plVar34 == plVar31) {
LAB_00f1cc7c:
        plVar31 = *(long **)(lVar24 + 0x110);
        plVar34 = *(long **)(lVar24 + 0x118);
        if (plVar34 == plVar31) {
          lVar41 = 0;
        }
        else {
          do {
            lVar41 = *plVar31;
            puVar40 = (undefined8 *)(lVar41 + 8);
            plVar25 = (long *)(**(code **)*puVar40)(puVar40);
            if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
              uVar32 = FUN_00706e40();
              *(undefined8 *)puVar17 = uVar32;
              __cxa_guard_release(puVar11);
            }
            for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
              if (plVar25 == (long *)puVar17) {
                if (*(int *)(lVar41 + 0x60) == 2) {
                  if (*(long **)(lVar24 + 0x118) != plVar31) goto LAB_00f1cd24;
                  goto LAB_00f1cb90;
                }
                break;
              }
            }
            plVar31 = plVar31 + 1;
          } while (plVar31 != plVar34);
          plVar31 = plVar34;
          if (*(long **)(lVar24 + 0x118) != plVar34) goto LAB_00f1cd24;
LAB_00f1cb90:
          lVar41 = 0;
        }
      }
      else {
        do {
          lVar41 = *plVar31;
          puVar40 = (undefined8 *)(lVar41 + 8);
          plVar25 = (long *)(**(code **)*puVar40)(puVar40);
          if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
            uVar32 = FUN_00706e40();
            *(undefined8 *)puVar17 = uVar32;
            __cxa_guard_release(puVar11);
          }
          for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            if (plVar25 == (long *)puVar17) {
              if (*(int *)(lVar41 + 0x60) == 2) {
                if (*(long **)(lVar24 + 0x148) != plVar31) goto LAB_00f1cd24;
                goto LAB_00f1cc7c;
              }
              break;
            }
          }
          plVar31 = plVar31 + 1;
        } while (plVar31 != plVar34);
        plVar31 = plVar34;
        if (*(long **)(lVar24 + 0x148) == plVar34) goto LAB_00f1cc7c;
LAB_00f1cd24:
        lVar41 = 0;
        if (*plVar31 != 0) {
          lVar41 = *plVar31 + -0x48;
        }
      }
      do {
        cVar2 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar28) {
          *plVar22 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0xe4));
      FUN_00e84520(lVar41,0);
      iVar20 = *(int *)(param_1 + 0x9b0);
      lVar33 = lVar33 + 1;
    } while (lVar33 < iVar20);
    iVar18 = *(int *)(param_1 + 0x760);
    if (iVar20 != iVar18) goto LAB_00f1ce64;
    plVar22 = *(long **)(param_1 + 0x70);
    plVar31 = *(long **)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x9e0) = 0;
    puVar17 = PTR_DAT_0271fd60;
    puVar11 = PTR_DAT_0271fd58;
    if (plVar22 == plVar31) goto LAB_00f1ce64;
    do {
      lVar33 = *plVar22;
      plVar34 = (long *)(*(code *)**(undefined8 **)(lVar33 + 0x50))();
      if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
        uVar32 = FUN_01590f40();
        *(undefined8 *)puVar17 = uVar32;
        __cxa_guard_release(puVar11);
      }
      for (; plVar34 != (long *)puVar17; plVar34 = (long *)*plVar34) {
      }
      plVar34 = *(long **)(lVar33 + 0x1f0);
      plVar25 = *(long **)(lVar33 + 0x1e8);
      do {
        if (plVar25 == plVar34) {
          lVar41 = 0;
          break;
        }
        lVar41 = *plVar25;
        uVar23 = FUN_00f217c0(lVar41 + 0x50);
        plVar25 = plVar25 + 1;
      } while ((uVar23 & 1) == 0);
      *(undefined4 *)(lVar41 + 0x60) = 6;
      *(undefined1 *)(lVar41 + 0x6a) = 0;
      local_2e0 = 0;
      uStack_2d8 = (char *)0x0;
      FUN_00db3cc0(lVar33,&local_2e0,0x100);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar31);
    if (*(int *)(param_1 + 0x9b0) != *(int *)(param_1 + 0x760)) goto LAB_00f1ce6c;
  }
  if (*(int *)(param_1 + 0x998) < 1) {
    plVar31 = *(long **)(param_1 + 0x78);
    plVar22 = *(long **)(param_1 + 0x70);
    if (plVar31 != plVar22) goto LAB_00f1d094;
LAB_00f1d0ec:
    uVar27 = 0;
    iVar20 = *(int *)(param_1 + 0x9b0);
  }
  else {
    lVar41 = 0;
    lVar33 = param_1 + 0xa30;
    plVar22 = (long *)(param_1 + 0x878);
    do {
      if (lVar41 < *(int *)(param_1 + 0x9b0)) {
        *(undefined1 *)(plVar22[-3] + 0x218) = 0;
        *(undefined1 *)(plVar22[-2] + 0x218) = 0;
        *(undefined1 *)(plVar22[-1] + 0x218) = 0;
        *(undefined1 *)(*plVar22 + 0x218) = 0;
      }
      else {
        (**(code **)(*(long *)plVar22[-4] + 0x1b0))((long *)plVar22[-4],param_1 + 0xa10);
        lVar24 = (long)*(int *)(param_1 + 0x998);
        if (lVar41 < lVar24) {
          plVar31 = (long *)plVar22[-2];
          (**(code **)(*(long *)plVar22[-3] + 400))((long *)plVar22[-3],lVar33,0);
          (**(code **)(*plVar31 + 400))(plVar31,lVar33,0);
          lVar24 = (long)*(int *)(param_1 + 0x998);
        }
        if (lVar41 < lVar24) {
          uVar23 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70);
          uVar27 = (uint)(uVar23 >> 3);
          if (uVar27 < 100) {
            iVar18 = (int)((uVar23 >> 3 & 0xff) / 10);
            plVar31 = (long *)*plVar22;
            iVar20 = 0;
            if (9 < (int)uVar27) {
              iVar20 = iVar18;
            }
            if (9 < (int)uVar27) {
              uVar27 = uVar27 + iVar18 * -10 & 0xff;
            }
            (**(code **)(*(long *)plVar22[-1] + 400))((long *)plVar22[-1],lVar33,iVar20);
            (**(code **)(*plVar31 + 400))(plVar31,lVar33,uVar27);
          }
        }
      }
      lVar41 = lVar41 + 1;
      plVar22 = plVar22 + 5;
    } while (lVar41 < *(int *)(param_1 + 0x998));
    plVar31 = *(long **)(param_1 + 0x78);
    plVar22 = *(long **)(param_1 + 0x70);
    if (plVar31 == plVar22) goto LAB_00f1d0ec;
LAB_00f1d094:
    puVar17 = PTR_DAT_0271fd60;
    puVar11 = PTR_DAT_0271fd58;
    iVar20 = *(int *)(param_1 + 0x9b0);
    if (iVar20 < *(int *)(param_1 + 0x760)) {
      if (plVar22 == plVar31) goto LAB_00f1d0ec;
      lVar33 = param_1 + (long)iVar20 * 0x80;
      uVar27 = 0;
      do {
        lVar41 = *plVar22;
        plVar34 = (long *)(*(code *)**(undefined8 **)(lVar41 + 0x50))();
        if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
          uVar32 = FUN_01590f40();
          *(undefined8 *)puVar17 = uVar32;
          __cxa_guard_release(puVar11);
        }
        for (; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
          if (plVar34 == (long *)puVar17) goto LAB_00f1d1ec;
        }
        lVar41 = 0;
LAB_00f1d1ec:
        lVar24 = *(long *)(*(long *)(lVar41 + 0x410) + 0x60);
        uVar23 = FUN_00a8cbe0(lVar24);
        auVar45 = *(undefined1 (*) [16])(lVar41 + 0xb0);
        auVar57 = NEON_ext(auVar45,auVar45,8,1);
        lVar24 = lVar24 + -0x50;
        if ((uVar23 & 1) == 0) {
          lVar24 = 0;
        }
        lVar41 = *(long *)(lVar24 + 0x108);
        plVar22 = plVar22 + 1;
        auVar46._0_4_ = (*(float *)(lVar41 + 0x1c0) + auVar45._0_4_) - *(float *)(lVar33 + 0x3b0);
        auVar46._4_4_ = (*(float *)(lVar41 + 0x1c4) + auVar45._4_4_) - *(float *)(lVar33 + 0x3b4);
        auVar46._8_4_ = (*(float *)(lVar41 + 0x1c8) + auVar57._0_4_) - *(float *)(lVar33 + 0x3b8);
        auVar46._12_4_ = (*(float *)(lVar41 + 0x1cc) + 0.0) - *(float *)(lVar33 + 0x3bc);
        auVar56 = *(undefined1 (*) [16])(lVar33 + 0x3c0);
        auVar49._0_4_ = auVar56._0_4_ - (*(float *)(lVar41 + 0x1b0) + auVar45._0_4_);
        auVar49._4_4_ = auVar56._4_4_ - (*(float *)(lVar41 + 0x1b4) + auVar45._4_4_);
        auVar49._8_4_ = auVar56._8_4_ - (*(float *)(lVar41 + 0x1b8) + auVar57._0_4_);
        auVar49._12_4_ = auVar56._12_4_ - (*(float *)(lVar41 + 0x1bc) + 0.0);
        auVar45 = NEON_fmin(auVar46,auVar49,4);
        uVar27 = uVar27 + (0.0 <= auVar45._8_4_ && (0.0 <= auVar45._0_4_ && 0.0 <= auVar45._4_4_));
      } while (plVar22 != plVar31);
      iVar20 = *(int *)(param_1 + 0x9b0);
    }
    else {
      uVar27 = 0;
    }
  }
  if (((-1 < iVar20) && (uVar27 < 100)) && (iVar20 < *(int *)(param_1 + 0x998))) {
    lVar33 = param_1 + (long)iVar20 * 0x28;
    plVar31 = *(long **)(lVar33 + 0x868);
    plVar22 = *(long **)(lVar33 + 0x860);
    if ((int)uVar27 < 10) {
      uVar23 = 0;
    }
    else {
      uVar23 = (ulong)(uVar27 & 0xff) / 10;
      uVar27 = uVar27 + ((uVar27 & 0xff) / 10) * -10 & 0xff;
    }
    (**(code **)(*plVar22 + 400))(plVar22,param_1 + 0xa30,uVar23);
    (**(code **)(*plVar31 + 400))(plVar31,param_1 + 0xa30,uVar27);
    iVar20 = *(int *)(param_1 + 0x9b0);
  }
  iVar18 = *(int *)(param_1 + 0x760);
  local_2e0 = 0xdd2e397a2ee50f50;
  uStack_2d8 = "gate_open_close";
  local_2d0 = 0xf;
  local_2c8 = 0;
  uVar29 = 0;
  if (iVar20 != iVar18) {
    uVar29 = DAT_01d4c5c0;
  }
  (**(code **)(**(long **)(param_1 + 0x9a0) + 0x180))(uVar29,*(long **)(param_1 + 0x9a0),&local_2e0)
  ;
  if (iVar20 != iVar18) {
    lVar41 = *(long *)(param_1 + 0x9a0);
    lVar33 = nn::os::GetCurrentThread();
    plVar22 = (long *)(lVar41 + 0xf0);
    do {
      if (*plVar22 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar41 + 0xe4));
          while (*plVar22 == 0) {
            cVar2 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar28) {
              *plVar22 = lVar33;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00f1d330;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar28) {
        *plVar22 = lVar33;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00f1d330:
    puVar17 = PTR_DAT_027208d0;
    puVar11 = PTR_DAT_027208c8;
    plVar31 = *(long **)(lVar41 + 0x140);
    plVar34 = *(long **)(lVar41 + 0x148);
    if (plVar34 == plVar31) {
LAB_00f1d3f4:
      puVar17 = PTR_DAT_027208d0;
      puVar11 = PTR_DAT_027208c8;
      plVar31 = *(long **)(lVar41 + 0x110);
      plVar34 = *(long **)(lVar41 + 0x118);
      if (plVar34 == plVar31) {
        lVar33 = 0;
      }
      else {
        do {
          lVar33 = *plVar31;
          puVar40 = (undefined8 *)(lVar33 + 8);
          plVar25 = (long *)(**(code **)*puVar40)(puVar40);
          if (((*puVar11 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar11), iVar21 != 0)) {
            uVar32 = FUN_00706e40();
            *(undefined8 *)puVar17 = uVar32;
            __cxa_guard_release(puVar11);
          }
          for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            if (plVar25 == (long *)puVar17) {
              if (*(int *)(lVar33 + 0x60) == 2) {
                plVar34 = plVar31;
                goto LAB_00f1d4b4;
              }
              break;
            }
          }
          plVar31 = plVar31 + 1;
        } while (plVar31 != plVar34);
LAB_00f1d4b4:
        if (*(long **)(lVar41 + 0x118) == plVar34) {
          lVar33 = 0;
        }
        else {
          lVar33 = 0;
          if (*plVar34 != 0) {
            lVar33 = *plVar34 + -0x48;
          }
        }
      }
    }
    else {
      do {
        lVar33 = *plVar31;
        puVar40 = (undefined8 *)(lVar33 + 8);
        plVar25 = (long *)(**(code **)*puVar40)(puVar40);
        if (((*puVar11 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar11), iVar21 != 0)) {
          uVar32 = FUN_00706e40();
          *(undefined8 *)puVar17 = uVar32;
          __cxa_guard_release(puVar11);
        }
        for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
          if (plVar25 == (long *)puVar17) {
            if (*(int *)(lVar33 + 0x60) == 2) {
              if (*(long **)(lVar41 + 0x148) != plVar31) goto LAB_00f1d3d0;
              goto LAB_00f1d3f4;
            }
            break;
          }
        }
        plVar31 = plVar31 + 1;
      } while (plVar31 != plVar34);
      plVar31 = plVar34;
      if (*(long **)(lVar41 + 0x148) == plVar34) goto LAB_00f1d3f4;
LAB_00f1d3d0:
      lVar33 = 0;
      if (*plVar31 != 0) {
        lVar33 = *plVar31 + -0x48;
      }
    }
    do {
      cVar2 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar28) {
        *plVar22 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar41 + 0xe4));
    FUN_00e84520(lVar33,0);
  }
  if (local_2c8 != 0) {
    (**(code **)(*(long *)(local_2c8 + 0x48) + 0x18))();
  }
  local_2e0 = 0xdd2e397a2ee50f50;
  uStack_2d8 = "gate_open_close";
  local_2d0 = 0xf;
  local_2c8 = 0;
  (**(code **)(**(long **)(param_1 + 0x9a8) + 0x180))(uVar29,*(long **)(param_1 + 0x9a8),&local_2e0)
  ;
  if (iVar20 != iVar18) {
    lVar41 = *(long *)(param_1 + 0x9a8);
    lVar33 = nn::os::GetCurrentThread();
    plVar22 = (long *)(lVar41 + 0xf0);
    do {
      if (*plVar22 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar41 + 0xe4));
          while (*plVar22 == 0) {
            cVar2 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar28) {
              *plVar22 = lVar33;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00f1d5a8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar28) {
        *plVar22 = lVar33;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00f1d5a8:
    puVar17 = PTR_DAT_027208d0;
    puVar11 = PTR_DAT_027208c8;
    plVar31 = *(long **)(lVar41 + 0x140);
    plVar34 = *(long **)(lVar41 + 0x148);
    if (plVar34 == plVar31) {
LAB_00f1d648:
      puVar17 = PTR_DAT_027208d0;
      puVar11 = PTR_DAT_027208c8;
      plVar34 = *(long **)(lVar41 + 0x110);
      plVar31 = *(long **)(lVar41 + 0x118);
      if (plVar31 == plVar34) {
        lVar33 = 0;
      }
      else {
        do {
          lVar33 = *plVar34;
          puVar40 = (undefined8 *)(lVar33 + 8);
          plVar25 = (long *)(**(code **)*puVar40)(puVar40);
          if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
            uVar32 = FUN_00706e40();
            *(undefined8 *)puVar17 = uVar32;
            __cxa_guard_release(puVar11);
          }
          for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
            if (plVar25 == (long *)puVar17) {
              if (*(int *)(lVar33 + 0x60) == 2) {
                plVar31 = plVar34;
                goto LAB_00f1d700;
              }
              break;
            }
          }
          plVar34 = plVar34 + 1;
        } while (plVar34 != plVar31);
LAB_00f1d700:
        if (*(long **)(lVar41 + 0x118) != plVar31) goto LAB_00f1d70c;
        lVar33 = 0;
      }
    }
    else {
      do {
        lVar33 = *plVar31;
        puVar40 = (undefined8 *)(lVar33 + 8);
        plVar25 = (long *)(**(code **)*puVar40)(puVar40);
        if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar11), iVar20 != 0)) {
          uVar32 = FUN_00706e40();
          *(undefined8 *)puVar17 = uVar32;
          __cxa_guard_release(puVar11);
        }
        for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
          if (plVar25 == (long *)puVar17) {
            if (*(int *)(lVar33 + 0x60) == 2) {
              if (*(long **)(lVar41 + 0x148) != plVar31) goto LAB_00f1d70c;
              goto LAB_00f1d648;
            }
            break;
          }
        }
        plVar31 = plVar31 + 1;
      } while (plVar31 != plVar34);
      plVar31 = plVar34;
      if (*(long **)(lVar41 + 0x148) == plVar34) goto LAB_00f1d648;
LAB_00f1d70c:
      lVar33 = 0;
      if (*plVar31 != 0) {
        lVar33 = *plVar31 + -0x48;
      }
    }
    do {
      cVar2 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar28) {
        *plVar22 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar41 + 0xe4));
    FUN_00e84520(lVar33,0);
  }
  if (local_2c8 != 0) {
    (**(code **)(*(long *)(local_2c8 + 0x48) + 0x18))();
    local_2c8 = 0;
  }
  if (*(int *)(param_1 + 0x9b0) < *(int *)(param_1 + 0x760)) {
    fVar47 = *(float *)(param_1 + 0x9c8) + *(float *)(param_1 + 0x9d8);
    fVar44 = (*(float *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x9b0) * 0x80 + 0x360) + 0xb8)
              + DAT_01d4c580 + fVar47) * 0.5;
    *(float *)(param_1 + 0x9c8) = fVar44;
    *(undefined4 *)(param_1 + 0x9cc) = 0;
    *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_1 + 0x9c0);
    *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_1 + 0x9c4);
    *(float *)(param_1 + 0x9d8) = fVar47 - fVar44;
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_1 + 0x9d0);
    *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_1 + 0x9d4);
    uVar32 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x9e0) = 0;
    uVar32 = 1;
  }
joined_r0x00f1d7c0:
  if (lVar42 != 0) {
    (**(code **)(*(long *)(lVar42 + 0x48) + 0x18))((long *)(lVar42 + 0x48));
  }
  return uVar32;
}


