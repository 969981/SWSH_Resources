/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00592350; name: FUN_00592350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00592350(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                long *param_7,uint param_8,undefined4 param_9,float *param_10,long param_11,
                undefined8 param_12,byte param_13,uint param_14,uint param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float __x;
  undefined8 local_318;
  undefined8 local_310;
  long local_308;
  long lStack_300;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  undefined8 local_190;
  float local_188;
  float local_184;
  undefined8 local_180;
  float local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  undefined8 local_160;
  float local_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  float local_144;
  undefined8 local_140;
  float local_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  
  iVar3 = -1;
  if (*(long **)(param_4 + 0x20) != (long *)0x0) {
    if ((param_13 & 1) != 0) {
      (**(code **)(**(long **)(param_4 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_4 + 0x20) + 0x140))(*(long **)(param_4 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_4 + 0x20) + 0x150))(*(long **)(param_4 + 0x20),0);
    }
    lVar10 = param_5;
    do {
      lVar16 = lVar10;
      lVar10 = *(long *)(lVar16 + 0x120);
    } while (lVar10 != 0);
    uVar1 = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
    lVar10 = param_6;
    do {
      lVar16 = lVar10;
      lVar10 = *(long *)(lVar16 + 0x120);
    } while (lVar10 != 0);
    uVar2 = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
    lVar10 = param_5;
    do {
      lVar16 = lVar10;
      lVar10 = *(long *)(lVar16 + 0x120);
    } while (lVar10 != 0);
    plVar4 = *(long **)(lVar16 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,8);
    lVar10 = param_6;
    do {
      lVar16 = lVar10;
      lVar10 = *(long *)(lVar16 + 0x120);
    } while (lVar10 != 0);
    plVar4 = *(long **)(lVar16 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,8);
    local_b8 = 0xffffffff;
    lVar10 = *param_7;
    if (*param_7 != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      local_b8 = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
      lVar10 = *param_7;
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,8);
    }
    local_b4 = 0xffffffff;
    lVar10 = param_7[1];
    if (param_7[1] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      local_b4 = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
      lVar10 = param_7[1];
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,8);
    }
    local_b0 = 0xffffffff;
    lVar10 = param_7[2];
    if (param_7[2] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      local_b0 = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
      lVar10 = param_7[2];
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,8);
    }
    local_ac = 0xffffffff;
    lVar10 = param_7[3];
    if (param_7[3] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      local_ac = (**(code **)(**(long **)(lVar16 + 0xa8) + 0x80))();
      lVar10 = param_7[3];
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,8);
    }
    uVar6 = param_14;
    if (param_14 == 0) {
      uVar6 = *(uint *)(param_5 + 0x54);
    }
    uVar9 = param_15;
    if (param_15 == 0) {
      uVar9 = *(uint *)(param_5 + 0x58);
    }
    if (param_14 == 0) {
      param_14 = *(uint *)(param_6 + 0x54);
    }
    if (param_15 == 0) {
      param_15 = *(uint *)(param_6 + 0x58);
    }
    fVar25 = *(float *)(param_5 + 0x88) * (float)uVar6 + *(float *)(param_5 + 0x90);
    fVar26 = *(float *)(param_5 + 0x8c) * (float)uVar9 + *(float *)(param_5 + 0x94);
    fVar27 = (float)param_14;
    fVar28 = (float)param_15;
    fVar30 = (*(float *)(param_5 + 0x88) + *(float *)(param_5 + 0x90)) * param_3;
    param_3 = (*(float *)(param_5 + 0x8c) + *(float *)(param_5 + 0x94)) * param_3;
    fVar17 = sinf(param_1);
    fVar18 = cosf(param_1);
    fVar29 = DAT_01d4c664;
    fVar24 = DAT_01d4c604;
    fVar22 = DAT_01d4c284;
    fVar21 = DAT_01d4bb38;
    if ((int)param_8 < 6) {
      if (((DAT_02760728 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02760728), iVar3 != 0)) {
        __cxa_guard_release(&DAT_02760728);
      }
      if (DAT_027605d6 == '\x01') {
        fVar21 = DAT_0276083c._4_4_;
        fVar22 = DAT_0276082c._4_4_;
        fVar24 = DAT_02760824;
        fVar29 = DAT_02760834;
        fVar19 = DAT_0276081c._4_4_;
      }
      else {
        DAT_027605d6 = '\x01';
        DAT_02760810 = 0.0;
        DAT_02760808 = 0;
        DAT_02760804 = 0.0;
        _DAT_02760800 = 0;
        _DAT_02760814 = 0x3f800000;
        DAT_0276081c = 0xbf5db3d800000000;
        _DAT_02760824 = 0x3effffff;
        DAT_0276082c = 0xbf5db3d700000000;
        _DAT_02760834 = 0xbf000001;
        DAT_0276083c = 0x33bbbd2e00000000;
        _DAT_02760844 = 0xbf800000;
        DAT_0276084c = 0x3f5db3d800000000;
        DAT_02760854 = 0xbefffffd;
        DAT_0276085c = 0x3f5db3d400000000;
        DAT_02760864 = 0x3f000006;
        DAT_0276086c = 0;
        DAT_02760814 = 1.0;
        DAT_02760844 = -1.0;
        DAT_02760800 = 0.0;
        fVar21 = DAT_01d4bb00;
        fVar22 = DAT_01d4bcec;
        fVar24 = DAT_01d4c6e0;
        fVar29 = DAT_01d4c668;
        fVar19 = DAT_01d4c328;
      }
      local_1e4 = param_3 * (fVar17 * DAT_02760800 + fVar18 * DAT_02760804);
      local_1d4 = param_3 * (fVar17 * DAT_02760810 + fVar18 * DAT_02760814);
      local_1c8 = fVar30 * (fVar18 * fVar19 - fVar17 * fVar24);
      local_1c4 = param_3 * (fVar17 * fVar19 + fVar18 * fVar24);
      uVar6 = 7;
      if (param_8 != 3) {
        uVar6 = 0x13;
      }
      local_1d8 = fVar30 * (fVar18 * DAT_02760810 - fVar17 * DAT_02760814);
      local_1e8 = fVar30 * (fVar18 * DAT_02760800 - fVar17 * DAT_02760804);
      local_1b8 = fVar30 * (fVar18 * fVar22 - fVar17 * fVar29);
      local_1b4 = param_3 * (fVar17 * fVar22 + fVar18 * fVar29);
      local_1a8 = fVar30 * (fVar18 * fVar21 - fVar17 * DAT_02760844);
      local_1a4 = param_3 * (fVar17 * fVar21 + fVar18 * DAT_02760844);
      local_198 = fVar30 * (fVar18 * DAT_0276084c._4_4_ - fVar17 * (float)DAT_02760854);
      local_194 = param_3 * (fVar17 * DAT_0276084c._4_4_ + fVar18 * (float)DAT_02760854);
      local_188 = fVar30 * (fVar18 * DAT_0276085c._4_4_ - fVar17 * (float)DAT_02760864);
      local_184 = param_3 * (fVar17 * DAT_0276085c._4_4_ + fVar18 * (float)DAT_02760864);
      local_1e0 = 0;
      local_1d0 = 0;
      local_1c0 = 0;
      local_1b0 = 0;
      local_1a0 = 0;
      local_190 = 0;
      local_180 = 0;
      if (param_8 == 5) {
        local_174 = local_1d4 + local_1d4;
        local_164 = local_1c4 + local_1c4;
        local_154 = local_1b4 + local_1b4;
        local_144 = local_1a4 + local_1a4;
        local_134 = local_194 + local_194;
        local_178 = local_1d8 + local_1d8;
        local_158 = local_1b8 + local_1b8;
        local_148 = local_1a8 + local_1a8;
        local_138 = local_198 + local_198;
        local_128 = local_188 + local_188;
        local_124 = local_184 + local_184;
        local_160 = 0;
        local_150 = 0;
        local_140 = 0;
        local_168 = local_1c8 + local_1c8;
        local_170 = 0;
        local_e4 = (local_144 + local_134) * 0.5;
        local_108 = (local_168 + local_158) * 0.5;
        local_104 = (local_164 + local_154) * 0.5;
        local_f8 = (local_158 + local_148) * 0.5;
        local_e8 = (local_148 + local_138) * 0.5;
        local_118 = (local_178 + local_168) * 0.5;
        local_114 = (local_174 + local_164) * 0.5;
        local_120 = 0;
        local_d4 = (local_134 + local_124) * 0.5;
        local_f4 = (local_154 + local_144) * 0.5;
        local_d8 = (local_138 + local_128) * 0.5;
        local_16c = 0;
        local_110 = 0;
        local_10c = 0;
        local_100 = 0;
        local_c8 = (local_128 + local_178) * 0.5;
        local_c4 = (local_124 + local_174) * 0.5;
        local_f0 = 0;
        local_e0 = 0;
        local_130 = 0;
        local_d0 = 0;
        local_bc = 0;
        local_c0 = 0;
      }
      fVar24 = param_10[2];
      fVar29 = param_10[3];
      param_2 = (1.0 / (float)uVar6) * param_2;
      fVar21 = *param_10;
      fVar22 = param_10[1];
      pfVar8 = (float *)&local_310;
      uVar15 = (ulong)uVar6;
      do {
        pfVar8[-2] = param_2 * fVar21;
        pfVar8[-1] = param_2 * fVar22;
        uVar15 = uVar15 - 1;
        *pfVar8 = param_2 * fVar24;
        pfVar8[1] = param_2 * fVar29;
        pfVar8 = pfVar8 + 4;
      } while (uVar15 != 0);
      iVar3 = FUN_0059d300(param_6,0,0,1,0,0);
      if (iVar3 < 0) {
        return iVar3;
      }
      lVar10 = param_5;
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      uVar5 = *(undefined8 *)(lVar16 + 0xa8);
      if (param_11 == 0) {
        iVar3 = FUN_00575a10(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,uVar6,&local_1e8,&local_318
                             ,uVar5,param_9,0);
      }
      else {
        do {
          lVar10 = param_11;
          param_11 = *(long *)(lVar10 + 0x120);
        } while (param_11 != 0);
        iVar3 = FUN_00576340(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,(ulong)uVar6,&local_1e8,
                             &local_318,param_12,uVar5,*(undefined8 *)(lVar10 + 0xa8),param_9,0);
      }
    }
    else if ((param_8 == 0x11) || (param_8 == 9)) {
      uVar9 = param_8 >> 1 & 0x7f;
      uVar6 = uVar9 + 1;
      fVar17 = 1.0 / (float)uVar9;
      fVar18 = 1.0 / (float)uVar6;
      uVar15 = 0;
      do {
        while( true ) {
          __x = ((float)(int)uVar15 * fVar29 * fVar21) / fVar22 + param_1;
          fVar19 = sinf(__x);
          fVar20 = cosf(__x);
          if (uVar9 != 0) {
            uVar7 = 0;
            pfVar8 = (float *)&local_310;
            puVar13 = &local_1e0;
            do {
              iVar3 = (int)uVar7;
              uVar7 = uVar7 + 1;
              fVar23 = (float)iVar3 + 1.0;
              *puVar13 = 0;
              pfVar8[-2] = fVar17;
              pfVar8[-1] = fVar17;
              *pfVar8 = fVar17;
              pfVar8[1] = fVar17;
              *(float *)(puVar13 + -1) = fVar30 * (fVar20 * 0.0 - fVar19) * fVar23;
              *(float *)((long)puVar13 + -4) = param_3 * (fVar19 * 0.0 + fVar20) * fVar23;
              puVar13 = puVar13 + 2;
              pfVar8 = pfVar8 + 4;
            } while (uVar9 != uVar7);
          }
          lVar16 = param_7[3];
          iVar3 = FUN_0059d300(lVar16,0,0,1,0,0);
          lVar10 = param_5;
          if (iVar3 < 0) {
            return iVar3;
          }
          do {
            lVar12 = lVar10;
            lVar10 = *(long *)(lVar12 + 0x120);
          } while (lVar10 != 0);
          uVar5 = *(undefined8 *)(lVar12 + 0xa8);
          if (param_11 == 0) {
            FUN_00575a10(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,uVar9,&local_1e8,&local_318,
                         uVar5,0,0);
          }
          else {
            lVar10 = param_11;
            do {
              lVar12 = lVar10;
              lVar10 = *(long *)(lVar12 + 0x120);
            } while (lVar10 != 0);
            FUN_00576340(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,uVar9,&local_1e8,&local_318,
                         param_12,uVar5,*(undefined8 *)(lVar12 + 0xa8),0,0);
          }
          lVar10 = param_7[uVar15];
          fVar19 = sinf(__x + fVar24);
          fVar20 = cosf(__x + fVar24);
          uVar7 = 0;
          pfVar8 = (float *)&local_310;
          puVar13 = &local_1e0;
          do {
            iVar3 = (int)uVar7;
            uVar7 = uVar7 + 1;
            *puVar13 = 0;
            pfVar8[-2] = fVar18;
            pfVar8[-1] = fVar18;
            *(float *)(puVar13 + -1) = fVar30 * (fVar20 * 0.0 - fVar19) * (float)iVar3;
            *(float *)((long)puVar13 + -4) = param_3 * (fVar19 * 0.0 + fVar20) * (float)iVar3;
            *pfVar8 = fVar18;
            pfVar8[1] = fVar18;
            puVar13 = puVar13 + 2;
            pfVar8 = pfVar8 + 4;
          } while (uVar6 != uVar7);
          iVar3 = FUN_0059d300(lVar10,0,0,1,0,0);
          if (iVar3 < 0) {
            return iVar3;
          }
          do {
            lVar10 = lVar16;
            lVar16 = *(long *)(lVar10 + 0x120);
          } while (lVar16 != 0);
          uVar5 = *(undefined8 *)(lVar10 + 0xa8);
          if (param_11 == 0) break;
          lVar10 = param_11;
          do {
            lVar16 = lVar10;
            lVar10 = *(long *)(lVar16 + 0x120);
          } while (lVar10 != 0);
          FUN_00576340(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,uVar6,&local_1e8,&local_318,
                       param_12,uVar5,*(undefined8 *)(lVar16 + 0xa8),0,0);
          uVar15 = uVar15 + 1;
          if (2 < uVar15) goto LAB_005929bc;
        }
        FUN_00575a10(0,0,fVar27,fVar28,0,0,fVar25,fVar26,param_4,uVar6,&local_1e8,&local_318,uVar5,0
                     ,0);
        uVar15 = uVar15 + 1;
      } while (uVar15 < 3);
LAB_005929bc:
      fVar21 = 1.0 / (float)(uVar6 * uVar9);
      fVar22 = 1.0 / (fVar21 + 3.0);
      local_1e8 = fVar22 * fVar21 * *param_10;
      local_1e4 = fVar22 * fVar21 * param_10[1];
      local_1d8 = fVar22 * *param_10;
      local_1d4 = fVar22 * param_10[1];
      fVar29 = fVar22 * param_10[2];
      fVar24 = fVar22 * param_10[3];
      local_1e0 = CONCAT44(fVar22 * fVar21 * param_10[3],fVar22 * fVar21 * param_10[2]);
      local_1d0 = CONCAT44(fVar24,fVar29);
      local_1c0 = CONCAT44(fVar24,fVar29);
      local_1b0 = CONCAT44(fVar24,fVar29);
      lVar14 = *param_7;
      lVar10 = param_7[1];
      lVar16 = param_7[2];
      lVar12 = param_5;
      do {
        lVar11 = lVar12;
        lVar12 = *(long *)(lVar11 + 0x120);
      } while (lVar12 != 0);
      plVar4 = *(long **)(lVar11 + 0xa8);
      local_318 = param_5;
      local_310 = lVar14;
      local_308 = lVar10;
      lStack_300 = lVar16;
      local_1c8 = local_1d8;
      local_1c4 = local_1d4;
      local_1b8 = local_1d8;
      local_1b4 = local_1d4;
      (**(code **)(*plVar4 + 0x88))(plVar4,1);
      do {
        lVar12 = lVar14;
        lVar14 = *(long *)(lVar12 + 0x120);
      } while (lVar14 != 0);
      plVar4 = *(long **)(lVar12 + 0xa8);
      (**(code **)(*plVar4 + 0x88))(plVar4,1);
      do {
        lVar12 = lVar10;
        lVar10 = *(long *)(lVar12 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar12 + 0xa8);
      (**(code **)(*plVar4 + 0x88))(plVar4,1);
      do {
        lVar10 = lVar16;
        lVar16 = *(long *)(lVar10 + 0x120);
      } while (lVar16 != 0);
      plVar4 = *(long **)(lVar10 + 0xa8);
      (**(code **)(*plVar4 + 0x88))(plVar4,1);
      iVar3 = FUN_0058d2d0(0x3f800000,0x3f800000,param_4,param_6,4,&local_318,&local_1e8,param_9,0);
    }
    else {
      iVar3 = -3;
    }
    do {
      lVar10 = param_5;
      param_5 = *(long *)(lVar10 + 0x120);
    } while (param_5 != 0);
    plVar4 = *(long **)(lVar10 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,uVar1);
    do {
      lVar10 = param_6;
      param_6 = *(long *)(lVar10 + 0x120);
    } while (param_6 != 0);
    plVar4 = *(long **)(lVar10 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,uVar2);
    lVar10 = *param_7;
    if (*param_7 != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_b8);
    }
    lVar10 = param_7[1];
    if (param_7[1] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_b4);
    }
    lVar10 = param_7[2];
    if (param_7[2] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_b0);
    }
    lVar10 = param_7[3];
    if (param_7[3] != 0) {
      do {
        lVar16 = lVar10;
        lVar10 = *(long *)(lVar16 + 0x120);
      } while (lVar10 != 0);
      plVar4 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_ac);
    }
  }
  return iVar3;
}


