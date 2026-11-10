/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022a000; name: FUN_0022a000
 */


undefined8
FUN_0022a000(float param_1,float param_2,float param_3,float param_4,float *param_5,uint param_6,
            float *param_7,float *param_8,float *param_9,float *param_10,float *param_11,
            float *param_12,float *param_13,float *param_14,undefined1 *param_15,byte param_16)

{
  long lVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  float unaff_s10;
  float fVar23;
  float unaff_s12;
  float unaff_s13;
  float fVar24;
  float unaff_s14;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float in_s24;
  float fVar39;
  float in_s25;
  float fVar40;
  float in_s26;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint auStack_da0 [2];
  undefined1 *local_d98;
  float *local_d90;
  float *local_d88;
  float local_d80;
  float local_d7c;
  float fStack_d78;
  float local_d74;
  long local_d70;
  float *local_d68;
  float *local_d60;
  float *local_d58;
  ulong local_d50;
  float *local_d48;
  float local_d3c;
  float local_d38;
  float local_d34;
  uint *local_d30;
  ulong local_d28;
  float *local_d20;
  byte *local_d18;
  float *local_d10;
  float local_d08;
  float local_d04;
  float local_d00;
  float fStack_cfc;
  float local_cf8;
  float fStack_cf4;
  float local_cf0;
  float fStack_cec;
  float local_ce8;
  float fStack_ce4;
  float local_ce0;
  float local_cd8 [3];
  float local_ccc [767];
  float local_d0 [10];
  float local_a8;
  float local_a4;
  
  fVar29 = param_5[4];
  uVar17 = (ulong)(uint)fVar29;
  puVar5 = (uint *)((long)auStack_da0 - (uVar17 * 4 + 0xf & 0x7fffffff0));
  lVar13 = *(long *)(param_5 + 6);
  lVar1 = *(long *)(param_5 + 8);
  local_d58 = param_9;
  fVar31 = DAT_01d4c18c;
  local_d60 = param_11;
  local_d34 = (float)param_6;
  local_d20 = param_7;
  local_d04 = param_4;
  if ((param_16 & 1) == 0) {
    if (fVar29 != 0.0) {
      local_d50 = CONCAT44(local_d50._4_4_,(uint)param_16);
      fVar21 = param_12[9];
      fVar22 = param_12[0xc];
      fVar20 = param_12[0xf];
      fVar18 = param_12[10] * param_1 + param_12[0xd] * param_2 + param_12[0x10] * param_3;
      fVar19 = param_12[0xb] * param_1 + param_12[0xe] * param_2 + param_12[0x11] * param_3;
      uVar6 = 0;
      pfVar7 = (float *)(lVar13 + 0xc);
      uVar12 = 0xffffffff;
      local_d28 = CONCAT44(local_d28._4_4_,fVar18);
      local_d30 = (uint *)CONCAT44(local_d30._4_4_,fVar19);
      puVar15 = puVar5;
      local_d70 = lVar13;
      local_d68 = param_5;
      local_d48 = param_8;
      unaff_s10 = unaff_s12;
      in_s25 = unaff_s13;
      in_s26 = unaff_s14;
      do {
        fVar28 = pfVar7[-3];
        fVar27 = pfVar7[-2];
        fVar26 = pfVar7[-1];
        if (0.0 <= *pfVar7 + (fVar21 * param_1 + fVar22 * param_2 + fVar20 * param_3) * fVar28 +
                             fVar18 * fVar27 + fVar19 * fVar26) {
          fVar30 = fVar28 * param_12[10] + fVar27 * param_12[0xd] + fVar26 * param_12[0x10];
          fVar32 = fVar28 * param_12[9] + fVar27 * param_12[0xc] + fVar26 * param_12[0xf];
          fVar26 = fVar28 * param_12[0xb] + fVar27 * param_12[0xe] + fVar26 * param_12[0x11];
          fVar18 = sqrtf(fVar32 * fVar32 + fVar30 * fVar30 + fVar26 * fVar26);
          fVar19 = 1.0 / fVar18;
          if (0.0 < fVar18) {
            fVar32 = fVar32 * fVar19;
            fVar30 = fVar30 * fVar19;
            fVar26 = fVar19 * fVar26;
          }
          puVar16 = puVar15 + 1;
          *puVar15 = (uint)uVar6;
          fVar37 = fVar32 * param_10[1] + fVar30 * param_10[4] + fVar26 * param_10[7];
          fVar36 = fVar32 * *param_10 + fVar30 * param_10[3] + fVar26 * param_10[6];
          fVar30 = fVar32 * param_10[2] + fVar30 * param_10[5] + fVar26 * param_10[8];
          pfVar10 = (float *)(lVar1 + (ulong)*(byte *)((long)pfVar7 + 7) * 0xc);
          fVar26 = fVar36 * param_10[9] + fVar37 * param_10[10] + fVar30 * param_10[0xb];
          fVar27 = fVar26 + fVar19 * (pfVar7[-3] * *pfVar10 + pfVar7[-2] * pfVar10[1] +
                                     pfVar7[-1] * pfVar10[2]);
          fVar26 = fVar26 - fVar19 * *pfVar7;
          fVar18 = fVar36 * *local_d20 + fVar37 * local_d20[1] + fVar30 * local_d20[2];
          fVar28 = fVar36 * local_d20[3] + fVar37 * local_d20[4] + fVar30 * local_d20[5];
          fVar19 = fVar18;
          if (fVar28 <= fVar18) {
            fVar19 = fVar28;
          }
          if (fVar18 <= fVar28) {
            fVar18 = fVar28;
          }
          fVar28 = fVar36 * local_d20[6] + fVar37 * local_d20[7] + fVar30 * local_d20[8];
          if (fVar28 <= fVar19) {
            fVar19 = fVar28;
          }
          if (fVar18 <= fVar28) {
            fVar18 = fVar28;
          }
          bVar3 = true;
          if ((fVar19 <= fVar26 + local_d04) &&
             (bVar3 = false, !NAN(fVar18 + local_d04) && !NAN(fVar27))) {
            bVar3 = fVar18 + local_d04 < fVar27;
          }
          if (bVar3) {
            return 0;
          }
          fVar26 = fVar26 - fVar19;
          if (fVar18 - fVar27 <= fVar26) {
            fVar26 = fVar18 - fVar27;
          }
          if (fVar26 < fVar31) {
            uVar12 = uVar6 & 0xffffffff;
            local_d10 = (float *)CONCAT44(local_d10._4_4_,fVar36);
            local_d18 = (byte *)CONCAT44(local_d18._4_4_,fVar37);
            fVar31 = fVar26;
            local_d08 = fVar30;
            unaff_s10 = fVar36;
            in_s25 = fVar37;
            in_s26 = fVar30;
          }
          fVar18 = (float)local_d28;
          fVar19 = local_d30._0_4_;
          param_4 = local_d04;
        }
        else {
          puVar16 = puVar15;
        }
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 5;
        puVar15 = puVar16;
      } while (uVar6 < uVar17);
      goto LAB_0022a550;
    }
  }
  else if (fVar29 != 0.0) {
    local_d50 = CONCAT44(local_d50._4_4_,(uint)param_16);
    uVar6 = 0;
    fVar18 = *param_10;
    fVar19 = param_10[1];
    pfVar7 = (float *)(lVar13 + 0xc);
    fVar20 = param_10[2];
    fVar21 = param_10[3];
    uVar12 = 0xffffffff;
    fVar22 = param_10[4];
    fVar26 = param_10[5];
    fVar27 = param_10[6];
    fVar28 = param_10[7];
    fVar30 = param_10[8];
    fVar32 = param_10[9];
    fVar36 = param_10[10];
    fVar37 = param_10[0xb];
    puVar15 = puVar5;
    local_d70 = lVar13;
    local_d68 = param_5;
    local_d48 = param_8;
    unaff_s10 = in_s24;
    do {
      fVar42 = pfVar7[-3];
      fVar45 = pfVar7[-2];
      fVar47 = pfVar7[-1];
      fVar49 = *pfVar7;
      puVar16 = puVar15;
      if (0.0 <= fVar49 + fVar42 * param_1 + fVar45 * param_2 + fVar47 * param_3) {
        puVar16 = puVar15 + 1;
        *puVar15 = (uint)uVar6;
        fVar24 = fVar42 * fVar19 + fVar45 * fVar22 + fVar47 * fVar28;
        fVar23 = fVar42 * fVar18 + fVar45 * fVar21 + fVar47 * fVar27;
        fVar25 = fVar42 * fVar20 + fVar45 * fVar26 + fVar47 * fVar30;
        pfVar10 = (float *)(lVar1 + (ulong)*(byte *)((long)pfVar7 + 7) * 0xc);
        fVar51 = fVar23 * fVar32 + fVar24 * fVar36 + fVar25 * fVar37;
        fVar49 = fVar51 - fVar49;
        fVar51 = fVar51 + fVar42 * *pfVar10 + fVar45 * pfVar10[1] + fVar47 * pfVar10[2];
        fVar45 = fVar23 * *local_d20 + fVar24 * local_d20[1] + fVar25 * local_d20[2];
        fVar47 = fVar23 * local_d20[3] + fVar24 * local_d20[4] + fVar25 * local_d20[5];
        fVar42 = fVar45;
        if (fVar47 <= fVar45) {
          fVar42 = fVar47;
        }
        if (fVar45 <= fVar47) {
          fVar45 = fVar47;
        }
        fVar47 = fVar23 * local_d20[6] + fVar24 * local_d20[7] + fVar25 * local_d20[8];
        if (fVar47 <= fVar42) {
          fVar42 = fVar47;
        }
        if (fVar45 <= fVar47) {
          fVar45 = fVar47;
        }
        bVar3 = true;
        if ((fVar42 <= fVar49 + local_d04) &&
           (bVar3 = false, !NAN(fVar45 + local_d04) && !NAN(fVar51))) {
          bVar3 = fVar45 + local_d04 < fVar51;
        }
        if (bVar3) {
          return 0;
        }
        fVar49 = fVar49 - fVar42;
        if (fVar45 - fVar51 <= fVar49) {
          fVar49 = fVar45 - fVar51;
        }
        param_4 = local_d04;
        if (fVar49 < fVar31) {
          uVar12 = uVar6 & 0xffffffff;
          local_d10 = (float *)CONCAT44(local_d10._4_4_,fVar23);
          local_d18 = (byte *)CONCAT44(local_d18._4_4_,fVar24);
          fVar31 = fVar49;
          in_s25 = fVar24;
          in_s26 = fVar25;
          local_d08 = fVar25;
          unaff_s10 = fVar23;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 5;
      puVar15 = puVar16;
    } while (uVar6 < uVar17);
LAB_0022a550:
    param_8 = local_d48;
    param_5 = local_d68;
    unaff_s14 = local_d18._0_4_;
    unaff_s13 = local_d10._0_4_;
    local_d38 = in_s25;
    if ((int)uVar12 == -1) {
      local_d3c = in_s26;
      if ((local_d50 & 1) == 0) {
        if (fVar29 == 0.0) {
          uVar17 = 0;
          uVar12 = 0xffffffff;
        }
        else {
          uVar6 = 0;
          pfVar7 = (float *)(local_d70 + 0xc);
          uVar12 = 0xffffffff;
          fVar29 = local_d10._0_4_;
          fVar18 = local_d18._0_4_;
          do {
            fVar19 = pfVar7[-3];
            fVar20 = pfVar7[-2];
            fVar21 = pfVar7[-1];
            fVar26 = fVar19 * param_12[9] + fVar20 * param_12[0xc] + fVar21 * param_12[0xf];
            fVar22 = fVar19 * param_12[10] + fVar20 * param_12[0xd] + fVar21 * param_12[0x10];
            fVar21 = fVar19 * param_12[0xb] + fVar20 * param_12[0xe] + fVar21 * param_12[0x11];
            fVar19 = sqrtf(fVar26 * fVar26 + fVar22 * fVar22 + fVar21 * fVar21);
            param_4 = local_d04;
            fVar20 = 1.0 / fVar19;
            if (0.0 < fVar19) {
              fVar26 = fVar26 * fVar20;
              fVar22 = fVar22 * fVar20;
              fVar21 = fVar20 * fVar21;
            }
            unaff_s14 = fVar26 * param_10[1] + fVar22 * param_10[4] + fVar21 * param_10[7];
            unaff_s13 = fVar26 * *param_10 + fVar22 * param_10[3] + fVar21 * param_10[6];
            fVar22 = fVar26 * param_10[2] + fVar22 * param_10[5] + fVar21 * param_10[8];
            pfVar10 = (float *)(lVar1 + (ulong)*(byte *)((long)pfVar7 + 7) * 0xc);
            fVar19 = unaff_s13 * param_10[9] + unaff_s14 * param_10[10] + fVar22 * param_10[0xb];
            fVar26 = fVar19 + fVar20 * (pfVar7[-3] * *pfVar10 + pfVar7[-2] * pfVar10[1] +
                                       pfVar7[-1] * pfVar10[2]);
            fVar19 = fVar19 - fVar20 * *pfVar7;
            fVar21 = unaff_s13 * *local_d20 + unaff_s14 * local_d20[1] + fVar22 * local_d20[2];
            fVar27 = unaff_s13 * local_d20[3] + unaff_s14 * local_d20[4] + fVar22 * local_d20[5];
            fVar20 = fVar21;
            if (fVar27 <= fVar21) {
              fVar20 = fVar27;
            }
            if (fVar21 <= fVar27) {
              fVar21 = fVar27;
            }
            fVar27 = unaff_s13 * local_d20[6] + unaff_s14 * local_d20[7] + fVar22 * local_d20[8];
            if (fVar27 <= fVar20) {
              fVar20 = fVar27;
            }
            if (fVar21 <= fVar27) {
              fVar21 = fVar27;
            }
            bVar3 = true;
            if ((fVar20 <= fVar19 + local_d04) &&
               (bVar3 = false, !NAN(fVar21 + local_d04) && !NAN(fVar26))) {
              bVar3 = fVar21 + local_d04 < fVar26;
            }
            if (bVar3) {
              return 0;
            }
            fVar19 = fVar19 - fVar20;
            uVar4 = (uint)uVar6;
            puVar5[uVar6] = uVar4;
            if (fVar21 - fVar26 <= fVar19) {
              fVar19 = fVar21 - fVar26;
            }
            fVar20 = fVar22;
            fVar21 = unaff_s13;
            fVar26 = unaff_s14;
            if (fVar31 <= fVar19) {
              uVar4 = (uint)uVar12;
              fVar19 = fVar31;
              fVar22 = local_d08;
              fVar20 = local_d3c;
              unaff_s13 = fVar29;
              fVar21 = unaff_s10;
              unaff_s14 = fVar18;
              fVar26 = local_d38;
            }
            local_d38 = fVar26;
            unaff_s10 = fVar21;
            local_d3c = fVar20;
            local_d08 = fVar22;
            fVar31 = fVar19;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 + 1;
            pfVar7 = pfVar7 + 5;
            fVar29 = unaff_s13;
            fVar18 = unaff_s14;
          } while (uVar6 < uVar17);
          param_8 = local_d48;
          param_5 = local_d68;
        }
      }
      else if (fVar29 == 0.0) {
        uVar17 = 0;
        uVar12 = 0xffffffff;
      }
      else {
        local_d28 = CONCAT44(local_d28._4_4_,*local_d20);
        fVar19 = local_d20[2];
        local_d30 = (uint *)CONCAT44(local_d30._4_4_,local_d20[1]);
        fVar20 = local_d20[3];
        fVar21 = local_d20[4];
        fVar22 = local_d20[5];
        fVar26 = local_d20[6];
        uVar6 = 0;
        fVar27 = local_d20[7];
        fVar28 = local_d20[8];
        fVar30 = *param_10;
        fVar32 = param_10[1];
        pfVar7 = (float *)(local_d70 + 0xc);
        fVar36 = param_10[2];
        fVar37 = param_10[3];
        uVar12 = 0xffffffff;
        fVar49 = param_10[4];
        fVar42 = param_10[5];
        fVar45 = param_10[6];
        fVar47 = param_10[7];
        fVar23 = param_10[8];
        fVar24 = param_10[9];
        fVar25 = param_10[10];
        fVar51 = param_10[0xb];
        local_d3c = in_s26;
        fVar29 = local_d10._0_4_;
        fVar18 = local_d18._0_4_;
        do {
          fVar33 = pfVar7[-3];
          fVar34 = pfVar7[-2];
          fVar40 = pfVar7[-1];
          unaff_s13 = fVar33 * fVar30 + fVar34 * fVar37 + fVar40 * fVar45;
          fVar39 = fVar33 * fVar32 + fVar34 * fVar49 + fVar40 * fVar47;
          fVar35 = fVar33 * fVar36 + fVar34 * fVar42 + fVar40 * fVar23;
          pfVar10 = (float *)(lVar1 + (ulong)*(byte *)((long)pfVar7 + 7) * 0xc);
          fVar38 = unaff_s13 * fVar24 + fVar39 * fVar25 + fVar35 * fVar51;
          fVar40 = fVar38 + fVar33 * *pfVar10 + fVar34 * pfVar10[1] + fVar40 * pfVar10[2];
          fVar38 = fVar38 - *pfVar7;
          fVar34 = (float)local_d28 * unaff_s13 + local_d30._0_4_ * fVar39 + fVar19 * fVar35;
          fVar41 = fVar20 * unaff_s13 + fVar21 * fVar39 + fVar22 * fVar35;
          fVar33 = fVar34;
          if (fVar41 <= fVar34) {
            fVar33 = fVar41;
          }
          if (fVar34 <= fVar41) {
            fVar34 = fVar41;
          }
          fVar41 = fVar26 * unaff_s13 + fVar27 * fVar39 + fVar28 * fVar35;
          if (fVar41 <= fVar33) {
            fVar33 = fVar41;
          }
          if (fVar34 <= fVar41) {
            fVar34 = fVar41;
          }
          bVar3 = true;
          if ((fVar33 <= fVar38 + local_d04) &&
             (bVar3 = false, !NAN(fVar34 + local_d04) && !NAN(fVar40))) {
            bVar3 = fVar34 + local_d04 < fVar40;
          }
          if (bVar3) {
            return 0;
          }
          fVar38 = fVar38 - fVar33;
          uVar4 = (uint)uVar6;
          puVar5[uVar6] = uVar4;
          if (fVar34 - fVar40 <= fVar38) {
            fVar38 = fVar34 - fVar40;
          }
          fVar33 = fVar35;
          unaff_s14 = fVar39;
          fVar34 = unaff_s13;
          if (fVar31 <= fVar38) {
            uVar4 = (uint)uVar12;
            fVar33 = local_d08;
            unaff_s14 = fVar18;
            unaff_s13 = fVar29;
            fVar34 = unaff_s10;
          }
          unaff_s10 = fVar34;
          local_d08 = fVar33;
          uVar12 = (ulong)uVar4;
          uVar6 = uVar6 + 1;
          if (fVar31 <= fVar38) {
            fVar38 = fVar31;
            fVar35 = local_d3c;
            fVar39 = local_d38;
          }
          local_d38 = fVar39;
          fVar31 = fVar38;
          pfVar7 = pfVar7 + 5;
          local_d3c = fVar35;
          fVar29 = unaff_s13;
          fVar18 = unaff_s14;
        } while (uVar6 < uVar17);
        param_4 = local_d04;
      }
    }
    else {
      uVar17 = (ulong)((long)puVar16 - (long)puVar5) >> 2;
      local_d3c = in_s26;
    }
    unaff_s8 = local_d08;
    goto LAB_0022a590;
  }
  uVar17 = 0;
  uVar12 = 0xffffffff;
LAB_0022a590:
  param_13[2] = 0.0;
  param_13[0] = 0.0;
  param_13[1] = 0.0;
  *param_14 = 3.4028235e+38;
  (**(code **)(param_5 + 0x16))(param_5,param_8,param_10,param_12,local_cd8,local_d0);
  fVar19 = *local_d20;
  fVar20 = local_d20[1];
  fVar30 = *param_8;
  fVar32 = param_8[1];
  fVar27 = local_d20[4];
  fVar28 = local_d20[5];
  fVar36 = param_8[2];
  fVar21 = local_d20[2];
  fVar26 = local_d20[3];
  fVar18 = fVar19 * fVar30 + fVar20 * fVar32 + fVar21 * fVar36;
  fVar22 = fVar30 * fVar26 + fVar32 * fVar27 + fVar36 * fVar28;
  fVar29 = fVar18;
  if (fVar22 <= fVar18) {
    fVar29 = fVar22;
  }
  if (fVar18 <= fVar22) {
    fVar18 = fVar22;
  }
  fVar22 = local_d20[6];
  fVar37 = local_d20[7];
  fVar49 = local_d20[8];
  fVar42 = fVar30 * fVar22 + fVar32 * fVar37 + fVar36 * fVar49;
  if (fVar42 <= fVar29) {
    fVar29 = fVar42;
  }
  if (fVar18 <= fVar42) {
    fVar18 = fVar42;
  }
  if ((local_d0[0] + param_4 < fVar29) || (fVar18 + param_4 < local_cd8[0])) {
    return 0;
  }
  fVar42 = local_d0[0] - fVar29;
  if (fVar18 - local_cd8[0] <= local_d0[0] - fVar29) {
    fVar42 = fVar18 - local_cd8[0];
  }
  bVar3 = fVar42 < fVar31 + DAT_01d4bac8;
  if (bVar3) {
    local_d3c = fVar36;
    local_d38 = fVar32;
    fVar31 = fVar42;
    unaff_s10 = fVar30;
    unaff_s14 = fVar32;
    unaff_s13 = fVar30;
    unaff_s8 = fVar36;
  }
  *param_15 = bVar3;
  local_d80 = unaff_s10;
  if (fVar31 < *param_14) {
    *param_14 = fVar31;
    fVar29 = local_d58[1];
    fVar31 = local_d58[2];
    fVar18 = local_d58[4];
    fVar30 = local_d58[5];
    fVar32 = local_d58[7];
    fVar36 = local_d58[8];
    *param_13 = *local_d58 * unaff_s13 + local_d58[3] * unaff_s14 + local_d58[6] * unaff_s8;
    param_13[1] = fVar29 * unaff_s13 + fVar18 * unaff_s14 + fVar32 * unaff_s8;
    param_13[2] = fVar31 * unaff_s13 + fVar30 * unaff_s14 + fVar36 * unaff_s8;
  }
  pfVar7 = (float *)(*(long *)(param_5 + 6) + uVar12 * 0x14);
  local_d48 = (float *)*(long *)(param_5 + 6);
  local_d08 = *local_d60;
  fVar51 = local_d60[1];
  fVar42 = *pfVar7;
  fVar45 = pfVar7[1];
  local_d10 = (float *)CONCAT44(local_d10._4_4_,fVar51);
  fVar33 = local_d60[2];
  fVar24 = local_d60[3];
  local_d18 = (byte *)CONCAT44(local_d18._4_4_,fVar24);
  fVar25 = local_d60[4];
  fVar34 = local_d60[5];
  local_d30 = (uint *)CONCAT44(local_d30._4_4_,fVar25);
  fVar36 = local_d60[8];
  fVar40 = local_d60[9];
  fVar18 = *param_12;
  fVar52 = param_12[1];
  fVar38 = local_d60[6];
  fVar39 = local_d60[7];
  fVar47 = pfVar7[2];
  fVar43 = fVar42 * local_d08 + fVar45 * fVar24 + fVar47 * fVar38;
  fVar35 = fVar42 * fVar51 + fVar45 * fVar25 + fVar47 * fVar39;
  fVar30 = param_12[2];
  fVar29 = param_12[3];
  fVar32 = param_12[4];
  fVar31 = param_12[5];
  fVar23 = fVar42 * fVar33 + fVar45 * fVar34 + fVar47 * fVar36;
  fVar48 = param_12[6];
  fVar46 = param_12[7];
  fVar45 = fVar43 * fVar18 + fVar35 * fVar29 + fVar23 * fVar48;
  fVar47 = fVar43 * fVar52 + fVar35 * fVar32 + fVar23 * fVar46;
  fVar44 = local_d60[10];
  fVar41 = local_d60[0xb];
  fVar50 = param_12[8];
  fVar42 = fVar43 * fVar30 + fVar35 * fVar31 + fVar23 * fVar50;
  fVar23 = pfVar7[3] - (fVar43 * fVar40 + fVar35 * fVar44 + fVar23 * fVar41);
  uVar4 = (uint)local_d34 & 0xff;
  if ((((uint)local_d34 >> 3 & 1) == 0) ||
     ((local_d04 < fVar19 * fVar45 + fVar20 * fVar47 + fVar21 * fVar42 + fVar23 &&
      (local_d04 < fVar26 * fVar45 + fVar27 * fVar47 + fVar28 * fVar42 + fVar23)))) {
    local_d34 = 0.0;
  }
  else {
    local_d34 = 1.4013e-45;
    local_d0[0] = fVar19 - fVar26;
    local_d0[1] = fVar20 - fVar27;
    local_d0[2] = fVar21 - fVar28;
  }
  if (((uVar4 >> 4 & 1) != 0) &&
     ((fVar26 * fVar45 + fVar27 * fVar47 + fVar28 * fVar42 + fVar23 <= local_d04 ||
      (fVar22 * fVar45 + fVar37 * fVar47 + fVar49 * fVar42 + fVar23 <= local_d04)))) {
    uVar6 = (ulong)(uint)local_d34;
    local_d34 = (float)((int)local_d34 + 1);
    local_d0[uVar6 * 3] = fVar26 - fVar22;
    local_d0[uVar6 * 3 + 1] = fVar27 - fVar37;
    local_d0[uVar6 * 3 + 2] = fVar28 - fVar49;
  }
  if (((uVar4 >> 5 & 1) != 0) &&
     ((fVar22 * fVar45 + fVar37 * fVar47 + fVar49 * fVar42 + fVar23 <= local_d04 ||
      (fVar19 * fVar45 + fVar20 * fVar47 + fVar21 * fVar42 + fVar23 <= local_d04)))) {
    uVar6 = (ulong)(uint)local_d34;
    local_d34 = (float)((int)local_d34 + 1);
    local_d0[uVar6 * 3] = fVar22 - fVar19;
    local_d0[uVar6 * 3 + 1] = fVar37 - fVar20;
    local_d0[uVar6 * 3 + 2] = fVar49 - fVar21;
  }
  fVar21 = *param_8;
  fVar20 = param_8[1];
  fVar19 = param_8[2];
  lVar13 = *(long *)(param_5 + 8);
  local_cd8[0] = 0.0;
  if ((int)uVar17 == 0) {
    local_d98 = param_15;
    local_d90 = param_13;
    fVar29 = DAT_01d4c18c;
    if (*param_14 <= DAT_01d4c18c) {
      return 1;
    }
  }
  else {
    local_d68 = param_5;
    local_d98 = param_15;
    local_d90 = param_13;
    fVar22 = local_d08 * fVar21 + fVar24 * fVar20 + fVar38 * fVar19;
    fVar26 = fVar51 * fVar21 + fVar25 * fVar20 + fVar39 * fVar19;
    fVar19 = fVar33 * fVar21 + fVar34 * fVar20 + fVar36 * fVar19;
    fVar20 = fVar48 * fVar19 + fVar18 * fVar22 + fVar29 * fVar26;
    fVar18 = fVar50 * fVar19 + fVar30 * fVar22 + fVar31 * fVar26;
    fVar31 = fVar46 * fVar19 + fVar52 * fVar22 + fVar32 * fVar26;
    fVar19 = param_8[3] - (fVar41 * fVar19 + fVar40 * fVar22 + fVar44 * fVar26);
    local_d88 = param_14;
    local_d50 = *(long *)(param_5 + 10);
    local_d28 = uVar17;
    local_d30 = puVar5;
    fVar29 = local_d04;
    do {
      local_d28 = (ulong)((int)local_d28 - 1);
      uVar4 = *local_d30;
      local_d30 = local_d30 + 1;
      if (local_d34 != 0.0) {
        local_d18 = (byte *)((long)local_d48 + (ulong)uVar4 * 0x14 + 0x12);
        lVar1 = local_d50 + *(ushort *)((long)local_d48 + (ulong)uVar4 * 0x14 + 0x10);
        pfVar7 = local_d0;
        local_d08 = local_d34;
        do {
          local_d08 = (float)((int)local_d08 - 1);
          local_d10 = pfVar7 + 3;
          uVar17 = (ulong)*local_d18;
          if (uVar17 != 0) {
            uVar6 = 0;
            do {
              uVar12 = uVar6 + 1;
              lVar9 = 0;
              if (uVar12 < uVar17) {
                lVar9 = uVar6 + 1;
              }
              uVar8 = (ulong)*(byte *)(lVar1 + lVar9);
              pfVar10 = (float *)(lVar13 + (ulong)*(byte *)(lVar1 + uVar6) * 0xc);
              fVar21 = *(float *)(lVar13 + uVar8 * 0xc);
              if (fVar19 + fVar20 * *pfVar10 + fVar31 * pfVar10[1] + fVar18 * pfVar10[2] <= fVar29)
              {
                lVar9 = lVar13 + uVar8 * 0xc;
                fVar22 = *(float *)(lVar9 + 4);
                fVar26 = *(float *)(lVar9 + 8);
LAB_0022ad6c:
                fVar21 = *pfVar10 - fVar21;
                fVar22 = pfVar10[1] - fVar22;
                fVar26 = pfVar10[2] - fVar26;
                fVar27 = fVar21 * *param_12 + fVar22 * param_12[3] + fVar26 * param_12[6];
                fVar28 = fVar21 * param_12[1] + fVar22 * param_12[4] + fVar26 * param_12[7];
                fVar29 = fVar21 * param_12[2] + fVar22 * param_12[5] + fVar26 * param_12[8];
                fVar21 = fVar27 * *param_10 + fVar28 * param_10[3] + fVar29 * param_10[6];
                fVar22 = fVar27 * param_10[1] + fVar28 * param_10[4] + fVar29 * param_10[7];
                fVar29 = fVar27 * param_10[2] + fVar28 * param_10[5] + fVar29 * param_10[8];
                fVar26 = fVar22 * pfVar7[2] - fVar29 * pfVar7[1];
                fVar27 = fVar29 * *pfVar7 - fVar21 * pfVar7[2];
                fVar22 = fVar21 * pfVar7[1] - fVar22 * *pfVar7;
                fVar21 = fabsf(fVar26);
                fVar29 = DAT_01d4c1cc;
                if (((DAT_01d4c1cc < fVar21) || (fVar21 = fabsf(fVar27), fVar29 < fVar21)) ||
                   (fVar21 = fabsf(fVar22), fVar29 < fVar21)) {
                  fVar30 = fVar22 * fVar22 + fVar26 * fVar26 + fVar27 * fVar27;
                  fVar29 = 0.0;
                  fVar21 = 0.0;
                  fVar28 = 0.0;
                  if (0.0 < fVar30) {
                    fVar28 = sqrtf(fVar30);
                    fVar28 = 1.0 / fVar28;
                    fVar29 = fVar26 * fVar28;
                    fVar21 = fVar27 * fVar28;
                    fVar28 = fVar22 * fVar28;
                  }
                  local_cf8 = fVar28;
                  fStack_cfc = fVar21;
                  local_d00 = fVar29;
                  FUN_00231ac0(local_cd8,&local_d00);
                }
              }
              else {
                lVar9 = lVar13 + uVar8 * 0xc;
                fVar22 = *(float *)(lVar9 + 4);
                fVar26 = *(float *)(lVar9 + 8);
                if (fVar19 + fVar20 * fVar21 + fVar31 * fVar22 + fVar18 * fVar26 <= fVar29)
                goto LAB_0022ad6c;
              }
              uVar6 = uVar12;
              fVar29 = local_d04;
            } while (uVar17 != uVar12);
          }
          pfVar7 = local_d10;
        } while (local_d08 != 0.0);
      }
      pfVar14 = local_d20;
      pfVar2 = local_d58;
      pfVar10 = local_d60;
      pfVar7 = local_d68;
      param_14 = local_d88;
    } while ((int)local_d28 != 0);
    fVar29 = DAT_01d4c18c;
    if (local_cd8[0] == 0.0) {
      local_d58 = pfVar2;
      if (*local_d88 <= DAT_01d4c18c) {
        return 1;
      }
    }
    else {
      local_d08 = *local_d20;
      fVar31 = local_d20[1];
      fVar21 = *local_d60;
      fVar22 = local_d60[1];
      fVar37 = local_d60[2];
      fVar26 = local_d60[3];
      fVar34 = local_d20[4];
      fVar49 = local_d20[5];
      fVar27 = local_d60[4];
      fVar28 = local_d60[5];
      local_d10 = (float *)CONCAT44(local_d10._4_4_,fVar31);
      fVar47 = local_d20[2];
      fVar33 = local_d20[3];
      local_d34 = local_d20[6];
      fVar45 = local_d20[7];
      fVar30 = local_d60[6];
      fVar32 = local_d60[7];
      local_d28 = CONCAT44(local_d28._4_4_,fVar33);
      local_d30 = (uint *)CONCAT44(local_d30._4_4_,fVar34);
      fVar36 = local_d60[8];
      fVar19 = local_d60[9];
      local_d48 = (float *)CONCAT44(local_d48._4_4_,fVar45);
      fVar20 = local_d60[10];
      fVar18 = local_d60[0xb];
      local_d20 = (float *)CONCAT44(local_d20._4_4_,fVar49);
      local_d18 = (byte *)CONCAT44(local_d18._4_4_,fVar47);
      fVar51 = pfVar14[8];
      local_d50 = CONCAT44(local_d50._4_4_,fVar51);
      fVar24 = local_d08 * fVar21 + fVar31 * fVar26 + fVar47 * fVar30 + fVar19;
      fVar42 = local_d08 * fVar22 + fVar31 * fVar27 + fVar47 * fVar32 + fVar20;
      fVar47 = local_d08 * fVar37 + fVar31 * fVar28 + fVar47 * fVar36 + fVar18;
      fVar23 = fVar19 + fVar21 * fVar33 + fVar26 * fVar34 + fVar30 * fVar49;
      fVar25 = fVar20 + fVar22 * fVar33 + fVar27 * fVar34 + fVar32 * fVar49;
      fVar31 = fVar18 + fVar37 * fVar33 + fVar28 * fVar34 + fVar36 * fVar49;
      fVar19 = fVar19 + fVar21 * local_d34 + fVar26 * fVar45 + fVar30 * fVar51;
      fVar20 = fVar20 + fVar22 * local_d34 + fVar27 * fVar45 + fVar32 * fVar51;
      fVar18 = fVar18 + fVar37 * local_d34 + fVar28 * fVar45 + fVar36 * fVar51;
      iVar11 = -(int)local_cd8[0];
      pfVar14 = local_ccc;
      local_d00 = fVar24;
      fStack_cfc = fVar42;
      local_cf8 = fVar47;
      fStack_cf4 = fVar23;
      local_cf0 = fVar25;
      fStack_cec = fVar31;
      local_ce8 = fVar19;
      fStack_ce4 = fVar20;
      local_ce0 = fVar18;
      local_d74 = fVar19;
      local_d70 = CONCAT44(local_d70._4_4_,fVar31);
      local_d7c = fVar18;
      fStack_d78 = fVar20;
      fVar21 = local_d38;
      fVar22 = local_d3c;
      while( true ) {
        iVar11 = iVar11 + 1;
        fVar37 = pfVar14[-2];
        fVar45 = pfVar14[-1];
        fVar49 = *pfVar14;
        fVar30 = fVar37 * *pfVar10 + fVar45 * fVar26 + fVar49 * fVar30;
        fVar32 = fVar37 * pfVar10[1] + fVar45 * fVar27 + fVar49 * fVar32;
        fVar28 = fVar37 * pfVar10[2] + fVar45 * fVar28 + fVar49 * fVar36;
        fVar26 = fVar24 * fVar30 + fVar42 * fVar32 + fVar47 * fVar28;
        fVar36 = fVar23 * fVar30 + fVar25 * fVar32 + fVar31 * fVar28;
        fVar27 = fVar26;
        if (fVar36 <= fVar26) {
          fVar27 = fVar36;
        }
        if (fVar26 <= fVar36) {
          fVar26 = fVar36;
        }
        fVar36 = fVar19 * fVar30 + fVar20 * fVar32 + fVar18 * fVar28;
        if (fVar36 <= fVar27) {
          fVar27 = fVar36;
        }
        if (fVar26 <= fVar36) {
          fVar26 = fVar36;
        }
        fVar36 = fVar30 * *pfVar7 + fVar32 * pfVar7[1] + fVar28 * pfVar7[2];
        fVar28 = fVar30 * (float)((uint)pfVar7[0x11] | (uint)fVar30 & 0x80000000) +
                 fVar32 * (float)((uint)pfVar7[0x12] | (uint)fVar32 & 0x80000000) +
                 fVar28 * (float)((uint)pfVar7[0x13] | (uint)fVar28 & 0x80000000);
        if (fVar28 <= pfVar7[0x10]) {
          fVar28 = pfVar7[0x10];
        }
        fVar27 = (fVar36 + fVar28) - fVar27;
        fVar26 = fVar26 - (fVar36 - fVar28);
        if (fVar26 <= fVar27) {
          fVar27 = fVar26;
        }
        if (fVar27 <= fVar29) {
          (**(code **)(pfVar7 + 0x16))(pfVar7,pfVar14 + -2,param_10,param_12,&local_a4,&local_a8);
          fVar26 = pfVar14[-2];
          fVar27 = pfVar14[-1];
          fVar28 = *pfVar14;
          fVar18 = local_d08 * fVar26 + local_d10._0_4_ * fVar27 + local_d18._0_4_ * fVar28;
          fVar19 = (float)local_d28 * fVar26 + local_d30._0_4_ * fVar27 + local_d20._0_4_ * fVar28;
          fVar31 = fVar18;
          if (fVar19 <= fVar18) {
            fVar31 = fVar19;
          }
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
          fVar19 = local_d34 * fVar26 + local_d48._0_4_ * fVar27 + (float)local_d50 * fVar28;
          if (fVar19 <= fVar31) {
            fVar31 = fVar19;
          }
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
          if (local_a8 + local_d04 < fVar31) {
            return 0;
          }
          if (fVar18 + local_d04 < local_a4) {
            return 0;
          }
          fVar30 = local_a8 - fVar31;
          if (fVar18 - local_a4 <= local_a8 - fVar31) {
            fVar30 = fVar18 - local_a4;
          }
          fVar31 = (float)local_d70;
          fVar18 = local_d7c;
          fVar19 = local_d74;
          fVar20 = fStack_d78;
          if (fVar30 < fVar29) {
            local_d80 = fVar26;
            fVar29 = fVar30;
            fVar21 = fVar27;
            fVar22 = fVar28;
          }
        }
        if (iVar11 == 0) break;
        fVar26 = pfVar10[3];
        fVar27 = pfVar10[4];
        fVar28 = pfVar10[5];
        fVar30 = pfVar10[6];
        pfVar14 = pfVar14 + 3;
        fVar32 = pfVar10[7];
        fVar36 = pfVar10[8];
      }
      local_d58 = pfVar2;
      local_d38 = fVar21;
      local_d3c = fVar22;
      if (*param_14 <= fVar29) {
        return 1;
      }
    }
  }
  *param_14 = fVar29;
  fVar29 = local_d58[1];
  fVar31 = local_d58[2];
  fVar18 = local_d58[4];
  fVar19 = local_d58[5];
  fVar20 = local_d58[7];
  fVar21 = local_d58[8];
  *local_d90 = local_d80 * *local_d58 + local_d38 * local_d58[3] + local_d3c * local_d58[6];
  local_d90[1] = local_d80 * fVar29 + local_d38 * fVar18 + local_d3c * fVar20;
  local_d90[2] = local_d80 * fVar31 + local_d38 * fVar19 + local_d3c * fVar21;
  *local_d98 = 0;
  return 1;
}


