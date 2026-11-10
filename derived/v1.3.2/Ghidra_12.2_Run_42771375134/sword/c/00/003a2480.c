/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a2480; name: FUN_003a2480
 */


undefined8
FUN_003a2480(long param_1,undefined1 (*param_2) [12],float *param_3,float *param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  ulong uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong uVar40;
  ulong uVar41;
  float fVar45;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint local_134;
  float local_84;
  
  fVar49 = DAT_01d4c18c;
  iVar3 = *(int *)(param_1 + 0x328);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x30) != 0)) {
    fVar32 = *param_4;
    if (fVar32 == DAT_01d4c18c) {
      fVar33 = *(float *)(param_1 + 0x340) - *(float *)(param_1 + 0x350);
      fVar37 = *(float *)(param_1 + 0x344) - *(float *)(param_1 + 0x354);
      fVar47 = *(float *)(param_1 + 0x348) - *(float *)(param_1 + 0x358);
      fVar32 = *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x350) + 0.0;
      fVar59 = *(float *)(param_1 + 0x344) + *(float *)(param_1 + 0x354) + 0.0;
      fVar61 = *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x358) + 0.0;
      uVar18 = (ulong)*(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x30) != 0) {
        pfVar19 = (float *)(param_1 + 0x14c);
        fVar34 = DAT_01d4c150;
        fVar38 = DAT_01d4c150;
        fVar48 = DAT_01d4c150;
        fVar64 = DAT_01d4c6a4;
        fVar65 = DAT_01d4c6a4;
        fVar66 = DAT_01d4c6a4;
        do {
          if (pfVar19[-5] <= fVar64) {
            fVar64 = pfVar19[-5];
          }
          if (pfVar19[-4] <= fVar66) {
            fVar66 = pfVar19[-4];
          }
          if (pfVar19[-3] <= fVar65) {
            fVar65 = pfVar19[-3];
          }
          if (fVar48 <= pfVar19[-2]) {
            fVar48 = pfVar19[-2];
          }
          if (fVar38 <= pfVar19[-1]) {
            fVar38 = pfVar19[-1];
          }
          if (fVar34 <= *pfVar19) {
            fVar34 = *pfVar19;
          }
          uVar18 = uVar18 - 1;
          pfVar19 = pfVar19 + 6;
        } while (uVar18 != 0);
        if (fVar64 <= fVar33) {
          fVar33 = fVar64;
        }
        if (fVar66 <= fVar37) {
          fVar37 = fVar66;
        }
        if (fVar65 <= fVar47) {
          fVar47 = fVar65;
        }
        if (fVar32 <= fVar48 + 0.0) {
          fVar32 = fVar48 + 0.0;
        }
        if (fVar59 <= fVar38 + 0.0) {
          fVar59 = fVar38 + 0.0;
        }
        if (fVar61 <= fVar34 + 0.0) {
          fVar61 = fVar34 + 0.0;
        }
      }
      fVar34 = (fVar32 - fVar33) * 0.5;
      fVar38 = (fVar59 - fVar37) * 0.5;
      fVar48 = (fVar61 - fVar47) * 0.5;
      fVar59 = (fVar32 + fVar33) * 0.5 * *param_3 + (fVar59 + fVar37) * 0.5 * param_3[1] +
               (fVar61 + fVar47) * 0.5 * param_3[2];
      fVar33 = sqrtf(fVar34 * fVar34 + fVar38 * fVar38 + fVar48 * fVar48);
      fVar37 = *(float *)*param_2 * *param_3 + *(float *)(*param_2 + 4) * param_3[1] +
               *(float *)(*param_2 + 8) * param_3[2];
      fVar32 = fabsf((fVar59 - fVar33) - fVar37);
      fVar59 = fabsf((fVar33 + fVar59) - fVar37);
      if (fVar59 <= fVar32) {
        fVar32 = fVar59;
      }
      fVar32 = fVar33 + fVar33 + fVar33 + fVar33 + fVar32;
      *param_4 = fVar32;
    }
    fVar33 = *(float *)*param_2;
    fVar59 = *(float *)(*param_2 + 4);
    fVar37 = *(float *)(*param_2 + 8);
    auVar17 = *param_2;
    auVar16 = *param_2;
    fVar34 = *param_3;
    fVar61 = param_3[1];
    fVar47 = param_3[2];
    fVar38 = (float)*(undefined8 *)param_3;
    fVar64 = ABS(fVar38);
    fVar48 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar65 = ABS(fVar48);
    fVar66 = ABS(fVar47);
    if (fVar49 <= fVar32) {
      fVar32 = fVar49;
      if (fVar34 < 0.0) {
        fVar32 = DAT_01d4c5a8;
      }
      fVar35 = fVar33;
      if (fVar34 != 0.0) {
        fVar35 = fVar32;
      }
      uVar53 = SUB42(fVar49,0);
      uVar54 = (undefined2)((uint)fVar49 >> 0x10);
      if (fVar61 < 0.0) {
        uVar53 = SUB42(DAT_01d4c5a8,0);
        uVar54 = (undefined2)((uint)DAT_01d4c5a8 >> 0x10);
      }
      fVar49 = fVar59;
      if (fVar61 != 0.0) {
        fVar49 = (float)CONCAT22(uVar54,uVar53);
      }
      fVar32 = fVar37;
      if (fVar47 != 0.0) {
        fVar32 = (float)(&DAT_01cd50a8)[0.0 <= fVar47];
      }
    }
    else {
      fVar35 = fVar33 + fVar32 * fVar34;
      fVar49 = fVar59 + fVar32 * fVar61;
      fVar32 = fVar37 + fVar32 * fVar47;
    }
    uVar53 = (undefined2)((uint)fVar49 >> 0x10);
    uVar21 = *(uint *)(param_1 + 0x30);
    uVar54 = (undefined2)((uint)fVar32 >> 0x10);
    auVar67._4_2_ = SUB42(fVar49,0);
    auVar67._0_4_ = fVar35;
    auVar67._6_2_ = uVar53;
    auVar67._8_2_ = SUB42(fVar32,0);
    auVar67._10_2_ = uVar54;
    auVar67._12_4_ = 0;
    auVar10._12_4_ = 0;
    auVar10._0_12_ = *param_2;
    auVar67 = NEON_fmin(auVar10,auVar67,4);
    auVar68._4_2_ = SUB42(fVar49,0);
    auVar68._0_4_ = fVar35;
    auVar68._6_2_ = uVar53;
    auVar68._8_2_ = SUB42(fVar32,0);
    auVar68._10_2_ = uVar54;
    auVar68._12_4_ = 0;
    auVar11._12_4_ = 0;
    auVar11._0_12_ = *param_2;
    auVar68 = NEON_fmax(auVar11,auVar68,4);
    fVar49 = (float)*(undefined8 *)*param_2;
    fVar32 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    if (uVar21 != 0) {
      uVar18 = 0;
      lVar28 = param_1 + 0x38;
      pfVar19 = (float *)(param_1 + 0x14c);
      do {
        fVar34 = (pfVar19[-2] - pfVar19[-5]) * 0.5;
        fVar60 = (pfVar19[-5] + pfVar19[-2]) * 0.5;
        fVar62 = (pfVar19[-4] + pfVar19[-1]) * 0.5;
        fVar35 = (pfVar19[-1] - pfVar19[-4]) * 0.5;
        fVar63 = (pfVar19[-3] + *pfVar19) * 0.5;
        fVar61 = (*pfVar19 - pfVar19[-3]) * 0.5;
        uVar36 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                          CONCAT24(-(ushort)(fVar63 - fVar61 <= auVar68._8_4_),
                                   CONCAT22(-(ushort)(fVar62 - fVar35 <= auVar68._4_4_),
                                            -(ushort)(fVar60 - fVar34 <= auVar68._0_4_)))) &
                 CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                          CONCAT24(-(ushort)(auVar67._8_4_ <= fVar63 + fVar61),
                                   CONCAT22(-(ushort)(auVar67._4_4_ <= fVar62 + fVar35),
                                            -(ushort)(auVar67._0_4_ <= fVar60 + fVar34)))) &
                 CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - fVar60) -
                                                        (fVar37 - fVar63) * fVar38) <=
                                                   fVar61 * fVar64 + fVar66 * fVar34),
                                          CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - fVar63) -
                                                                 (fVar59 - fVar62) * fVar47) <=
                                                            fVar35 * fVar66 + fVar65 * fVar61),
                                                   -(ushort)(ABS(fVar38 * (fVar59 - fVar62) -
                                                                 (fVar33 - fVar60) * fVar48) <=
                                                            fVar34 * fVar65 + fVar64 * fVar35))));
        auVar42._0_4_ = (int)((uint)(ushort)uVar36 << 0x1f) >> 0x1f;
        auVar42._4_4_ = (int)((uint)(ushort)(uVar36 >> 0x10) << 0x1f) >> 0x1f;
        auVar42._8_4_ = (int)((uint)(ushort)(uVar36 >> 0x20) << 0x1f) >> 0x1f;
        auVar42._12_4_ = (int)((uint)(ushort)(uVar36 >> 0x30) << 0x1f) >> 0x1f;
        NEON_ext(auVar42,auVar42,8,1);
        if (CONCAT13((char)(uVar36 >> 0x30),
                     CONCAT12((char)(uVar36 >> 0x20),CONCAT11((char)(uVar36 >> 0x10),(char)uVar36)))
            == -1) {
          uVar36 = (**(code **)*param_5)(param_5,param_4,lVar28);
          if ((uVar36 & 1) == 0) {
            return 0;
          }
          uVar21 = *(uint *)(param_1 + 0x30);
          fVar33 = fVar49;
          fVar59 = fVar32;
        }
        uVar18 = uVar18 + 1;
        lVar28 = lVar28 + 0x10;
        pfVar19 = pfVar19 + 6;
      } while (uVar18 < uVar21);
    }
    if (iVar3 != 0) {
      fVar35 = *(float *)(param_1 + 0x348);
      auVar14 = *(undefined1 (*) [12])(param_1 + 0x350);
      fVar61 = (float)*(undefined8 *)(param_1 + 0x340);
      fVar60 = auVar14._0_4_;
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20);
      fVar62 = auVar14._4_4_;
      fVar63 = auVar14._8_4_;
      uVar18 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                        CONCAT24(-(ushort)(fVar35 - fVar63 <= auVar68._8_4_),
                                 CONCAT22(-(ushort)(fVar34 - fVar62 <= auVar68._4_4_),
                                          -(ushort)(fVar61 - fVar60 <= auVar68._0_4_)))) &
               CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                        CONCAT24(-(ushort)(auVar67._8_4_ <= fVar35 + fVar63),
                                 CONCAT22(-(ushort)(auVar67._4_4_ <= fVar34 + fVar62),
                                          -(ushort)(auVar67._0_4_ <= fVar61 + fVar60)))) &
               CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - fVar61) -
                                                      (fVar37 - fVar35) * fVar38) <=
                                                 fVar63 * fVar64 + fVar66 * fVar60),
                                        CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - fVar35) -
                                                               (fVar59 - fVar34) * fVar47) <=
                                                          fVar62 * fVar66 + fVar65 * fVar63),
                                                 -(ushort)(ABS(fVar38 * (fVar59 - fVar34) -
                                                               (fVar33 - fVar61) * fVar48) <=
                                                          fVar60 * fVar65 + fVar64 * fVar62))));
      auVar43._0_4_ = (int)((uint)(ushort)uVar18 << 0x1f) >> 0x1f;
      auVar43._4_4_ = (int)((uint)(ushort)(uVar18 >> 0x10) << 0x1f) >> 0x1f;
      auVar43._8_4_ = (int)((uint)(ushort)(uVar18 >> 0x20) << 0x1f) >> 0x1f;
      auVar43._12_4_ = (int)((uint)(ushort)(uVar18 >> 0x30) << 0x1f) >> 0x1f;
      NEON_ext(auVar43,auVar43,8,1);
      if (CONCAT13((char)(uVar18 >> 0x30),
                   CONCAT12((char)(uVar18 >> 0x20),CONCAT11((char)(uVar18 >> 0x10),(char)uVar18)))
          == -1) {
        uVar18 = (ulong)*(uint *)(param_1 + 0x330);
        fVar35 = *param_4;
        fVar34 = *(float *)(*param_2 + uVar18 * 4);
        fVar60 = fVar34 + fVar35 * param_3[uVar18];
        uVar36 = (ulong)((uint)*param_3 >> 0x1d & 4 | (uint)param_3[1] >> 0x1e & 0xfffffffe |
                        (uint)param_3[2] >> 0x1f);
        uVar21 = (uint)*(ushort *)(param_1 + uVar36 * 2 + 0x430);
        fVar61 = fVar34;
        if (fVar60 <= fVar34) {
          fVar61 = fVar60;
        }
        if (fVar34 <= fVar60) {
          fVar34 = fVar60;
        }
        uVar25 = (uint)fVar61 | 0x80000000;
        uVar24 = (uint)fVar34 | 0x80000000;
        if ((int)fVar61 < 0) {
          uVar25 = ~(uint)fVar61;
        }
        if ((int)fVar34 < 0) {
          uVar24 = ~(uint)fVar34;
        }
        local_134 = 0;
        fVar61 = fVar35;
        local_84 = fVar35;
        do {
          uVar29 = (ulong)(uVar21 & 7);
          if (*(int *)(param_1 + uVar29 * 4 + 0x360) != 0) {
            lVar28 = param_1 + uVar29 * 0x20;
            auVar14 = *(undefined1 (*) [12])(lVar28 + 0x390);
            auVar15 = *(undefined1 (*) [12])(lVar28 + 0x3a0);
            fVar34 = auVar14._0_4_;
            fVar63 = auVar15._0_4_;
            fVar60 = auVar14._4_4_;
            fVar45 = auVar15._4_4_;
            fVar62 = auVar14._8_4_;
            fVar46 = auVar15._8_4_;
            uVar39 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                              CONCAT24(-(ushort)(fVar62 - fVar46 <= auVar68._8_4_),
                                       CONCAT22(-(ushort)(fVar60 - fVar45 <= auVar68._4_4_),
                                                -(ushort)(fVar34 - fVar63 <= auVar68._0_4_)))) &
                     CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                              CONCAT24(-(ushort)(auVar67._8_4_ <= fVar62 + fVar46),
                                       CONCAT22(-(ushort)(auVar67._4_4_ <= fVar60 + fVar45),
                                                -(ushort)(auVar67._0_4_ <= fVar34 + fVar63)))) &
                     CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - fVar34) -
                                                            (fVar37 - fVar62) * fVar38) <=
                                                       fVar46 * fVar64 + fVar66 * fVar63),
                                              CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - fVar62) -
                                                                     (fVar59 - fVar60) * fVar47) <=
                                                                fVar45 * fVar66 + fVar65 * fVar46),
                                                       -(ushort)(ABS(fVar38 * (fVar59 - fVar60) -
                                                                     (fVar33 - fVar34) * fVar48) <=
                                                                fVar63 * fVar65 + fVar64 * fVar45)))
                             );
            auVar50._0_4_ = (int)((uint)(ushort)uVar39 << 0x1f) >> 0x1f;
            auVar50._4_4_ = (int)((uint)(ushort)(uVar39 >> 0x10) << 0x1f) >> 0x1f;
            auVar50._8_4_ = (int)((uint)(ushort)(uVar39 >> 0x20) << 0x1f) >> 0x1f;
            auVar50._12_4_ = (int)((uint)(ushort)(uVar39 >> 0x30) << 0x1f) >> 0x1f;
            NEON_ext(auVar50,auVar50,8,1);
            if (CONCAT13((char)(uVar39 >> 0x30),
                         CONCAT12((char)(uVar39 >> 0x20),
                                  CONCAT11((char)(uVar39 >> 0x10),(char)uVar39))) == -1) {
              uVar23 = (uint)*(ushort *)(param_1 + uVar29 * 0xe0 + uVar36 * 2 + 0x510);
              uVar22 = 0;
              do {
                uVar39 = (ulong)(uVar23 & 7);
                if (*(int *)(param_1 + uVar29 * 0xe0 + uVar39 * 4 + 0x440) != 0) {
                  lVar28 = param_1 + uVar29 * 0xe0 + uVar39 * 0x20;
                  auVar14 = *(undefined1 (*) [12])(lVar28 + 0x470);
                  auVar15 = *(undefined1 (*) [12])(lVar28 + 0x480);
                  fVar34 = auVar14._0_4_;
                  fVar63 = auVar15._0_4_;
                  fVar60 = auVar14._4_4_;
                  fVar45 = auVar15._4_4_;
                  fVar62 = auVar14._8_4_;
                  fVar46 = auVar15._8_4_;
                  uVar40 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                                    CONCAT24(-(ushort)(fVar62 - fVar46 <= auVar68._8_4_),
                                             CONCAT22(-(ushort)(fVar60 - fVar45 <= auVar68._4_4_),
                                                      -(ushort)(fVar34 - fVar63 <= auVar68._0_4_))))
                           & CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                                      CONCAT24(-(ushort)(auVar67._8_4_ <= fVar62 + fVar46),
                                               CONCAT22(-(ushort)(auVar67._4_4_ <= fVar60 + fVar45),
                                                        -(ushort)(auVar67._0_4_ <= fVar34 + fVar63))
                                              )) &
                           CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - fVar34) -
                                                                  (fVar37 - fVar62) * fVar38) <=
                                                             fVar46 * fVar64 + fVar66 * fVar63),
                                                    CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - fVar62
                                                                                    ) -
                                                                           (fVar59 - fVar60) *
                                                                           fVar47) <=
                                                                      fVar45 * fVar66 +
                                                                      fVar65 * fVar46),
                                                             -(ushort)(ABS(fVar38 * (fVar59 - fVar60
                                                                                    ) -
                                                                           (fVar33 - fVar34) *
                                                                           fVar48) <=
                                                                      fVar63 * fVar65 +
                                                                      fVar64 * fVar45))));
                  auVar51._0_4_ = (int)((uint)(ushort)uVar40 << 0x1f) >> 0x1f;
                  auVar51._4_4_ = (int)((uint)(ushort)(uVar40 >> 0x10) << 0x1f) >> 0x1f;
                  auVar51._8_4_ = (int)((uint)(ushort)(uVar40 >> 0x20) << 0x1f) >> 0x1f;
                  auVar51._12_4_ = (int)((uint)(ushort)(uVar40 >> 0x30) << 0x1f) >> 0x1f;
                  NEON_ext(auVar51,auVar51,8,1);
                  if (CONCAT13((char)(uVar40 >> 0x30),
                               CONCAT12((char)(uVar40 >> 0x20),
                                        CONCAT11((char)(uVar40 >> 0x10),(char)uVar40))) == -1) {
                    iVar3 = *(int *)(param_1 + uVar29 * 4 + 0x374);
                    iVar4 = *(int *)(param_1 + uVar29 * 0xe0 + uVar39 * 4 + 0x454);
                    uVar30 = (uint)*(ushort *)
                                    (param_1 + uVar29 * 0x460 + uVar39 * 0xe0 + uVar36 * 2 + 0x970);
                    uVar27 = 0;
                    do {
                      uVar40 = (ulong)(uVar30 & 7);
                      uVar5 = *(uint *)(param_1 + uVar29 * 0x460 + uVar39 * 0xe0 + uVar40 * 4 +
                                       0x8a0);
                      if (uVar5 != 0) {
                        lVar28 = param_1 + uVar29 * 0x460 + uVar39 * 0xe0 + uVar40 * 0x20;
                        auVar14 = *(undefined1 (*) [12])(lVar28 + 0x8d0);
                        auVar15 = *(undefined1 (*) [12])(lVar28 + 0x8e0);
                        fVar34 = auVar14._0_4_;
                        fVar63 = auVar15._0_4_;
                        fVar60 = auVar14._4_4_;
                        fVar45 = auVar15._4_4_;
                        fVar62 = auVar14._8_4_;
                        fVar46 = auVar15._8_4_;
                        uVar41 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                                          CONCAT24(-(ushort)(fVar62 - fVar46 <= auVar68._8_4_),
                                                   CONCAT22(-(ushort)(fVar60 - fVar45 <=
                                                                     auVar68._4_4_),
                                                            -(ushort)(fVar34 - fVar63 <=
                                                                     auVar68._0_4_)))) &
                                 CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                                          CONCAT24(-(ushort)(auVar67._8_4_ <= fVar62 + fVar46),
                                                   CONCAT22(-(ushort)(auVar67._4_4_ <=
                                                                     fVar60 + fVar45),
                                                            -(ushort)(auVar67._0_4_ <=
                                                                     fVar34 + fVar63)))) &
                                 CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - fVar34) -
                                                                        (fVar37 - fVar62) * fVar38)
                                                                   <= fVar46 * fVar64 +
                                                                      fVar66 * fVar63),
                                                          CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - 
                                                  fVar62) - (fVar59 - fVar60) * fVar47) <=
                                                  fVar45 * fVar66 + fVar65 * fVar46),
                                                  -(ushort)(ABS(fVar38 * (fVar59 - fVar60) -
                                                                (fVar33 - fVar34) * fVar48) <=
                                                           fVar63 * fVar65 + fVar64 * fVar45))));
                        auVar52._0_4_ = (int)((uint)(ushort)uVar41 << 0x1f) >> 0x1f;
                        auVar52._4_4_ = (int)((uint)(ushort)(uVar41 >> 0x10) << 0x1f) >> 0x1f;
                        auVar52._8_4_ = (int)((uint)(ushort)(uVar41 >> 0x20) << 0x1f) >> 0x1f;
                        auVar52._12_4_ = (int)((uint)(ushort)(uVar41 >> 0x30) << 0x1f) >> 0x1f;
                        NEON_ext(auVar52,auVar52,8,1);
                        if (CONCAT13((char)(uVar41 >> 0x30),
                                     CONCAT12((char)(uVar41 >> 0x20),
                                              CONCAT11((char)(uVar41 >> 0x10),(char)uVar41))) == -1)
                        {
                          lVar2 = *(long *)(param_1 + 0x20);
                          uVar40 = (ulong)(uint)(iVar4 + iVar3 +
                                                *(int *)(param_1 + uVar29 * 0x460 + uVar39 * 0xe0 +
                                                         uVar40 * 4 + 0x8b4));
                          puVar20 = (undefined8 *)(lVar2 + uVar40 * 0x20);
                          lVar28 = *(long *)(param_1 + 0x28) + uVar40 * 0x10;
LAB_003a2d9c:
                          lVar31 = 0;
                          lVar26 = (lVar2 + (uVar5 + uVar40) * 0x20) - (long)puVar20;
                          do {
                            puVar1 = (undefined8 *)((long)puVar20 + lVar31);
                            if (uVar25 <= *(uint *)((long)puVar1 + 0x1c)) {
                              if (uVar24 < *(uint *)((long)puVar1 + 0xc)) break;
                              fVar62 = *(float *)(puVar1 + 1);
                              auVar14 = *(undefined1 (*) [12])(puVar1 + 2);
                              fVar34 = (float)*puVar1;
                              fVar63 = auVar14._0_4_;
                              fVar60 = (float)((ulong)*puVar1 >> 0x20);
                              fVar45 = auVar14._4_4_;
                              fVar46 = auVar14._8_4_;
                              uVar41 = CONCAT26(-(ushort)(0.0 <= auVar68._12_4_),
                                                CONCAT24(-(ushort)(fVar62 - fVar46 <= auVar68._8_4_)
                                                         ,CONCAT22(-(ushort)(fVar60 - fVar45 <=
                                                                            auVar68._4_4_),
                                                                   -(ushort)(fVar34 - fVar63 <=
                                                                            auVar68._0_4_)))) &
                                       CONCAT26(-(ushort)(auVar67._12_4_ <= 0.0),
                                                CONCAT24(-(ushort)(auVar67._8_4_ <= fVar62 + fVar46)
                                                         ,CONCAT22(-(ushort)(auVar67._4_4_ <=
                                                                            fVar60 + fVar45),
                                                                   -(ushort)(auVar67._0_4_ <=
                                                                            fVar34 + fVar63)))) &
                                       CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar47 * (fVar33 - 
                                                  fVar34) - (fVar37 - fVar62) * fVar38) <=
                                                  fVar46 * fVar64 + fVar66 * fVar63),
                                                  CONCAT22(-(ushort)(ABS(fVar48 * (fVar37 - fVar62)
                                                                         - (fVar59 - fVar60) *
                                                                           fVar47) <=
                                                                    fVar45 * fVar66 +
                                                                    fVar65 * fVar46),
                                                           -(ushort)(ABS(fVar38 * (fVar59 - fVar60)
                                                                         - (fVar33 - fVar34) *
                                                                           fVar48) <=
                                                                    fVar63 * fVar65 +
                                                                    fVar64 * fVar45))));
                              auVar44._0_4_ = (int)((uint)(ushort)uVar41 << 0x1f) >> 0x1f;
                              auVar44._4_4_ = (int)((uint)(ushort)(uVar41 >> 0x10) << 0x1f) >> 0x1f;
                              auVar44._8_4_ = (int)((uint)(ushort)(uVar41 >> 0x20) << 0x1f) >> 0x1f;
                              auVar44._12_4_ = (int)((uint)(ushort)(uVar41 >> 0x30) << 0x1f) >> 0x1f
                              ;
                              NEON_ext(auVar44,auVar44,8,1);
                              if (CONCAT13((char)(uVar41 >> 0x30),
                                           CONCAT12((char)(uVar41 >> 0x20),
                                                    CONCAT11((char)(uVar41 >> 0x10),(char)uVar41)))
                                  == -1) goto LAB_003a2e98;
                            }
                            lVar31 = lVar31 + 0x20;
                            lVar28 = lVar28 + 0x10;
                            if (lVar26 == lVar31) break;
                          } while( true );
                        }
                      }
