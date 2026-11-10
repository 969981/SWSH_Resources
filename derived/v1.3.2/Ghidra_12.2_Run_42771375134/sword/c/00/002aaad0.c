/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002aaad0; name: FUN_002aaad0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_002aaad0(float *param_1,float *param_2,long param_3,float *param_4,float *param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
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
  undefined1 auStack_250 [8];
  float afStack_248 [5];
  uint local_234;
  uint local_230;
  uint local_22c;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  long local_198;
  undefined1 *local_190;
  float local_170 [8];
  float local_150 [32];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  fVar18 = *param_2;
  fVar19 = param_2[1];
  fVar53 = param_2[2];
  fVar20 = param_2[3];
  fVar26 = fVar18 + fVar18;
  fVar22 = fVar19 + fVar19;
  local_1ec = fVar53 * (fVar53 + fVar53);
  local_1e0 = (fVar53 + fVar53) * fVar20;
  local_1f0 = fVar26 * fVar19 + local_1e0;
  local_1e0 = fVar26 * fVar19 - local_1e0;
  fVar21 = *param_4;
  fVar27 = param_4[1];
  fVar35 = param_4[2];
  fVar38 = param_4[3];
  fVar28 = fVar21 + fVar21;
  fVar45 = param_5[3];
  fVar48 = param_5[4];
  fVar30 = fVar27 + fVar27;
  fVar24 = *param_5;
  fVar25 = param_5[1];
  local_1e4 = fVar26 * fVar53 - fVar22 * fVar20;
  local_1c4 = fVar26 * fVar53 + fVar22 * fVar20;
  fVar57 = fVar35 * (fVar35 + fVar35);
  local_1d8 = (fVar35 + fVar35) * fVar38;
  fVar47 = fVar45 + fVar45;
  fVar51 = fVar48 + fVar48;
  local_1d0 = fVar22 * fVar53 + fVar26 * fVar20;
  local_1c0 = fVar22 * fVar53 - fVar26 * fVar20;
  local_1f8 = fVar28 * fVar27 + local_1d8;
  local_1d8 = fVar28 * fVar27 - local_1d8;
  local_1b8 = fVar28 * fVar35 - fVar30 * fVar38;
  fVar49 = param_5[5];
  local_1dc = fVar28 * fVar35 + fVar30 * fVar38;
  fVar23 = param_5[6];
  local_1bc = fVar30 * fVar35 + fVar28 * fVar38;
  fVar20 = fVar49 * (fVar49 + fVar49);
  fVar53 = (fVar49 + fVar49) * fVar23;
  local_1cc = fVar30 * fVar35 - fVar28 * fVar38;
  local_1c8 = 1.0 - fVar18 * fVar26;
  local_1f4 = (1.0 - fVar19 * fVar22) - local_1ec;
  local_1ec = local_1c8 - local_1ec;
  local_1c8 = local_1c8 - fVar19 * fVar22;
  fVar18 = fVar47 * fVar48 + fVar53;
  fVar28 = 1.0 - fVar21 * fVar28;
  fVar35 = 1.0 - fVar45 * fVar47;
  local_1e8 = (1.0 - fVar27 * fVar30) - fVar57;
  fVar57 = fVar28 - fVar57;
  fVar22 = fVar47 * fVar49 + fVar51 * fVar23;
  fVar21 = fVar51 * fVar49 + fVar47 * fVar23;
  fVar38 = fVar51 * fVar49 - fVar47 * fVar23;
  fVar28 = fVar28 - fVar27 * fVar30;
  fVar27 = fVar35 - fVar20;
  fVar35 = fVar35 - fVar48 * fVar51;
  fVar20 = (1.0 - fVar48 * fVar51) - fVar20;
  fVar30 = fVar18 * fVar25;
  fVar41 = fVar27 * fVar25;
  fVar45 = fVar24 * fVar20;
  fVar53 = fVar47 * fVar48 - fVar53;
  fVar25 = fVar38 * fVar25;
  fVar48 = fVar24 * fVar53;
  fVar24 = fVar24 * fVar22;
  fVar26 = fVar47 * fVar49 - fVar51 * fVar23;
  fVar19 = param_5[2];
  fVar47 = fVar26 * fVar19;
  local_1d4 = fVar20 * fVar45 + fVar18 * fVar30 + fVar26 * fVar47;
  fVar23 = fVar21 * fVar19;
  fVar19 = fVar35 * fVar19;
  local_1b0 = fVar20 * fVar48 + fVar18 * fVar41 + fVar26 * fVar23;
  local_210 = fVar20 * fVar24 + fVar18 * fVar25 + fVar26 * fVar19;
  local_214 = fVar53 * fVar45 + fVar27 * fVar30 + fVar21 * fVar47;
  local_218 = fVar53 * fVar48 + fVar27 * fVar41 + fVar21 * fVar23;
  fVar26 = fVar53 * fVar24 + fVar27 * fVar25 + fVar21 * fVar19;
  local_1a8 = fVar22 * fVar45 + fVar38 * fVar30 + fVar35 * fVar47;
  local_1ac = fVar22 * fVar48 + fVar38 * fVar41 + fVar35 * fVar23;
  local_1fc = param_2[6];
  bVar2 = *(byte *)(param_3 + 0x46);
  local_1b4 = fVar22 * fVar24 + fVar38 * fVar25 + fVar35 * fVar19;
  local_200 = param_4[4];
  local_204 = param_4[5];
  local_208 = param_4[6];
  lVar14 = -((ulong)((uint)bVar2 * 0xc + 0xf) & 0x1ff0);
  if (bVar2 != 0) {
    fVar47 = local_1cc * local_210 + local_1f8 * local_1d4 + fVar57 * local_1b0;
    fVar50 = local_1dc * fVar26 + local_1e8 * local_214 + local_1d8 * local_218;
    fVar24 = local_1dc * local_210 + local_1e8 * local_1d4 + local_1d8 * local_1b0;
    fVar25 = fVar28 * fVar26 + local_1b8 * local_214 + local_1bc * local_218;
    fVar49 = fVar28 * local_210 + local_1b8 * local_1d4 + local_1bc * local_1b0;
    fVar52 = local_1cc * fVar26 + local_1f8 * local_214 + fVar57 * local_218;
    fVar54 = local_1dc * local_1b4 + local_1e8 * local_1a8 + local_1d8 * local_1ac;
    fVar55 = local_1cc * local_1b4 + local_1f8 * local_1a8 + fVar57 * local_1ac;
    fVar56 = fVar28 * local_1b4 + local_1b8 * local_1a8 + local_1bc * local_1ac;
    fVar22 = (local_204 + local_1cc * 0.0 + local_1f8 * 0.0 + fVar57 * 0.0) - param_2[5];
    fVar53 = (local_200 + local_1dc * 0.0 + local_1e8 * 0.0 + local_1d8 * 0.0) - param_2[4];
    fVar18 = (local_208 + fVar28 * 0.0 + local_1b8 * 0.0 + local_1bc * 0.0) - local_1fc;
    fVar21 = local_1f4 * fVar53;
    fVar27 = local_1f0 * fVar22;
    fVar35 = local_1e4 * fVar18;
    fVar45 = local_1e0 * fVar53;
    fVar53 = local_1c4 * fVar53;
    fVar23 = local_1ec * fVar22;
    fVar22 = local_1c0 * fVar22;
    fVar31 = local_1c8 * fVar49;
    fVar48 = local_1d0 * fVar18;
    fVar18 = local_1c8 * fVar18;
    fVar19 = local_1e0 * fVar24;
    fVar20 = local_1f4 * fVar24;
    fVar41 = local_1f0 * fVar47;
    fVar24 = local_1c4 * fVar24;
    fVar42 = local_1ec * fVar52;
    fVar57 = local_1ec * fVar47;
    fVar47 = local_1c0 * fVar47;
    fVar38 = local_1e4 * fVar49;
    fVar49 = local_1d0 * fVar49;
    fVar30 = local_1f4 * fVar50;
    fVar29 = local_1f4 * fVar54;
    fVar51 = local_1e0 * fVar50;
    fVar50 = local_1c4 * fVar50;
    fVar32 = local_1f0 * fVar52;
    fVar52 = local_1c0 * fVar52;
    fVar33 = local_1e4 * fVar25;
    fVar36 = local_1d0 * fVar25;
    fVar25 = local_1c8 * fVar25;
    fVar37 = local_1f0 * fVar55;
    fVar34 = local_1e0 * fVar54;
    fVar39 = local_1c0 * fVar55;
    fVar43 = local_1c8 * fVar56;
    fVar55 = local_1ec * fVar55;
    fVar54 = local_1c4 * fVar54;
    fVar40 = local_1e4 * fVar56;
    fVar56 = local_1d0 * fVar56;
    pfVar7 = (float *)(*(long *)(param_3 + 0x48) + (ulong)*(byte *)(param_3 + 0x47) * 0x14 + 8);
    pfVar9 = (float *)((long)afStack_248 + lVar14);
    uVar12 = (ulong)bVar2;
    local_20c = fVar28;
    do {
      fVar28 = pfVar7[-2];
      fVar44 = pfVar7[-1];
      fVar46 = *pfVar7;
      pfVar9[-2] = fVar35 + fVar21 + fVar27 +
                   (fVar38 + fVar20 + fVar41) * fVar28 + (fVar33 + fVar30 + fVar32) * fVar44 +
                   (fVar40 + fVar29 + fVar37) * fVar46;
      pfVar9[-1] = fVar48 + fVar45 + fVar23 +
                   (fVar49 + fVar19 + fVar57) * fVar28 + (fVar36 + fVar51 + fVar42) * fVar44 +
                   (fVar56 + fVar34 + fVar55) * fVar46;
      uVar12 = uVar12 - 1;
      *pfVar9 = fVar18 + fVar53 + fVar22 +
                (fVar31 + fVar24 + fVar47) * fVar28 + (fVar25 + fVar50 + fVar52) * fVar44 +
                (fVar43 + fVar54 + fVar39) * fVar46;
      pfVar7 = pfVar7 + 3;
      pfVar9 = pfVar9 + 3;
    } while (uVar12 != 0);
  }
  local_190 = auStack_250 + lVar14;
  FUN_0029a730(&local_d0,(ulong)bVar2,auStack_250 + lVar14);
  lVar14 = *(long *)(param_1 + 4);
  fVar53 = *(float *)(lVar14 + 0x58);
  fVar18 = *param_1;
  fVar22 = param_1[1];
  fVar20 = param_1[2];
  if (fVar18 <= 0.0) {
    local_c4 = fVar18 * local_c4;
    iVar6 = *(int *)(lVar14 + 0x38);
    if (local_c4 < 0.0) {
      uVar15 = 0;
    }
    else {
      uVar15 = iVar6 - 2;
      if (local_c4 <= (float)uVar15) {
        fVar19 = floorf(local_c4);
        uVar15 = (uint)fVar19;
        iVar6 = *(int *)(lVar14 + 0x38);
      }
    }
  }
  else {
    fVar19 = fVar18 * local_d0;
    iVar6 = *(int *)(lVar14 + 0x38);
    local_d0 = local_c4;
    if (0.0 <= fVar19) {
      uVar15 = iVar6 - 2;
      if (fVar19 <= (float)uVar15) {
        fVar19 = floorf(fVar19);
        uVar15 = (uint)fVar19;
        iVar6 = *(int *)(lVar14 + 0x38);
        local_d0 = local_c4;
      }
    }
    else {
      uVar15 = 0;
    }
  }
  uVar4 = fVar18 * local_d0;
  if (0.0 <= (float)uVar4) {
    uVar16 = iVar6 - 1;
    if ((float)uVar4 <= (float)uVar16) {
      fVar19 = ceilf((float)uVar4);
      uVar16 = (uint)fVar19;
    }
  }
  else {
    uVar16 = 0;
  }
  if (fVar20 <= 0.0) {
    local_bc = fVar20 * local_bc;
    iVar6 = *(int *)(lVar14 + 0x3c);
    if (local_bc < 0.0) {
      uVar5 = 0;
    }
    else {
      uVar5 = iVar6 - 2;
      if (local_bc <= (float)uVar5) {
        fVar19 = floorf(local_bc);
        uVar5 = (uint)fVar19;
        iVar6 = *(int *)(lVar14 + 0x3c);
      }
    }
  }
  else {
    fVar19 = fVar20 * local_c8;
    iVar6 = *(int *)(lVar14 + 0x3c);
    local_c8 = local_bc;
    if (0.0 <= fVar19) {
      uVar5 = iVar6 - 2;
      if (fVar19 <= (float)uVar5) {
        fVar19 = floorf(fVar19);
        uVar5 = (uint)fVar19;
        iVar6 = *(int *)(lVar14 + 0x3c);
        local_c8 = local_bc;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  uVar4 = fVar20 * local_c8;
  if (0.0 <= (float)uVar4) {
    uVar17 = iVar6 - 1;
    if ((float)uVar4 <= (float)uVar17) {
      fVar20 = ceilf((float)uVar4);
      uVar17 = (uint)fVar20;
    }
  }
  else {
    uVar17 = 0;
  }
  fVar20 = DAT_01d4bc1c;
  local_1a4 = 1.0 / fVar22;
  fVar53 = *(float *)(&DAT_01cd5280 + (ulong)(fVar53 <= 0.0) * 4);
  if (uVar15 <= uVar16) {
    if (uVar17 < uVar5) {
      uVar17 = uVar15;
      do {
        uVar17 = uVar17 + 1;
      } while (uVar17 <= uVar16);
    }
    else {
      iVar6 = uVar15 * *(int *)(lVar14 + 0x3c);
      uVar10 = uVar15;
      do {
        uVar11 = uVar5;
        if (*(float *)(lVar14 + 0x58) <= 0.0) {
          do {
            uVar1 = iVar6 + uVar11;
            uVar11 = uVar11 + 1;
            fVar22 = (float)(int)*(short *)(*(long *)(lVar14 + 0x50) + (ulong)uVar1 * 4);
            if (fVar53 <= fVar22) {
              fVar53 = fVar22;
            }
          } while (uVar11 <= uVar17);
        }
        else {
          do {
            uVar1 = iVar6 + uVar11;
            uVar11 = uVar11 + 1;
            fVar22 = (float)(int)*(short *)(*(long *)(lVar14 + 0x50) + (ulong)uVar1 * 4);
            if (fVar22 <= fVar53) {
              fVar53 = fVar22;
            }
          } while (uVar11 <= uVar17);
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + *(int *)(lVar14 + 0x3c);
      } while (uVar10 <= uVar16);
    }
  }
  fVar53 = local_1a4 * fVar53;
  fVar22 = *(float *)(lVar14 + 0x58);
  if (fVar22 <= 0.0) {
    if (fVar53 < local_cc) {
      return 0;
    }
  }
  else if (local_c0 < fVar53) {
    return 0;
  }
  local_234 = uVar5;
  local_220 = fVar18;
  local_21c = fVar26;
  if (*(char *)(param_3 + 0x46) == '\0') {
LAB_002ab708:
    local_230 = uVar16;
    local_22c = uVar15;
    local_198 = lVar14;
                    /* WARNING: Subroutine does not return */
    memset(local_150,0,0x80);
  }
  pfVar7 = (float *)(local_190 + 4);
  uVar12 = 1;
  do {
    fVar26 = *pfVar7;
    bVar3 = fVar26 < fVar53;
    if (0.0 < fVar22) {
      bVar3 = fVar26 != fVar53 && fVar26 >= fVar53;
    }
    if ((((bVar3) && (0.0 <= pfVar7[-1] * *param_1)) && (0.0 <= pfVar7[1] * param_1[2])) &&
       ((lVar13 = *(long *)(param_1 + 4), pfVar7[-1] * *param_1 < *(float *)(lVar13 + 0x40) + 1.0 &&
        (pfVar7[1] * param_1[2] < *(float *)(lVar13 + 0x44) + 1.0)))) {
      fVar22 = *(float *)(*(long *)(param_1 + 6) + 0x10);
      uVar5 = FUN_00250220(lVar13,local_150,local_170);
      lVar8 = *(long *)(lVar13 + 0x50);
      fVar26 = local_150[0];
      if (*(char *)(lVar8 + (ulong)uVar5 * 4 + 2) < '\0') {
        uVar17 = *(int *)(lVar13 + 0x3c) + uVar5;
        fVar18 = (float)(int)*(short *)(lVar8 + (ulong)uVar5 * 4);
        fVar19 = (float)(int)*(short *)(lVar8 + (ulong)(uVar17 + 1) * 4);
        if (local_150[0] < local_170[0]) {
          fVar21 = (float)(int)*(short *)(lVar8 + (ulong)(uVar5 + 1) * 4);
          fVar18 = local_170[0] * (fVar21 - fVar18) + fVar18;
          goto LAB_002ab66c;
        }
        fVar28 = (float)(int)*(short *)(lVar8 + (ulong)uVar17 * 4);
        fVar18 = local_150[0] * (fVar28 - fVar18) + fVar18;
        fVar28 = fVar19 - fVar28;
        fVar26 = local_170[0];
      }
      else {
        uVar17 = *(int *)(lVar13 + 0x3c) + uVar5;
        fVar28 = (float)(int)*(short *)(lVar8 + (ulong)uVar17 * 4);
        fVar19 = (float)(int)*(short *)(lVar8 + (ulong)(uVar5 + 1) * 4);
        if (1.0 <= local_150[0] + local_170[0]) {
          fVar21 = (float)(int)*(short *)(lVar8 + (ulong)(uVar17 + 1) * 4);
          fVar18 = (1.0 - local_170[0]) * (fVar28 - fVar21) + fVar21;
          fVar26 = 1.0 - local_150[0];
LAB_002ab66c:
          fVar28 = fVar19 - fVar21;
        }
        else {
          fVar21 = (float)(int)*(short *)(lVar8 + (ulong)uVar5 * 4);
          fVar18 = local_170[0] * (fVar19 - fVar21) + fVar21;
          fVar28 = fVar28 - fVar21;
        }
      }
      fVar22 = *pfVar7 - fVar22 * (fVar26 * fVar28 + fVar18);
      fVar26 = *(float *)(lVar14 + 0x58);
      if (((((fVar26 <= fVar22) && (fVar22 <= 0.0)) && (fVar26 <= 0.0)) ||
          (((fVar22 < fVar26 && (fVar20 < fVar22)) && (0.0 < fVar26)))) &&
         (iVar6 = FUN_00250830(pfVar7[-1],pfVar7[1],param_1), iVar6 != -1)) {
        return 1;
      }
    }
    if (*(byte *)(param_3 + 0x46) <= uVar12) goto LAB_002ab708;
    fVar22 = *(float *)(lVar14 + 0x58);
    pfVar7 = pfVar7 + 3;
    uVar12 = uVar12 + 1;
  } while( true );
}


