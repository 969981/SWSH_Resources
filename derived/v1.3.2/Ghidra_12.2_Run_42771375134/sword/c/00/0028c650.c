/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028c650; name: FUN_0028c650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0028c650(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],uint param_4,
            long param_5,long *param_6,long *param_7,undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10,undefined4 *param_11)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar31;
  float fVar32;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar33;
  ulong uVar34;
  float fVar41;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar35;
  undefined1 auVar39 [16];
  int iVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined1 local_78 [8];
  
  fVar41 = param_3._8_4_;
  fVar40 = param_3._4_4_;
  fVar31 = param_3._0_4_;
  fVar24 = param_2._8_4_;
  fVar18 = param_2._4_4_;
  fVar49 = param_2._0_4_;
  fVar47 = param_1._8_4_;
  fVar45 = param_1._4_4_;
  fVar21 = param_1._0_4_;
  puVar12 = (undefined8 *)param_7[6];
  uVar56 = *param_9;
  fVar23 = *(float *)(puVar12 + 2);
  fVar30 = *(float *)((long)puVar12 + 0x14);
  fVar32 = *(float *)(puVar12 + 3);
  fVar44 = (float)*puVar12;
  fVar46 = (float)((ulong)*puVar12 >> 0x20);
  fVar48 = (float)puVar12[1];
  fVar53 = (float)puVar12[4];
  fVar54 = (float)((ulong)puVar12[4] >> 0x20);
  fVar55 = (float)puVar12[5];
  fVar19 = fVar44 * fVar21 + fVar23 * fVar45 + fVar53 * fVar47;
  fVar20 = fVar46 * fVar21 + fVar30 * fVar45 + fVar54 * fVar47;
  fVar21 = fVar48 * fVar21 + fVar32 * fVar45 + fVar55 * fVar47;
  fVar45 = fVar44 * fVar49 + fVar23 * fVar18;
  fVar47 = fVar46 * fVar49 + fVar30 * fVar18;
  fVar49 = fVar48 * fVar49 + fVar32 * fVar18;
  fVar23 = fVar44 * fVar31 + fVar23 * fVar40 + fVar53 * fVar41;
  fVar30 = fVar46 * fVar31 + fVar30 * fVar40 + fVar54 * fVar41;
  fVar32 = fVar48 * fVar31 + fVar32 * fVar40 + fVar55 * fVar41;
  bVar2 = (param_4 >> 5 & 1) != 0;
  if (bVar2) {
    uStack_b8 = (ulong)(uint)(fVar32 - fVar21);
    local_c0 = CONCAT44(fVar30 - fVar20,fVar23 - fVar19);
  }
  uVar16 = (ulong)bVar2;
  if (((param_4 & 0xff) >> 3 & 1) != 0) {
    lVar1 = uVar16 * 0x10;
    *(float *)(auStack_80 + lVar1 + -0x38) = fVar21 - (fVar49 + fVar55 * fVar24);
    *(undefined4 *)(auStack_80 + lVar1 + -0x34) = 0;
    *(float *)(auStack_80 + lVar1 + -0x40) = fVar19 - (fVar45 + fVar53 * fVar24);
    *(float *)(auStack_80 + lVar1 + -0x3c) = fVar20 - (fVar47 + fVar54 * fVar24);
    uVar16 = (ulong)(bVar2 + 1);
  }
  fVar49 = fVar49 + fVar55 * fVar24;
  fVar47 = fVar47 + fVar54 * fVar24;
  fVar45 = fVar45 + fVar53 * fVar24;
  if (((param_4 & 0xff) >> 4 & 1) == 0) {
    if ((int)uVar16 == 0) {
      return 1;
    }
    iVar33 = *(int *)(param_5 + 0x10);
  }
  else {
    lVar1 = uVar16 * 0x10;
    *(float *)(auStack_80 + lVar1 + -0x38) = fVar49 - fVar32;
    *(undefined4 *)(auStack_80 + lVar1 + -0x34) = 0;
    *(float *)(auStack_80 + lVar1 + -0x40) = fVar45 - fVar23;
    *(float *)(auStack_80 + lVar1 + -0x3c) = fVar47 - fVar30;
    uVar16 = (ulong)((int)uVar16 + 1);
    iVar33 = *(int *)(param_5 + 0x10);
  }
  if (iVar33 != 0) {
    auVar36._0_4_ = fVar45 - fVar19;
    auVar36._4_4_ = fVar47 - fVar20;
    auVar36._8_4_ = fVar49 - fVar21;
    auVar36._12_4_ = 0;
    fVar23 = fVar23 - fVar19;
    fVar30 = fVar30 - fVar20;
    fVar32 = fVar32 - fVar21;
    auVar26 = NEON_ext(auVar36,auVar36,8,1);
    auVar50._4_4_ = fVar30;
    auVar50._0_4_ = fVar23;
    auVar50._8_4_ = fVar32;
    auVar50._12_4_ = 0;
    auVar37._4_4_ = fVar30;
    auVar37._0_4_ = fVar23;
    auVar37._8_4_ = fVar32;
    auVar37._12_4_ = 0;
    auVar50 = NEON_ext(auVar50,auVar37,8,1);
    fVar21 = auVar36._0_4_ * fVar30 - auVar36._4_4_ * fVar23;
    uVar25 = NEON_ext(CONCAT44(auVar36._4_4_ * fVar32 - auVar36._8_4_ * fVar30,fVar21),
                      CONCAT44(auVar26._4_4_ * fVar30 - auVar36._4_4_ * auVar50._4_4_,
                               auVar26._0_4_ * fVar23 - auVar36._0_4_ * auVar50._0_4_),4,1);
    uVar17 = 0;
    fVar45 = (float)uVar25;
    fVar32 = fVar45 * fVar45;
    fVar20 = (float)((ulong)uVar25 >> 0x20);
    fVar19 = fVar20 * fVar20;
    auVar26._4_4_ = fVar19;
    auVar26._0_4_ = fVar32;
    auVar26._8_4_ = fVar21 * fVar21;
    auVar26._12_4_ = 0;
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar32;
    auVar3._8_4_ = fVar21 * fVar21;
    auVar3._12_4_ = 0;
    auVar50 = NEON_ext(auVar26,auVar3,8,1);
    fVar30 = auVar50._0_4_ + auVar50._4_4_;
    fVar23 = fVar32 + fVar19 + fVar30;
    fVar30 = fVar32 + fVar19 + fVar30;
    uVar25 = NEON_frsqrte(CONCAT44(fVar30,fVar23),4);
    fVar32 = (float)uVar25;
    fVar19 = (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar19 * fVar19,fVar32 * fVar32),CONCAT44(fVar30,fVar23),4);
    fVar32 = fVar32 * (float)uVar25;
    fVar19 = fVar19 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar19 * fVar19,fVar32 * fVar32),CONCAT44(fVar30,fVar23),4);
    fVar32 = fVar32 * (float)uVar25;
    fVar19 = fVar19 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar19 * fVar19,fVar32 * fVar32),CONCAT44(fVar30,fVar23),4);
    fVar32 = fVar32 * (float)uVar25;
    fVar19 = fVar19 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar19 * fVar19,fVar32 * fVar32),CONCAT44(fVar30,fVar23),4);
    uVar34 = CONCAT44(fVar30 * fVar19 * (float)((ulong)uVar25 >> 0x20),
                      fVar23 * fVar32 * (float)uVar25);
    uVar34 = uVar34 ^ (uVar34 ^ CONCAT44(fVar30,fVar23)) &
                      CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
    uVar25 = NEON_frecpe(uVar34,4);
    uVar43 = NEON_frecps(uVar34,uVar25,4);
    fVar23 = (float)uVar25 * (float)uVar43;
    fVar30 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
    uVar25 = NEON_frecps(uVar34,CONCAT44(fVar30,fVar23),4);
    fVar23 = fVar23 * (float)uVar25;
    fVar30 = fVar30 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frecps(uVar34,CONCAT44(fVar30,fVar23),4);
    fVar23 = fVar23 * (float)uVar25;
    fVar30 = fVar30 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frecps(uVar34,CONCAT44(fVar30,fVar23),4);
    fVar23 = fVar23 * (float)uVar25;
    uVar25 = NEON_frecps(uVar34,CONCAT44(fVar30 * (float)((ulong)uVar25 >> 0x20),fVar23),4);
    fVar23 = fVar23 * (float)uVar25;
    do {
      pfVar15 = (float *)(*(long *)(param_5 + 0x18) + uVar17 * 0x14);
      fVar30 = fVar45 * fVar23 * *pfVar15;
      fVar32 = fVar20 * fVar23 * pfVar15[1];
      fVar19 = fVar21 * fVar23 * pfVar15[2];
      auVar4._4_4_ = fVar32;
      auVar4._0_4_ = fVar30;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = 0;
      auVar5._4_4_ = fVar32;
      auVar5._0_4_ = fVar30;
      auVar5._8_4_ = fVar19;
      auVar5._12_4_ = 0;
      auVar50 = NEON_ext(auVar4,auVar5,8,1);
      if (fVar30 + fVar32 + auVar50._0_4_ + auVar50._4_4_ <= 0.0) {
        pbVar13 = (byte *)(*(long *)(param_5 + 0x18) + uVar17 * 0x14 + 0x12);
        uVar34 = (ulong)*pbVar13;
        if (uVar34 != 0) {
          lVar1 = *(long *)(param_5 + 0x28) + (ulong)*(ushort *)(pfVar15 + 4);
          uVar35 = 0;
          uVar34 = uVar34 + 0xffffffff;
          do {
            uVar14 = uVar35;
            puVar12 = (undefined8 *)
                      (*(long *)(param_5 + 0x20) + (ulong)*(byte *)(lVar1 + uVar14) * 0xc);
            uVar25 = *puVar12;
            pfVar15 = (float *)(*(long *)(param_5 + 0x20) +
                               (ulong)*(byte *)(lVar1 + (uVar34 & 0xffffffff)) * 0xc);
            uVar34 = 0;
            fVar30 = pfVar15[1] - (float)((ulong)uVar25 >> 0x20);
            auVar51._0_8_ = CONCAT44(fVar30,*pfVar15 - (float)uVar25);
            auVar51._8_4_ = pfVar15[2] - (float)puVar12[1];
            auVar51._12_4_ = 0;
            auVar50 = NEON_ext(auVar51,auVar51,8,1);
            auVar52 = auVar51;
            do {
              fVar19 = (float)*(undefined8 *)(auStack_80 + uVar34 * 0x10 + -0x38);
              uVar22 = (undefined4)
                       ((ulong)*(undefined8 *)(auStack_80 + uVar34 * 0x10 + -0x38) >> 0x20);
              uVar25 = *(undefined8 *)(auStack_80 + uVar34 * 0x10 + -0x40);
              fVar32 = (float)((ulong)uVar25 >> 0x20);
              auVar6._8_4_ = fVar19;
              auVar6._0_8_ = uVar25;
              auVar6._12_4_ = uVar22;
              auVar7._8_4_ = fVar19;
              auVar7._0_8_ = uVar25;
              auVar7._12_4_ = uVar22;
              auVar37 = NEON_ext(auVar6,auVar7,8,1);
              fVar47 = auVar52._0_4_ * fVar32 - fVar30 * (float)uVar25;
              uVar25 = NEON_ext(CONCAT44(auVar52._4_4_ * fVar19 - auVar51._8_4_ * fVar32,fVar47),
                                CONCAT44(auVar50._4_4_ * fVar32 - auVar52._4_4_ * auVar37._4_4_,
                                         auVar50._0_4_ * (float)uVar25 -
                                         auVar52._0_4_ * auVar37._0_4_),4,1);
              fVar32 = (float)uVar25;
              fVar19 = (float)((ulong)uVar25 >> 0x20);
              auVar27._0_4_ = -(uint)(ABS(fVar32) < (float)_DAT_01d4a810);
              auVar27._4_4_ = -(uint)(ABS(fVar19) < (float)((ulong)_DAT_01d4a810 >> 0x20));
              auVar27._8_4_ = -(uint)(ABS(fVar47) < (float)_UNK_01d4a818);
              auVar27._12_4_ = -(uint)(0.0 < (float)((ulong)_UNK_01d4a818 >> 0x20));
              NEON_ext(auVar27,auVar27,8,1);
              if ((CONCAT12((char)auVar27._8_4_,CONCAT11((char)auVar27._4_4_,(char)auVar27._0_4_))
                   != -1) &&
                 (auVar28._0_4_ = fVar45 * fVar23 * fVar32, auVar28._4_4_ = fVar20 * fVar23 * fVar19
                 , auVar28._8_4_ = fVar21 * fVar23 * fVar47, auVar28._12_4_ = 0,
                 auVar37 = NEON_ext(auVar28,auVar28,8,1),
                 0.0 < auVar28._0_4_ + auVar28._4_4_ + auVar37._0_4_ + auVar37._4_4_)) {
                pfVar15 = (float *)param_7[6];
                auVar38._0_4_ = fVar32 * pfVar15[4];
                auVar38._4_4_ = fVar19 * pfVar15[5];
                auVar38._8_4_ = fVar47 * pfVar15[6];
                auVar38._12_4_ = pfVar15[7] * 0.0;
                auVar29._0_4_ = fVar32 * *pfVar15;
                auVar29._4_4_ = fVar19 * pfVar15[1];
                auVar29._8_4_ = fVar47 * pfVar15[2];
                auVar29._12_4_ = pfVar15[3] * 0.0;
                auVar37 = NEON_ext(auVar29,auVar29,8,1);
                fVar49 = auVar37._0_4_ + auVar37._4_4_;
                auVar37 = NEON_ext(auVar38,auVar38,8,1);
                fVar18 = auVar37._0_4_ + auVar37._4_4_;
                fVar32 = fVar32 * pfVar15[8];
                fVar19 = fVar19 * pfVar15[9];
                auVar8._4_4_ = fVar19;
                auVar8._0_4_ = fVar32;
                auVar8._8_4_ = fVar47 * pfVar15[10];
                auVar8._12_4_ = pfVar15[0xb] * 0.0;
                auVar9._4_4_ = fVar19;
                auVar9._0_4_ = fVar32;
                auVar9._8_4_ = fVar47 * pfVar15[10];
                auVar9._12_4_ = pfVar15[0xb] * 0.0;
                auVar37 = NEON_ext(auVar8,auVar9,8,1);
                fVar32 = fVar32 + fVar19 + auVar37._0_4_ + auVar37._4_4_;
                uVar25 = NEON_ext(CONCAT44(auVar29._0_4_ + auVar29._4_4_ + fVar49,
                                           auVar29._0_4_ + auVar29._4_4_ + fVar49),
                                  CONCAT44(auVar38._0_4_ + auVar38._4_4_ + fVar18,
                                           auVar38._0_4_ + auVar38._4_4_ + fVar18),4,1);
                fVar24 = (float)uVar25;
                fVar49 = fVar24 * fVar24;
                fVar31 = (float)((ulong)uVar25 >> 0x20);
                fVar18 = fVar31 * fVar31;
                auVar10._4_4_ = fVar18;
                auVar10._0_4_ = fVar49;
                auVar10._8_4_ = fVar32 * fVar32;
                auVar10._12_4_ = 0;
                auVar11._4_4_ = fVar18;
                auVar11._0_4_ = fVar49;
                auVar11._8_4_ = fVar32 * fVar32;
                auVar11._12_4_ = 0;
                auVar37 = NEON_ext(auVar10,auVar11,8,1);
                fVar47 = auVar37._0_4_ + auVar37._4_4_;
                fVar19 = fVar49 + fVar18 + fVar47;
                fVar47 = fVar49 + fVar18 + fVar47;
                uVar25 = NEON_frsqrte(CONCAT44(fVar47,fVar19),4);
                fVar49 = (float)uVar25;
                fVar18 = (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar49 * fVar49),
                                      CONCAT44(fVar47,fVar19),4);
                fVar49 = fVar49 * (float)uVar25;
                fVar18 = fVar18 * (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar49 * fVar49),
                                      CONCAT44(fVar47,fVar19),4);
                fVar49 = fVar49 * (float)uVar25;
                fVar18 = fVar18 * (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar49 * fVar49),
                                      CONCAT44(fVar47,fVar19),4);
                fVar49 = fVar49 * (float)uVar25;
                fVar18 = fVar18 * (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar49 * fVar49),
                                      CONCAT44(fVar47,fVar19),4);
                uVar35 = CONCAT44(fVar47 * fVar18 * (float)((ulong)uVar25 >> 0x20),
                                  fVar19 * fVar49 * (float)uVar25);
                uVar35 = uVar35 ^ (uVar35 ^ CONCAT44(fVar47,fVar19)) &
                                  CONCAT44(-(uint)(fVar19 == 0.0),-(uint)(fVar19 == 0.0));
                uVar25 = NEON_frecpe(uVar35,4);
                uVar43 = NEON_frecps(uVar35,uVar25,4);
                fVar19 = (float)uVar25 * (float)uVar43;
                fVar47 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
                uVar25 = NEON_frecps(uVar35,CONCAT44(fVar47,fVar19),4);
                fVar19 = fVar19 * (float)uVar25;
                fVar47 = fVar47 * (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frecps(uVar35,CONCAT44(fVar47,fVar19),4);
                fVar19 = fVar19 * (float)uVar25;
                fVar47 = fVar47 * (float)((ulong)uVar25 >> 0x20);
                uVar25 = NEON_frecps(uVar35,CONCAT44(fVar47,fVar19),4);
                fVar19 = fVar19 * (float)uVar25;
                uVar25 = NEON_frecps(uVar35,CONCAT44(fVar47 * (float)((ulong)uVar25 >> 0x20),fVar19)
                                     ,4);
                fVar19 = fVar19 * (float)uVar25;
                uStack_c8 = (ulong)(uint)(fVar32 * fVar19);
                local_d0 = CONCAT44(fVar31 * fVar19,fVar24 * fVar19);
                    /* try { // try from 0028ca74 to 0028caa3 has its CatchHandler @ 0028cb98 */
                (**(code **)(*param_6 + 0x18))(param_6,&local_d0,local_78,auStack_80);
                (**(code **)(*param_7 + 0x18))(param_7,&local_d0,&local_88,&local_90);
                iVar42 = -(uint)(auStack_80._0_4_ + (float)*param_8 < (float)local_88);
                iVar33 = -(uint)((float)*param_8 + (float)local_90 < local_78._0_4_);
                iVar33 = CONCAT13((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar42 >> 0x18),
                                  CONCAT12((byte)((uint)iVar33 >> 0x10) |
                                           (byte)((uint)iVar42 >> 0x10),
                                           CONCAT11((byte)((uint)iVar33 >> 8) |
                                                    (byte)((uint)iVar42 >> 8),
                                                    (byte)iVar33 | (byte)iVar42)));
                auVar39._0_4_ = -(uint)(iVar33 == -1);
                auVar39._4_4_ = -(uint)(iVar33 == -1);
                auVar39._8_4_ = -(uint)(iVar33 == -1);
                auVar39._12_4_ = -(uint)(iVar33 == -1);
                NEON_ext(auVar39,auVar39,8,1);
                if (CONCAT13((char)auVar39._12_4_,
                             CONCAT12((char)auVar39._8_4_,
                                      CONCAT11((char)auVar39._4_4_,(char)auVar39._0_4_))) == -1) {
                  return 0;
                }
                fVar32 = auStack_80._0_4_ - (float)local_88;
                if (fVar32 < (float)uVar56) {
                  uVar56 = CONCAT44(auStack_80._4_4_ - (float)((ulong)local_88 >> 0x20),fVar32);
                  param_10[1] = uStack_c8;
                  *param_10 = local_d0;
                  *param_11 = 2;
                }
                auVar52._8_4_ = auVar51._8_4_;
                auVar52._0_8_ = auVar51._0_8_;
                auVar52._12_4_ = 0;
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar16);
            uVar35 = uVar14 + 1;
            uVar34 = uVar14;
          } while (uVar14 + 1 < (ulong)*pbVar13);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_5 + 0x10));
  }
  *param_9 = uVar56;
  return 1;
}


