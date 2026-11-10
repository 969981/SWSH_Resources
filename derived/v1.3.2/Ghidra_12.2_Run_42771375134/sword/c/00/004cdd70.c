/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cdd70; name: FUN_004cdd70
 */


void FUN_004cdd70(long *param_1,float *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
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
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_98 [8];
  
  bVar5 = *(byte *)(param_1 + 1);
  uVar14 = *(ushort *)((long)param_1 + 0x12);
  uVar16 = (ulong)uVar14;
  uVar15 = (uint)uVar14;
  uVar19 = (uint)bVar5;
  if (*(char *)((long)param_2 + 0xb) == '\0') {
    cVar6 = *(char *)((long)param_2 + 0xd);
  }
  else {
    *(undefined1 *)((long)param_2 + 0xb) = 0;
    if (*(char *)(param_2 + 3) == '\0') {
      if ((DAT_01d4bec4 < *param_2) || (DAT_01d4bec4 < param_2[1])) {
        bVar7 = false;
        *(undefined1 *)((long)param_2 + 10) = 0;
        bVar9 = false;
        if (*(char *)((long)param_2 + 0xd) != '\0') goto LAB_004ce16c;
      }
      else {
        bVar7 = true;
        bVar9 = true;
        if (*(char *)((long)param_2 + 0xd) != '\x01') {
LAB_004ce16c:
          bVar7 = bVar9;
          *(undefined1 *)((long)param_2 + 0xe) = 0;
        }
      }
      *(bool *)((long)param_2 + 0xd) = bVar7;
      uVar4 = *(undefined2 *)PTR_DAT_027133f0;
      if (!bVar7) {
        uVar4 = 0;
      }
      *(undefined2 *)(param_2 + 2) = uVar4;
      if (!bVar7) goto LAB_004ce190;
      goto LAB_004cdf84;
    }
    fVar22 = param_2[1];
    *(undefined1 *)(param_2 + 3) = 0;
    puVar8 = PTR_DAT_027133f0;
    fVar23 = DAT_01d4bec4;
    *param_2 = fVar22;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)puVar8;
    if (fVar23 < fVar22) {
      *(undefined1 *)((long)param_2 + 10) = 0;
    }
    pcVar17 = (char *)((long)param_2 + 0xd);
    if (fVar22 <= fVar23 != (bool)*pcVar17) {
      *(undefined1 *)((long)param_2 + 0xe) = 0;
    }
    *pcVar17 = fVar22 <= fVar23;
    if (fVar22 <= fVar23) goto LAB_004cdf84;
    fVar22 = (float)FUN_004cf7a0(*(undefined2 *)PTR_DAT_02712ac0);
    fVar23 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
    fVar23 = tanf((fVar22 / fVar23) * DAT_01d4bb38);
    fVar22 = DAT_01d4c27c;
    fVar26 = fVar23 * fVar23 + 1.0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 3) = 0;
    param_3[4] = 0;
    fVar25 = fVar26 - fVar23 * fVar22;
    fVar22 = 1.0 / (fVar26 + fVar23 * fVar22);
    fVar26 = fVar22 * -2.0;
    fVar23 = fVar22 + fVar22 + fVar26 * fVar23 * fVar23;
    param_3[1] = CONCAT44(fVar22,fVar22);
    *param_3 = CONCAT44(fVar22,fVar22);
    fVar24 = -(fVar22 * fVar25);
    fVar25 = fVar22 * fVar25;
    fVar29 = fVar26 * fVar24;
    fVar27 = fVar22 * fVar24;
    fVar31 = fVar23 * fVar23;
    fVar34 = fVar23 * fVar22 * fVar23;
    *(float *)((long)param_3 + 0x54) = fVar23 * fVar22;
    *(float *)(param_3 + 0xb) = fVar34 + fVar27;
    fVar30 = fVar22 + fVar26 * fVar23;
    *(float *)((long)param_3 + 100) = fVar31 - fVar25;
    *(float *)(param_3 + 0xd) = (fVar31 + fVar25 * -2.0) * fVar23;
    fVar38 = fVar29 + fVar23 * fVar30;
    fVar28 = (fVar23 + -2.0) * fVar22;
    *(float *)((long)param_3 + 0x44) = fVar30;
    *(float *)(param_3 + 9) = fVar38;
    fVar35 = fVar23 * -(fVar25 * fVar23);
    *(float *)((long)param_3 + 0x1c) = fVar28;
    *(float *)((long)param_3 + 0x8c) = fVar23;
    *(float *)(param_3 + 0x12) = fVar24;
    fVar30 = fVar27 + fVar22 + fVar23 * fVar28;
    *(float *)(param_3 + 5) = fVar28;
    *(float *)((long)param_3 + 0x2c) = fVar30;
    *(float *)((long)param_3 + 0x34) = fVar28;
    *(float *)(param_3 + 7) = fVar30;
    *(float *)((long)param_3 + 0x5c) = (fVar34 + fVar27 + fVar27) * fVar23;
    *(float *)(param_3 + 0xc) = fVar23;
    *(float *)((long)param_3 + 0x84) = fVar26;
    *(float *)(param_3 + 0x11) = fVar22;
    *(float *)((long)param_3 + 0x4c) = fVar27 + fVar23 * (fVar38 + fVar29);
    *(float *)(param_3 + 10) = fVar22;
    *(float *)((long)param_3 + 0x6c) = fVar25 * fVar25 + fVar31 * (fVar31 + fVar25 * -3.0);
    *(float *)(param_3 + 0xe) = fVar24;
    *(float *)((long)param_3 + 0x3c) = (fVar29 - fVar25 * fVar22 * fVar23) + fVar23 * fVar30;
    *(float *)(param_3 + 8) = fVar26;
    *(float *)((long)param_3 + 0x7c) = (fVar35 - fVar25 * fVar25 * -2.0) * fVar23;
    *(float *)(param_3 + 0x10) = fVar22;
    *(undefined4 *)(param_3 + 6) = 0;
    *(float *)((long)param_3 + 0x74) = -(fVar25 * fVar23);
    *(float *)(param_3 + 0xf) = fVar35 + fVar25 * fVar25;
    cVar6 = *pcVar17;
  }
  if (cVar6 == '\0') {
LAB_004ce190:
    fVar23 = DAT_01d4c27c;
    fVar22 = DAT_01d4bb38;
    uVar14 = *(ushort *)(param_2 + 2);
    uVar10 = *(ushort *)PTR_DAT_027133f0;
    if (uVar10 <= uVar14) {
      if (uVar19 != 0) {
        lVar21 = 0;
        uVar18 = 0;
        do {
          FUN_004cf260(param_3,*param_1 + lVar21 * (ulong)*(ushort *)(param_1 + 2),uVar16,
                       uVar18 & 0xffffffff,auStack_a8);
          uVar18 = uVar18 + 1;
          lVar21 = lVar21 + 4;
        } while (bVar5 != uVar18);
      }
      if (*(char *)((long)param_2 + 10) < 1) {
        return;
      }
      uVar15 = (int)*(char *)((long)param_2 + 10) - 1;
      *(char *)((long)param_2 + 10) = (char)uVar15;
      if ((uVar15 & 0xff) != 0) {
        return;
      }
      if (*(char *)((long)param_2 + 0xd) != '\x01') {
        *(undefined1 *)((long)param_2 + 0xe) = 0;
      }
      *(undefined1 *)((long)param_2 + 0xd) = 1;
      return;
    }
    if (uVar15 != 0) {
      fVar24 = *param_2;
      fVar26 = param_2[1];
      uVar11 = 0;
      do {
        uVar3 = *(uint *)PTR_DAT_027133e8;
        if (uVar15 - uVar11 <= *(uint *)PTR_DAT_027133e8) {
          uVar3 = uVar15 - uVar11;
        }
        if (uVar14 < uVar10) {
          *(ushort *)(param_2 + 2) = uVar14 + 1;
          fVar25 = (float)FUN_004cf7a0(((fVar26 - fVar24) * (float)(ushort)(uVar14 + 1)) /
                                       (float)uVar10 + fVar24,*(undefined2 *)PTR_DAT_02712ac0);
          fVar27 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
          fVar25 = tanf((fVar25 / fVar27) * fVar22);
          param_3[2] = 0;
          *(undefined4 *)(param_3 + 3) = 0;
          param_3[4] = 0;
          fVar27 = fVar25 * fVar25 + 1.0;
          fVar29 = fVar27 - fVar25 * fVar23;
          fVar27 = 1.0 / (fVar27 + fVar25 * fVar23);
          fVar28 = fVar27 * -2.0;
          fVar30 = fVar27 + fVar27 + fVar28 * fVar25 * fVar25;
          fVar31 = fVar27 * fVar29;
          fVar25 = -(fVar27 * fVar29);
          fVar34 = fVar28 * fVar25;
          fVar32 = fVar30 * fVar30;
          param_3[1] = CONCAT44(fVar27,fVar27);
          *param_3 = CONCAT44(fVar27,fVar27);
          fVar29 = fVar27 * fVar25;
          fVar36 = fVar30 * fVar27 * fVar30;
          *(float *)((long)param_3 + 100) = fVar32 - fVar31;
          *(float *)(param_3 + 0xd) = (fVar32 + fVar31 * -2.0) * fVar30;
          *(float *)((long)param_3 + 0x54) = fVar30 * fVar27;
          *(float *)(param_3 + 0xb) = fVar36 + fVar29;
          fVar35 = fVar27 + fVar28 * fVar30;
          fVar38 = (fVar30 + -2.0) * fVar27;
          *(float *)((long)param_3 + 0x8c) = fVar30;
          *(float *)(param_3 + 0x12) = fVar25;
          *(float *)((long)param_3 + 0x84) = fVar28;
          *(float *)(param_3 + 0x11) = fVar27;
          *(float *)((long)param_3 + 0x1c) = fVar38;
          fVar37 = fVar30 * -(fVar31 * fVar30);
          fVar33 = fVar34 + fVar30 * fVar35;
          *(float *)((long)param_3 + 0x44) = fVar35;
          *(float *)(param_3 + 9) = fVar33;
          fVar35 = fVar29 + fVar27 + fVar30 * fVar38;
          *(float *)(param_3 + 5) = fVar38;
          *(float *)((long)param_3 + 0x2c) = fVar35;
          *(float *)((long)param_3 + 0x34) = fVar38;
          *(float *)(param_3 + 7) = fVar35;
          *(float *)((long)param_3 + 0x7c) = (fVar37 - fVar31 * fVar31 * -2.0) * fVar30;
          *(float *)(param_3 + 0x10) = fVar27;
          *(float *)((long)param_3 + 0x3c) = (fVar34 - fVar31 * fVar27 * fVar30) + fVar30 * fVar35;
          *(float *)(param_3 + 8) = fVar28;
          *(float *)((long)param_3 + 0x5c) = (fVar36 + fVar29 + fVar29) * fVar30;
          *(float *)(param_3 + 0xc) = fVar30;
          *(float *)((long)param_3 + 0x4c) = fVar29 + fVar30 * (fVar33 + fVar34);
          *(float *)(param_3 + 10) = fVar27;
          *(undefined4 *)(param_3 + 6) = 0;
          *(float *)((long)param_3 + 0x6c) = fVar31 * fVar31 + fVar32 * (fVar32 + fVar31 * -3.0);
          *(float *)(param_3 + 0xe) = fVar25;
          *(float *)((long)param_3 + 0x74) = -(fVar31 * fVar30);
          *(float *)(param_3 + 0xf) = fVar37 + fVar31 * fVar31;
        }
        if (uVar19 != 0) {
          lVar21 = 0;
          uVar16 = 0;
          do {
            FUN_004cf260(param_3,*param_1 + lVar21 * (ulong)*(ushort *)(param_1 + 2) +
                                 (ulong)uVar11 * 4,uVar3,uVar16 & 0xffffffff,auStack_98);
            uVar16 = uVar16 + 1;
            lVar21 = lVar21 + 4;
          } while (bVar5 != uVar16);
        }
        uVar14 = *(ushort *)(param_2 + 2);
        uVar10 = *(ushort *)PTR_DAT_027133f0;
        uVar11 = uVar3 + uVar11;
      } while (uVar11 < uVar15);
    }
    if (uVar14 < uVar10) {
      return;
    }
    *param_2 = param_2[1];
    if (DAT_01d4bec4 < param_2[1]) {
      return;
    }
    *(undefined1 *)((long)param_2 + 10) = 4;
    return;
  }
