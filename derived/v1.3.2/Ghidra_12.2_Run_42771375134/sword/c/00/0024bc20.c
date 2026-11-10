/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024bc20; name: FUN_0024bc20
 */


undefined8
FUN_0024bc20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,uint param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  float local_17c;
  float local_150 [4];
  float local_140 [4];
  float local_130 [4];
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100 [24];
  
  fVar20 = param_1[3] - *param_1;
  fVar21 = param_1[6] - *param_1;
  fVar23 = param_1[4] - param_1[1];
  fVar24 = param_1[5] - param_1[2];
  fVar22 = param_1[7] - param_1[1];
  fVar19 = param_1[8] - param_1[2];
  fVar28 = fVar24 * fVar21 - fVar20 * fVar19;
  fVar19 = fVar23 * fVar19 - fVar24 * fVar22;
  fVar20 = fVar20 * fVar22 - fVar23 * fVar21;
  if (((param_8 & 1) == 0) && (0.0 <= fVar19 * *param_3 + fVar28 * param_3[1] + fVar20 * param_3[2])
     ) {
    return 0;
  }
  pfVar18 = param_3 + 2;
  pfVar16 = param_3 + 1;
  FUN_0029a670(param_2,local_100);
  fVar21 = *param_1;
  fVar23 = param_1[1];
  fVar24 = param_1[2];
  fVar22 = param_1[3];
  fVar25 = param_1[4];
  fVar26 = param_1[5];
  fVar32 = param_1[8];
  fVar27 = param_1[6];
  fVar30 = param_1[7];
  fVar34 = (fVar23 + fVar25 + fVar30) * DAT_01d4bd24;
  fVar38 = (fVar21 + fVar22 + fVar27) * DAT_01d4bd24;
  fVar36 = (fVar24 + fVar26 + fVar32) * DAT_01d4bd24;
  fVar23 = fVar23 + (fVar23 - fVar34) * DAT_01d4c15c;
  fVar21 = fVar21 + (fVar21 - fVar38) * DAT_01d4c15c;
  fVar24 = fVar24 + (fVar24 - fVar36) * DAT_01d4c15c;
  fVar31 = (fVar30 + (fVar30 - fVar34) * DAT_01d4c15c) - fVar23;
  fVar33 = (fVar32 + (fVar32 - fVar36) * DAT_01d4c15c) - fVar24;
  fVar32 = *pfVar16;
  fVar29 = *pfVar18;
  fVar30 = (fVar22 + (fVar22 - fVar38) * DAT_01d4c15c) - fVar21;
  fVar25 = (fVar25 + (fVar25 - fVar34) * DAT_01d4c15c) - fVar23;
  local_17c = *param_7;
  fVar27 = (fVar27 + (fVar27 - fVar38) * DAT_01d4c15c) - fVar21;
  fVar34 = fVar32 * fVar33 - fVar29 * fVar31;
  fVar22 = *param_3;
  fVar26 = (fVar26 + (fVar26 - fVar36) * DAT_01d4c15c) - fVar24;
  fVar36 = fVar29 * fVar27 - fVar22 * fVar33;
  fVar38 = fVar22 * fVar31 - fVar32 * fVar27;
  fVar40 = fVar26 * fVar38 + fVar30 * fVar34 + fVar25 * fVar36;
  if (fVar40 == 0.0) {
    fVar39 = 0.0;
    if ((param_8 & 1) != 0) goto LAB_0024be54;
LAB_0024bf70:
    if (DAT_01d4c050 <= fVar40) {
      lVar9 = 0;
      uVar7 = 0;
      pfVar12 = local_100 + 2;
      pfVar14 = (float *)&DAT_01d4d240;
      local_19c = -1;
      do {
        if (fVar19 * pfVar14[-2] + fVar28 * pfVar14[-1] + fVar20 * *pfVar14 < 0.0) {
          fVar43 = pfVar12[-1] - fVar23;
          fVar42 = pfVar12[-2] - fVar21;
          fVar44 = *pfVar12 - fVar24;
          fVar41 = fVar34 * fVar42 + fVar36 * fVar43 + fVar38 * fVar44;
          bVar1 = false;
          bVar2 = false;
          bVar3 = false;
          if (0.0 <= fVar41) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar41) && !NAN(fVar40)) {
              bVar1 = fVar41 < fVar40;
              bVar2 = fVar41 == fVar40;
              bVar3 = false;
            }
          }
          if (bVar2 || bVar1 != bVar3) {
            fVar35 = fVar30 * fVar44 - fVar26 * fVar42;
            fVar44 = fVar26 * fVar43 - fVar25 * fVar44;
            fVar42 = fVar25 * fVar42 - fVar30 * fVar43;
            fVar43 = fVar29 * fVar42 + fVar22 * fVar44 + fVar32 * fVar35;
            fVar41 = fVar41 + fVar43;
            bVar1 = false;
            bVar2 = false;
            bVar3 = false;
            if (0.0 <= fVar43) {
              bVar1 = false;
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar41) && !NAN(fVar40)) {
                bVar1 = fVar41 < fVar40;
                bVar2 = fVar41 == fVar40;
                bVar3 = false;
              }
            }
            if (bVar2 || bVar1 != bVar3) {
              fVar41 = fVar39 * (fVar33 * fVar42 + fVar27 * fVar44 + fVar31 * fVar35);
              if (0.0 <= fVar41 && fVar41 <= local_17c) {
                uVar7 = (uint)lVar9;
                local_19c = 0;
                local_17c = fVar41;
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
        pfVar14 = pfVar14 + 3;
        pfVar12 = pfVar12 + 3;
      } while (lVar9 != 8);
      goto LAB_0024c09c;
    }
