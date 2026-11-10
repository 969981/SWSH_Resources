/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039d360; name: FUN_0039d360
 */


/* WARNING: Removing unreachable block (ram,0x0039d73c) */
/* WARNING: Removing unreachable block (ram,0x0039d6f4) */
/* WARNING: Removing unreachable block (ram,0x0039d754) */
/* WARNING: Removing unreachable block (ram,0x0039d758) */

undefined8
FUN_0039d360(undefined8 param_1,long param_2,long param_3,long *param_4,float *param_5,
            float *param_6,float *param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  float *pfVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  uint uVar36;
  float fVar38;
  ulong uVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar63;
  float fVar64;
  undefined1 auVar62 [16];
  float fVar65;
  float local_874;
  float *local_870 [256];
  
  fVar32 = param_5[1] + param_5[1];
  fVar41 = *param_5 + *param_5;
  fVar51 = param_6[1] + param_6[1];
  fVar52 = *param_6 + *param_6;
  fVar3 = param_5[2] + param_5[2];
  uVar18 = SUB41(fVar3,0);
  uVar19 = (undefined1)((uint)fVar3 >> 8);
  uVar20 = (undefined1)((uint)fVar3 >> 0x10);
  uVar21 = (undefined1)((uint)fVar3 >> 0x18);
  fVar5 = param_6[2] + param_6[2];
  fVar54 = ABS(fVar52);
  fVar55 = ABS(fVar51);
  fVar56 = ABS(fVar5);
  fVar53 = *param_7;
  if (DAT_01d4c18c <= fVar53) {
    fVar53 = DAT_01d4c18c;
    if (fVar52 < 0.0) {
      fVar53 = DAT_01d4c5a8;
    }
    fVar42 = fVar41;
    if (fVar52 != 0.0) {
      fVar42 = fVar53;
    }
    fVar53 = DAT_01d4c18c;
    if (fVar51 < 0.0) {
      fVar53 = DAT_01d4c5a8;
    }
    fVar33 = fVar32;
    if (fVar51 != 0.0) {
      fVar33 = fVar53;
    }
    if (fVar5 != 0.0) {
      uVar4 = (&DAT_01cd50a8)[0.0 <= fVar5];
      uVar18 = (undefined1)uVar4;
      uVar19 = (undefined1)((uint)uVar4 >> 8);
      uVar20 = (undefined1)((uint)uVar4 >> 0x10);
      uVar21 = (undefined1)((uint)uVar4 >> 0x18);
    }
  }
  else {
    fVar42 = fVar41 + fVar52 * fVar53;
    fVar33 = fVar32 + fVar51 * fVar53;
    fVar53 = fVar3 + fVar5 * fVar53;
    uVar18 = SUB41(fVar53,0);
    uVar19 = (undefined1)((uint)fVar53 >> 8);
    uVar20 = (undefined1)((uint)fVar53 >> 0x10);
    uVar21 = (undefined1)((uint)fVar53 >> 0x18);
  }
  uVar16 = 0;
  auVar25._4_4_ = fVar33;
  auVar25._0_4_ = fVar42;
  pfVar17 = (float *)param_4[2];
  auVar25[9] = uVar19;
  auVar25[8] = uVar18;
  auVar25[10] = uVar20;
  auVar25[0xb] = uVar21;
  auVar25._12_4_ = 0;
  auVar57._4_4_ = fVar32;
  auVar57._0_4_ = fVar41;
  auVar57._8_4_ = fVar3;
  auVar57._12_4_ = 0;
  auVar57 = NEON_fmin(auVar57,auVar25,4);
  auVar62._4_4_ = fVar32;
  auVar62._0_4_ = fVar41;
  auVar62._8_4_ = fVar3;
  auVar62._12_4_ = 0;
  auVar62 = NEON_fmax(auVar62,auVar25,4);
  local_870[0] = pfVar17;
  uVar6 = CONCAT44(fVar32,fVar41);
  pfVar11 = pfVar17;
  do {
    fVar53 = (float)*(undefined8 *)pfVar11;
    fVar34 = pfVar11[3] - fVar53;
    fVar42 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
    fVar38 = pfVar11[4] - fVar42;
    fVar39 = pfVar11[5] - (float)*(undefined8 *)(pfVar11 + 2);
    fVar53 = fVar53 + pfVar11[3];
    fVar42 = fVar42 + pfVar11[4];
    fVar33 = (float)*(undefined8 *)(pfVar11 + 2) + pfVar11[5];
    fVar40 = auVar57._0_4_;
    fVar58 = auVar57._4_4_;
    fVar59 = auVar57._8_4_;
    fVar60 = auVar57._12_4_;
    fVar61 = auVar62._0_4_;
    fVar63 = auVar62._4_4_;
    fVar64 = auVar62._8_4_;
    fVar65 = auVar62._12_4_;
    uVar37 = CONCAT26(-(ushort)(0.0 <= fVar65),
                      CONCAT24(-(ushort)(fVar33 - fVar39 <= fVar64),
                               CONCAT22(-(ushort)(fVar42 - fVar38 <= fVar63),
                                        -(ushort)(fVar53 - fVar34 <= fVar61)))) &
             CONCAT26(-(ushort)(fVar60 <= 0.0),
                      CONCAT24(-(ushort)(fVar59 <= fVar33 + fVar39),
                               CONCAT22(-(ushort)(fVar58 <= fVar42 + fVar38),
                                        -(ushort)(fVar40 <= fVar53 + fVar34)))) &
             (ulong)CONCAT16(0xff,(uint6)CONCAT14(-(ABS(fVar5 * (fVar41 - fVar53) -
                                                        (fVar3 - fVar33) * fVar52) <=
                                                   fVar39 * fVar54 + fVar56 * fVar34),
                                                  (uint)CONCAT12(-(ABS(fVar51 * (fVar3 - fVar33) -
                                                                       (fVar32 - fVar42) * fVar5) <=
                                                                  fVar38 * fVar56 + fVar55 * fVar39)
                                                                 ,-(ushort)(ABS(fVar52 * (fVar32 - 
                                                  fVar42) - (fVar41 - fVar53) * fVar51) <=
                                                  fVar34 * fVar55 + fVar54 * fVar38))));
    auVar24._0_4_ = (int)((uint)(ushort)uVar37 << 0x1f) >> 0x1f;
    auVar24._4_4_ = (int)((uint)(ushort)(uVar37 >> 0x10) << 0x1f) >> 0x1f;
    auVar24._8_4_ = (int)((uint)(ushort)(uVar37 >> 0x20) << 0x1f) >> 0x1f;
    auVar24._12_4_ = (int)((uint)(ushort)(uVar37 >> 0x30) << 0x1f) >> 0x1f;
    NEON_ext(auVar24,auVar24,8,1);
    if (CONCAT13((char)(uVar37 >> 0x30),
                 CONCAT12((char)(uVar37 >> 0x20),CONCAT11((char)(uVar37 >> 0x10),(char)uVar37))) ==
        -1) {
      fVar53 = *param_7;
      do {
        while( true ) {
          fVar42 = pfVar11[6];
          if (((uint)fVar42 & 1) != 0) {
            uVar35 = (uint)fVar42 >> 1 & 0xf;
            if (uVar35 != 0) {
              puVar15 = (uint *)(*param_4 + (ulong)((uint)fVar42 >> 5) * 4);
              local_874 = fVar53;
              if (uVar35 == 1) {
                uVar37 = (**(code **)*param_9)(param_9,&local_874,param_2 + (ulong)*puVar15 * 0x10);
                if ((uVar37 & 1) == 0) {
                  return 0;
                }
                if (local_874 < fVar53) {
                  auVar8._8_4_ = fVar3;
                  auVar8._0_8_ = uVar6;
                  auVar7._8_4_ = fVar3;
                  auVar7._0_8_ = uVar6;
                  auVar26._0_8_ = CONCAT44(fVar32 + fVar51 * local_874,fVar41 + fVar52 * local_874);
                  auVar26._8_4_ = fVar3 + fVar5 * local_874;
                  auVar26._12_4_ = local_874 * 0.0 + 0.0;
                  auVar57 = NEON_ext(auVar26,auVar26,8,1);
                  auVar27._8_4_ = auVar57._0_4_;
                  auVar27._0_8_ = auVar26._0_8_;
                  auVar27._12_4_ = 0;
                  *param_7 = local_874;
                  auVar7._12_4_ = 0;
                  auVar57 = NEON_fmin(auVar7,auVar27,4);
                  auVar8._12_4_ = 0;
                  auVar62 = NEON_fmax(auVar8,auVar27,4);
                }
              }
              else {
                iVar14 = -uVar35;
                do {
                  puVar12 = (undefined8 *)(param_3 + (ulong)*puVar15 * 0x18);
                  fVar42 = (float)*puVar12;
                  fVar38 = fVar42 + *(float *)((long)puVar12 + 0xc);
                  fVar33 = (float)((ulong)*puVar12 >> 0x20);
                  fVar39 = fVar33 + *(float *)(puVar12 + 2);
                  fVar40 = (float)puVar12[1] + *(float *)((long)puVar12 + 0x14);
                  fVar42 = *(float *)((long)puVar12 + 0xc) - fVar42;
                  fVar33 = *(float *)(puVar12 + 2) - fVar33;
                  fVar34 = *(float *)((long)puVar12 + 0x14) - (float)puVar12[1];
                  uVar37 = CONCAT26(-(ushort)(0.0 <= auVar62._12_4_),
                                    CONCAT24(-(ushort)(fVar40 - fVar34 <= auVar62._8_4_),
                                             CONCAT22(-(ushort)(fVar39 - fVar33 <= auVar62._4_4_),
                                                      -(ushort)(fVar38 - fVar42 <= auVar62._0_4_))))
                           & CONCAT26(-(ushort)(auVar57._12_4_ <= 0.0),
                                      CONCAT24(-(ushort)(auVar57._8_4_ <= fVar40 + fVar34),
                                               CONCAT22(-(ushort)(auVar57._4_4_ <= fVar39 + fVar33),
                                                        -(ushort)(auVar57._0_4_ <= fVar38 + fVar42))
                                              )) &
                           (ulong)CONCAT16(0xff,(uint6)CONCAT14(-(ABS(fVar5 * (fVar41 - fVar38) -
                                                                      (fVar3 - fVar40) * fVar52) <=
                                                                 fVar34 * fVar54 + fVar56 * fVar42),
                                                                (uint)CONCAT12(-(ABS(fVar51 * (fVar3
                                                                                              - 
                                                  fVar40) - (fVar32 - fVar39) * fVar5) <=
                                                  fVar33 * fVar56 + fVar55 * fVar34),
                                                  -(ushort)(ABS(fVar52 * (fVar32 - fVar39) -
                                                                (fVar41 - fVar38) * fVar51) <=
                                                           fVar42 * fVar55 + fVar54 * fVar33))));
                  auVar28._0_4_ = (int)((uint)(ushort)uVar37 << 0x1f) >> 0x1f;
                  auVar28._4_4_ = (int)((uint)(ushort)(uVar37 >> 0x10) << 0x1f) >> 0x1f;
                  auVar28._8_4_ = (int)((uint)(ushort)(uVar37 >> 0x20) << 0x1f) >> 0x1f;
                  auVar28._12_4_ = (int)((uint)(ushort)(uVar37 >> 0x30) << 0x1f) >> 0x1f;
                  NEON_ext(auVar28,auVar28,8,1);
                  if (CONCAT13((char)(uVar37 >> 0x30),
                               CONCAT12((char)(uVar37 >> 0x20),
                                        CONCAT11((char)(uVar37 >> 0x10),(char)uVar37))) == -1) {
                    uVar37 = (**(code **)*param_9)
                                       (param_9,&local_874,param_2 + (ulong)*puVar15 * 0x10);
                    if ((uVar37 & 1) == 0) {
                      return 0;
                    }
                    auVar10._8_4_ = fVar3;
                    auVar10._0_8_ = uVar6;
                    auVar9._8_4_ = fVar3;
                    auVar9._0_8_ = uVar6;
                    if (local_874 < fVar53) {
                      *param_7 = local_874;
                      auVar29._0_8_ =
                           CONCAT44(fVar32 + fVar51 * local_874,fVar41 + fVar52 * local_874);
                      auVar29._8_4_ = fVar3 + fVar5 * local_874;
                      auVar29._12_4_ = local_874 * 0.0 + 0.0;
                      auVar57 = NEON_ext(auVar29,auVar29,8,1);
                      auVar30._8_4_ = auVar57._0_4_;
                      auVar30._0_8_ = auVar29._0_8_;
                      auVar30._12_4_ = 0;
                      auVar9._12_4_ = 0;
                      auVar57 = NEON_fmin(auVar9,auVar30,4);
                      auVar10._12_4_ = 0;
                      auVar62 = NEON_fmax(auVar10,auVar30,4);
                    }
                  }
                  iVar14 = iVar14 + 1;
                  puVar15 = puVar15 + 1;
                } while (iVar14 != 0);
              }
            }
            goto joined_r0x0039d568;
          }
          pfVar13 = pfVar17 + (ulong)((uint)fVar42 >> 1) * 7;
          fVar38 = pfVar13[7];
          fVar42 = (float)*(undefined8 *)pfVar13;
          fVar43 = pfVar13[3] - fVar42;
          fVar33 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
          fVar46 = pfVar13[4] - fVar33;
          fVar47 = pfVar13[5] - (float)*(undefined8 *)(pfVar13 + 2);
          fVar42 = fVar42 + pfVar13[3];
          fVar33 = fVar33 + pfVar13[4];
          fVar34 = (float)*(undefined8 *)(pfVar13 + 2) + pfVar13[5];
          fVar48 = pfVar13[10] - fVar38;
          fVar49 = pfVar13[0xb] - pfVar13[8];
          fVar50 = pfVar13[0xc] - pfVar13[9];
          fVar38 = fVar38 + pfVar13[10];
          fVar39 = pfVar13[8] + pfVar13[0xb];
          fVar31 = pfVar13[9] + pfVar13[0xc];
          uVar37 = CONCAT26(-(ushort)(0.0 <= fVar65),
                            CONCAT24(-(ushort)(fVar34 - fVar47 <= fVar64),
                                     CONCAT22(-(ushort)(fVar33 - fVar46 <= fVar63),
                                              -(ushort)(fVar42 - fVar43 <= fVar61)))) &
                   CONCAT26(-(ushort)(fVar60 <= 0.0),
                            CONCAT24(-(ushort)(fVar59 <= fVar34 + fVar47),
                                     CONCAT22(-(ushort)(fVar58 <= fVar33 + fVar46),
                                              -(ushort)(fVar40 <= fVar42 + fVar43)))) &
                   CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar5 * (fVar41 - fVar42) -
                                                          (fVar3 - fVar34) * fVar52) <=
                                                     fVar47 * fVar54 + fVar56 * fVar43),
                                            CONCAT22(-(ushort)(ABS(fVar51 * (fVar3 - fVar34) -
                                                                   (fVar32 - fVar33) * fVar5) <=
                                                              fVar46 * fVar56 + fVar55 * fVar47),
                                                     -(ushort)(ABS(fVar52 * (fVar32 - fVar33) -
                                                                   (fVar41 - fVar42) * fVar51) <=
                                                              fVar43 * fVar55 + fVar54 * fVar46))));
          auVar44._0_4_ = (int)((uint)(ushort)uVar37 << 0x1f) >> 0x1f;
          auVar44._4_4_ = (int)((uint)(ushort)(uVar37 >> 0x10) << 0x1f) >> 0x1f;
          auVar44._8_4_ = (int)((uint)(ushort)(uVar37 >> 0x20) << 0x1f) >> 0x1f;
          auVar44._12_4_ = (int)((uint)(ushort)(uVar37 >> 0x30) << 0x1f) >> 0x1f;
          NEON_ext(auVar44,auVar44,8,1);
          uVar35 = CONCAT13((char)(uVar37 >> 0x30),
                            CONCAT12((char)(uVar37 >> 0x20),
                                     CONCAT11((char)(uVar37 >> 0x10),(char)uVar37)));
          uVar37 = CONCAT26(-(ushort)(0.0 <= fVar65),
                            CONCAT24(-(ushort)(fVar31 - fVar50 <= fVar64),
                                     CONCAT22(-(ushort)(fVar39 - fVar49 <= fVar63),
                                              -(ushort)(fVar38 - fVar48 <= fVar61)))) &
                   CONCAT26(-(ushort)(fVar60 <= 0.0),
                            CONCAT24(-(ushort)(fVar59 <= fVar31 + fVar50),
                                     CONCAT22(-(ushort)(fVar58 <= fVar39 + fVar49),
                                              -(ushort)(fVar40 <= fVar38 + fVar48)))) &
                   CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar5 * (fVar41 - fVar38) -
                                                          (fVar3 - fVar31) * fVar52) <=
                                                     fVar50 * fVar54 + fVar56 * fVar48),
                                            CONCAT22(-(ushort)(ABS(fVar51 * (fVar3 - fVar31) -
                                                                   (fVar32 - fVar39) * fVar5) <=
                                                              fVar49 * fVar56 + fVar55 * fVar50),
                                                     -(ushort)(ABS(fVar52 * (fVar32 - fVar39) -
                                                                   (fVar41 - fVar38) * fVar51) <=
                                                              fVar48 * fVar55 + fVar54 * fVar49))));
          auVar45._0_4_ = (int)((uint)(ushort)uVar37 << 0x1f) >> 0x1f;
          auVar45._4_4_ = (int)((uint)(ushort)(uVar37 >> 0x10) << 0x1f) >> 0x1f;
          auVar45._8_4_ = (int)((uint)(ushort)(uVar37 >> 0x20) << 0x1f) >> 0x1f;
          auVar45._12_4_ = (int)((uint)(ushort)(uVar37 >> 0x30) << 0x1f) >> 0x1f;
          NEON_ext(auVar45,auVar45,8,1);
          uVar36 = CONCAT13((char)(uVar37 >> 0x30),
                            CONCAT12((char)(uVar37 >> 0x20),
                                     CONCAT11((char)(uVar37 >> 0x10),(char)uVar37)));
          if ((uVar36 & uVar35) != 0xffffffff) break;
          fVar42 = fVar52 * (fVar38 - fVar42);
          fVar33 = fVar51 * (fVar39 - fVar33);
          uVar18 = (undefined1)((uint)fVar33 >> 8);
          uVar19 = (undefined1)((uint)fVar33 >> 0x10);
          uVar20 = (undefined1)((uint)fVar33 >> 0x18);
          fVar34 = fVar5 * (fVar31 - fVar34);
          uVar21 = (undefined1)((uint)fVar34 >> 8);
          uVar22 = (undefined1)((uint)fVar34 >> 0x10);
          uVar23 = (undefined1)((uint)fVar34 >> 0x18);
          auVar1[4] = SUB41(fVar33,0);
          auVar1._0_4_ = fVar42;
          auVar1[5] = uVar18;
          auVar1[6] = uVar19;
          auVar1[7] = uVar20;
          auVar1[8] = SUB41(fVar34,0);
          auVar1[9] = uVar21;
          auVar1[10] = uVar22;
          auVar1[0xb] = uVar23;
          auVar1._12_4_ = 0;
          auVar2[4] = SUB41(fVar33,0);
          auVar2._0_4_ = fVar42;
          auVar2[5] = uVar18;
          auVar2[6] = uVar19;
          auVar2[7] = uVar20;
          auVar2[8] = SUB41(fVar34,0);
          auVar2[9] = uVar21;
          auVar2[10] = uVar22;
          auVar2[0xb] = uVar23;
          auVar2._12_4_ = 0;
          auVar25 = NEON_ext(auVar1,auVar2,8,1);
          uVar35 = (uint)(byte)-(0.0 < fVar42 + fVar33 + auVar25._0_4_ + auVar25._4_4_);
          pfVar11 = pfVar13 + ((ulong)~uVar35 & 1) * 7;
          local_870[uVar16] = pfVar13 + ((ulong)uVar35 & 1) * 7;
          uVar16 = uVar16 + 1;
        }
        pfVar11 = pfVar13;
        if (uVar35 != 0xffffffff) {
          pfVar11 = pfVar13 + 7;
        }
      } while (!(uVar35 != 0xffffffff && uVar36 != 0xffffffff));
    }
joined_r0x0039d568:
    if (uVar16 == 0) {
      return 1;
    }
    uVar16 = uVar16 - 1;
    pfVar11 = local_870[uVar16];
  } while( true );
}


