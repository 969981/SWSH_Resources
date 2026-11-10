/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00282d80; name: FUN_00282d80
 */


undefined8
FUN_00282d80(long param_1,float *param_2,long param_3,long *param_4,undefined8 *param_5,
            float *param_6,undefined8 *param_7,ulong *param_8,undefined4 *param_9,uint *param_10,
            undefined4 param_11,undefined4 *param_12)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar36;
  float fVar37;
  uint uVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar39;
  ulong uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_a8;
  undefined8 local_98;
  
  uVar38 = param_10[2];
  uVar39 = param_10[3];
  uVar32 = *param_10;
  uVar36 = param_10[1];
  fVar25 = *param_2;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar22 = 0;
    uVar40 = 0x7f7fffff7f7fffff;
  }
  else {
    fVar28 = param_2[1];
    fVar29 = param_2[2];
    fVar3 = param_2[0x10];
    fVar64 = param_2[0x11];
    fVar14 = *param_6;
    fVar15 = param_6[1];
    fVar16 = param_6[2];
    fVar17 = param_6[4];
    fVar18 = param_6[5];
    fVar19 = param_6[6];
    uVar6 = *(undefined8 *)(param_6 + 10);
    uVar5 = *(undefined8 *)(param_6 + 8);
    fVar65 = param_2[0x12];
    uVar11 = *(undefined8 *)(param_2 + 0x11);
    lVar23 = 0;
    fVar66 = param_2[0x13];
    fVar67 = -fVar64;
    fVar68 = -fVar65;
    fVar69 = -fVar66;
    uVar24 = 0;
    uVar40 = 0x7f7fffff7f7fffff;
    fVar60 = (float)*(undefined8 *)(param_6 + 0xc);
    fVar61 = (float)((ulong)*(undefined8 *)(param_6 + 0xc) >> 0x20);
    fVar62 = (float)*(undefined8 *)(param_6 + 0xe);
    fVar63 = (float)((ulong)*(undefined8 *)(param_6 + 0xe) >> 0x20);
    uVar21 = 0;
    do {
      pauVar1 = (undefined1 (*) [12])(*(long *)(param_1 + 0x18) + lVar23);
      auVar12 = *(undefined1 (*) [12])(*(long *)(param_1 + 0x20) + (ulong)(byte)pauVar1[1][7] * 0xc)
      ;
      puVar20 = *(undefined8 **)(param_3 + 0x30);
      auVar13 = *pauVar1;
      fVar47 = auVar13._0_4_;
      fVar56 = fVar47 * (float)*puVar20;
      fVar49 = auVar13._4_4_;
      fVar57 = fVar49 * (float)((ulong)*puVar20 >> 0x20);
      uVar41 = (undefined1)((uint)fVar57 >> 8);
      uVar42 = (undefined1)((uint)fVar57 >> 0x10);
      uVar43 = (undefined1)((uint)fVar57 >> 0x18);
      fVar37 = auVar13._8_4_;
      fVar44 = fVar37 * (float)puVar20[1];
      fVar45 = (float)((ulong)puVar20[1] >> 0x20) * 0.0;
      auVar52[4] = SUB41(fVar57,0);
      auVar52._0_4_ = fVar56;
      auVar52[5] = uVar41;
      auVar52[6] = uVar42;
      auVar52[7] = uVar43;
      auVar52._8_4_ = fVar44;
      auVar52._12_4_ = fVar45;
      auVar4[4] = SUB41(fVar57,0);
      auVar4._0_4_ = fVar56;
      auVar4[5] = uVar41;
      auVar4[6] = uVar42;
      auVar4[7] = uVar43;
      auVar4._8_4_ = fVar44;
      auVar4._12_4_ = fVar45;
      auVar52 = NEON_ext(auVar52,auVar4,8,1);
      fVar46 = fVar47 * (float)puVar20[2];
      fVar48 = fVar49 * (float)((ulong)puVar20[2] >> 0x20);
      fVar45 = fVar37 * (float)puVar20[3];
      fVar50 = (float)((ulong)puVar20[3] >> 0x20) * 0.0;
      fVar44 = auVar52._0_4_ + auVar52._4_4_;
      auVar7._4_4_ = fVar48;
      auVar7._0_4_ = fVar46;
      auVar7._8_4_ = fVar45;
      auVar7._12_4_ = fVar50;
      auVar8._4_4_ = fVar48;
      auVar8._0_4_ = fVar46;
      auVar8._8_4_ = fVar45;
      auVar8._12_4_ = fVar50;
      auVar52 = NEON_ext(auVar7,auVar8,8,1);
      fVar45 = auVar52._0_4_ + auVar52._4_4_;
      auVar33._0_4_ = auVar12._0_4_ * fVar47;
      auVar33._4_4_ = auVar12._4_4_ * fVar49;
      auVar33._8_4_ = auVar12._8_4_ * fVar37;
      auVar33._12_4_ = 0;
      fVar50 = fVar56 + fVar57 + fVar44;
      auVar53._0_4_ = fVar47 * *(float *)(puVar20 + 4);
      auVar53._4_4_ = fVar49 * *(float *)((long)puVar20 + 0x24);
      auVar53._8_4_ = fVar37 * *(float *)(puVar20 + 5);
      auVar53._12_4_ = *(float *)((long)puVar20 + 0x2c) * 0.0;
      auVar52 = NEON_ext(auVar53,auVar53,8,1);
      uVar54 = NEON_ext(CONCAT17((char)((uint)fVar50 >> 0x18),
                                 CONCAT16((char)((uint)fVar50 >> 0x10),
                                          CONCAT15((char)((uint)fVar50 >> 8),
                                                   CONCAT14(SUB41(fVar50,0),fVar56 + fVar57 + fVar44
                                                           )))),
                        CONCAT44(fVar46 + fVar48 + fVar45,fVar46 + fVar48 + fVar45),4,1);
      fVar44 = auVar53._0_4_ + auVar53._4_4_ + auVar52._0_4_ + auVar52._4_4_;
      fVar56 = (float)uVar54;
      fVar47 = fVar56 * fVar56;
      fVar57 = (float)((ulong)uVar54 >> 0x20);
      fVar49 = fVar57 * fVar57;
      auVar9._4_4_ = fVar49;
      auVar9._0_4_ = fVar47;
      auVar9._8_4_ = fVar44 * fVar44;
      auVar9._12_4_ = 0;
      auVar10._4_4_ = fVar49;
      auVar10._0_4_ = fVar47;
      auVar10._8_4_ = fVar44 * fVar44;
      auVar10._12_4_ = 0;
      auVar52 = NEON_ext(auVar9,auVar10,8,1);
      fVar50 = auVar52._0_4_ + auVar52._4_4_;
      fVar45 = fVar47 + fVar49 + fVar50;
      fVar50 = fVar47 + fVar49 + fVar50;
      uVar54 = NEON_frsqrte(CONCAT44(fVar50,fVar45),4);
      fVar47 = (float)uVar54;
      fVar49 = (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar47 * fVar47),CONCAT44(fVar50,fVar45),4);
      fVar47 = fVar47 * (float)uVar54;
      fVar49 = fVar49 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar47 * fVar47),CONCAT44(fVar50,fVar45),4);
      fVar47 = fVar47 * (float)uVar54;
      fVar49 = fVar49 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar47 * fVar47),CONCAT44(fVar50,fVar45),4);
      fVar47 = fVar47 * (float)uVar54;
      fVar49 = fVar49 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar47 * fVar47),CONCAT44(fVar50,fVar45),4);
      uVar51 = CONCAT44(fVar50 * fVar49 * (float)((ulong)uVar54 >> 0x20),
                        fVar45 * fVar47 * (float)uVar54);
      uVar51 = uVar51 ^ (uVar51 ^ CONCAT44(fVar50,fVar45)) &
                        CONCAT44(-(uint)(fVar45 == 0.0),-(uint)(fVar45 == 0.0));
      uVar54 = NEON_frecpe(uVar51,4);
      uVar55 = NEON_frecps(uVar51,uVar54,4);
      fVar46 = (float)uVar54 * (float)uVar55;
      fVar48 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
      uVar54 = NEON_frecps(uVar51,CONCAT44(fVar48,fVar46),4);
      fVar46 = fVar46 * (float)uVar54;
      fVar48 = fVar48 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frecps(uVar51,CONCAT44(fVar48,fVar46),4);
      fVar46 = fVar46 * (float)uVar54;
      fVar48 = fVar48 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frecps(uVar51,CONCAT44(fVar48,fVar46),4);
      fVar46 = fVar46 * (float)uVar54;
      fVar48 = fVar48 * (float)((ulong)uVar54 >> 0x20);
      uVar54 = NEON_frecps(uVar51,CONCAT44(fVar48,fVar46),4);
      fVar46 = fVar46 * (float)uVar54;
      fVar48 = fVar48 * (float)((ulong)uVar54 >> 0x20);
      auVar52 = NEON_ext(auVar33,auVar33,8,1);
      fVar50 = auVar52._0_4_ + auVar52._4_4_;
      fVar56 = fVar56 * fVar46;
      fVar57 = fVar57 * fVar46;
      fVar44 = fVar44 * fVar46;
      fVar59 = fVar46 * (auVar33._0_4_ + auVar33._4_4_ + fVar50);
      fVar46 = fVar46 * *(float *)pauVar1[1];
      fVar49 = -fVar46;
      fVar58 = -(fVar48 * *(float *)pauVar1[1]);
      fVar45 = (float)*param_5 * fVar56 + (float)param_5[2] * fVar57 +
               *(float *)(param_5 + 4) * fVar44;
      fVar47 = (float)((ulong)*param_5 >> 0x20) * fVar56 +
               (float)((ulong)param_5[2] >> 0x20) * fVar57 +
               *(float *)((long)param_5 + 0x24) * fVar44;
      local_c0 = CONCAT44(fVar47,fVar45);
      fVar37 = (float)param_5[1] * fVar56 + (float)param_5[3] * fVar57 +
               *(float *)(param_5 + 5) * fVar44;
      uStack_b8 = (ulong)(uint)fVar37;
      auVar26._0_4_ =
           fVar45 * (float)((uint)fVar67 ^ ((uint)fVar67 ^ (uint)fVar64) & -(uint)(0.0 < fVar45));
      auVar26._4_4_ =
           fVar47 * (float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar65) & -(uint)(0.0 < fVar47));
      auVar26._8_4_ =
           fVar37 * (float)((uint)fVar69 ^ ((uint)fVar69 ^ (uint)fVar66) & -(uint)(0.0 < fVar37));
      auVar26._12_4_ = 0;
      auVar52 = NEON_ext(auVar26,auVar26,8,1);
      fVar45 = auVar52._0_4_ + auVar52._4_4_;
      auVar34._0_4_ = (fVar60 + fVar14 * fVar25 + fVar17 * fVar28 + (float)uVar5 * fVar29) * fVar56;
      auVar34._4_4_ =
           (fVar61 + fVar15 * fVar25 + fVar18 * fVar28 + (float)((ulong)uVar5 >> 0x20) * fVar29) *
           fVar57;
      auVar34._8_4_ = (fVar62 + fVar16 * fVar25 + fVar19 * fVar28 + (float)uVar6 * fVar29) * fVar44;
      auVar34._12_4_ = (fVar63 + 0.0) * 0.0;
      auVar52 = NEON_ext(auVar34,auVar34,8,1);
      fVar47 = auVar52._0_4_ + auVar52._4_4_;
      uVar54 = NEON_fmax(CONCAT44(auVar26._0_4_ + auVar26._4_4_ + fVar45,
                                  auVar26._0_4_ + auVar26._4_4_ + fVar45),CONCAT44(fVar3,fVar3),4);
      fVar45 = auVar34._0_4_ + auVar34._4_4_ + fVar47;
      fVar47 = auVar34._0_4_ + auVar34._4_4_ + fVar47;
      fVar37 = (float)((ulong)uVar54 >> 0x20);
      uVar55 = NEON_fmax(CONCAT44(fVar48 * (auVar33._0_4_ + auVar33._4_4_ + fVar50),fVar59),
                         CONCAT44(fVar47 - fVar37,fVar45 - (float)uVar54),4);
      uVar54 = NEON_fmin(CONCAT44(fVar58,fVar49),CONCAT44(fVar37 + fVar47,(float)uVar54 + fVar45),4)
      ;
      fVar45 = (float)uVar40;
      uVar22 = uVar21;
      if ((float)uVar54 - (float)uVar55 <= fVar45) {
        auVar27._0_4_ = fVar60 * fVar56;
        auVar27._4_4_ = fVar61 * fVar57;
        auVar27._8_4_ = fVar62 * fVar44;
        auVar27._12_4_ = fVar63 * 0.0;
        auVar52 = NEON_ext(auVar27,auVar27,8,1);
        fVar65 = auVar52._0_4_ + auVar52._4_4_;
        fVar64 = auVar27._0_4_ + auVar27._4_4_ + fVar65;
        fVar65 = auVar27._0_4_ + auVar27._4_4_ + fVar65;
        (**(code **)(*param_4 + 0x18))(param_4,&local_c0,&local_98,&local_a8);
        fVar50 = fVar64 + (float)local_98;
        fVar47 = fVar65 + (float)((ulong)local_98 >> 0x20);
        local_98 = CONCAT44(fVar47,fVar50);
        fVar64 = fVar64 + (float)local_a8;
        local_a8 = CONCAT44(fVar65 + (float)((ulong)local_a8 >> 0x20),fVar64);
        iVar31 = -(uint)((float)*param_7 - fVar46 < fVar50);
        iVar30 = -(uint)(fVar64 + (float)*param_7 < fVar59);
        iVar31 = CONCAT13((byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar31 >> 0x18),
                          CONCAT12((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar31 >> 0x10),
                                   CONCAT11((byte)((uint)iVar30 >> 8) | (byte)((uint)iVar31 >> 8),
                                            (byte)iVar30 | (byte)iVar31)));
        auVar35._0_4_ = -(uint)(iVar31 == -1);
        auVar35._4_4_ = -(uint)(iVar31 == -1);
        auVar35._8_4_ = -(uint)(iVar31 == -1);
        auVar35._12_4_ = -(uint)(iVar31 == -1);
        NEON_ext(auVar35,auVar35,8,1);
        if (CONCAT13((char)auVar35._12_4_,
                     CONCAT12((char)auVar35._8_4_,CONCAT11((char)auVar35._4_4_,(char)auVar35._0_4_))
                    ) == -1) {
          return 0;
        }
        fVar49 = fVar49 - fVar50;
        fVar64 = (float)uVar11;
        fVar65 = (float)((ulong)uVar11 >> 0x20);
        uVar2 = -(uint)(fVar49 < fVar45);
        uVar32 = uVar32 ^ (uVar32 ^ (uint)fVar56) & uVar2;
        uVar36 = uVar36 ^ (uVar36 ^ (uint)fVar57) & uVar2;
        uVar38 = uVar38 ^ (uVar38 ^ (uint)fVar44) & uVar2;
        uVar39 = uVar39 ^ uVar39 & uVar2;
        uVar40 = uVar40 ^ (uVar40 ^ CONCAT44(fVar58 - fVar47,fVar49)) & CONCAT44(uVar2,uVar2);
        uVar22 = (int)uVar24;
        if (fVar49 >= fVar45) {
          uVar22 = uVar21;
        }
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0x14;
      uVar21 = uVar22;
    } while (uVar24 < *(uint *)(param_1 + 0x10));
  }
  if ((float)uVar40 < (float)*param_8) {
    param_10[2] = uVar38;
    param_10[3] = uVar39;
    *param_10 = uVar32;
    param_10[1] = uVar36;
    *param_8 = uVar40;
    *param_12 = param_11;
  }
  *param_9 = uVar22;
  return 1;
}


