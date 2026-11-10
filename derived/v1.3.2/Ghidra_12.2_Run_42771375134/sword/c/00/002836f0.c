/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002836f0; name: FUN_002836f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002836f0(long param_1,long param_2,undefined1 (*param_3) [12],long *param_4,float *param_5,
                 long param_6,uint *param_7,undefined8 *param_8,float *param_9)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  byte bVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar51;
  ulong uVar52;
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  int iVar60;
  float fVar61;
  float fVar66;
  undefined8 uVar62;
  undefined1 auVar64 [16];
  undefined8 uVar63;
  undefined1 auVar65 [16];
  byte bVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  float fVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  float fVar85;
  undefined8 uVar86;
  byte bVar87;
  byte bVar88;
  undefined8 local_f0;
  float afStack_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  pfVar14 = (float *)param_4[6];
  auVar24 = *param_3;
  fVar22 = auVar24._0_4_;
  auVar44._0_4_ = *pfVar14 * fVar22;
  fVar19 = auVar24._4_4_;
  auVar44._4_4_ = pfVar14[1] * fVar19;
  fVar59 = auVar24._8_4_;
  auVar44._8_4_ = pfVar14[2] * fVar59;
  auVar44._12_4_ = pfVar14[3] * 0.0;
  auVar64 = NEON_ext(auVar44,auVar44,8,1);
  auVar53._0_4_ = fVar22 * pfVar14[4];
  auVar53._4_4_ = fVar19 * pfVar14[5];
  auVar53._8_4_ = fVar59 * pfVar14[6];
  auVar53._12_4_ = pfVar14[7] * 0.0;
  fVar20 = auVar64._0_4_ + auVar64._4_4_;
  auVar64 = NEON_ext(auVar53,auVar53,8,1);
  fVar21 = auVar64._0_4_ + auVar64._4_4_;
  auVar36._0_4_ = fVar22 * pfVar14[8];
  auVar36._4_4_ = fVar19 * pfVar14[9];
  auVar36._8_4_ = fVar59 * pfVar14[10];
  auVar36._12_4_ = pfVar14[0xb] * 0.0;
  auVar64 = NEON_ext(auVar36,auVar36,8,1);
  uVar43 = NEON_ext(CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar20,
                             auVar44._0_4_ + auVar44._4_4_ + fVar20),
                    CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar21,
                             auVar53._0_4_ + auVar53._4_4_ + fVar21),4,1);
  fVar19 = auVar36._0_4_ + auVar36._4_4_ + auVar64._0_4_ + auVar64._4_4_;
  fVar34 = (float)uVar43;
  auVar37._0_4_ = fVar34 * fVar34;
  fVar42 = (float)((ulong)uVar43 >> 0x20);
  auVar37._4_4_ = fVar42 * fVar42;
  auVar37._8_4_ = fVar19 * fVar19;
  auVar37._12_4_ = 0;
  auVar64 = NEON_ext(auVar37,auVar37,8,1);
  fVar22 = auVar64._0_4_ + auVar64._4_4_;
  fVar21 = auVar37._0_4_ + auVar37._4_4_ + fVar22;
  fVar22 = auVar37._0_4_ + auVar37._4_4_ + fVar22;
  uVar35 = CONCAT44(fVar22,fVar21);
  uVar43 = NEON_frsqrte(uVar35,4);
  fVar59 = (float)uVar43;
  fVar66 = (float)((ulong)uVar43 >> 0x20);
  fVar20 = fVar66 * fVar66;
  uVar43 = NEON_frsqrts(CONCAT17((char)((uint)fVar20 >> 0x18),
                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                   CONCAT14(SUB41(fVar20,0),fVar59 * fVar59)))),
                        uVar35,4);
  fVar59 = fVar59 * (float)uVar43;
  fVar66 = fVar66 * (float)((ulong)uVar43 >> 0x20);
  fVar20 = fVar66 * fVar66;
  uVar43 = NEON_frsqrts(CONCAT17((char)((uint)fVar20 >> 0x18),
                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                   CONCAT14(SUB41(fVar20,0),fVar59 * fVar59)))),
                        uVar35,4);
  fVar59 = fVar59 * (float)uVar43;
  fVar66 = fVar66 * (float)((ulong)uVar43 >> 0x20);
  fVar20 = fVar66 * fVar66;
  uVar43 = NEON_frsqrts(CONCAT17((char)((uint)fVar20 >> 0x18),
                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                   CONCAT14(SUB41(fVar20,0),fVar59 * fVar59)))),
                        uVar35,4);
  fVar59 = fVar59 * (float)uVar43;
  fVar66 = fVar66 * (float)((ulong)uVar43 >> 0x20);
  fVar20 = fVar66 * fVar66;
  uVar43 = NEON_frsqrts(CONCAT17((char)((uint)fVar20 >> 0x18),
                                 CONCAT16((char)((uint)fVar20 >> 0x10),
                                          CONCAT15((char)((uint)fVar20 >> 8),
                                                   CONCAT14(SUB41(fVar20,0),fVar59 * fVar59)))),
                        uVar35,4);
  uVar52 = CONCAT44(fVar22 * fVar66 * (float)((ulong)uVar43 >> 0x20),fVar21 * fVar59 * (float)uVar43
                   );
  uVar52 = uVar52 ^ (uVar52 ^ uVar35) & CONCAT44(-(uint)(fVar21 == 0.0),-(uint)(fVar21 == 0.0));
  uVar43 = NEON_frecpe(uVar52,4);
  uVar62 = NEON_frecps(uVar52,uVar43,4);
  fVar20 = (float)uVar43 * (float)uVar62;
  fVar21 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar62 >> 0x20);
  uVar43 = NEON_frecps(uVar52,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar43;
  fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar52,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar43;
  fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar52,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar43;
  uVar43 = NEON_frecps(uVar52,CONCAT44(fVar21 * (float)((ulong)uVar43 >> 0x20),fVar20),4);
  fVar20 = fVar20 * (float)uVar43;
  fVar34 = fVar34 * fVar20;
  fVar42 = fVar42 * fVar20;
  local_80 = CONCAT44(fVar42,fVar34);
  fVar19 = fVar19 * fVar20;
  fVar59 = (float)*(undefined8 *)(param_1 + 0x50) + (float)*param_8;
  uStack_78 = (ulong)(uint)fVar19;
  pbVar2 = (byte *)(*(long *)(param_2 + 0x28) + (ulong)*(ushort *)(param_3[1] + 4));
  pfVar16 = (float *)param_4[5];
  pfVar14 = (float *)(*(long *)(param_2 + 0x20) + (ulong)*pbVar2 * 0xc);
  fVar20 = *pfVar14;
  fVar21 = pfVar14[1];
  fVar22 = pfVar14[2];
  fVar66 = *pfVar16 * fVar20 + pfVar16[4] * fVar21 + (float)*(undefined8 *)(pfVar16 + 8) * fVar22;
  fVar49 = pfVar16[1] * fVar20 + pfVar16[5] * fVar21 +
           (float)((ulong)*(undefined8 *)(pfVar16 + 8) >> 0x20) * fVar22;
  fVar20 = pfVar16[2] * fVar20 + pfVar16[6] * fVar21 + (float)*(undefined8 *)(pfVar16 + 10) * fVar22
  ;
  auVar64._0_4_ = fVar34 * (*(float *)(param_1 + 0x30) - fVar66);
  auVar64._4_4_ = fVar42 * (*(float *)(param_1 + 0x34) - fVar49);
  auVar64._8_4_ = fVar19 * (*(float *)(param_1 + 0x38) - fVar20);
  auVar64._12_4_ = (*(float *)(param_1 + 0x3c) - 0.0) * 0.0;
  auVar54 = NEON_ext(auVar64,auVar64,8,1);
  auVar45._0_4_ = fVar34 * (*(float *)(param_1 + 0x40) - fVar66);
  auVar45._4_4_ = fVar42 * (*(float *)(param_1 + 0x44) - fVar49);
  auVar45._8_4_ = fVar19 * (*(float *)(param_1 + 0x48) - fVar20);
  auVar45._12_4_ = (*(float *)(param_1 + 0x4c) - 0.0) * 0.0;
  fVar21 = auVar54._0_4_ + auVar54._4_4_;
  auVar54 = NEON_ext(auVar45,auVar45,8,1);
  fVar22 = auVar54._0_4_ + auVar54._4_4_;
  auVar38._0_4_ = fVar34 * *param_9;
  auVar38._4_4_ = fVar42 * param_9[1];
  auVar38._8_4_ = fVar19 * param_9[2];
  auVar38._12_4_ = param_9[3] * 0.0;
  auVar54 = NEON_ext(auVar38,auVar38,8,1);
  fVar19 = auVar54._0_4_ + auVar54._4_4_;
  fVar20 = auVar38._0_4_ + auVar38._4_4_ + fVar19;
  uVar62 = CONCAT44(auVar38._0_4_ + auVar38._4_4_ + fVar19,fVar20);
  uVar63 = NEON_frecpe(uVar62,4);
  uVar43 = NEON_frecps(uVar62,uVar63,4);
  fVar19 = (float)uVar63 * (float)uVar43;
  fVar34 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar62,CONCAT44(fVar34,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar62,CONCAT44(fVar34,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar62,CONCAT44(fVar34,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
  iVar51 = -(uint)(0.0 < fVar20);
  uVar43 = NEON_frecps(uVar62,CONCAT44(fVar34,fVar19),4);
  uVar35 = CONCAT44(iVar51,iVar51) &
           CONCAT44(fVar34 * (float)((ulong)uVar43 >> 0x20),fVar19 * (float)uVar43);
  fVar20 = (float)uVar35;
  fVar34 = (auVar64._0_4_ + auVar64._4_4_ + fVar21) * fVar20;
  fVar19 = (float)(uVar35 >> 0x20);
  local_f0 = CONCAT44((auVar64._0_4_ + auVar64._4_4_ + fVar21) * fVar19,fVar34);
  fVar20 = (auVar45._0_4_ + auVar45._4_4_ + fVar22) * fVar20;
  fVar19 = (auVar45._0_4_ + auVar45._4_4_ + fVar22) * fVar19;
  local_90 = CONCAT44(fVar19,fVar20);
  iVar51 = -(uint)(fVar34 <= fVar59);
  iVar60 = -(uint)(fVar20 <= fVar59);
  uStack_d0 = CONCAT44(-(uint)(fVar19 <=
                              (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
                              (float)((ulong)*param_8 >> 0x20)),iVar60);
  iVar60 = CONCAT13((byte)((uint)iVar60 >> 0x18) | (byte)((uint)iVar51 >> 0x18),
                    CONCAT12((byte)((uint)iVar60 >> 0x10) | (byte)((uint)iVar51 >> 0x10),
                             CONCAT11((byte)((uint)iVar60 >> 8) | (byte)((uint)iVar51 >> 8),
                                      (byte)iVar60 | (byte)iVar51)));
  auVar54._0_4_ = -(uint)(iVar60 == -1);
  auVar54._4_4_ = -(uint)(iVar60 == -1);
  auVar54._8_4_ = -(uint)(iVar60 == -1);
  auVar54._12_4_ = -(uint)(iVar60 == -1);
  auVar64 = NEON_ext(auVar54,auVar54,8,1);
  auVar31._0_4_ =
       CONCAT13((char)auVar54._12_4_,
                CONCAT12((char)auVar54._8_4_,CONCAT11((char)auVar54._4_4_,(char)auVar54._0_4_)));
  auVar31[4] = auVar64[0];
  auVar31[5] = auVar64[2];
  auVar31[6] = auVar64[4];
  auVar31[7] = auVar64[6];
  auVar31._8_8_ = 0;
  if (auVar31._0_4_ == -1) {
    auVar25._0_8_ = CONCAT44(iVar51,iVar51);
    auVar25._8_4_ = iVar51;
    auVar25._12_4_ = iVar51;
    afStack_e8[0] = 0.0;
    afStack_e8[1] = 0.0;
    uStack_88 = 0;
    uStack_d8 = auVar25._8_8_;
    uStack_c8 = 0;
    local_e0 = auVar25._0_8_;
    auVar54 = FUN_0028f1d0(&local_80);
    uStack_b8 = auVar54._8_8_;
    local_c0 = auVar54._0_8_;
    uStack_a8 = auVar31._8_8_;
    local_b0 = auVar31._0_8_;
    lVar15 = (long)afStack_e8 + (-8 - ((ulong)((uint)(byte)param_3[1][6] * 0x10 + 0x1f) & 0x1ff0));
    uStack_98 = auVar64._8_8_;
    local_a0 = auVar64._0_8_;
    (**(code **)(*param_4 + 0x20))
              (param_4,pbVar2,param_3[1][6],*(undefined8 *)(param_2 + 0x20),lVar15);
    uVar35 = (ulong)(byte)param_3[1][6];
    fVar59 = (float)local_c0;
    fVar34 = (float)((ulong)local_c0 >> 0x20);
    fVar22 = (float)local_b0;
    fVar19 = (float)((ulong)local_b0 >> 0x20);
    fVar20 = (float)local_a0;
    fVar21 = (float)((ulong)local_a0 >> 0x20);
    if (uVar35 == 0) {
      uVar52 = 0;
      uVar43 = _DAT_01d4b8f0;
      uVar62 = _DAT_01d4a620;
    }
    else {
      auVar26._8_8_ = _UNK_01d4a628;
      auVar26._0_8_ = _DAT_01d4a620;
      uVar52 = 0;
      auVar32._8_8_ = _UNK_01d4b8f8;
      auVar32._0_8_ = _DAT_01d4b8f0;
      do {
        lVar17 = uVar52 * 0x10;
        uVar52 = uVar52 + 1;
        pfVar14 = (float *)(lVar15 + lVar17);
        fVar42 = *pfVar14;
        fVar66 = pfVar14[1];
        fVar49 = pfVar14[2];
        auVar39._0_8_ =
             CONCAT44(fVar21 * fVar49 + fVar34 * fVar42 + fVar19 * fVar66,
                      fVar20 * fVar49 + fVar59 * fVar42 + fVar22 * fVar66);
        auVar39._8_4_ =
             (float)uStack_98 * fVar49 + (float)uStack_b8 * fVar42 + (float)uStack_a8 * fVar66;
        auVar39._12_4_ = 0;
        auVar32 = NEON_fmin(auVar32,auVar39,4);
        auVar26 = NEON_fmax(auVar26,auVar39,4);
        puVar3 = (undefined8 *)(lVar15 + lVar17);
        puVar3[1] = (ulong)(uint)auVar39._8_4_;
        *puVar3 = auVar39._0_8_;
      } while (uVar52 < uVar35);
      uVar52 = uVar35;
      uVar43 = auVar32._0_8_;
      uVar62 = auVar26._0_8_;
    }
    auVar46._0_4_ = -(uint)((int)local_e0 == -1);
    auVar46._4_4_ = -(uint)(local_e0._4_4_ == -1);
    auVar46._8_4_ = -(uint)((int)uStack_d8 == -1);
    auVar46._12_4_ = -(uint)(uStack_d8._4_4_ == -1);
    NEON_ext(auVar46,auVar46,8,1);
    fVar66 = (float)((ulong)uVar43 >> 0x20);
    fVar42 = (float)((ulong)uVar62 >> 0x20);
    if (CONCAT13((char)auVar46._12_4_,
                 CONCAT12((char)auVar46._8_4_,CONCAT11((char)auVar46._4_4_,(char)auVar46._0_4_))) ==
        -1) {
      fVar49 = *(float *)(param_1 + 0x30) - *param_9 * (float)local_f0;
      fVar50 = *(float *)(param_1 + 0x34) - param_9[1] * (float)local_f0;
      auVar47._0_8_ = CONCAT44(fVar50,fVar49);
      auVar47._8_4_ = *(float *)(param_1 + 0x38) - param_9[2] * (float)local_f0;
      auVar47._12_4_ = *(float *)(param_1 + 0x3c) - param_9[3] * (float)local_f0;
      auVar64 = NEON_ext(auVar47,auVar47,8,1);
      fVar81 = auVar64._0_4_;
      fVar61 = fVar59 * fVar49 + fVar22 * fVar50 + fVar20 * fVar81;
      fVar49 = fVar34 * fVar49 + fVar19 * fVar50 + fVar21 * fVar81;
      bVar67 = (byte)(((uint)(byte)(-((float)uVar62 < fVar61) | -(fVar61 < (float)uVar43)) << 0x1f)
                     >> 0x18);
      bVar71 = (byte)(((uint)(byte)(-(fVar42 < fVar49) | -(fVar49 < fVar66)) << 0x1f) >> 0x18);
      iVar51 = (int)(char)bVar67 >> 7;
      iVar60 = (int)(char)bVar71 >> 7;
      bVar87 = (byte)iVar60;
      bVar88 = (byte)((uint)iVar60 >> 8);
      bVar30 = (byte)((uint)iVar60 >> 0x10);
      bVar82 = (byte)iVar51;
      bVar83 = (byte)((uint)iVar51 >> 8);
      bVar84 = (byte)((uint)iVar51 >> 0x10);
      iVar51 = -(uint)(CONCAT13((char)(bVar71 | bVar67) >> 7,
                                CONCAT12(bVar30 | bVar84,CONCAT11(bVar88 | bVar83,bVar87 | bVar82)))
                      == -1);
      iVar60 = -(uint)(CONCAT13((char)(bVar71 | bVar67) >> 7,
                                CONCAT12(bVar30 | bVar84,CONCAT11(bVar88 | bVar83,bVar87 | bVar82)))
                      == -1);
      uVar68 = (undefined1)iVar60;
      uVar69 = (undefined1)((uint)iVar60 >> 8);
      uVar70 = (undefined1)((uint)iVar60 >> 0x10);
      uVar72 = (undefined1)((uint)iVar60 >> 0x18);
      iVar60 = -(uint)(CONCAT13((char)(bVar71 | bVar67) >> 7,
                                CONCAT12(bVar30 | bVar84,CONCAT11(bVar88 | bVar83,bVar87 | bVar82)))
                      == -1);
      uVar73 = (undefined1)iVar60;
      uVar74 = (undefined1)((uint)iVar60 >> 8);
      uVar75 = (undefined1)((uint)iVar60 >> 0x10);
      uVar76 = (undefined1)((uint)iVar60 >> 0x18);
      iVar60 = -(uint)(CONCAT13((char)(bVar71 | bVar67) >> 7,
                                CONCAT12(bVar30 | bVar84,CONCAT11(bVar88 | bVar83,bVar87 | bVar82)))
                      == -1);
      uVar77 = (undefined1)iVar60;
      uVar78 = (undefined1)((uint)iVar60 >> 8);
      uVar79 = (undefined1)((uint)iVar60 >> 0x10);
      uVar80 = (undefined1)((uint)iVar60 >> 0x18);
      auVar4[4] = uVar68;
      auVar4._0_4_ = iVar51;
      auVar4[5] = uVar69;
      auVar4[6] = uVar70;
      auVar4[7] = uVar72;
      auVar4[8] = uVar73;
      auVar4[9] = uVar74;
      auVar4[10] = uVar75;
      auVar4[0xb] = uVar76;
      auVar4[0xc] = uVar77;
      auVar4[0xd] = uVar78;
      auVar4[0xe] = uVar79;
      auVar4[0xf] = uVar80;
      auVar5[4] = uVar68;
      auVar5._0_4_ = iVar51;
      auVar5[5] = uVar69;
      auVar5[6] = uVar70;
      auVar5[7] = uVar72;
      auVar5[8] = uVar73;
      auVar5[9] = uVar74;
      auVar5[10] = uVar75;
      auVar5[0xb] = uVar76;
      auVar5[0xc] = uVar77;
      auVar5[0xd] = uVar78;
      auVar5[0xe] = uVar79;
      auVar5[0xf] = uVar80;
      NEON_ext(auVar4,auVar5,8,1);
      if (CONCAT13(uVar77,CONCAT12(uVar73,CONCAT11(uVar68,(char)iVar51))) != -1 && (int)uVar52 != 0)
      {
        iVar51 = 0;
        uVar35 = uVar35 + 0xffffffff;
        uVar18 = 0;
        do {
          uVar86 = *(undefined8 *)(lVar15 + (uVar35 & 0xffffffff) * 0x10);
          uVar63 = *(undefined8 *)(lVar15 + uVar18 * 0x10);
          fVar56 = (float)((ulong)uVar86 >> 0x20);
          fVar85 = (float)uVar86;
          fVar50 = (float)((ulong)uVar63 >> 0x20);
          fVar23 = (float)uVar63;
          iVar60 = -(uint)(fVar49 == fVar56 && fVar61 == fVar85);
          iVar13 = -(uint)(fVar61 == fVar23 && fVar49 == fVar50);
          bVar87 = (byte)((uint)iVar13 >> 0x10) | (byte)((uint)iVar60 >> 0x10);
          bVar88 = (byte)((uint)iVar13 >> 0x18) | (byte)((uint)iVar60 >> 0x18);
          uVar8 = CONCAT11((byte)((uint)iVar13 >> 8) | (byte)((uint)iVar60 >> 8),
                           (byte)iVar13 | (byte)iVar60);
          iVar60 = -(uint)(CONCAT13(bVar88,CONCAT12(bVar87,uVar8)) == -1);
          iVar13 = -(uint)(CONCAT13(bVar88,CONCAT12(bVar87,uVar8)) == -1);
          uVar68 = (undefined1)iVar13;
          uVar69 = (undefined1)((uint)iVar13 >> 8);
          uVar70 = (undefined1)((uint)iVar13 >> 0x10);
          uVar72 = (undefined1)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(bVar88,CONCAT12(bVar87,uVar8)) == -1);
          uVar73 = (undefined1)iVar13;
          uVar74 = (undefined1)((uint)iVar13 >> 8);
          uVar75 = (undefined1)((uint)iVar13 >> 0x10);
          uVar76 = (undefined1)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(bVar88,CONCAT12(bVar87,uVar8)) == -1);
          uVar77 = (undefined1)iVar13;
          uVar78 = (undefined1)((uint)iVar13 >> 8);
          uVar79 = (undefined1)((uint)iVar13 >> 0x10);
          uVar80 = (undefined1)((uint)iVar13 >> 0x18);
          auVar11[4] = uVar68;
          auVar11._0_4_ = iVar60;
          auVar11[5] = uVar69;
          auVar11[6] = uVar70;
          auVar11[7] = uVar72;
          auVar11[8] = uVar73;
          auVar11[9] = uVar74;
          auVar11[10] = uVar75;
          auVar11[0xb] = uVar76;
          auVar11[0xc] = uVar77;
          auVar11[0xd] = uVar78;
          auVar11[0xe] = uVar79;
          auVar11[0xf] = uVar80;
          auVar12[4] = uVar68;
          auVar12._0_4_ = iVar60;
          auVar12[5] = uVar69;
          auVar12[6] = uVar70;
          auVar12[7] = uVar72;
          auVar12[8] = uVar73;
          auVar12[9] = uVar74;
          auVar12[10] = uVar75;
          auVar12[0xb] = uVar76;
          auVar12[0xc] = uVar77;
          auVar12[0xd] = uVar78;
          auVar12[0xe] = uVar79;
          auVar12[0xf] = uVar80;
          NEON_ext(auVar11,auVar12,8,1);
          if (CONCAT13(uVar77,CONCAT12(uVar73,CONCAT11(uVar68,(char)iVar60))) == -1)
          goto LAB_00283bc8;
          if (fVar49 < fVar56 != fVar49 < fVar50) {
            fVar50 = fVar50 - fVar56;
            fVar85 = (fVar49 - fVar56) * (fVar23 - fVar85) + (fVar85 + 1.1920929e-07) * fVar50;
            fVar23 = fVar61 * fVar50;
            if ((float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)fVar23) & -(uint)(0.0 < fVar50)) <=
                (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar85) & -(uint)(0.0 < fVar50))) {
              if (iVar51 == 1) goto LAB_00283c4c;
              iVar51 = iVar51 + 1;
            }
          }
          uVar1 = uVar18 + 1;
          uVar35 = uVar18;
          uVar18 = uVar1;
        } while (uVar1 < uVar52);
        if (iVar51 != 0) {
LAB_00283bc8:
          fVar85 = *(float *)(param_1 + 0x30) - param_5[0xc];
          fVar56 = *(float *)(param_1 + 0x34) - param_5[0xd];
          fVar57 = *(float *)(param_1 + 0x38) - param_5[0xe];
          fVar58 = *(float *)(param_1 + 0x3c) - param_5[0xf];
          fVar49 = fVar85 * (float)*(undefined8 *)(param_5 + 4);
          fVar50 = fVar56 * (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20);
          uVar68 = (undefined1)((uint)fVar50 >> 8);
          uVar69 = (undefined1)((uint)fVar50 >> 0x10);
          uVar70 = (undefined1)((uint)fVar50 >> 0x18);
          fVar61 = fVar57 * (float)*(undefined8 *)(param_5 + 6);
          uVar72 = (undefined1)((uint)fVar61 >> 8);
          uVar73 = (undefined1)((uint)fVar61 >> 0x10);
          uVar74 = (undefined1)((uint)fVar61 >> 0x18);
          fVar23 = fVar58 * (float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20);
          uVar75 = (undefined1)((uint)fVar23 >> 8);
          uVar76 = (undefined1)((uint)fVar23 >> 0x10);
          uVar77 = (undefined1)((uint)fVar23 >> 0x18);
          auVar65._0_4_ = *param_5 * fVar85;
          auVar65._4_4_ = param_5[1] * fVar56;
          auVar65._8_4_ = param_5[2] * fVar57;
          auVar65._12_4_ = param_5[3] * fVar58;
          auVar54 = NEON_ext(auVar65,auVar65,8,1);
          auVar55._0_4_ = fVar85 * param_5[8];
          auVar55._4_4_ = fVar56 * param_5[9];
          auVar55._8_4_ = fVar57 * param_5[10];
          auVar55._12_4_ = fVar58 * param_5[0xb];
          auVar64 = NEON_ext(auVar55,auVar55,8,1);
          fVar85 = auVar54._0_4_ + auVar54._4_4_;
          auVar6[4] = SUB41(fVar50,0);
          auVar6._0_4_ = fVar49;
          auVar6[5] = uVar68;
          auVar6[6] = uVar69;
          auVar6[7] = uVar70;
          auVar6[8] = SUB41(fVar61,0);
          auVar6[9] = uVar72;
          auVar6[10] = uVar73;
          auVar6[0xb] = uVar74;
          auVar6[0xc] = SUB41(fVar23,0);
          auVar6[0xd] = uVar75;
          auVar6[0xe] = uVar76;
          auVar6[0xf] = uVar77;
          auVar7[4] = SUB41(fVar50,0);
          auVar7._0_4_ = fVar49;
          auVar7[5] = uVar68;
          auVar7[6] = uVar69;
          auVar7[7] = uVar70;
          auVar7[8] = SUB41(fVar61,0);
          auVar7[9] = uVar72;
          auVar7[10] = uVar73;
          auVar7[0xb] = uVar74;
          auVar7[0xc] = SUB41(fVar23,0);
          auVar7[0xd] = uVar75;
          auVar7[0xe] = uVar76;
          auVar7[0xf] = uVar77;
          auVar54 = NEON_ext(auVar6,auVar7,8,1);
          fVar61 = auVar54._0_4_ + auVar54._4_4_;
          fVar23 = fVar49 + fVar50 + fVar61;
          uVar63 = NEON_ext(CONCAT44(auVar65._0_4_ + auVar65._4_4_ + fVar85,
                                     auVar65._0_4_ + auVar65._4_4_ + fVar85),
                            CONCAT17((char)((uint)fVar23 >> 0x18),
                                     CONCAT16((char)((uint)fVar23 >> 0x10),
                                              CONCAT15((char)((uint)fVar23 >> 8),
                                                       CONCAT14(SUB41(fVar23,0),
                                                                fVar49 + fVar50 + fVar61)))),4,1);
          puVar3 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
          puVar3[1] = (ulong)(uint)(auVar55._0_4_ + auVar55._4_4_ + auVar64._0_4_ + auVar64._4_4_);
          *puVar3 = uVar63;
          lVar17 = param_6 + (ulong)*param_7 * 0x30;
          *(ulong *)(lVar17 + 0x18) = (ulong)(uint)fVar81;
          *(undefined8 *)(lVar17 + 0x10) = auVar47._0_8_;
          fVar49 = *param_9;
          fVar50 = param_9[1];
          fVar61 = param_9[2];
          lVar17 = param_6 + (ulong)*param_7 * 0x30;
          *param_7 = *param_7 + 1;
          *(float *)(lVar17 + 0x28) = fVar61;
          *(undefined4 *)(lVar17 + 0x2c) = local_f0._4_4_;
          *(float *)(lVar17 + 0x20) = fVar49;
          *(float *)(lVar17 + 0x24) = fVar50;
        }
      }
    }
LAB_00283c4c:
    auVar40._0_4_ = -(uint)((int)uStack_d0 == -1);
    auVar40._4_4_ = -(uint)((int)uStack_d0 == -1);
    auVar40._8_4_ = -(uint)((int)uStack_d0 == -1);
    auVar40._12_4_ = -(uint)((int)uStack_d0 == -1);
    NEON_ext(auVar40,auVar40,8,1);
    if (CONCAT13((char)auVar40._12_4_,
                 CONCAT12((char)auVar40._8_4_,CONCAT11((char)auVar40._4_4_,(char)auVar40._0_4_))) ==
        -1) {
      fVar61 = (float)local_90;
      fVar49 = *(float *)(param_1 + 0x40) - *param_9 * fVar61;
      fVar50 = *(float *)(param_1 + 0x44) - param_9[1] * fVar61;
      auVar41._0_8_ = CONCAT44(fVar50,fVar49);
      auVar41._8_4_ = *(float *)(param_1 + 0x48) - param_9[2] * fVar61;
      auVar41._12_4_ = *(float *)(param_1 + 0x4c) - param_9[3] * fVar61;
      auVar64 = NEON_ext(auVar41,auVar41,8,1);
      fVar61 = auVar64._0_4_;
      bVar87 = param_3[1][6];
      fVar20 = fVar59 * fVar49 + fVar22 * fVar50 + fVar20 * fVar61;
      fVar21 = fVar34 * fVar49 + fVar19 * fVar50 + fVar21 * fVar61;
      bVar30 = -(fVar42 < fVar21) | -(fVar21 < fVar66);
      bVar88 = (byte)(((uint)bVar30 << 0x1f) >> 0x18);
      bVar30 = (byte)(((uint)CONCAT12(bVar30,(ushort)(byte)(-((float)uVar62 < fVar20) |
                                                           -(fVar20 < (float)uVar43))) << 0x1f) >>
                     0x18);
      iVar51 = CONCAT13((char)(bVar88 | bVar30) >> 7,
                        CONCAT12((char)(bVar88 | bVar30) >> 7,
                                 CONCAT11((char)(bVar88 | bVar30) >> 7,(char)(bVar88 | bVar30) >> 7)
                                ));
      auVar24._0_8_ =
           CONCAT17((char)(bVar88 | bVar30) >> 7,
                    CONCAT16((char)(bVar88 | bVar30) >> 7,
                             CONCAT15((char)(bVar88 | bVar30) >> 7,
                                      CONCAT14((char)(bVar88 | bVar30) >> 7,iVar51))));
      auVar24[8] = (char)(bVar88 | bVar30) >> 7;
      auVar24[9] = (char)(bVar88 | bVar30) >> 7;
      auVar24[10] = (char)(bVar88 | bVar30) >> 7;
      auVar24[0xb] = (char)(bVar88 | bVar30) >> 7;
      auVar27[0xc] = (char)(bVar88 | bVar30) >> 7;
      auVar27._0_12_ = auVar24;
      auVar27[0xd] = (char)(bVar88 | bVar30) >> 7;
      auVar27[0xe] = (char)(bVar88 | bVar30) >> 7;
      auVar27[0xf] = (char)(bVar88 | bVar30) >> 7;
      auVar28._0_4_ = -(uint)(iVar51 == -1);
      auVar28._4_4_ = -(uint)((int)((ulong)auVar24._0_8_ >> 0x20) == -1);
      auVar28._8_4_ = -(uint)(auVar24._8_4_ == -1);
      auVar28._12_4_ = -(uint)(auVar27._12_4_ == -1);
      NEON_ext(auVar28,auVar28,8,1);
      if (CONCAT13((char)auVar28._12_4_,
                   CONCAT12((char)auVar28._8_4_,CONCAT11((char)auVar28._4_4_,(char)auVar28._0_4_)))
          != -1 && bVar87 != 0) {
        iVar51 = 0;
        uVar35 = (ulong)bVar87 + 0xffffffff;
        uVar52 = 0;
        do {
          uVar43 = *(undefined8 *)(lVar15 + (uVar35 & 0xffffffff) * 0x10);
          pfVar14 = (float *)(lVar15 + uVar52 * 0x10);
          fVar59 = *pfVar14;
          fVar34 = pfVar14[1];
          fVar19 = (float)((ulong)uVar43 >> 0x20);
          fVar22 = (float)uVar43;
          iVar60 = -(uint)(fVar21 == fVar19 && fVar20 == fVar22);
          iVar13 = -(uint)(fVar20 == fVar59 && fVar21 == fVar34);
          bVar88 = (byte)((uint)iVar13 >> 0x10) | (byte)((uint)iVar60 >> 0x10);
          bVar30 = (byte)((uint)iVar13 >> 0x18) | (byte)((uint)iVar60 >> 0x18);
          uVar8 = CONCAT11((byte)((uint)iVar13 >> 8) | (byte)((uint)iVar60 >> 8),
                           (byte)iVar13 | (byte)iVar60);
          iVar60 = -(uint)(CONCAT13(bVar30,CONCAT12(bVar88,uVar8)) == -1);
          iVar13 = -(uint)(CONCAT13(bVar30,CONCAT12(bVar88,uVar8)) == -1);
          uVar68 = (undefined1)iVar13;
          uVar69 = (undefined1)((uint)iVar13 >> 8);
          uVar70 = (undefined1)((uint)iVar13 >> 0x10);
          uVar72 = (undefined1)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(bVar30,CONCAT12(bVar88,uVar8)) == -1);
          uVar73 = (undefined1)iVar13;
          uVar74 = (undefined1)((uint)iVar13 >> 8);
          uVar75 = (undefined1)((uint)iVar13 >> 0x10);
          uVar76 = (undefined1)((uint)iVar13 >> 0x18);
          iVar13 = -(uint)(CONCAT13(bVar30,CONCAT12(bVar88,uVar8)) == -1);
          uVar77 = (undefined1)iVar13;
          uVar78 = (undefined1)((uint)iVar13 >> 8);
          uVar79 = (undefined1)((uint)iVar13 >> 0x10);
          uVar80 = (undefined1)((uint)iVar13 >> 0x18);
          auVar9[4] = uVar68;
          auVar9._0_4_ = iVar60;
          auVar9[5] = uVar69;
          auVar9[6] = uVar70;
          auVar9[7] = uVar72;
          auVar9[8] = uVar73;
          auVar9[9] = uVar74;
          auVar9[10] = uVar75;
          auVar9[0xb] = uVar76;
          auVar9[0xc] = uVar77;
          auVar9[0xd] = uVar78;
          auVar9[0xe] = uVar79;
          auVar9[0xf] = uVar80;
          auVar10[4] = uVar68;
          auVar10._0_4_ = iVar60;
          auVar10[5] = uVar69;
          auVar10[6] = uVar70;
          auVar10[7] = uVar72;
          auVar10[8] = uVar73;
          auVar10[9] = uVar74;
          auVar10[10] = uVar75;
          auVar10[0xb] = uVar76;
          auVar10[0xc] = uVar77;
          auVar10[0xd] = uVar78;
          auVar10[0xe] = uVar79;
          auVar10[0xf] = uVar80;
          NEON_ext(auVar9,auVar10,8,1);
          if (CONCAT13(uVar77,CONCAT12(uVar73,CONCAT11(uVar68,(char)iVar60))) == -1)
          goto LAB_00283dec;
          if (fVar21 < fVar19 != fVar21 < fVar34) {
            fVar34 = fVar34 - fVar19;
            fVar22 = (fVar21 - fVar19) * (fVar59 - fVar22) + (fVar22 + 1.1920929e-07) * fVar34;
            fVar19 = fVar20 * fVar34;
            if ((float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar19) & -(uint)(0.0 < fVar34)) <=
                (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)fVar22) & -(uint)(0.0 < fVar34))) {
              if (iVar51 == 1) {
                return;
              }
              iVar51 = iVar51 + 1;
            }
          }
          uVar18 = uVar52 + 1;
          uVar35 = uVar52;
          uVar52 = uVar18;
        } while (uVar18 < bVar87);
        if (iVar51 != 0) {
LAB_00283dec:
          fVar20 = *(float *)(param_1 + 0x40) - param_5[0xc];
          fVar21 = *(float *)(param_1 + 0x44) - param_5[0xd];
          fVar22 = *(float *)(param_1 + 0x48) - param_5[0xe];
          fVar19 = *(float *)(param_1 + 0x4c) - param_5[0xf];
          auVar48._0_4_ = fVar20 * param_5[4];
          auVar48._4_4_ = fVar21 * param_5[5];
          auVar48._8_4_ = fVar22 * param_5[6];
          auVar48._12_4_ = fVar19 * param_5[7];
          auVar33._0_4_ = *param_5 * fVar20;
          auVar33._4_4_ = param_5[1] * fVar21;
          auVar33._8_4_ = param_5[2] * fVar22;
          auVar33._12_4_ = param_5[3] * fVar19;
          auVar54 = NEON_ext(auVar33,auVar33,8,1);
          auVar29._0_4_ = fVar20 * param_5[8];
          auVar29._4_4_ = fVar21 * param_5[9];
          auVar29._8_4_ = fVar22 * param_5[10];
          auVar29._12_4_ = fVar19 * param_5[0xb];
          auVar64 = NEON_ext(auVar29,auVar29,8,1);
          fVar20 = auVar54._0_4_ + auVar54._4_4_;
          auVar54 = NEON_ext(auVar48,auVar48,8,1);
          fVar21 = auVar54._0_4_ + auVar54._4_4_;
          uVar43 = NEON_ext(CONCAT44(auVar33._0_4_ + auVar33._4_4_ + fVar20,
                                     auVar33._0_4_ + auVar33._4_4_ + fVar20),
                            CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar21,
                                     auVar48._0_4_ + auVar48._4_4_ + fVar21),4,1);
          puVar3 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
          puVar3[1] = (ulong)(uint)(auVar29._0_4_ + auVar29._4_4_ + auVar64._0_4_ + auVar64._4_4_);
          *puVar3 = uVar43;
          lVar15 = param_6 + (ulong)*param_7 * 0x30;
          *(ulong *)(lVar15 + 0x18) = (ulong)(uint)fVar61;
          *(undefined8 *)(lVar15 + 0x10) = auVar41._0_8_;
          fVar20 = *param_9;
          fVar21 = param_9[1];
          fVar22 = param_9[2];
          param_6 = param_6 + (ulong)*param_7 * 0x30;
          *param_7 = *param_7 + 1;
          *(float *)(param_6 + 0x28) = fVar22;
          *(int *)(param_6 + 0x2c) = (int)((ulong)local_90 >> 0x20);
          *(float *)(param_6 + 0x20) = fVar20;
          *(float *)(param_6 + 0x24) = fVar21;
        }
      }
    }
  }
  return;
}


