/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00280200; name: FUN_00280200
 */


void FUN_00280200(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  int iVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined8 uVar45;
  float fVar48;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 local_90;
  float fStack_8c;
  float local_88;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    fVar20 = (float)*param_5;
    fVar44 = fVar20 * fVar20;
    fVar24 = (float)((ulong)*param_5 >> 0x20);
    fVar48 = fVar24 * fVar24;
    uVar27 = (undefined1)((uint)fVar48 >> 8);
    uVar28 = (undefined1)((uint)fVar48 >> 0x10);
    uVar30 = (undefined1)((uint)fVar48 >> 0x18);
    fVar26 = (float)param_5[1];
    fVar18 = fVar26 * fVar26;
    uVar32 = (undefined1)((uint)fVar18 >> 8);
    uVar33 = (undefined1)((uint)fVar18 >> 0x10);
    uVar34 = (undefined1)((uint)fVar18 >> 0x18);
    fVar19 = (float)((ulong)param_5[1] >> 0x20);
    fVar19 = fVar19 * fVar19;
    uVar35 = (undefined1)((uint)fVar19 >> 8);
    uVar36 = (undefined1)((uint)fVar19 >> 0x10);
    uVar37 = (undefined1)((uint)fVar19 >> 0x18);
    auVar43[4] = SUB41(fVar48,0);
    auVar43._0_4_ = fVar44;
    auVar43[5] = uVar27;
    auVar43[6] = uVar28;
    auVar43[7] = uVar30;
    auVar43[8] = SUB41(fVar18,0);
    auVar43[9] = uVar32;
    auVar43[10] = uVar33;
    auVar43[0xb] = uVar34;
    auVar43[0xc] = SUB41(fVar19,0);
    auVar43[0xd] = uVar35;
    auVar43[0xe] = uVar36;
    auVar43[0xf] = uVar37;
    auVar3[4] = SUB41(fVar48,0);
    auVar3._0_4_ = fVar44;
    auVar3[5] = uVar27;
    auVar3[6] = uVar28;
    auVar3[7] = uVar30;
    auVar3[8] = SUB41(fVar18,0);
    auVar3[9] = uVar32;
    auVar3[10] = uVar33;
    auVar3[0xb] = uVar34;
    auVar3[0xc] = SUB41(fVar19,0);
    auVar3[0xd] = uVar35;
    auVar3[0xe] = uVar36;
    auVar3[0xf] = uVar37;
    auVar43 = NEON_ext(auVar43,auVar3,8,1);
    fVar19 = auVar43._0_4_ + auVar43._4_4_;
    fVar18 = fVar44 + fVar48 + fVar19;
    fVar19 = fVar44 + fVar48 + fVar19;
    uVar27 = SUB41(fVar19,0);
    uVar28 = (undefined1)((uint)fVar19 >> 8);
    uVar30 = (undefined1)((uint)fVar19 >> 0x10);
    uVar32 = (undefined1)((uint)fVar19 >> 0x18);
    uVar45 = NEON_frsqrte(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar18))))
                          ,4);
    fVar44 = (float)uVar45;
    fVar48 = (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar44 * fVar44),
                          CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar18))))
                          ,4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar44 * fVar44),
                          CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar18))))
                          ,4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar44 * fVar44),
                          CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar18))))
                          ,4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar44 * fVar44),
                          CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,fVar18))))
                          ,4);
    uVar42 = CONCAT44(fVar19 * fVar48 * (float)((ulong)uVar45 >> 0x20),
                      fVar18 * fVar44 * (float)uVar45);
    uVar42 = uVar42 ^ (uVar42 ^ CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  fVar18))))) &
                      CONCAT44(-(uint)(fVar18 == 0.0),-(uint)(fVar18 == 0.0));
    uVar45 = NEON_frecpe(uVar42,4);
    uVar46 = NEON_frecps(uVar42,uVar45,4);
    fVar44 = (float)uVar45 * (float)uVar46;
    fVar48 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
    uVar45 = NEON_frecps(uVar42,CONCAT17((char)((uint)fVar48 >> 0x18),
                                         CONCAT16((char)((uint)fVar48 >> 0x10),
                                                  CONCAT15((char)((uint)fVar48 >> 8),
                                                           CONCAT14(SUB41(fVar48,0),fVar44)))),4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frecps(uVar42,CONCAT17((char)((uint)fVar48 >> 0x18),
                                         CONCAT16((char)((uint)fVar48 >> 0x10),
                                                  CONCAT15((char)((uint)fVar48 >> 8),
                                                           CONCAT14(SUB41(fVar48,0),fVar44)))),4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frecps(uVar42,CONCAT17((char)((uint)fVar48 >> 0x18),
                                         CONCAT16((char)((uint)fVar48 >> 0x10),
                                                  CONCAT15((char)((uint)fVar48 >> 8),
                                                           CONCAT14(SUB41(fVar48,0),fVar44)))),4);
    fVar44 = fVar44 * (float)uVar45;
    fVar48 = fVar48 * (float)((ulong)uVar45 >> 0x20);
    uVar45 = NEON_frecps(uVar42,CONCAT17((char)((uint)fVar48 >> 0x18),
                                         CONCAT16((char)((uint)fVar48 >> 0x10),
                                                  CONCAT15((char)((uint)fVar48 >> 8),
                                                           CONCAT14(SUB41(fVar48,0),fVar44)))),4);
    fVar44 = fVar44 * (float)uVar45;
    uVar42 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x18) + uVar42 * 0x14;
      pbVar16 = (byte *)(lVar15 + 0x12);
      bVar29 = *pbVar16;
      uVar11 = (uint)bVar29;
      if (bVar29 != 0) {
        pbVar1 = (byte *)(*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(lVar15 + 0x10));
        lVar15 = *(long *)(param_1 + 0x20);
        puVar13 = *(undefined8 **)(param_2 + 0x28);
        uVar49 = puVar13[5];
        uVar47 = puVar13[4];
        uVar46 = puVar13[1];
        uVar37 = (undefined1)uVar46;
        uVar38 = (undefined1)((ulong)uVar46 >> 8);
        uVar39 = (undefined1)((ulong)uVar46 >> 0x10);
        uVar40 = (undefined1)((ulong)uVar46 >> 0x18);
        uVar45 = *puVar13;
        uVar27 = (undefined1)uVar45;
        uVar28 = (undefined1)((ulong)uVar45 >> 8);
        uVar30 = (undefined1)((ulong)uVar45 >> 0x10);
        uVar32 = (undefined1)((ulong)uVar45 >> 0x18);
        uVar33 = (undefined1)((ulong)uVar45 >> 0x20);
        uVar34 = (undefined1)((ulong)uVar45 >> 0x28);
        uVar35 = (undefined1)((ulong)uVar45 >> 0x30);
        uVar36 = (undefined1)((ulong)uVar45 >> 0x38);
        fVar19 = *(float *)(puVar13 + 2);
        fVar22 = *(float *)((long)puVar13 + 0x14);
        fVar21 = *(float *)(puVar13 + 3);
        puVar13 = (undefined8 *)(lVar15 + (ulong)*pbVar1 * 0xc);
        uVar23 = *puVar13;
        uVar14 = 1;
        fVar18 = (float)puVar13[1];
        fVar50 = (float)uVar23;
        fVar51 = (float)((ulong)uVar23 >> 0x20);
        fVar48 = (float)uVar45 * fVar50 + fVar19 * fVar51 + (float)uVar47 * fVar18;
        fVar25 = (float)((ulong)uVar45 >> 0x20) * fVar50 + fVar22 * fVar51 +
                 (float)((ulong)uVar47 >> 0x20) * fVar18;
        fVar18 = (float)uVar46 * fVar50 + fVar21 * fVar51 + (float)uVar49 * fVar18;
        uVar46 = param_4[1];
        uVar45 = *param_4;
        fVar50 = fVar20 * fVar44 * (fVar48 - (float)uVar45);
        fVar51 = fVar24 * fVar44 * (fVar25 - (float)((ulong)uVar45 >> 0x20));
        fVar53 = fVar26 * fVar44 * (fVar18 - (float)uVar46);
        fVar55 = (0.0 - (float)((ulong)uVar46 >> 0x20)) * 0.0;
        auVar9._4_4_ = fVar51;
        auVar9._0_4_ = fVar50;
        auVar9._8_4_ = fVar53;
        auVar9._12_4_ = fVar55;
        auVar10._4_4_ = fVar51;
        auVar10._0_4_ = fVar50;
        auVar10._8_4_ = fVar53;
        auVar10._12_4_ = fVar55;
        auVar43 = NEON_ext(auVar9,auVar10,8,1);
        fVar50 = fVar50 + fVar51 + auVar43._0_4_ + auVar43._4_4_;
        uVar12 = bVar29 - 1;
        uVar17 = 0;
        while( true ) {
          puVar13 = (undefined8 *)(lVar15 + (ulong)pbVar1[uVar12] * 0xc);
          fVar54 = (float)puVar13[1];
          uVar23 = *puVar13;
          fVar51 = (float)uVar23;
          fVar55 = (float)((ulong)uVar23 >> 0x20);
          fVar53 = (float)CONCAT13(uVar32,CONCAT12(uVar30,CONCAT11(uVar28,uVar27))) * fVar51 +
                   fVar19 * fVar55 + (float)uVar47 * fVar54;
          fVar52 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) * fVar51 +
                   fVar22 * fVar55 + (float)((ulong)uVar47 >> 0x20) * fVar54;
          fVar55 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) * fVar51 +
                   fVar21 * fVar55 + (float)uVar49 * fVar54;
          fVar19 = fVar20 * fVar44 * (fVar53 - (float)uVar45);
          fVar22 = fVar24 * fVar44 * (fVar52 - (float)((ulong)uVar45 >> 0x20));
          uVar27 = (undefined1)((uint)fVar22 >> 8);
          uVar28 = (undefined1)((uint)fVar22 >> 0x10);
          uVar30 = (undefined1)((uint)fVar22 >> 0x18);
          fVar21 = fVar26 * fVar44 * (fVar55 - (float)uVar46);
          uVar32 = (undefined1)((uint)fVar21 >> 8);
          uVar33 = (undefined1)((uint)fVar21 >> 0x10);
          uVar34 = (undefined1)((uint)fVar21 >> 0x18);
          fVar51 = (0.0 - (float)((ulong)uVar46 >> 0x20)) * 0.0;
          uVar35 = (undefined1)((uint)fVar51 >> 8);
          uVar36 = (undefined1)((uint)fVar51 >> 0x10);
          uVar37 = (undefined1)((uint)fVar51 >> 0x18);
          auVar4[4] = SUB41(fVar22,0);
          auVar4._0_4_ = fVar19;
          auVar4[5] = uVar27;
          auVar4[6] = uVar28;
          auVar4[7] = uVar30;
          auVar4[8] = SUB41(fVar21,0);
          auVar4[9] = uVar32;
          auVar4[10] = uVar33;
          auVar4[0xb] = uVar34;
          auVar4[0xc] = SUB41(fVar51,0);
          auVar4[0xd] = uVar35;
          auVar4[0xe] = uVar36;
          auVar4[0xf] = uVar37;
          auVar5[4] = SUB41(fVar22,0);
          auVar5._0_4_ = fVar19;
          auVar5[5] = uVar27;
          auVar5[6] = uVar28;
          auVar5[7] = uVar30;
          auVar5[8] = SUB41(fVar21,0);
          auVar5[9] = uVar32;
          auVar5[10] = uVar33;
          auVar5[0xb] = uVar34;
          auVar5[0xc] = SUB41(fVar51,0);
          auVar5[0xd] = uVar35;
          auVar5[0xe] = uVar36;
          auVar5[0xf] = uVar37;
          auVar43 = NEON_ext(auVar4,auVar5,8,1);
          iVar41 = -(uint)(0.0 < fVar50);
          fVar50 = fVar19 + fVar22 + auVar43._0_4_ + auVar43._4_4_;
          iVar8 = -(uint)(0.0 < fVar50);
          bVar29 = (byte)((uint)iVar8 >> 0x10) | (byte)((uint)iVar41 >> 0x10);
          bVar31 = (byte)((uint)iVar8 >> 0x18) | (byte)((uint)iVar41 >> 0x18);
          uVar2 = CONCAT11((byte)((uint)iVar8 >> 8) | (byte)((uint)iVar41 >> 8),
                           (byte)iVar8 | (byte)iVar41);
          iVar8 = -(uint)(CONCAT13(bVar31,CONCAT12(bVar29,uVar2)) == -1);
          iVar41 = -(uint)(CONCAT13(bVar31,CONCAT12(bVar29,uVar2)) == -1);
          uVar27 = (undefined1)iVar41;
          uVar28 = (undefined1)((uint)iVar41 >> 8);
          uVar30 = (undefined1)((uint)iVar41 >> 0x10);
          uVar32 = (undefined1)((uint)iVar41 >> 0x18);
          iVar41 = -(uint)(CONCAT13(bVar31,CONCAT12(bVar29,uVar2)) == -1);
          uVar33 = (undefined1)iVar41;
          uVar34 = (undefined1)((uint)iVar41 >> 8);
          uVar35 = (undefined1)((uint)iVar41 >> 0x10);
          uVar36 = (undefined1)((uint)iVar41 >> 0x18);
          iVar41 = -(uint)(CONCAT13(bVar31,CONCAT12(bVar29,uVar2)) == -1);
          uVar37 = (undefined1)iVar41;
          uVar38 = (undefined1)((uint)iVar41 >> 8);
          uVar39 = (undefined1)((uint)iVar41 >> 0x10);
          uVar40 = (undefined1)((uint)iVar41 >> 0x18);
          auVar6[4] = uVar27;
          auVar6._0_4_ = iVar8;
          auVar6[5] = uVar28;
          auVar6[6] = uVar30;
          auVar6[7] = uVar32;
          auVar6[8] = uVar33;
          auVar6[9] = uVar34;
          auVar6[10] = uVar35;
          auVar6[0xb] = uVar36;
          auVar6[0xc] = uVar37;
          auVar6[0xd] = uVar38;
          auVar6[0xe] = uVar39;
          auVar6[0xf] = uVar40;
          auVar7[4] = uVar27;
          auVar7._0_4_ = iVar8;
          auVar7[5] = uVar28;
          auVar7[6] = uVar30;
          auVar7[7] = uVar32;
          auVar7[8] = uVar33;
          auVar7[9] = uVar34;
          auVar7[10] = uVar35;
          auVar7[0xb] = uVar36;
          auVar7[0xc] = uVar37;
          auVar7[0xd] = uVar38;
          auVar7[0xe] = uVar39;
          auVar7[0xf] = uVar40;
          NEON_ext(auVar6,auVar7,8,1);
          if (CONCAT13(uVar37,CONCAT12(uVar33,CONCAT11(uVar27,(char)iVar8))) == -1) {
            fVar48 = fVar48 - fVar53;
            fVar25 = fVar25 - fVar52;
            fVar18 = fVar18 - fVar55;
            fVar21 = fVar18 * fVar18 + fVar48 * fVar48 + fVar25 * fVar25;
            uVar27 = 0;
            uVar28 = 0;
            uVar30 = 0;
            uVar32 = 0;
            fVar19 = 0.0;
            fVar22 = 0.0;
            if (0.0 < fVar21) {
              fVar22 = sqrtf(fVar21);
              fVar22 = 1.0 / fVar22;
              fVar48 = fVar48 * fVar22;
              uVar27 = SUB41(fVar48,0);
              uVar28 = (undefined1)((uint)fVar48 >> 8);
              uVar30 = (undefined1)((uint)fVar48 >> 0x10);
              uVar32 = (undefined1)((uint)fVar48 >> 0x18);
              fVar19 = fVar25 * fVar22;
              fVar22 = fVar18 * fVar22;
            }
            local_88 = fVar22;
            fStack_8c = fVar19;
            local_90 = CONCAT13(uVar32,CONCAT12(uVar30,CONCAT11(uVar28,uVar27)));
            FUN_00231ac0(param_3,&local_90);
            uVar11 = (uint)*pbVar16;
          }
          if (uVar11 <= uVar14) break;
          puVar13 = *(undefined8 **)(param_2 + 0x28);
          uVar49 = puVar13[5];
          uVar47 = puVar13[4];
          uVar46 = param_4[1];
          uVar45 = *param_4;
          uVar23 = puVar13[1];
          uVar37 = (undefined1)uVar23;
          uVar38 = (undefined1)((ulong)uVar23 >> 8);
          uVar39 = (undefined1)((ulong)uVar23 >> 0x10);
          uVar40 = (undefined1)((ulong)uVar23 >> 0x18);
          uVar23 = *puVar13;
          uVar27 = (undefined1)uVar23;
          uVar28 = (undefined1)((ulong)uVar23 >> 8);
          uVar30 = (undefined1)((ulong)uVar23 >> 0x10);
          uVar32 = (undefined1)((ulong)uVar23 >> 0x18);
          uVar33 = (undefined1)((ulong)uVar23 >> 0x20);
          uVar34 = (undefined1)((ulong)uVar23 >> 0x28);
          uVar35 = (undefined1)((ulong)uVar23 >> 0x30);
          uVar36 = (undefined1)((ulong)uVar23 >> 0x38);
          fVar19 = *(float *)(puVar13 + 2);
          fVar22 = *(float *)((long)puVar13 + 0x14);
          fVar21 = *(float *)(puVar13 + 3);
          lVar15 = *(long *)(param_1 + 0x20);
          uVar14 = uVar14 + 1;
          uVar12 = uVar17;
          uVar17 = uVar17 + 1;
          fVar48 = fVar53;
          fVar25 = fVar52;
          fVar18 = fVar55;
        }
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 < *(uint *)(param_1 + 0x10));
  }
  return;
}