LAB_0024bf80:
    local_19c = -1;
  }
  else {
    fVar39 = 1.0 / fVar40;
    if ((param_8 & 1) == 0) goto LAB_0024bf70;
LAB_0024be54:
    if ((DAT_01d4bc28 < fVar40) && (fVar40 < DAT_01d4c050)) goto LAB_0024bf80;
    lVar9 = 0;
    uVar7 = 0;
    pfVar12 = (float *)((ulong)local_100 | 4);
    local_19c = -1;
    do {
      fVar42 = *pfVar12 - fVar23;
      fVar41 = pfVar12[-1] - fVar21;
      fVar43 = pfVar12[1] - fVar24;
      fVar40 = fVar39 * (fVar34 * fVar41 + fVar36 * fVar42 + fVar38 * fVar43);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar40) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar40)) {
          bVar1 = fVar40 < 1.0;
          bVar2 = fVar40 == 1.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        fVar44 = fVar30 * fVar43 - fVar26 * fVar41;
        fVar43 = fVar26 * fVar42 - fVar25 * fVar43;
        fVar41 = fVar25 * fVar41 - fVar30 * fVar42;
        fVar42 = fVar39 * (fVar29 * fVar41 + fVar22 * fVar43 + fVar32 * fVar44);
        fVar40 = fVar40 + fVar42;
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if (0.0 <= fVar42) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar40)) {
            bVar1 = fVar40 < 1.0;
            bVar2 = fVar40 == 1.0;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
          fVar40 = fVar39 * (fVar33 * fVar41 + fVar27 * fVar43 + fVar31 * fVar44);
          if (0.0 <= fVar40 && fVar40 <= local_17c) {
            uVar7 = (uint)lVar9;
            local_19c = 0;
            local_17c = fVar40;
          }
        }
      }
      lVar9 = lVar9 + 1;
      pfVar12 = pfVar12 + 3;
    } while (lVar9 != 8);
