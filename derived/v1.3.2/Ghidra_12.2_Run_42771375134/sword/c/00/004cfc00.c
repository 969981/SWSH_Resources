/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cfc00; name: FUN_004cfc00
 */


void FUN_004cfc00(long *param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  bool bVar21;
  long lVar22;
  float fVar23;
  long *plVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float local_ec;
  ulong local_b0;
  undefined8 local_a8;
  
  lVar22 = param_1[4];
  if ((*(byte *)(lVar22 + 0x84) >> 1 & 1) == 0) {
    local_ec = 0.0;
    lVar27 = lVar22;
  }
  else {
    local_ec = (float)(**(code **)(*param_1 + 0x78))(param_1);
    lVar27 = param_1[4];
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0xc5800000;
  fVar30 = *(float *)(param_1 + 7);
  local_b0 = 1;
  if (*(long *)(lVar27 + 0x50) == 0) {
    fVar28 = 1.0;
    uVar20 = param_1[9];
    fVar4 = DAT_01d4bd24;
    fVar5 = DAT_01d4bda4;
    fVar6 = DAT_01d4be78;
    fVar7 = DAT_01d4bf90;
    fVar8 = DAT_01d4c158;
    fVar9 = DAT_01d4c1d8;
    fVar10 = DAT_01d4c23c;
    fVar11 = DAT_01d4c2e8;
    fVar12 = DAT_01d4c2ec;
    fVar13 = DAT_01d4c46c;
    fVar14 = DAT_01d4c4dc;
    fVar15 = DAT_01d4c714;
    pfVar25 = (float *)PTR_DAT_02712df0;
  }
  else {
    fVar28 = (float)FUN_00479b20(*(long *)(lVar27 + 0x50),&local_b0);
    uVar20 = param_1[9];
    fVar4 = DAT_01d4bd24;
    fVar5 = DAT_01d4bda4;
    fVar6 = DAT_01d4be78;
    fVar7 = DAT_01d4bf90;
    fVar8 = DAT_01d4c158;
    fVar9 = DAT_01d4c1d8;
    fVar10 = DAT_01d4c23c;
    fVar11 = DAT_01d4c2e8;
    fVar12 = DAT_01d4c2ec;
    fVar13 = DAT_01d4c46c;
    fVar14 = DAT_01d4c4dc;
    fVar15 = DAT_01d4c714;
    pfVar25 = (float *)PTR_DAT_02712df0;
  }
  DAT_01d4bd24 = fVar4;
  DAT_01d4bda4 = fVar5;
  DAT_01d4be78 = fVar6;
  DAT_01d4bf90 = fVar7;
  DAT_01d4c158 = fVar8;
  DAT_01d4c1d8 = fVar9;
  DAT_01d4c23c = fVar10;
  DAT_01d4c2e8 = fVar11;
  DAT_01d4c2ec = fVar12;
  DAT_01d4c46c = fVar13;
  DAT_01d4c4dc = fVar14;
  DAT_01d4c714 = fVar15;
  PTR_DAT_02712df0 = (undefined *)pfVar25;
  if (uVar20 != 0) {
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar20;
    do {
      while( true ) {
        local_a8 = auVar34._8_8_;
        local_b0 = auVar34._0_8_;
        uVar20 = local_b0;
        lVar26 = *(long *)(local_b0 + 200);
        iVar1 = *(int *)(local_b0 + 0x2a0);
        lVar27 = param_1[5];
        if (iVar1 != 0) break;
        fVar33 = 0.0;
        if (fVar12 <= *(float *)(lVar22 + 0x88) * fVar8) {
          uVar19 = (uint)(fVar15 + fVar5 * *(float *)(lVar22 + 0x88));
          fVar33 = (float)(uVar19 & 0x7fffff | 0x3f800000);
          fVar33 = (fVar10 + fVar33 * (fVar9 + fVar13 * fVar33)) * (float)(uVar19 & 0xff800000);
        }
        fVar23 = 0.0;
        if (*(uint *)(param_1 + 6) != 0) {
          fVar23 = 0.0;
          plVar24 = (long *)(lVar27 + 0x50);
          lVar27 = (ulong)*(uint *)(param_1 + 6) * 0x60;
          do {
            if ((lVar26 == *plVar24) && (fVar23 < *(float *)(plVar24 + -4))) {
              fVar23 = *(float *)(plVar24 + -4);
            }
            plVar24 = plVar24 + 0xc;
            lVar27 = lVar27 + -0x60;
          } while (lVar27 != 0);
        }
        *(undefined4 *)(local_b0 + 0xd0) = *(undefined4 *)(lVar22 + 0x8c);
        *(undefined4 *)(local_b0 + 0xd4) = *(undefined4 *)(lVar22 + 0x90);
        fVar29 = fVar28 * fVar30 * fVar23 * fVar33;
joined_r0x004cff88:
        if (0.0 < fVar29) {
          fVar31 = (float)((uint)fVar29 & 0x7fffff | 0x3f800000);
          fVar31 = (fVar31 + -1.0) / (fVar31 + 1.0);
          fVar29 = *(float *)(*(long *)(uVar20 + 0x50) + 0x3c) +
                   fVar11 * (fVar31 + fVar31 + (fVar31 + fVar31) * fVar31 * fVar31 * fVar4 +
                            fVar14 * ((float)((uint)fVar29 >> 0x17 & 0xff) + fVar7));
          fVar31 = *pfVar25;
          *(float *)(uVar20 + 0x294) = fVar29;
          *(float *)(uVar20 + 0x290) = fVar33;
          *(byte *)(uVar20 + 0x2a4) =
               *(byte *)(uVar20 + 0x2a4) & 0xfc | (*(byte *)(uVar20 + 0x2a4) & 1) << 1 |
               fVar29 <= fVar31 & param_2;
          *(undefined4 *)(uVar20 + 0x10) = *(undefined4 *)(uVar20 + 0x14);
          *(undefined4 *)(uVar20 + 0x14) = 0;
          uVar2 = *(undefined4 *)(uVar20 + 0x1c);
          *(float *)(uVar20 + 0x1c) = fVar23;
          *(undefined4 *)(uVar20 + 0x18) = uVar2;
          if (*(float *)((long)param_1 + 0x3c) < fVar29) {
            *(float *)((long)param_1 + 0x3c) = fVar29;
          }
          lVar27 = *(long *)(uVar20 + 0x58);
          if (((lVar27 != 0) && (-local_ec < *(float *)(lVar22 + 0x80))) &&
             (*(float *)(lVar27 + 0x358) < fVar29 + local_ec)) {
            *(float *)(lVar27 + 0x358) = fVar29 + local_ec;
          }
          lVar27 = *(long *)(uVar20 + 0x40);
        }
        else {
          fVar29 = *pfVar25;
          *(undefined4 *)(uVar20 + 0x294) = 0xc5800000;
          *(undefined4 *)(uVar20 + 0x10) = *(undefined4 *)(uVar20 + 0x14);
          *(undefined4 *)(uVar20 + 0x14) = 0;
          *(byte *)(uVar20 + 0x2a4) =
               *(byte *)(uVar20 + 0x2a4) & 0xfc | (*(byte *)(uVar20 + 0x2a4) & 1) << 1 |
               fVar6 <= fVar29;
          *(float *)(uVar20 + 0x290) = fVar33;
          *(undefined4 *)(uVar20 + 0x18) = *(undefined4 *)(uVar20 + 0x1c);
          *(float *)(uVar20 + 0x1c) = fVar23;
          lVar27 = *(long *)(uVar20 + 0x40);
        }
        auVar34._8_8_ = uVar20;
        auVar34._0_8_ = lVar27;
        if (lVar27 == 0) {
          return;
        }
      }
      lVar18 = FUN_004699d0(local_b0);
      if ((int)param_1[0xb] != 0) {
        plVar24 = (long *)param_1[10];
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar29 = 0.0;
        fVar23 = 0.0;
        bVar21 = false;
        do {
          lVar16 = plVar24[1];
          iVar17 = FUN_004ca370(lVar18);
          if (((int)lVar16 == iVar17) && (*plVar24 == *(long *)(lVar18 + 8))) {
            fVar32 = *(float *)(plVar24 + 3) + fVar32;
            fVar31 = *(float *)((long)plVar24 + 0x14) + fVar31;
            fVar33 = *(float *)((long)plVar24 + 0xc) + fVar33;
            bVar21 = true;
            fVar23 = fVar32;
            fVar29 = fVar31;
          }
          plVar24 = plVar24 + 4;
        } while (plVar24 != (long *)(param_1[10] + (ulong)*(uint *)(param_1 + 0xb) * 0x20));
        pfVar25 = (float *)PTR_DAT_02712df0;
        if (!bVar21) {
          bVar3 = *(byte *)(uVar20 + 0x2a4);
          goto joined_r0x004cfe0c;
        }
LAB_004cfe10:
        *(float *)(uVar20 + 0xd0) = fVar29;
        *(float *)(uVar20 + 0xd4) = fVar23;
        lVar18 = param_1[5] + (ulong)*(uint *)(param_1 + 6) * 0x60;
        fVar23 = 0.0;
        if (iVar1 == 1) {
          for (; lVar27 != lVar18; lVar27 = lVar27 + 0x60) {
            if ((lVar26 == *(long *)(lVar27 + 0x50)) && (fVar23 < *(float *)(lVar27 + 0x34))) {
              fVar23 = *(float *)(lVar27 + 0x34);
            }
          }
        }
        else {
          for (; lVar27 != lVar18; lVar27 = lVar27 + 0x60) {
            if ((lVar26 == *(long *)(lVar27 + 0x50)) && (fVar23 < *(float *)(lVar27 + 0x38))) {
              fVar23 = *(float *)(lVar27 + 0x38);
            }
          }
        }
        fVar29 = fVar28 * fVar30 * fVar23 * fVar33;
        goto joined_r0x004cff88;
      }
      fVar23 = 0.0;
      fVar29 = 0.0;
      bVar3 = *(byte *)(uVar20 + 0x2a4);
joined_r0x004cfe0c:
      fVar33 = 0.0;
      if ((bVar3 & 1) == 0) goto LAB_004cfe10;
      auVar34 = FUN_004cf990(param_1,&local_b0);
    } while (auVar34._0_8_ != 0);
  }
  return;
}