joined_r0x003a2f88:
                      uVar30 = uVar30 >> 3;
                      uVar27 = uVar27 + 1;
                    } while (uVar27 < 5);
                  }
                }
                uVar22 = uVar22 + 1;
                uVar23 = uVar23 >> 3;
              } while (uVar22 < 5);
            }
          }
          local_134 = local_134 + 1;
          uVar21 = uVar21 >> 3;
        } while (local_134 < 5);
        *param_4 = fVar35;
      }
    }
  }
  return 1;
LAB_003a2e98:
  uVar41 = (**(code **)*param_5)(param_5,&local_84,lVar28);
  if ((uVar41 & 1) == 0) {
    return 0;
  }
  lVar28 = lVar28 + 0x10;
  puVar20 = puVar1 + 4;
  if (local_84 < fVar61) {
    fVar61 = *(float *)(*param_2 + uVar18 * 4);
    fVar33 = fVar49 + fVar38 * local_84;
    fVar59 = fVar32 + fVar48 * local_84;
    uVar53 = SUB42(fVar59,0);
    uVar54 = (undefined2)((uint)fVar59 >> 0x10);
    fVar59 = fVar37 + fVar47 * local_84;
    uVar55 = SUB42(fVar59,0);
    uVar56 = (undefined2)((uint)fVar59 >> 0x10);
    fVar59 = local_84 * 0.0 + 0.0;
    uVar57 = SUB42(fVar59,0);
    uVar58 = (undefined2)((uint)fVar59 >> 0x10);
    auVar6._4_2_ = uVar53;
    auVar6._0_4_ = fVar33;
    auVar6._6_2_ = uVar54;
    auVar6._8_2_ = uVar55;
    auVar6._10_2_ = uVar56;
    auVar6._12_2_ = uVar57;
    auVar6._14_2_ = uVar58;
    auVar7._4_2_ = uVar53;
    auVar7._0_4_ = fVar33;
    auVar7._6_2_ = uVar54;
    auVar7._8_2_ = uVar55;
    auVar7._10_2_ = uVar56;
    auVar7._12_2_ = uVar57;
    auVar7._14_2_ = uVar58;
    auVar68 = NEON_ext(auVar6,auVar7,8,1);
    fVar34 = fVar61 + local_84 * param_3[uVar18];
    fVar59 = fVar61;
    if (fVar34 <= fVar61) {
      fVar59 = fVar34;
    }
    if (fVar61 <= fVar34) {
      fVar61 = fVar34;
    }
    auVar8._4_2_ = uVar53;
    auVar8._0_4_ = fVar33;
    auVar8._6_2_ = uVar54;
    auVar8._8_2_ = auVar68._0_2_;
    auVar8._10_2_ = auVar68._2_2_;
    auVar8._12_4_ = 0;
    auVar12._12_4_ = 0;
    auVar12._0_12_ = auVar16;
    auVar67 = NEON_fmin(auVar12,auVar8,4);
    auVar9._4_2_ = uVar53;
    auVar9._0_4_ = fVar33;
    auVar9._6_2_ = uVar54;
    auVar9._8_2_ = auVar68._0_2_;
    auVar9._10_2_ = auVar68._2_2_;
    auVar9._12_4_ = 0;
    auVar13._12_4_ = 0;
    auVar13._0_12_ = auVar17;
    auVar68 = NEON_fmax(auVar13,auVar9,4);
    uVar25 = (uint)fVar59 | 0x80000000;
    if ((int)fVar59 < 0) {
      uVar25 = ~(uint)fVar59;
    }
    uVar24 = (uint)fVar61 | 0x80000000;
    if ((int)fVar61 < 0) {
      uVar24 = ~(uint)fVar61;
    }
  }
  fVar33 = fVar49;
  fVar59 = fVar32;
  fVar35 = local_84;
  fVar61 = local_84;
  if (lVar26 + -0x20 == lVar31) goto joined_r0x003a2f88;
  goto LAB_003a2d9c;
}


