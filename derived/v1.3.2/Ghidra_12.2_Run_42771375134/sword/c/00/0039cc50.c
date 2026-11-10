/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039cc50; name: FUN_0039cc50
 */


/* WARNING: Removing unreachable block (ram,0x0039d010) */
/* WARNING: Removing unreachable block (ram,0x0039d078) */
/* WARNING: Removing unreachable block (ram,0x0039d07c) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0039cc50(undefined8 param_1,long param_2,long param_3,long *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8,undefined8 *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar32;
  undefined1 auVar25 [16];
  float fVar24;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  float fVar40;
  ulong uVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  undefined1 auVar66 [16];
  float fVar69;
  float local_874;
  undefined8 *local_870 [256];
  
  fVar34 = param_5[1] + param_5[1];
  fVar48 = *param_5 + *param_5;
  fVar52 = param_6[1] + param_6[1];
  fVar53 = *param_6 + *param_6;
  fVar51 = param_6[2] + param_6[2];
  fVar57 = *param_8 + *param_8;
  fVar56 = param_8[1] + param_8[1];
  fVar3 = param_5[2] + param_5[2];
  uVar17 = SUB41(fVar3,0);
  uVar18 = (undefined1)((uint)fVar3 >> 8);
  uVar19 = (undefined1)((uint)fVar3 >> 0x10);
  uVar20 = (undefined1)((uint)fVar3 >> 0x18);
  fVar23 = *param_7;
  fVar58 = ABS(fVar53);
  fVar59 = ABS(fVar52);
  fVar60 = ABS(fVar51);
  fVar43 = param_8[2] + param_8[2];
  if (DAT_01d4c18c <= fVar23) {
    uVar54 = SUB42(DAT_01d4c18c,0);
    uVar55 = (undefined2)((uint)DAT_01d4c18c >> 0x10);
    if (fVar53 < 0.0) {
      uVar54 = SUB42(DAT_01d4c5a8,0);
      uVar55 = (undefined2)((uint)DAT_01d4c5a8 >> 0x10);
    }
    fVar49 = fVar48;
    if (fVar53 != 0.0) {
      fVar49 = (float)CONCAT22(uVar55,uVar54);
    }
    fVar23 = DAT_01d4c18c;
    if (fVar52 < 0.0) {
      fVar23 = DAT_01d4c5a8;
    }
    fVar35 = fVar34;
    if (fVar52 != 0.0) {
      fVar35 = fVar23;
    }
    if (fVar51 != 0.0) {
      uVar4 = (&DAT_01cd50a8)[0.0 <= fVar51];
      uVar17 = (undefined1)uVar4;
      uVar18 = (undefined1)((uint)uVar4 >> 8);
      uVar19 = (undefined1)((uint)uVar4 >> 0x10);
      uVar20 = (undefined1)((uint)uVar4 >> 0x18);
    }
  }
  else {
    fVar49 = fVar48 + fVar53 * fVar23;
    fVar35 = fVar34 + fVar52 * fVar23;
    fVar23 = fVar3 + fVar51 * fVar23;
    uVar17 = SUB41(fVar23,0);
    uVar18 = (undefined1)((uint)fVar23 >> 8);
    uVar19 = (undefined1)((uint)fVar23 >> 0x10);
    uVar20 = (undefined1)((uint)fVar23 >> 0x18);
  }
  uVar15 = 0;
  auVar26._4_4_ = fVar35;
  auVar26._0_4_ = fVar49;
  puVar16 = (undefined8 *)param_4[2];
  auVar26[9] = uVar18;
  auVar26[8] = uVar17;
  auVar26[10] = uVar19;
  auVar26[0xb] = uVar20;
  auVar26._12_4_ = 0;
  auVar61._4_4_ = fVar34;
  auVar61._0_4_ = fVar48;
  auVar61._8_4_ = fVar3;
  auVar61._12_4_ = 0;
  auVar61 = NEON_fmin(auVar61,auVar26,4);
  auVar66._4_4_ = fVar34;
  auVar66._0_4_ = fVar48;
  auVar66._8_4_ = fVar3;
  auVar66._12_4_ = 0;
  auVar66 = NEON_fmax(auVar66,auVar26,4);
  local_870[0] = puVar16;
  uVar5 = CONCAT44(fVar34,fVar48);
  puVar10 = puVar16;
  do {
    fVar23 = (float)*puVar10;
    fVar49 = (float)((ulong)*puVar10 >> 0x20);
    fVar35 = fVar23 + *(float *)((long)puVar10 + 0xc);
    fVar44 = fVar49 + *(float *)(puVar10 + 2);
    fVar24 = (float)puVar10[1] + *(float *)((long)puVar10 + 0x14);
    fVar23 = fVar57 + (*(float *)((long)puVar10 + 0xc) - fVar23);
    fVar49 = fVar56 + (*(float *)(puVar10 + 2) - fVar49);
    fVar32 = fVar43 + (*(float *)((long)puVar10 + 0x14) - (float)puVar10[1]);
    fVar42 = auVar61._0_4_;
    fVar62 = auVar61._4_4_;
    fVar63 = auVar61._8_4_;
    fVar64 = auVar61._12_4_;
    fVar65 = auVar66._0_4_;
    fVar67 = auVar66._4_4_;
    fVar68 = auVar66._8_4_;
    fVar69 = auVar66._12_4_;
    uVar39 = CONCAT26(-(ushort)(0.0 <= fVar69),
                      CONCAT24(-(ushort)(fVar24 - fVar32 <= fVar68),
                               CONCAT22(-(ushort)(fVar44 - fVar49 <= fVar67),
                                        -(ushort)(fVar35 - fVar23 <= fVar65)))) &
             CONCAT26(-(ushort)(fVar64 <= 0.0),
                      CONCAT24(-(ushort)(fVar63 <= fVar24 + fVar32),
                               CONCAT22(-(ushort)(fVar62 <= fVar44 + fVar49),
                                        -(ushort)(fVar42 <= fVar35 + fVar23)))) &
             (ulong)CONCAT16(0xff,(uint6)CONCAT14(-(ABS(fVar51 * (fVar48 - fVar35) -
                                                        (fVar3 - fVar24) * fVar53) <=
                                                   fVar32 * fVar58 + fVar60 * fVar23),
                                                  (uint)CONCAT12(-(ABS(fVar52 * (fVar3 - fVar24) -
                                                                       (fVar34 - fVar44) * fVar51)
                                                                  <= fVar49 * fVar60 +
                                                                     fVar59 * fVar32),
                                                                 -(ushort)(ABS(fVar53 * (fVar34 - 
                                                  fVar44) - (fVar48 - fVar35) * fVar52) <=
                                                  fVar23 * fVar59 + fVar58 * fVar49))));
    auVar25._0_4_ = (int)((uint)(ushort)uVar39 << 0x1f) >> 0x1f;
    auVar25._4_4_ = (int)((uint)(ushort)(uVar39 >> 0x10) << 0x1f) >> 0x1f;
    auVar25._8_4_ = (int)((uint)(ushort)(uVar39 >> 0x20) << 0x1f) >> 0x1f;
    auVar25._12_4_ = (int)((uint)(ushort)(uVar39 >> 0x30) << 0x1f) >> 0x1f;
    NEON_ext(auVar25,auVar25,8,1);
    if (CONCAT13((char)(uVar39 >> 0x30),
                 CONCAT12((char)(uVar39 >> 0x20),CONCAT11((char)(uVar39 >> 0x10),(char)uVar39))) ==
        -1) {
      local_874 = *param_7;
      fVar23 = *(float *)(puVar10 + 3);
      fVar49 = local_874;
      if (((uint)fVar23 & 1) == 0) {
        do {
          pfVar12 = (float *)((long)puVar16 + (ulong)((uint)fVar23 >> 1) * 0x1c);
          fVar23 = *pfVar12 + pfVar12[3];
          fVar49 = pfVar12[1] + pfVar12[4];
          fVar35 = pfVar12[2] + pfVar12[5];
          fVar44 = pfVar12[7];
          fVar46 = (float)*(undefined8 *)(pfVar12 + 10);
          fVar24 = fVar44 + fVar46;
          fVar47 = (float)((ulong)*(undefined8 *)(pfVar12 + 10) >> 0x20);
          fVar32 = pfVar12[8] + fVar47;
          fVar33 = pfVar12[9] + (float)*(undefined8 *)(pfVar12 + 0xc);
          fVar36 = fVar57 + (pfVar12[3] - *pfVar12);
          fVar40 = fVar56 + (pfVar12[4] - pfVar12[1]);
          fVar41 = fVar43 + (pfVar12[5] - pfVar12[2]);
          fVar44 = fVar57 + (fVar46 - fVar44);
          fVar46 = fVar56 + (fVar47 - pfVar12[8]);
          fVar47 = fVar43 + ((float)*(undefined8 *)(pfVar12 + 0xc) - pfVar12[9]);
          uVar39 = CONCAT26(-(ushort)(0.0 <= fVar69),
                            CONCAT24(-(ushort)(fVar35 - fVar41 <= fVar68),
                                     CONCAT22(-(ushort)(fVar49 - fVar40 <= fVar67),
                                              -(ushort)(fVar23 - fVar36 <= fVar65)))) &
                   CONCAT26(-(ushort)(fVar64 <= 0.0),
                            CONCAT24(-(ushort)(fVar63 <= fVar35 + fVar41),
                                     CONCAT22(-(ushort)(fVar62 <= fVar49 + fVar40),
                                              -(ushort)(fVar42 <= fVar23 + fVar36)))) &
                   CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar51 * (fVar48 - fVar23) -
                                                          (fVar3 - fVar35) * fVar53) <=
                                                     fVar41 * fVar58 + fVar60 * fVar36),
                                            CONCAT22(-(ushort)(ABS(fVar52 * (fVar3 - fVar35) -
                                                                   (fVar34 - fVar49) * fVar51) <=
                                                              fVar40 * fVar60 + fVar59 * fVar41),
                                                     -(ushort)(ABS(fVar53 * (fVar34 - fVar49) -
                                                                   (fVar48 - fVar23) * fVar52) <=
                                                              fVar36 * fVar59 + fVar58 * fVar40))));
          auVar50._0_4_ = (int)((uint)(ushort)uVar39 << 0x1f) >> 0x1f;
          auVar50._4_4_ = (int)((uint)(ushort)(uVar39 >> 0x10) << 0x1f) >> 0x1f;
          auVar50._8_4_ = (int)((uint)(ushort)(uVar39 >> 0x20) << 0x1f) >> 0x1f;
          auVar50._12_4_ = (int)((uint)(ushort)(uVar39 >> 0x30) << 0x1f) >> 0x1f;
          NEON_ext(auVar50,auVar50,8,1);
          uVar37 = CONCAT13((char)(uVar39 >> 0x30),
                            CONCAT12((char)(uVar39 >> 0x20),
                                     CONCAT11((char)(uVar39 >> 0x10),(char)uVar39)));
          uVar39 = CONCAT26(-(ushort)(0.0 <= fVar69),
                            CONCAT24(-(ushort)(fVar33 - fVar47 <= fVar68),
                                     CONCAT22(-(ushort)(fVar32 - fVar46 <= fVar67),
                                              -(ushort)(fVar24 - fVar44 <= fVar65)))) &
                   CONCAT26(-(ushort)(fVar64 <= 0.0),
                            CONCAT24(-(ushort)(fVar63 <= fVar33 + fVar47),
                                     CONCAT22(-(ushort)(fVar62 <= fVar32 + fVar46),
                                              -(ushort)(fVar42 <= fVar24 + fVar44)))) &
                   CONCAT26(0xffff,CONCAT24(-(ushort)(ABS(fVar51 * (fVar48 - fVar24) -
                                                          (fVar3 - fVar33) * fVar53) <=
                                                     fVar47 * fVar58 + fVar60 * fVar44),
                                            CONCAT22(-(ushort)(ABS(fVar52 * (fVar3 - fVar33) -
                                                                   (fVar34 - fVar32) * fVar51) <=
                                                              fVar46 * fVar60 + fVar59 * fVar47),
                                                     -(ushort)(ABS(fVar53 * (fVar34 - fVar32) -
                                                                   (fVar48 - fVar24) * fVar52) <=
                                                              fVar44 * fVar59 + fVar58 * fVar46))));
          auVar45._0_4_ = (int)((uint)(ushort)uVar39 << 0x1f) >> 0x1f;
          auVar45._4_4_ = (int)((uint)(ushort)(uVar39 >> 0x10) << 0x1f) >> 0x1f;
          auVar45._8_4_ = (int)((uint)(ushort)(uVar39 >> 0x20) << 0x1f) >> 0x1f;
          auVar45._12_4_ = (int)((uint)(ushort)(uVar39 >> 0x30) << 0x1f) >> 0x1f;
          NEON_ext(auVar45,auVar45,8,1);
          uVar38 = CONCAT13((char)(uVar39 >> 0x30),
                            CONCAT12((char)(uVar39 >> 0x20),
                                     CONCAT11((char)(uVar39 >> 0x10),(char)uVar39)));
          if ((uVar38 & uVar37) == 0xffffffff) {
            fVar23 = fVar53 * (fVar24 - fVar23);
            fVar49 = fVar52 * (fVar32 - fVar49);
            uVar17 = (undefined1)((uint)fVar49 >> 8);
            uVar18 = (undefined1)((uint)fVar49 >> 0x10);
            uVar19 = (undefined1)((uint)fVar49 >> 0x18);
            fVar35 = fVar51 * (fVar33 - fVar35);
            uVar20 = (undefined1)((uint)fVar35 >> 8);
            uVar21 = (undefined1)((uint)fVar35 >> 0x10);
            uVar22 = (undefined1)((uint)fVar35 >> 0x18);
            auVar1[4] = SUB41(fVar49,0);
            auVar1._0_4_ = fVar23;
            auVar1[5] = uVar17;
            auVar1[6] = uVar18;
            auVar1[7] = uVar19;
            auVar1[8] = SUB41(fVar35,0);
            auVar1[9] = uVar20;
            auVar1[10] = uVar21;
            auVar1[0xb] = uVar22;
            auVar1._12_4_ = 0;
            auVar2[4] = SUB41(fVar49,0);
            auVar2._0_4_ = fVar23;
            auVar2[5] = uVar17;
            auVar2[6] = uVar18;
            auVar2[7] = uVar19;
            auVar2[8] = SUB41(fVar35,0);
            auVar2[9] = uVar20;
            auVar2[10] = uVar21;
            auVar2[0xb] = uVar22;
            auVar2._12_4_ = 0;
            auVar26 = NEON_ext(auVar1,auVar2,8,1);
            uVar37 = (uint)(byte)-(0.0 < fVar23 + fVar49 + auVar26._0_4_ + auVar26._4_4_);
            pfVar11 = pfVar12 + ((ulong)~uVar37 & 1) * 7;
            local_870[uVar15] = (undefined8 *)(pfVar12 + ((ulong)uVar37 & 1) * 7);
            uVar15 = uVar15 + 1;
          }
          else {
            pfVar11 = pfVar12;
            if (uVar37 != 0xffffffff) {
              pfVar11 = pfVar12 + 7;
            }
            if (uVar37 != 0xffffffff && uVar38 != 0xffffffff) goto joined_r0x0039d258;
          }
          fVar23 = pfVar11[6];
        } while (((uint)fVar23 & 1) == 0);
        fVar49 = *param_7;
      }
      uVar37 = (uint)fVar23 >> 1 & 0xf;
      if (uVar37 != 0) {
        puVar13 = (uint *)(*param_4 + (ulong)((uint)fVar23 >> 5) * 4);
        if (uVar37 == 1) {
          uVar39 = (**(code **)*param_9)(param_9,&local_874,param_2 + (ulong)*puVar13 * 0x10);
          if ((uVar39 & 1) == 0) {
            return 0;
          }
          if (local_874 < fVar49) {
            auVar7._8_4_ = fVar3;
            auVar7._0_8_ = uVar5;
            auVar6._8_4_ = fVar3;
            auVar6._0_8_ = uVar5;
            *param_7 = local_874;
            auVar27._0_8_ = CONCAT44(fVar34 + fVar52 * local_874,fVar48 + fVar53 * local_874);
            auVar27._8_4_ = fVar3 + fVar51 * local_874;
            auVar27._12_4_ = local_874 * 0.0 + 0.0;
            auVar61 = NEON_ext(auVar27,auVar27,8,1);
            auVar28._8_4_ = auVar61._0_4_;
            auVar28._0_8_ = auVar27._0_8_;
            auVar28._12_4_ = 0;
            auVar6._12_4_ = 0;
            auVar61 = NEON_fmin(auVar6,auVar28,4);
            auVar7._12_4_ = 0;
            auVar66 = NEON_fmax(auVar7,auVar28,4);
          }
        }
        else {
          iVar14 = -uVar37;
          do {
            puVar10 = (undefined8 *)(param_3 + (ulong)*puVar13 * 0x18);
            fVar23 = (float)*puVar10;
            fVar24 = fVar23 + *(float *)((long)puVar10 + 0xc);
            fVar35 = (float)((ulong)*puVar10 >> 0x20);
            fVar32 = fVar35 + *(float *)(puVar10 + 2);
            fVar42 = (float)puVar10[1] + *(float *)((long)puVar10 + 0x14);
            fVar23 = fVar57 + (*(float *)((long)puVar10 + 0xc) - fVar23);
            fVar35 = fVar56 + (*(float *)(puVar10 + 2) - fVar35);
            fVar44 = fVar43 + (*(float *)((long)puVar10 + 0x14) - (float)puVar10[1]);
            uVar39 = CONCAT26(-(ushort)(0.0 <= auVar66._12_4_),
                              CONCAT24(-(ushort)(fVar42 - fVar44 <= auVar66._8_4_),
                                       CONCAT22(-(ushort)(fVar32 - fVar35 <= auVar66._4_4_),
                                                -(ushort)(fVar24 - fVar23 <= auVar66._0_4_)))) &
                     CONCAT26(-(ushort)(auVar61._12_4_ <= 0.0),
                              CONCAT24(-(ushort)(auVar61._8_4_ <= fVar42 + fVar44),
                                       CONCAT22(-(ushort)(auVar61._4_4_ <= fVar32 + fVar35),
                                                -(ushort)(auVar61._0_4_ <= fVar24 + fVar23)))) &
                     (ulong)CONCAT16(0xff,(uint6)CONCAT14(-(ABS(fVar51 * (fVar48 - fVar24) -
                                                                (fVar3 - fVar42) * fVar53) <=
                                                           fVar44 * fVar58 + fVar60 * fVar23),
                                                          (uint)CONCAT12(-(ABS(fVar52 * (fVar3 - 
                                                  fVar42) - (fVar34 - fVar32) * fVar51) <=
                                                  fVar35 * fVar60 + fVar59 * fVar44),
                                                  -(ushort)(ABS(fVar53 * (fVar34 - fVar32) -
                                                                (fVar48 - fVar24) * fVar52) <=
                                                           fVar23 * fVar59 + fVar58 * fVar35))));
            auVar29._0_4_ = (int)((uint)(ushort)uVar39 << 0x1f) >> 0x1f;
            auVar29._4_4_ = (int)((uint)(ushort)(uVar39 >> 0x10) << 0x1f) >> 0x1f;
            auVar29._8_4_ = (int)((uint)(ushort)(uVar39 >> 0x20) << 0x1f) >> 0x1f;
            auVar29._12_4_ = (int)((uint)(ushort)(uVar39 >> 0x30) << 0x1f) >> 0x1f;
            NEON_ext(auVar29,auVar29,8,1);
            if (CONCAT13((char)(uVar39 >> 0x30),
                         CONCAT12((char)(uVar39 >> 0x20),
                                  CONCAT11((char)(uVar39 >> 0x10),(char)uVar39))) == -1) {
              uVar39 = (**(code **)*param_9)(param_9,&local_874,param_2 + (ulong)*puVar13 * 0x10);
              if ((uVar39 & 1) == 0) {
                return 0;
              }
              auVar9._8_4_ = fVar3;
              auVar9._0_8_ = uVar5;
              auVar8._8_4_ = fVar3;
              auVar8._0_8_ = uVar5;
              if (local_874 < fVar49) {
                *param_7 = local_874;
                auVar30._0_8_ = CONCAT44(fVar34 + fVar52 * local_874,fVar48 + fVar53 * local_874);
                auVar30._8_4_ = fVar3 + fVar51 * local_874;
                auVar30._12_4_ = local_874 * 0.0 + 0.0;
                auVar61 = NEON_ext(auVar30,auVar30,8,1);
                auVar31._8_4_ = auVar61._0_4_;
                auVar31._0_8_ = auVar30._0_8_;
                auVar31._12_4_ = 0;
                auVar8._12_4_ = 0;
                auVar61 = NEON_fmin(auVar8,auVar31,4);
                auVar9._12_4_ = 0;
                auVar66 = NEON_fmax(auVar9,auVar31,4);
              }
            }
            iVar14 = iVar14 + 1;
            puVar13 = puVar13 + 1;
          } while (iVar14 != 0);
        }
      }
    }
joined_r0x0039d258:
    if (uVar15 == 0) {
      return 1;
    }
    uVar15 = uVar15 - 1;
    puVar10 = local_870[uVar15];
  } while( true );
}