LAB_004cdf84:
  if (1 < uVar14) {
    if (*(char *)((long)param_2 + 0xe) == '\0') {
      *(undefined1 *)((long)param_2 + 0xe) = 1;
      if (bVar5 == 0) {
        return;
      }
      uVar11 = uVar15 + 3 & 3;
      uVar18 = 0;
      do {
        uVar20 = (ulong)*(ushort *)(param_1 + 2);
        lVar21 = *param_1;
        pfVar13 = (float *)(lVar21 + uVar18 * uVar20 * 4);
        fVar23 = *pfVar13;
        FUN_004cf260(param_3,pfVar13,1,uVar18,auStack_b0);
        fVar22 = *(float *)(param_3[0x14] + uVar18 * 0x10 + 8);
        *pfVar13 = fVar22;
        if (uVar15 != 1) {
          fVar22 = fVar22 - fVar23;
          fVar23 = fVar22 * (1.0 / (float)uVar14);
          if (uVar16 - 2 < 3) {
            lVar12 = 1;
          }
          else {
            pfVar13 = (float *)(lVar21 + uVar20 * uVar18 * 4 + 8);
            lVar12 = 1;
            do {
              fVar26 = (fVar22 - fVar23) - fVar23;
              pfVar13[-1] = pfVar13[-1] + (fVar22 - fVar23);
              lVar12 = lVar12 + 4;
              *pfVar13 = *pfVar13 + fVar26;
              fVar26 = fVar26 - fVar23;
              fVar22 = fVar26 - fVar23;
              pfVar13[1] = pfVar13[1] + fVar26;
              pfVar13[2] = pfVar13[2] + fVar22;
              pfVar13 = pfVar13 + 4;
            } while (uVar16 - uVar11 != lVar12);
          }
          if (uVar11 != 0) {
            pfVar13 = (float *)(lVar21 + uVar20 * uVar18 * 4 + lVar12 * 4);
            lVar21 = -(ulong)uVar11;
            do {
              fVar22 = fVar22 - fVar23;
              *pfVar13 = *pfVar13 + fVar22;
              lVar21 = lVar21 + 1;
              pfVar13 = pfVar13 + 1;
            } while (lVar21 != 0);
          }
        }
        uVar3 = (int)uVar18 + 1U & 0xffff;
        uVar18 = (ulong)uVar3;
      } while (uVar3 <= bVar5 && uVar19 != uVar3);
    }
    if (uVar19 != 0) {
      uVar11 = 0;
      do {
        uVar3 = uVar11 & 0xffff;
        uVar11 = uVar11 + 1;
        puVar2 = (undefined4 *)
                 (*param_1 + (ulong)uVar3 * (ulong)*(ushort *)(param_1 + 2) * 4 +
                 (ulong)(uVar15 - 2) * 4);
        puVar1 = (undefined4 *)(param_3[0x14] + (ulong)uVar3 * 0x10);
        puVar1[2] = puVar2[1];
        puVar1[3] = *puVar2;
        *puVar1 = puVar2[1];
        puVar1[1] = *puVar2;
      } while ((uVar11 & 0xffff) < uVar19);
    }
  }
  return;
}


