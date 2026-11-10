/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a2ff0; name: FUN_003a2ff0
 */


undefined8 FUN_003a2ff0(long param_1,long param_2,float *param_3,float *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar35;
  ulong uVar36;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar49;
  float fVar50;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float local_c0;
  float fStack_bc;
  float local_b0 [4];
  float local_a0 [4];
  
  fVar29 = DAT_01d4c18c;
  fVar59 = (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x48)) * 0.5;
  fVar58 = (*(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x4c)) * 0.5;
  fVar57 = (*(float *)(param_2 + 0x5c) - *(float *)(param_2 + 0x50)) * 0.5;
  fVar55 = (*(float *)(param_2 + 0x54) + *(float *)(param_2 + 0x48)) * 0.5;
  fVar54 = (*(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x4c)) * 0.5;
  fVar53 = (*(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x50)) * 0.5;
  local_a0[0] = fVar55;
  local_a0[1] = fVar54;
  local_a0[2] = fVar53;
  local_b0[0] = fVar59;
  local_b0[1] = fVar58;
  local_b0[2] = fVar57;
  iVar3 = *(int *)(param_1 + 0x328);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x30) != 0)) {
    fVar25 = *param_4;
    if (fVar25 == DAT_01d4c18c) {
      fVar26 = (*(float *)(param_1 + 0x340) - *(float *)(param_1 + 0x350)) - fVar59;
      fVar32 = (*(float *)(param_1 + 0x344) - *(float *)(param_1 + 0x354)) - fVar58;
      fVar40 = (*(float *)(param_1 + 0x348) - *(float *)(param_1 + 0x358)) - fVar57;
      fVar51 = *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x350) + fVar59;
      fVar25 = *(float *)(param_1 + 0x344) + *(float *)(param_1 + 0x354) + fVar58;
      fVar52 = *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x358) + fVar57;
      uVar11 = (ulong)*(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x30) != 0) {
        pfVar12 = (float *)(param_1 + 0x14c);
        fVar27 = DAT_01d4c6a4;
        fVar33 = DAT_01d4c6a4;
        fVar41 = DAT_01d4c6a4;
        fVar28 = DAT_01d4c150;
        fVar56 = DAT_01d4c150;
        fVar31 = DAT_01d4c150;
        do {
          if (pfVar12[-5] <= fVar33) {
            fVar33 = pfVar12[-5];
          }
          if (pfVar12[-4] <= fVar27) {
            fVar27 = pfVar12[-4];
          }
          if (pfVar12[-3] <= fVar41) {
            fVar41 = pfVar12[-3];
          }
          if (fVar28 <= pfVar12[-2]) {
            fVar28 = pfVar12[-2];
          }
          if (fVar31 <= pfVar12[-1]) {
            fVar31 = pfVar12[-1];
          }
          if (fVar56 <= *pfVar12) {
            fVar56 = *pfVar12;
          }
          uVar11 = uVar11 - 1;
          pfVar12 = pfVar12 + 6;
        } while (uVar11 != 0);
        if (fVar33 - fVar59 <= fVar26) {
          fVar26 = fVar33 - fVar59;
        }
        if (fVar27 - fVar58 <= fVar32) {
          fVar32 = fVar27 - fVar58;
        }
        if (fVar41 - fVar57 <= fVar40) {
          fVar40 = fVar41 - fVar57;
        }
        if (fVar51 <= fVar59 + fVar28) {
          fVar51 = fVar59 + fVar28;
        }
        if (fVar25 <= fVar58 + fVar31) {
          fVar25 = fVar58 + fVar31;
        }
        if (fVar52 <= fVar57 + fVar56) {
          fVar52 = fVar57 + fVar56;
        }
      }
      fVar41 = (fVar52 - fVar40) * 0.5;
      fVar27 = (fVar51 - fVar26) * 0.5;
      fVar33 = (fVar25 - fVar32) * 0.5;
      fVar40 = (fVar51 + fVar26) * 0.5 * *param_3 + (fVar25 + fVar32) * 0.5 * param_3[1] +
               (fVar52 + fVar40) * 0.5 * param_3[2];
      fVar32 = sqrtf(fVar27 * fVar27 + fVar33 * fVar33 + fVar41 * fVar41);
      fVar51 = fVar55 * *param_3 + fVar54 * param_3[1] + fVar53 * param_3[2];
      fVar25 = fabsf((fVar40 - fVar32) - fVar51);
      fVar40 = fabsf((fVar32 + fVar40) - fVar51);
      if (fVar40 <= fVar25) {
        fVar25 = fVar40;
      }
      fVar25 = fVar32 + fVar32 + fVar32 + fVar32 + fVar25;
      *param_4 = fVar25;
    }
    fVar51 = *param_3;
    fVar32 = param_3[1];
    fVar40 = param_3[2];
    fVar52 = (float)*(undefined8 *)param_3;
    fVar27 = ABS(fVar52);
    fVar26 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar33 = ABS(fVar26);
    fVar41 = ABS(fVar40);
    if (fVar29 <= fVar25) {
      fVar25 = fVar29;
      if (fVar51 < 0.0) {
        fVar25 = DAT_01d4c5a8;
      }
      fVar28 = fVar55;
      if (fVar51 != 0.0) {
        fVar28 = fVar25;
      }
      if (fVar32 < 0.0) {
        fVar29 = DAT_01d4c5a8;
      }
      fVar51 = fVar54;
      if (fVar32 != 0.0) {
        fVar51 = fVar29;
      }
      fVar29 = fVar53;
      if (fVar40 != 0.0) {
        fVar29 = (float)(&DAT_01cd50a8)[0.0 <= fVar40];
      }
    }
    else {
      fVar28 = fVar55 + fVar25 * fVar51;
      fVar51 = fVar54 + fVar25 * fVar32;
      fVar29 = fVar53 + fVar25 * fVar40;
    }
    auVar43._4_4_ = fVar51;
    auVar43._0_4_ = fVar28;
    uVar10 = *(uint *)(param_1 + 0x30);
    auVar43._8_4_ = fVar29;
    auVar43._12_4_ = 0;
    auVar60._4_4_ = fVar54;
    auVar60._0_4_ = fVar55;
    auVar60._8_4_ = fVar53;
    auVar60._12_4_ = 0;
    auVar60 = NEON_fmin(auVar60,auVar43,4);
    auVar61._4_4_ = fVar54;
    auVar61._0_4_ = fVar55;
    auVar61._8_4_ = fVar53;
    auVar61._12_4_ = 0;
    auVar61 = NEON_fmax(auVar61,auVar43,4);
    local_c0 = auVar60._0_4_;
    fStack_bc = auVar60._4_4_;
    if (uVar10 != 0) {
      uVar11 = 0;
      lVar20 = param_1 + 0x38;
      pfVar12 = (float *)(param_1 + 0x14c);
      do {
        fVar51 = (pfVar12[-5] + pfVar12[-2]) * 0.5;
        fVar28 = (pfVar12[-4] + pfVar12[-1]) * 0.5;
        fVar56 = (pfVar12[-3] + *pfVar12) * 0.5;
        fVar29 = fVar59 + (pfVar12[-2] - pfVar12[-5]) * 0.5;
        fVar25 = fVar58 + (pfVar12[-1] - pfVar12[-4]) * 0.5;
        fVar32 = fVar57 + (*pfVar12 - pfVar12[-3]) * 0.5;
        uVar30 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                          CONCAT24(-(ushort)(fVar56 - fVar32 <= auVar61._8_4_),
                                   CONCAT22(-(ushort)(fVar28 - fVar25 <= auVar61._4_4_),
                                            -(ushort)(fVar51 - fVar29 <= auVar61._0_4_)))) &
                 CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                          CONCAT24(-(ushort)(auVar60._8_4_ <= fVar56 + fVar32),
                                   CONCAT22(-(ushort)(fStack_bc <= fVar28 + fVar25),
                                            -(ushort)(local_c0 <= fVar51 + fVar29)))) &
                 CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - fVar51) -
                                                        (fVar53 - fVar56) * fVar52) <=
                                                   fVar32 * fVar27 + fVar41 * fVar29),
                                          CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - fVar56) -
                                                                 (fVar54 - fVar28) * fVar40) <=
                                                            fVar25 * fVar41 + fVar33 * fVar32),
                                                   -(ushort)(ABS(fVar52 * (fVar54 - fVar28) -
                                                                 (fVar55 - fVar51) * fVar26) <=
                                                            fVar29 * fVar33 + fVar27 * fVar25))));
        auVar37._0_4_ = (int)((uint)(ushort)uVar30 << 0x1f) >> 0x1f;
        auVar37._4_4_ = (int)((uint)(ushort)(uVar30 >> 0x10) << 0x1f) >> 0x1f;
        auVar37._8_4_ = (int)((uint)(ushort)(uVar30 >> 0x20) << 0x1f) >> 0x1f;
        auVar37._12_4_ = (int)((uint)(ushort)(uVar30 >> 0x30) << 0x1f) >> 0x1f;
        NEON_ext(auVar37,auVar37,8,1);
        if (CONCAT13((char)(uVar30 >> 0x30),
                     CONCAT12((char)(uVar30 >> 0x20),CONCAT11((char)(uVar30 >> 0x10),(char)uVar30)))
            == -1) {
          uVar30 = (**(code **)*param_5)(param_5,param_4,lVar20);
          if ((uVar30 & 1) == 0) {
            return 0;
          }
          uVar10 = *(uint *)(param_1 + 0x30);
        }
        uVar11 = uVar11 + 1;
        lVar20 = lVar20 + 0x10;
        pfVar12 = pfVar12 + 6;
      } while (uVar11 < uVar10);
    }
    if (iVar3 != 0) {
      fVar32 = *(float *)(param_1 + 0x348);
      auVar8 = *(undefined1 (*) [12])(param_1 + 0x350);
      fVar51 = fVar59 + auVar8._0_4_;
      fVar28 = fVar58 + auVar8._4_4_;
      fVar56 = fVar57 + auVar8._8_4_;
      fVar29 = (float)*(undefined8 *)(param_1 + 0x340);
      fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20);
      uVar11 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                        CONCAT24(-(ushort)(fVar32 - fVar56 <= auVar61._8_4_),
                                 CONCAT22(-(ushort)(fVar25 - fVar28 <= auVar61._4_4_),
                                          -(ushort)(fVar29 - fVar51 <= auVar61._0_4_)))) &
               CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                        CONCAT24(-(ushort)(auVar60._8_4_ <= fVar32 + fVar56),
                                 CONCAT22(-(ushort)(fStack_bc <= fVar25 + fVar28),
                                          -(ushort)(local_c0 <= fVar29 + fVar51)))) &
               CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - fVar29) -
                                                      (fVar53 - fVar32) * fVar52) <=
                                                 fVar56 * fVar27 + fVar41 * fVar51),
                                        CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - fVar32) -
                                                               (fVar54 - fVar25) * fVar40) <=
                                                          fVar28 * fVar41 + fVar33 * fVar56),
                                                 -(ushort)(ABS(fVar52 * (fVar54 - fVar25) -
                                                               (fVar55 - fVar29) * fVar26) <=
                                                          fVar51 * fVar33 + fVar27 * fVar28))));
      auVar38._0_4_ = (int)((uint)(ushort)uVar11 << 0x1f) >> 0x1f;
      auVar38._4_4_ = (int)((uint)(ushort)(uVar11 >> 0x10) << 0x1f) >> 0x1f;
      auVar38._8_4_ = (int)((uint)(ushort)(uVar11 >> 0x20) << 0x1f) >> 0x1f;
      auVar38._12_4_ = (int)((uint)(ushort)(uVar11 >> 0x30) << 0x1f) >> 0x1f;
      NEON_ext(auVar38,auVar38,8,1);
      if (CONCAT13((char)(uVar11 >> 0x30),
                   CONCAT12((char)(uVar11 >> 0x20),CONCAT11((char)(uVar11 >> 0x10),(char)uVar11)))
          == -1) {
        uVar10 = *(uint *)(param_1 + 0x330);
        fVar25 = *param_4;
        fVar51 = local_a0[uVar10];
        fVar28 = local_b0[uVar10];
        fVar32 = fVar51 + fVar25 * param_3[uVar10];
        uVar11 = (ulong)((uint)*param_3 >> 0x1d & 4 | (uint)param_3[1] >> 0x1e & 0xfffffffe |
                        (uint)param_3[2] >> 0x1f);
        uVar15 = (uint)*(ushort *)(param_1 + uVar11 * 2 + 0x430);
        fVar29 = fVar51;
        if (fVar32 <= fVar51) {
          fVar29 = fVar32;
        }
        fVar56 = fVar51;
        if (fVar51 <= fVar32) {
          fVar56 = fVar32;
        }
        fVar29 = fVar29 - fVar28;
        fVar56 = fVar28 + fVar56;
        uVar22 = (uint)fVar29 | 0x80000000;
        uVar18 = (uint)fVar56 | 0x80000000;
        uVar14 = 0;
        if ((int)fVar29 < 0) {
          uVar22 = ~(uint)fVar29;
        }
        if ((int)fVar56 < 0) {
          uVar18 = ~(uint)fVar56;
        }
        fVar29 = fVar25;
        local_a0[3] = fVar25;
        do {
          uVar30 = (ulong)(uVar15 & 7);
          if (*(int *)(param_1 + uVar30 * 4 + 0x360) != 0) {
            lVar20 = param_1 + uVar30 * 0x20;
            auVar8 = *(undefined1 (*) [12])(lVar20 + 0x390);
            auVar9 = *(undefined1 (*) [12])(lVar20 + 0x3a0);
            fVar42 = fVar59 + auVar9._0_4_;
            fVar49 = fVar58 + auVar9._4_4_;
            fVar50 = fVar57 + auVar9._8_4_;
            fVar32 = auVar8._0_4_;
            fVar56 = auVar8._4_4_;
            fVar31 = auVar8._8_4_;
            uVar34 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                              CONCAT24(-(ushort)(fVar31 - fVar50 <= auVar61._8_4_),
                                       CONCAT22(-(ushort)(fVar56 - fVar49 <= auVar61._4_4_),
                                                -(ushort)(fVar32 - fVar42 <= auVar61._0_4_)))) &
                     CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                              CONCAT24(-(ushort)(auVar60._8_4_ <= fVar31 + fVar50),
                                       CONCAT22(-(ushort)(auVar60._4_4_ <= fVar56 + fVar49),
                                                -(ushort)(auVar60._0_4_ <= fVar32 + fVar42)))) &
                     CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - fVar32) -
                                                            (fVar53 - fVar31) * fVar52) <=
                                                       fVar50 * fVar27 + fVar41 * fVar42),
                                              CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - fVar31) -
                                                                     (fVar54 - fVar56) * fVar40) <=
                                                                fVar49 * fVar41 + fVar33 * fVar50),
                                                       -(ushort)(ABS(fVar52 * (fVar54 - fVar56) -
                                                                     (fVar55 - fVar32) * fVar26) <=
                                                                fVar42 * fVar33 + fVar27 * fVar49)))
                             );
            auVar44._0_4_ = (int)((uint)(ushort)uVar34 << 0x1f) >> 0x1f;
            auVar44._4_4_ = (int)((uint)(ushort)(uVar34 >> 0x10) << 0x1f) >> 0x1f;
            auVar44._8_4_ = (int)((uint)(ushort)(uVar34 >> 0x20) << 0x1f) >> 0x1f;
            auVar44._12_4_ = (int)((uint)(ushort)(uVar34 >> 0x30) << 0x1f) >> 0x1f;
            NEON_ext(auVar44,auVar44,8,1);
            if (CONCAT13((char)(uVar34 >> 0x30),
                         CONCAT12((char)(uVar34 >> 0x20),
                                  CONCAT11((char)(uVar34 >> 0x10),(char)uVar34))) == -1) {
              uVar17 = (uint)*(ushort *)(param_1 + uVar30 * 0xe0 + uVar11 * 2 + 0x510);
              uVar16 = 0;
              do {
                uVar34 = (ulong)(uVar17 & 7);
                if (*(int *)(param_1 + uVar30 * 0xe0 + uVar34 * 4 + 0x440) != 0) {
                  lVar20 = param_1 + uVar30 * 0xe0 + uVar34 * 0x20;
                  auVar8 = *(undefined1 (*) [12])(lVar20 + 0x470);
                  auVar9 = *(undefined1 (*) [12])(lVar20 + 0x480);
                  fVar42 = fVar59 + auVar9._0_4_;
                  fVar49 = fVar58 + auVar9._4_4_;
                  fVar50 = fVar57 + auVar9._8_4_;
                  fVar32 = auVar8._0_4_;
                  fVar56 = auVar8._4_4_;
                  fVar31 = auVar8._8_4_;
                  uVar35 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                                    CONCAT24(-(ushort)(fVar31 - fVar50 <= auVar61._8_4_),
                                             CONCAT22(-(ushort)(fVar56 - fVar49 <= auVar61._4_4_),
                                                      -(ushort)(fVar32 - fVar42 <= auVar61._0_4_))))
                           & CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                                      CONCAT24(-(ushort)(auVar60._8_4_ <= fVar31 + fVar50),
                                               CONCAT22(-(ushort)(auVar60._4_4_ <= fVar56 + fVar49),
                                                        -(ushort)(auVar60._0_4_ <= fVar32 + fVar42))
                                              )) &
                           CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - fVar32) -
                                                                  (fVar53 - fVar31) * fVar52) <=
                                                             fVar50 * fVar27 + fVar41 * fVar42),
                                                    CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - fVar31
                                                                                    ) -
                                                                           (fVar54 - fVar56) *
                                                                           fVar40) <=
                                                                      fVar49 * fVar41 +
                                                                      fVar33 * fVar50),
                                                             -(ushort)(ABS(fVar52 * (fVar54 - fVar56
                                                                                    ) -
                                                                           (fVar55 - fVar32) *
                                                                           fVar26) <=
                                                                      fVar42 * fVar33 +
                                                                      fVar27 * fVar49))));
                  auVar45._0_4_ = (int)((uint)(ushort)uVar35 << 0x1f) >> 0x1f;
                  auVar45._4_4_ = (int)((uint)(ushort)(uVar35 >> 0x10) << 0x1f) >> 0x1f;
                  auVar45._8_4_ = (int)((uint)(ushort)(uVar35 >> 0x20) << 0x1f) >> 0x1f;
                  auVar45._12_4_ = (int)((uint)(ushort)(uVar35 >> 0x30) << 0x1f) >> 0x1f;
                  NEON_ext(auVar45,auVar45,8,1);
                  if (CONCAT13((char)(uVar35 >> 0x30),
                               CONCAT12((char)(uVar35 >> 0x20),
                                        CONCAT11((char)(uVar35 >> 0x10),(char)uVar35))) == -1) {
                    iVar3 = *(int *)(param_1 + uVar30 * 4 + 0x374);
                    iVar4 = *(int *)(param_1 + uVar30 * 0xe0 + uVar34 * 4 + 0x454);
                    uVar24 = (uint)*(ushort *)
                                    (param_1 + uVar30 * 0x460 + uVar34 * 0xe0 + uVar11 * 2 + 0x970);
                    uVar21 = 0;
                    do {
                      uVar35 = (ulong)(uVar24 & 7);
                      uVar5 = *(uint *)(param_1 + uVar30 * 0x460 + uVar34 * 0xe0 + uVar35 * 4 +
                                       0x8a0);
                      if (uVar5 != 0) {
                        lVar20 = param_1 + uVar30 * 0x460 + uVar34 * 0xe0 + uVar35 * 0x20;
                        auVar8 = *(undefined1 (*) [12])(lVar20 + 0x8d0);
                        auVar9 = *(undefined1 (*) [12])(lVar20 + 0x8e0);
                        fVar42 = fVar59 + auVar9._0_4_;
                        fVar49 = fVar58 + auVar9._4_4_;
                        fVar50 = fVar57 + auVar9._8_4_;
                        fVar32 = auVar8._0_4_;
                        fVar56 = auVar8._4_4_;
                        fVar31 = auVar8._8_4_;
                        uVar36 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                                          CONCAT24(-(ushort)(fVar31 - fVar50 <= auVar61._8_4_),
                                                   CONCAT22(-(ushort)(fVar56 - fVar49 <=
                                                                     auVar61._4_4_),
                                                            -(ushort)(fVar32 - fVar42 <=
                                                                     auVar61._0_4_)))) &
                                 CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                                          CONCAT24(-(ushort)(auVar60._8_4_ <= fVar31 + fVar50),
                                                   CONCAT22(-(ushort)(auVar60._4_4_ <=
                                                                     fVar56 + fVar49),
                                                            -(ushort)(auVar60._0_4_ <=
                                                                     fVar32 + fVar42)))) &
                                 CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - fVar32) -
                                                                        (fVar53 - fVar31) * fVar52)
                                                                   <= fVar50 * fVar27 +
                                                                      fVar41 * fVar42),
                                                          CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - 
                                                  fVar31) - (fVar54 - fVar56) * fVar40) <=
                                                  fVar49 * fVar41 + fVar33 * fVar50),
                                                  -(ushort)(ABS(fVar52 * (fVar54 - fVar56) -
                                                                (fVar55 - fVar32) * fVar26) <=
                                                           fVar42 * fVar33 + fVar27 * fVar49))));
                        auVar46._0_4_ = (int)((uint)(ushort)uVar36 << 0x1f) >> 0x1f;
                        auVar46._4_4_ = (int)((uint)(ushort)(uVar36 >> 0x10) << 0x1f) >> 0x1f;
                        auVar46._8_4_ = (int)((uint)(ushort)(uVar36 >> 0x20) << 0x1f) >> 0x1f;
                        auVar46._12_4_ = (int)((uint)(ushort)(uVar36 >> 0x30) << 0x1f) >> 0x1f;
                        NEON_ext(auVar46,auVar46,8,1);
                        if (CONCAT13((char)(uVar36 >> 0x30),
                                     CONCAT12((char)(uVar36 >> 0x20),
                                              CONCAT11((char)(uVar36 >> 0x10),(char)uVar36))) == -1)
                        {
                          lVar2 = *(long *)(param_1 + 0x20);
                          uVar35 = (ulong)(uint)(iVar4 + iVar3 +
                                                *(int *)(param_1 + uVar30 * 0x460 + uVar34 * 0xe0 +
                                                         uVar35 * 4 + 0x8b4));
                          puVar13 = (undefined8 *)(lVar2 + uVar35 * 0x20);
                          lVar20 = *(long *)(param_1 + 0x28) + uVar35 * 0x10;
LAB_003a399c:
                          lVar23 = 0;
                          lVar19 = (lVar2 + (uVar5 + uVar35) * 0x20) - (long)puVar13;
                          do {
                            puVar1 = (undefined8 *)((long)puVar13 + lVar23);
                            if (uVar22 <= *(uint *)((long)puVar1 + 0x1c)) {
                              if (uVar18 < *(uint *)((long)puVar1 + 0xc)) break;
                              auVar8 = *(undefined1 (*) [12])(puVar1 + 2);
                              fVar31 = *(float *)(puVar1 + 1);
                              fVar42 = fVar59 + auVar8._0_4_;
                              fVar49 = fVar58 + auVar8._4_4_;
                              fVar50 = fVar57 + auVar8._8_4_;
                              fVar32 = (float)*puVar1;
                              fVar56 = (float)((ulong)*puVar1 >> 0x20);
                              uVar36 = CONCAT26(-(ushort)(0.0 <= auVar61._12_4_),
                                                CONCAT24(-(ushort)(fVar31 - fVar50 <= auVar61._8_4_)
                                                         ,CONCAT22(-(ushort)(fVar56 - fVar49 <=
                                                                            auVar61._4_4_),
                                                                   -(ushort)(fVar32 - fVar42 <=
                                                                            auVar61._0_4_)))) &
                                       CONCAT26(-(ushort)(auVar60._12_4_ <= 0.0),
                                                CONCAT24(-(ushort)(auVar60._8_4_ <= fVar31 + fVar50)
                                                         ,CONCAT22(-(ushort)(auVar60._4_4_ <=
                                                                            fVar56 + fVar49),
                                                                   -(ushort)(auVar60._0_4_ <=
                                                                            fVar32 + fVar42)))) &
                                       CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar40 * (fVar55 - 
                                                  fVar32) - (fVar53 - fVar31) * fVar52) <=
                                                  fVar50 * fVar27 + fVar41 * fVar42),
                                                  CONCAT22(-(ushort)(ABS(fVar26 * (fVar53 - fVar31)
                                                                         - (fVar54 - fVar56) *
                                                                           fVar40) <=
                                                                    fVar49 * fVar41 +
                                                                    fVar33 * fVar50),
                                                           -(ushort)(ABS(fVar52 * (fVar54 - fVar56)
                                                                         - (fVar55 - fVar32) *
                                                                           fVar26) <=
                                                                    fVar42 * fVar33 +
                                                                    fVar27 * fVar49))));
                              auVar39._0_4_ = (int)((uint)(ushort)uVar36 << 0x1f) >> 0x1f;
                              auVar39._4_4_ = (int)((uint)(ushort)(uVar36 >> 0x10) << 0x1f) >> 0x1f;
                              auVar39._8_4_ = (int)((uint)(ushort)(uVar36 >> 0x20) << 0x1f) >> 0x1f;
                              auVar39._12_4_ = (int)((uint)(ushort)(uVar36 >> 0x30) << 0x1f) >> 0x1f
                              ;
                              NEON_ext(auVar39,auVar39,8,1);
                              if (CONCAT13((char)(uVar36 >> 0x30),
                                           CONCAT12((char)(uVar36 >> 0x20),
                                                    CONCAT11((char)(uVar36 >> 0x10),(char)uVar36)))
                                  == -1) goto LAB_003a3a9c;
                            }
                            lVar23 = lVar23 + 0x20;
                            lVar20 = lVar20 + 0x10;
                            if (lVar19 == lVar23) break;
                          } while( true );
                        }
                      }