LAB_0024c09c:
    if (local_19c == 0) {
      uVar17 = (ulong)uVar7;
      fVar21 = local_100[uVar17 * 3 + 1];
      fVar23 = local_100[uVar17 * 3 + 2];
      *param_5 = fVar22 * local_17c + local_100[uVar17 * 3];
      param_5[1] = fVar32 * local_17c + fVar21;
      param_5[2] = fVar29 * local_17c + fVar23;
      *param_6 = fVar19;
      param_6[1] = fVar28;
      param_6[2] = fVar20;
      fVar22 = *param_3;
      fVar32 = *pfVar16;
      fVar29 = *pfVar18;
    }
  }
  fVar28 = *param_4;
  fVar24 = param_4[1];
  fVar19 = param_4[2];
                    /* try { // try from 0024c10c to 0024c113 has its CatchHandler @ 0024cb48 */
  fVar21 = fabsf(-fVar22);
                    /* try { // try from 0024c118 to 0024c11f has its CatchHandler @ 0024cb44 */
  fVar22 = fabsf(-fVar32);
                    /* try { // try from 0024c124 to 0024c127 has its CatchHandler @ 0024cb40 */
  fVar23 = fabsf(-fVar29);
  fVar20 = DAT_01d4c708;
  fVar28 = -fVar28;
  fVar26 = *param_2;
  fVar25 = param_2[1];
  fVar24 = -fVar24;
  fVar30 = param_2[2];
  fVar29 = param_2[3];
  fVar19 = -fVar19;
  fVar32 = param_2[4];
  fVar27 = param_2[5];
  if ((DAT_01d4c708 <= fVar21) || ((fVar26 <= *param_1 && (*param_1 <= fVar29)))) {
    if (DAT_01d4c708 <= fVar22) {
LAB_0024c184:
      fVar31 = param_1[2];
      if ((DAT_01d4c708 <= fVar23) || ((fVar30 <= fVar31 && (fVar31 <= fVar27)))) {
        fVar39 = (fVar32 - param_1[1]) * fVar24;
        fVar34 = (fVar26 - *param_1) * fVar28;
        fVar36 = (fVar29 - *param_1) * fVar28;
        fVar40 = (fVar25 - param_1[1]) * fVar24;
        fVar38 = (fVar30 - fVar31) * fVar19;
        fVar31 = (fVar27 - fVar31) * fVar19;
        iVar5 = 3;
        fVar33 = fVar36;
        if (fVar34 <= fVar36) {
          iVar5 = 0;
          fVar33 = fVar34;
          fVar34 = fVar36;
        }
        fVar41 = fVar40;
        fVar36 = fVar39;
        if (fVar40 <= fVar39) {
          fVar41 = fVar39;
          fVar36 = fVar40;
        }
        iVar8 = 5;
        fVar42 = fVar38;
        if (fVar38 <= fVar31) {
          iVar8 = 2;
          fVar42 = fVar31;
          fVar31 = fVar38;
        }
        if (fVar21 < DAT_01d4c708) {
          iVar5 = -1;
          fVar34 = DAT_01d4c18c;
          fVar33 = DAT_01d4c5a8;
        }
        iVar11 = iVar5;
        if (DAT_01d4c708 <= fVar22) {
          iVar11 = 4;
          if (fVar40 <= fVar39) {
            iVar11 = 1;
          }
          if (fVar36 <= fVar33) {
            iVar11 = iVar5;
            fVar36 = fVar33;
          }
          fVar33 = fVar36;
          if (fVar41 <= fVar34) {
            fVar34 = fVar41;
          }
        }
        iVar5 = iVar11;
        if (DAT_01d4c708 <= fVar23) {
          iVar5 = iVar8;
          if (fVar31 <= fVar33) {
            iVar5 = iVar11;
            fVar31 = fVar33;
          }
          fVar33 = fVar31;
          if (fVar42 <= fVar34) {
            fVar34 = fVar42;
          }
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if (DAT_01d4c708 <= fVar34) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar33) && !NAN(fVar34)) {
            bVar1 = fVar33 < fVar34;
            bVar2 = fVar33 == fVar34;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          iVar5 = -1;
        }
        if (((fVar33 <= local_17c) && (0.0 <= fVar33)) && (iVar5 != -1)) {
          *(undefined8 *)param_6 = *(undefined8 *)(&UNK_01d4d160 + (long)iVar5 * 0xc);
          param_6[2] = *(float *)(&UNK_01d4d168 + (long)iVar5 * 0xc);
          *param_5 = *param_1;
          param_5[1] = param_1[1];
          param_5[2] = param_1[2];
          fVar26 = *param_2;
          fVar25 = param_2[1];
          fVar30 = param_2[2];
          fVar29 = param_2[3];
          local_19c = 1;
          fVar32 = param_2[4];
          fVar27 = param_2[5];
          local_17c = fVar33;
        }
      }
    }
    else if ((fVar25 <= param_1[1]) && (param_1[1] <= fVar32)) goto LAB_0024c184;
    if (fVar21 < fVar20) {
      fVar31 = param_1[3];
      if (fVar26 <= fVar31) goto LAB_0024c2fc;
      goto LAB_0024c62c;
    }
