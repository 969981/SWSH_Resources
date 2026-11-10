/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002abf30; name: FUN_002abf30
 */


void FUN_002abf30(float param_1,float *param_2,float *param_3,float *param_4,undefined1 *param_5,
                 long param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  byte bVar14;
  float *pfVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulong uVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
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
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float local_f8 [18];
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  uVar20 = FUN_0023a140(param_6,param_6 + 0xc,param_3,param_4,&fStack_a4,&local_a8);
  if ((uVar20 & 1) == 0) {
    return;
  }
  fVar39 = param_4[1];
  iVar9 = *(int *)(*(long *)(param_2 + 4) + 0x38);
  iVar10 = *(int *)(*(long *)(param_2 + 4) + 0x3c);
  fVar45 = param_3[1];
  fVar43 = *(float *)(*(long *)(param_2 + 6) + 0x10);
  fVar40 = (fStack_a4 * *param_4 + *param_3) * *param_2;
  fVar28 = (float)(iVar9 + -1) * DAT_01d4be60 + 0.0;
  fVar37 = (*param_3 + *param_4 * local_a8) * *param_2;
  fVar44 = (float)(iVar10 + -1) * DAT_01d4be60 + 0.0;
  if (fVar40 <= DAT_01d4bf24) {
    fVar40 = DAT_01d4bf24;
  }
  if (fVar28 <= fVar40) {
    fVar40 = fVar28;
  }
  fVar13 = (fStack_a4 * param_4[2] + param_3[2]) * param_2[2];
  if (fVar13 <= DAT_01d4bf24) {
    fVar13 = DAT_01d4bf24;
  }
  if (fVar37 <= DAT_01d4bf24) {
    fVar37 = DAT_01d4bf24;
  }
  if (fVar44 <= fVar13) {
    fVar13 = fVar44;
  }
  if (fVar28 <= fVar37) {
    fVar37 = fVar28;
  }
  fVar28 = (param_3[2] + param_4[2] * local_a8) * param_2[2];
  fVar37 = fVar37 - fVar40;
  if (fVar28 <= DAT_01d4bf24) {
    fVar28 = DAT_01d4bf24;
  }
  if (fVar44 <= fVar28) {
    fVar28 = fVar44;
  }
  fVar28 = fVar28 - fVar13;
  fVar44 = 1.0;
  if (fVar37 < 0.0) {
    fVar44 = -1.0;
  }
  fVar50 = 1.0;
  if (fVar28 < 0.0) {
    fVar50 = -1.0;
  }
  fVar29 = fabsf(fVar37);
  fVar47 = DAT_01d4c55c;
  fVar30 = fVar44 * DAT_01d4c55c;
  if (DAT_01d4c55c <= fVar29) {
    fVar30 = fVar37;
  }
  fVar31 = fabsf(fVar28);
  fVar41 = *param_2;
  fVar32 = *param_3;
  fVar33 = param_3[1];
  fVar37 = param_3[2];
  fVar29 = fVar50 * fVar47;
  if (fVar47 <= fVar31) {
    fVar29 = fVar28;
  }
  fVar53 = param_2[2];
  fVar58 = param_4[1] * param_1;
  fVar31 = fVar41 * *param_4 * param_1;
  fVar47 = fVar53 * param_4[2] * param_1;
  fVar28 = sqrtf(fVar31 * fVar31 + fVar58 * fVar58 + fVar47 * fVar47);
  if (DAT_01d4bf84 < fVar28) {
    fVar34 = 1.0 / fVar28;
    fVar31 = fVar31 * fVar34;
    fVar58 = fVar58 * fVar34;
    fVar47 = fVar47 * fVar34;
  }
  if (fVar30 <= 0.0) {
    fVar34 = ceilf(fVar40);
  }
  else {
    fVar34 = floorf(fVar40);
  }
  if (fVar29 <= 0.0) {
    fVar35 = ceilf(fVar13);
  }
  else {
    fVar35 = floorf(fVar13);
  }
  fVar51 = fStack_a4 * fVar39 + fVar45;
  if (fVar30 <= 0.0) {
    fVar36 = floorf(fVar40);
    fVar38 = fVar36 + -1.0;
  }
  else {
    fVar36 = ceilf(fVar40);
    fVar38 = fVar36 + 1.0;
  }
  iVar24 = (int)fVar34;
  iVar26 = (int)fVar35;
  iVar27 = (int)fVar50;
  fVar39 = (fVar45 + fVar39 * local_a8) - fVar51;
  iVar25 = (int)fVar44;
  if (fVar36 != fVar40) {
    fVar38 = fVar36;
  }
  if (fVar29 <= 0.0) {
    fVar34 = floorf(fVar13);
    fVar45 = fVar34 + -1.0;
  }
  else {
    fVar34 = ceilf(fVar13);
    fVar45 = fVar34 + 1.0;
  }
  fVar32 = fVar32 * fVar41;
  fVar37 = fVar37 * fVar53;
  if (fVar34 != fVar13) {
    fVar45 = fVar34;
  }
  fVar40 = (fVar38 - fVar40) / fVar30;
  fVar45 = (fVar45 - fVar13) / fVar29;
  fVar41 = fabsf(fVar30);
  fVar29 = fabsf(fVar29);
  fVar30 = DAT_01d4c3e0;
  fVar13 = DAT_01d4bac8;
  iVar12 = 1 - iVar25;
  iVar2 = 2 - iVar27;
  if (-1 < 1 - iVar27) {
    iVar2 = 1 - iVar27;
  }
  lVar23 = *(long *)(param_2 + 4);
  iVar2 = iVar2 >> 1;
  fVar53 = (float)iVar24;
  fVar34 = (float)iVar26;
  fVar35 = fVar51 + fVar39 * 0.0;
  do {
    fVar38 = fVar40;
    if (fVar45 <= fVar40) {
      fVar38 = fVar45;
    }
    uVar11 = iVar26 + iVar24 * iVar10;
    lVar22 = *(long *)(lVar23 + 0x50);
    fVar60 = fVar51 + fVar39 * fVar38;
    local_f8[0x11] = fVar43 * (float)(int)*(short *)(lVar22 + (ulong)(uVar11 + iVar27) * 4);
    local_f8[0x10] = fVar43 * (float)(int)*(short *)(lVar22 + (ulong)uVar11 * 4);
    iVar1 = iVar24 + iVar25;
    uVar11 = iVar26 + iVar1 * iVar10;
    local_b0 = fVar43 * (float)(int)*(short *)(lVar22 + (ulong)uVar11 * 4);
    fStack_ac = fVar43 * (float)(int)*(short *)(lVar22 + (ulong)(uVar11 + iVar27) * 4);
    fVar36 = local_b0;
    if (fStack_ac <= local_b0) {
      fVar36 = fStack_ac;
    }
    fVar42 = local_b0;
    if (local_b0 <= fStack_ac) {
      fVar42 = fStack_ac;
    }
    fVar52 = local_f8[0x10];
    if (local_f8[0x11] <= local_f8[0x10]) {
      fVar52 = local_f8[0x11];
    }
    fVar59 = local_f8[0x10];
    if (local_f8[0x10] <= local_f8[0x11]) {
      fVar59 = local_f8[0x11];
    }
    if (fVar36 <= fVar52) {
      fVar52 = fVar36;
    }
    if (fVar59 <= fVar42) {
      fVar59 = fVar42;
    }
    fVar36 = fVar35;
    if (fVar60 <= fVar35) {
      fVar36 = fVar60;
    }
    if (fVar35 <= fVar60) {
      fVar35 = fVar60;
    }
    bVar16 = true;
    if ((fVar36 + fVar30 <= fVar59) && (bVar16 = false, !NAN(fVar35 + fVar13) && !NAN(fVar52))) {
      bVar16 = fVar35 + fVar13 < fVar52;
    }
    if (!bVar16) {
      fVar35 = fVar44 + fVar53;
      fVar36 = fVar50 + fVar34;
      local_f8[9] = local_f8[(long)((2 - iVar25) - iVar2) + 0x10];
      local_f8[0xd] = local_f8[(long)(iVar2 + iVar12) + 0x10];
      local_f8[5] = local_f8[(long)((2 - iVar12) + iVar2) + 0x10];
      local_f8[1] = local_f8[(long)((3 - iVar12) - iVar2) + 0x10];
      local_f8[0xc] = fVar53;
      if (fVar35 <= fVar53) {
        local_f8[0xc] = fVar35;
      }
      local_f8[4] = fVar53;
      if (fVar53 <= fVar35) {
        local_f8[4] = fVar35;
      }
      local_f8[0xe] = fVar34;
      if (fVar36 <= fVar34) {
        local_f8[0xe] = fVar36;
      }
      local_f8[10] = fVar34;
      if (fVar34 <= fVar36) {
        local_f8[10] = fVar36;
      }
      iVar3 = iVar1;
      if (iVar24 <= iVar1) {
        iVar3 = iVar24;
      }
      iVar4 = iVar26 + iVar27;
      if (iVar26 <= iVar26 + iVar27) {
        iVar4 = iVar26;
      }
      uVar20 = (ulong)(uint)(iVar4 + iVar3 * iVar10);
      local_f8[8] = local_f8[0xc];
      local_f8[6] = local_f8[0xe];
      local_f8[0] = local_f8[4];
      local_f8[2] = local_f8[10];
      bVar16 = -1 < *(char *)(lVar22 + uVar20 * 4 + 2);
      pfVar5 = local_f8 + 4;
      pfVar15 = local_f8;
      if (bVar16) {
        pfVar5 = local_f8 + 0xc;
        pfVar15 = local_f8 + 4;
      }
      pfVar6 = local_f8 + 8;
      pfVar8 = local_f8 + 0xc;
      if (bVar16) {
        pfVar6 = local_f8;
        pfVar8 = local_f8 + 8;
      }
      fVar35 = *pfVar5;
      fVar36 = pfVar5[1];
      pfVar7 = pfVar15;
      if (*(float *)(*(long *)(param_2 + 4) + 0x58) <= 0.0) {
        pfVar7 = pfVar8;
      }
      fVar52 = pfVar7[1] - fVar36;
      fVar59 = *pfVar7 - fVar35;
      fVar42 = pfVar5[2];
      if (*(float *)(*(long *)(param_2 + 4) + 0x58) <= 0.0) {
        pfVar8 = pfVar15;
      }
      fVar62 = pfVar7[2] - fVar42;
      fVar61 = pfVar8[1] - fVar36;
      fVar57 = *pfVar8 - fVar35;
      fVar56 = pfVar8[2] - fVar42;
      fVar54 = fVar58 * fVar56 - fVar47 * fVar61;
      fVar55 = fVar47 * fVar57 - fVar31 * fVar56;
      fVar48 = fVar31 * fVar61 - fVar58 * fVar57;
      fVar49 = fVar62 * fVar48 + fVar59 * fVar54 + fVar52 * fVar55;
      if ((param_7 & 1) == 0) {
        fVar35 = fabsf(fVar49);
        if (DAT_01d4c3d8 <= fVar35) {
          fVar35 = fVar32 - *pfVar5;
          fVar63 = fVar33 - pfVar5[1];
          fVar36 = 1.0 / fVar49;
          fVar49 = fVar37 - pfVar5[2];
          fVar42 = fVar36 * (fVar54 * fVar35 + fVar55 * fVar63 + fVar48 * fVar49);
          if ((fVar30 <= fVar42) && (fVar42 <= DAT_01d4c4e0)) {
            fVar48 = fVar62 * fVar63 - fVar52 * fVar49;
            fVar49 = fVar59 * fVar49 - fVar62 * fVar35;
            fVar52 = fVar52 * fVar35 - fVar59 * fVar63;
            fVar35 = fVar36 * (fVar47 * fVar52 + fVar31 * fVar48 + fVar58 * fVar49);
            if ((fVar30 <= fVar35) && (fVar42 + fVar35 <= DAT_01d4c4e0)) {
              fVar49 = fVar56 * fVar52 + fVar57 * fVar48 + fVar61 * fVar49;
              goto LAB_002ac71c;
            }
          }
        }
LAB_002ac748:
        bVar14 = 1;
        fVar36 = DAT_01d4c18c;
      }
      else {
        if (fVar49 < DAT_01d4c3d8) goto LAB_002ac748;
        fVar35 = fVar32 - fVar35;
        fVar36 = fVar33 - fVar36;
        fVar42 = fVar37 - fVar42;
        fVar48 = fVar42 * fVar48 + fVar35 * fVar54 + fVar36 * fVar55;
        fVar55 = fVar49 + fVar49 * fVar13;
        fVar54 = fVar36 * fVar62 - fVar52 * fVar42;
        fVar42 = fVar59 * fVar42 - fVar35 * fVar62;
        fVar35 = fVar35 * fVar52 - fVar59 * fVar36;
        fVar36 = -(fVar49 * fVar13);
        bVar16 = false;
        bVar18 = false;
        bVar19 = false;
        if (fVar36 <= fVar48) {
          bVar16 = false;
          bVar18 = false;
          bVar19 = true;
          if (!NAN(fVar48) && !NAN(fVar55)) {
            bVar16 = fVar48 < fVar55;
            bVar18 = fVar48 == fVar55;
            bVar19 = false;
          }
        }
        fVar52 = fVar47 * fVar35 + fVar31 * fVar54 + fVar58 * fVar42;
        fVar48 = fVar52 + fVar48;
        bVar17 = true;
        if ((bVar18 || bVar16 != bVar19) && (bVar17 = false, !NAN(fVar52) && !NAN(fVar36))) {
          bVar17 = fVar52 < fVar36;
        }
        bVar16 = false;
        bVar18 = false;
        bVar19 = false;
        if (!bVar17) {
          bVar16 = false;
          bVar18 = false;
          bVar19 = true;
          if (!NAN(fVar48) && !NAN(fVar55)) {
            bVar16 = fVar48 < fVar55;
            bVar18 = fVar48 == fVar55;
            bVar19 = false;
          }
        }
        if (!bVar18 && bVar16 == bVar19) goto LAB_002ac748;
        fVar36 = fVar35 * fVar56 + fVar57 * fVar54 + fVar61 * fVar42;
        fVar49 = 1.0 / fVar49;
LAB_002ac71c:
        fVar36 = fVar36 * fVar49;
        bVar16 = false;
        bVar18 = true;
        if (0.0 <= fVar36) {
          bVar16 = false;
          bVar18 = true;
          if (!NAN(fVar36) && !NAN(fVar28)) {
            bVar16 = fVar36 == fVar28;
            bVar18 = fVar28 <= fVar36;
          }
        }
        if ((bVar18 && !bVar16) ||
           ((~*(byte *)(*(long *)(lVar23 + 0x50) + uVar20 * 4 + 2) & 0x7f) == 0)) goto LAB_002ac748;
        bVar14 = 0;
      }
      fVar52 = *pfVar6;
      fVar35 = pfVar6[1];
      fVar63 = pfVar8[1] - fVar35;
      fVar48 = *pfVar8 - fVar52;
      fVar59 = pfVar6[2];
      fVar56 = pfVar8[2] - fVar59;
      fVar49 = pfVar7[1] - fVar35;
      fVar61 = *pfVar7 - fVar52;
      fVar62 = pfVar7[2] - fVar59;
      fVar54 = fVar58 * fVar62 - fVar47 * fVar49;
      fVar55 = fVar47 * fVar61 - fVar31 * fVar62;
      fVar57 = fVar31 * fVar49 - fVar58 * fVar61;
      fVar42 = fVar56 * fVar57 + fVar48 * fVar54 + fVar63 * fVar55;
      if ((param_7 & 1) == 0) {
        fVar35 = fabsf(fVar42);
        if (DAT_01d4c3d8 <= fVar35) {
          fVar42 = 1.0 / fVar42;
          fVar35 = fVar32 - *pfVar6;
          fVar59 = fVar33 - pfVar6[1];
          fVar46 = fVar37 - pfVar6[2];
          fVar52 = fVar42 * (fVar54 * fVar35 + fVar55 * fVar59 + fVar57 * fVar46);
          if ((fVar30 <= fVar52) && (fVar52 <= DAT_01d4c4e0)) {
            fVar54 = fVar56 * fVar59 - fVar63 * fVar46;
            fVar55 = fVar48 * fVar46 - fVar56 * fVar35;
            fVar59 = fVar63 * fVar35 - fVar48 * fVar59;
            fVar35 = fVar42 * (fVar47 * fVar59 + fVar31 * fVar54 + fVar58 * fVar55);
            if ((fVar30 <= fVar35) &&
               ((fVar52 + fVar35 <= DAT_01d4c4e0 &&
                (fVar42 = fVar42 * (fVar62 * fVar59 + fVar61 * fVar54 + fVar49 * fVar55),
                0.0 <= fVar42)))) goto LAB_002ac884;
          }
        }
LAB_002ac9bc:
        bVar21 = 1;
        fVar42 = DAT_01d4c18c;
      }
      else {
        if (fVar42 < DAT_01d4c3d8) goto LAB_002ac9bc;
        fVar52 = fVar32 - fVar52;
        fVar35 = fVar33 - fVar35;
        fVar59 = fVar37 - fVar59;
        fVar54 = fVar59 * fVar57 + fVar52 * fVar54 + fVar35 * fVar55;
        if ((fVar54 < -(fVar42 * fVar13)) || (fVar55 = fVar42 + fVar42 * fVar13, fVar55 < fVar54))
        goto LAB_002ac9bc;
        fVar57 = fVar35 * fVar56 - fVar63 * fVar59;
        fVar59 = fVar48 * fVar59 - fVar52 * fVar56;
        fVar52 = fVar52 * fVar63 - fVar48 * fVar35;
        fVar35 = fVar47 * fVar52 + fVar31 * fVar57 + fVar58 * fVar59;
        if ((fVar35 < -(fVar42 * fVar13)) ||
           ((fVar55 < fVar35 + fVar54 ||
            (fVar42 = (fVar52 * fVar62 + fVar61 * fVar57 + fVar49 * fVar59) * (1.0 / fVar42),
            fVar42 < 0.0)))) goto LAB_002ac9bc;
LAB_002ac884:
        if ((fVar28 < fVar42) ||
           ((~*(byte *)(*(long *)(lVar23 + 0x50) + uVar20 * 4 + 3) & 0x7f) == 0)) goto LAB_002ac9bc;
        bVar21 = 0;
      }
      if ((!(bool)(bVar14 | fVar42 < fVar36)) || (!(bool)(bVar21 | fVar36 < fVar42))) {
        *param_5 = 1;
        return;
      }
    }
    if (fVar40 < fVar45) {
      if (iVar1 + iVar25 < 0) {
        return;
      }
      if ((float)iVar9 <= (float)(iVar1 + iVar25)) {
        return;
      }
      fVar53 = fVar44 + fVar53;
      fVar40 = 1.0 / fVar41 + fVar40;
      iVar24 = iVar1;
    }
    else {
      iVar26 = iVar26 + iVar27;
      if (iVar26 + iVar27 < 0) {
        return;
      }
      if ((float)iVar10 <= (float)(iVar26 + iVar27)) {
        return;
      }
      fVar34 = fVar50 + fVar34;
      fVar45 = 1.0 / fVar29 + fVar45;
    }
    fVar35 = fVar60;
    if (DAT_01d4c2dc <= fVar38) {
      return;
    }
  } while( true );
}