joined_r0x003a3b8c:
                      uVar24 = uVar24 >> 3;
                      uVar21 = uVar21 + 1;
                    } while (uVar21 < 5);
                  }
                }
                uVar16 = uVar16 + 1;
                uVar17 = uVar17 >> 3;
              } while (uVar16 < 5);
            }
          }
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 >> 3;
        } while (uVar14 < 5);
        *param_4 = fVar25;
      }
    }
  }
  return 1;
LAB_003a3a9c:
  uVar36 = (**(code **)*param_5)(param_5,local_a0 + 3,lVar20);
  if ((uVar36 & 1) == 0) {
    return 0;
  }
  auVar7._8_4_ = fVar53;
  auVar7._0_8_ = CONCAT44(fVar54,fVar55);
  auVar6._8_4_ = fVar53;
  auVar6._0_8_ = CONCAT44(fVar54,fVar55);
  lVar20 = lVar20 + 0x10;
  puVar13 = puVar1 + 4;
  if (local_a0[3] < fVar29) {
    fVar25 = fVar51 + local_a0[3] * param_3[uVar10];
    fVar29 = fVar51;
    if (fVar25 <= fVar51) {
      fVar29 = fVar25;
    }
    fVar32 = fVar51;
    if (fVar51 <= fVar25) {
      fVar32 = fVar25;
    }
    fVar29 = fVar29 - fVar28;
    auVar47._0_8_ = CONCAT44(fVar54 + fVar26 * local_a0[3],fVar55 + fVar52 * local_a0[3]);
    auVar47._8_4_ = fVar53 + fVar40 * local_a0[3];
    auVar47._12_4_ = local_a0[3] * 0.0 + 0.0;
    auVar60 = NEON_ext(auVar47,auVar47,8,1);
    auVar48._8_4_ = auVar60._0_4_;
    auVar48._0_8_ = auVar47._0_8_;
    auVar48._12_4_ = 0;
    fVar32 = fVar28 + fVar32;
    auVar6._12_4_ = 0;
    auVar60 = NEON_fmin(auVar6,auVar48,4);
    auVar7._12_4_ = 0;
    auVar61 = NEON_fmax(auVar7,auVar48,4);
    uVar22 = (uint)fVar29 | 0x80000000;
    if ((int)fVar29 < 0) {
      uVar22 = ~(uint)fVar29;
    }
    uVar18 = (uint)fVar32 | 0x80000000;
    if ((int)fVar32 < 0) {
      uVar18 = ~(uint)fVar32;
    }
  }
  fVar25 = local_a0[3];
  fVar29 = local_a0[3];
  if (lVar19 + -0x20 == lVar23) goto joined_r0x003a3b8c;
  goto LAB_003a399c;
}