LAB_0024c304:
    if (fVar20 <= fVar22) {
LAB_0024c320:
      fVar31 = param_1[5];
      if ((fVar20 <= fVar23) || ((fVar30 <= fVar31 && (fVar31 <= fVar27)))) {
        fVar34 = param_1[3];
        fVar33 = (fVar26 - fVar34) * fVar28;
        fVar36 = (fVar29 - fVar34) * fVar28;
        fVar40 = (fVar32 - param_1[4]) * fVar24;
        fVar38 = (fVar25 - param_1[4]) * fVar24;
        fVar39 = (fVar30 - fVar31) * fVar19;
        fVar31 = (fVar27 - fVar31) * fVar19;
        iVar5 = 3;
        fVar34 = fVar36;
        if (fVar33 <= fVar36) {
          iVar5 = 0;
          fVar34 = fVar33;
          fVar33 = fVar36;
        }
        fVar41 = fVar38;
        fVar36 = fVar40;
        if (fVar38 <= fVar40) {
          fVar41 = fVar40;
          fVar36 = fVar38;
        }
        iVar8 = 5;
        fVar42 = fVar39;
        if (fVar39 <= fVar31) {
          iVar8 = 2;
          fVar42 = fVar31;
          fVar31 = fVar39;
        }
        if (fVar21 < fVar20) {
          iVar5 = -1;
          fVar33 = DAT_01d4c18c;
          fVar34 = DAT_01d4c5a8;
        }
        iVar11 = iVar5;
        if (fVar20 <= fVar22) {
          iVar11 = 4;
          if (fVar38 <= fVar40) {
            iVar11 = 1;
          }
          if (fVar36 <= fVar34) {
            iVar11 = iVar5;
            fVar36 = fVar34;
          }
          fVar34 = fVar36;
          if (fVar41 <= fVar33) {
            fVar33 = fVar41;
          }
        }
        iVar5 = iVar11;
        if (fVar20 <= fVar23) {
          iVar5 = iVar8;
          if (fVar31 <= fVar34) {
            iVar5 = iVar11;
            fVar31 = fVar34;
          }
          fVar34 = fVar31;
          if (fVar42 <= fVar33) {
            fVar33 = fVar42;
          }
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if (fVar20 <= fVar33) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar34) && !NAN(fVar33)) {
            bVar1 = fVar34 < fVar33;
            bVar2 = fVar34 == fVar33;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          iVar5 = -1;
        }
        if (((fVar34 <= local_17c) && (0.0 <= fVar34)) && (iVar5 != -1)) {
          *(undefined8 *)param_6 = *(undefined8 *)(&UNK_01d4d160 + (long)iVar5 * 0xc);
          param_6[2] = *(float *)(&UNK_01d4d168 + (long)iVar5 * 0xc);
          *param_5 = param_1[3];
          param_5[1] = param_1[4];
          param_5[2] = param_1[5];
          fVar26 = *param_2;
          fVar25 = param_2[1];
          fVar30 = param_2[2];
          fVar29 = param_2[3];
          local_19c = 1;
          fVar32 = param_2[4];
          fVar27 = param_2[5];
          local_17c = fVar34;
        }
      }
    }
    else if ((fVar25 <= param_1[4]) && (param_1[4] <= fVar32)) goto LAB_0024c320;
    if (fVar21 < fVar20) {
      fVar31 = param_1[6];
      if (fVar31 < fVar26) goto LAB_0024c63c;
      goto LAB_0024c49c;
    }
  }
  else {
    fVar31 = param_1[3];
    if (fVar26 <= fVar31) {
LAB_0024c2fc:
      if (fVar31 <= fVar29) goto LAB_0024c304;
    }
LAB_0024c62c:
    fVar31 = param_1[6];
    if (fVar31 < fVar26) goto LAB_0024c63c;
LAB_0024c49c:
    if (fVar29 < fVar31) goto LAB_0024c63c;
  }
  if (fVar22 < fVar20) {
    if ((param_1[7] < fVar25) || (fVar32 < param_1[7])) goto LAB_0024c63c;
  }
  fVar31 = param_1[8];
  if ((fVar20 <= fVar23) || ((fVar30 <= fVar31 && (fVar31 <= fVar27)))) {
    fVar33 = param_1[6];
    fVar34 = (fVar26 - fVar33) * fVar28;
    fVar28 = (fVar29 - fVar33) * fVar28;
    fVar29 = (fVar25 - param_1[7]) * fVar24;
    fVar24 = (fVar32 - param_1[7]) * fVar24;
    fVar26 = fVar28;
    fVar25 = fVar34;
    if (fVar34 <= fVar28) {
      fVar26 = fVar34;
      fVar25 = fVar28;
    }
    fVar30 = (fVar30 - fVar31) * fVar19;
    fVar19 = (fVar27 - fVar31) * fVar19;
    iVar5 = 3;
    if (fVar34 <= fVar28) {
      iVar5 = 0;
    }
    fVar27 = fVar29;
    fVar28 = fVar24;
    if (fVar29 <= fVar24) {
      fVar27 = fVar24;
      fVar28 = fVar29;
    }
    iVar8 = 5;
    fVar32 = fVar30;
    if (fVar30 <= fVar19) {
      iVar8 = 2;
      fVar32 = fVar19;
      fVar19 = fVar30;
    }
    if (fVar21 < fVar20) {
      iVar5 = -1;
      fVar25 = DAT_01d4c18c;
      fVar26 = DAT_01d4c5a8;
    }
    iVar11 = iVar5;
    if (fVar20 <= fVar22) {
      iVar11 = 4;
      if (fVar29 <= fVar24) {
        iVar11 = 1;
      }
      if (fVar28 <= fVar26) {
        iVar11 = iVar5;
        fVar28 = fVar26;
      }
      fVar26 = fVar28;
      if (fVar27 <= fVar25) {
        fVar25 = fVar27;
      }
    }
    iVar5 = iVar11;
    if (fVar20 <= fVar23) {
      iVar5 = iVar8;
      if (fVar19 <= fVar26) {
        iVar5 = iVar11;
        fVar19 = fVar26;
      }
      fVar26 = fVar19;
      if (fVar32 <= fVar25) {
        fVar25 = fVar32;
      }
    }
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (fVar20 <= fVar25) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar26) && !NAN(fVar25)) {
        bVar1 = fVar26 < fVar25;
        bVar2 = fVar26 == fVar25;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      iVar5 = -1;
    }
    if (((fVar26 <= local_17c) && (0.0 <= fVar26)) && (iVar5 != -1)) {
      *(undefined8 *)param_6 = *(undefined8 *)(&UNK_01d4d160 + (long)iVar5 * 0xc);
      param_6[2] = *(float *)(&UNK_01d4d168 + (long)iVar5 * 0xc);
      *param_5 = param_1[6];
      param_5[1] = param_1[7];
      local_19c = 1;
      param_5[2] = param_1[8];
      local_17c = fVar26;
    }
  }
LAB_0024c63c:
                    /* try { // try from 0024c63c to 0024c64f has its CatchHandler @ 0024cb3c */
  pbVar4 = (byte *)FUN_00295e10();
  fVar19 = DAT_01d4c4d4;
  uVar17 = 0;
  local_1a4 = 0xffffffff;
  local_1a0 = 0xffffffff;
  do {
    uVar6 = (ulong)*pbVar4;
    fVar20 = local_100[uVar6 * 3];
    fVar22 = local_100[uVar6 * 3 + 1];
    fVar24 = local_100[uVar6 * 3 + 2];
    local_130[0] = fVar20;
    local_130[1] = fVar22;
    local_130[2] = fVar24;
    uVar6 = (ulong)pbVar4[1];
    fVar21 = local_100[uVar6 * 3];
    fVar23 = local_100[uVar6 * 3 + 1];
    fVar25 = fVar21 - fVar20;
    fVar28 = local_100[uVar6 * 3 + 2];
    fVar26 = fVar23 - fVar22;
    fVar27 = fVar28 - fVar24;
                    /* try { // try from 0024c6e4 to 0024c6e7 has its CatchHandler @ 0024cb4c */
    fVar30 = sqrtf(fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27);
    if (0.0 < fVar30) {
      fVar30 = fVar19 / fVar30;
      fVar20 = fVar20 - fVar25 * fVar30;
      fVar22 = fVar22 - fVar26 * fVar30;
      fVar24 = fVar24 - fVar27 * fVar30;
      fVar21 = fVar25 * fVar30 + fVar21;
      fVar23 = fVar26 * fVar30 + fVar23;
      fVar28 = fVar27 * fVar30 + fVar28;
      local_130[0] = fVar20;
      local_130[1] = fVar22;
      local_130[2] = fVar24;
    }
    fVar25 = *param_3;
    fVar26 = *pfVar16;
    fVar30 = *pfVar18;
    if (0.0 <= (float)(&DAT_01d4d1a8)[uVar17 * 3] * fVar25 +
               (float)(&DAT_01d4d1ac)[uVar17 * 3] * fVar26 +
               (float)(&DAT_01d4d1b0)[uVar17 * 3] * fVar30) {
      fVar31 = fVar21 - fVar20;
      fVar29 = fVar28 - fVar24;
      fVar27 = fVar23 - fVar22;
      fVar33 = fVar30 * fVar27 - fVar26 * fVar29;
      local_140[0] = fVar31;
      local_140[1] = fVar27;
      local_140[2] = fVar29;
                    /* try { // try from 0024c7e8 to 0024c827 has its CatchHandler @ 0024cb50 */
      fVar32 = fabsf(fVar33);
      fVar34 = fVar25 * fVar29 - fVar30 * fVar31;
      fVar30 = fabsf(fVar34);
      fVar26 = fVar26 * fVar31 - fVar25 * fVar27;
      fVar25 = fabsf(fVar26);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar32 < fVar30) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar30) && !NAN(fVar25)) {
          bVar1 = fVar30 < fVar25;
          bVar2 = fVar30 == fVar25;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        if (fVar25 <= fVar32) {
          lVar9 = 1;
          lVar10 = 2;
        }
        else {
          lVar9 = 0;
          lVar10 = 1;
        }
      }
      else {
        lVar10 = 0;
        lVar9 = 2;
      }
      fVar30 = fVar24 * fVar26 + fVar20 * fVar33 + fVar22 * fVar34;
      fVar25 = local_140[lVar9];
      fVar32 = param_3[lVar10];
      fVar36 = local_140[lVar10];
      fVar38 = param_3[lVar9];
      lVar15 = 0;
      pfVar12 = param_1 + 1;
      do {
        fVar40 = pfVar12[-1];
        fVar39 = *pfVar12;
        uVar13 = (uint)lVar15;
        fVar41 = pfVar12[1];
        uVar7 = uVar13 + (uVar13 >> 1) + 1 & 3;
        pfVar14 = param_1 + (ulong)uVar7 * 3;
        lVar15 = lVar15 + 1;
        fVar42 = (fVar33 * fVar40 + fVar34 * fVar39 + fVar26 * fVar41) - fVar30;
        if (fVar42 * ((fVar33 * *pfVar14 + fVar34 * pfVar14[1] + fVar26 * pfVar14[2]) - fVar30) <=
            0.0) {
          fVar43 = *pfVar14 - fVar40;
          fVar44 = pfVar14[1] - fVar39;
          fVar35 = pfVar14[2] - fVar41;
          fVar37 = fVar33 * fVar43 + fVar34 * fVar44 + fVar26 * fVar35;
          if (fVar37 != 0.0) {
            fVar42 = fVar42 / fVar37;
            local_150[0] = fVar40 - fVar43 * fVar42;
            local_150[1] = fVar39 - fVar44 * fVar42;
            local_150[2] = fVar41 - fVar35 * fVar42;
            fVar40 = (1.0 / (fVar25 * fVar32 - fVar36 * fVar38)) *
                     (fVar25 * (local_150[lVar10] - local_130[lVar10]) -
                     fVar36 * (local_150[lVar9] - local_130[lVar9]));
            if (0.0 <= fVar40) {
              fVar39 = *pfVar16;
              fVar41 = *pfVar18;
              local_150[0] = local_150[0] - fVar40 * *param_3;
              local_150[1] = local_150[1] - fVar40 * fVar39;
              local_150[2] = local_150[2] - fVar40 * fVar41;
              if (fVar40 <= local_17c) {
                if ((fVar20 - local_150[0]) * (fVar21 - local_150[0]) +
                    (fVar22 - local_150[1]) * (fVar23 - local_150[1]) +
                    (fVar24 - local_150[2]) * (fVar28 - local_150[2]) < 0.0) {
                  *param_5 = fVar40 * *param_3 + local_150[0];
                  local_19c = 2;
                  param_5[1] = fVar40 * fVar39 + local_150[1];
                  param_5[2] = fVar40 * fVar41 + local_150[2];
                  local_17c = fVar40;
                  local_1a4 = uVar13;
                  local_1a0 = uVar7;
                  local_120 = fVar31;
                  fStack_11c = fVar27;
                  local_118 = fVar29;
                  local_110 = fVar20;
                  fStack_10c = fVar22;
                  local_108 = fVar24;
                }
              }
            }
          }
        }
        pfVar12 = pfVar12 + 3;
      } while (lVar15 != 3);
    }
    uVar17 = uVar17 + 1;
    pbVar4 = pbVar4 + 2;
  } while (uVar17 < 0xc);
  if (local_19c == -1) {
    return 0;
  }
  if (local_19c == 2) {
    pfVar16 = param_1 + (ulong)local_1a4 * 3;
    param_1 = param_1 + (ulong)local_1a0 * 3;
    local_130[1] = param_1[1] - pfVar16[1];
    local_130[0] = *param_1 - *pfVar16;
    local_130[2] = param_1[2] - pfVar16[2];
                    /* try { // try from 0024cadc to 0024caf3 has its CatchHandler @ 0024cb38 */
    FUN_0024ac90(param_6,&local_110,&local_120,pfVar16,local_130,param_3);
  }
  *param_7 = local_17c;
  return 1;
}


