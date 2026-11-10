/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002804d0; name: FUN_002804d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002804d0(long param_1,long param_2,undefined8 *param_3,float *param_4,long *param_5,
                 long *param_6,float *param_7,long param_8,uint *param_9,undefined8 *param_10)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined2 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  long *plVar30;
  long lVar31;
  float *pfVar32;
  ulong uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  ulong uVar54;
  float fVar55;
  float fVar60;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  ulong uVar76;
  undefined1 auVar77 [16];
  float fVar79;
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  byte bVar82;
  byte bVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  byte bVar98;
  float fVar99;
  undefined8 uVar101;
  undefined1 auVar102 [12];
  byte bVar110;
  byte bVar111;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  int iVar100;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  int iVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [12];
  byte bVar123;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar124;
  float fVar128;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar129;
  float fVar130;
  float fVar132;
  undefined1 auVar131 [16];
  undefined1 auVar133 [16];
  byte bVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined8 local_f0;
  ulong auStack_e8 [4];
  undefined8 uStack_c8;
  long *local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  float *local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  
  pfVar32 = (float *)param_5[6];
  local_a0 = param_10;
  fVar50 = *(float *)(param_3 + 1);
  fVar55 = (float)*param_3;
  auVar119._0_4_ = *pfVar32 * fVar55;
  fVar60 = (float)((ulong)*param_3 >> 0x20);
  auVar119._4_4_ = pfVar32[1] * fVar60;
  auVar119._8_4_ = pfVar32[2] * fVar50;
  auVar119._12_4_ = pfVar32[3] * 0.0;
  auVar57 = NEON_ext(auVar119,auVar119,8,1);
  auVar125._0_4_ = fVar55 * pfVar32[4];
  auVar125._4_4_ = fVar60 * pfVar32[5];
  auVar125._8_4_ = fVar50 * pfVar32[6];
  auVar125._12_4_ = pfVar32[7] * 0.0;
  fVar42 = auVar57._0_4_ + auVar57._4_4_;
  auVar57 = NEON_ext(auVar125,auVar125,8,1);
  fVar43 = auVar57._0_4_ + auVar57._4_4_;
  auVar57._0_4_ = fVar55 * pfVar32[8];
  auVar57._4_4_ = fVar60 * pfVar32[9];
  auVar57._8_4_ = fVar50 * pfVar32[10];
  auVar57._12_4_ = pfVar32[0xb] * 0.0;
  auVar58 = NEON_ext(auVar57,auVar57,8,1);
  uVar52 = NEON_ext(CONCAT44(auVar119._0_4_ + auVar119._4_4_ + fVar42,
                             auVar119._0_4_ + auVar119._4_4_ + fVar42),
                    CONCAT44(auVar125._0_4_ + auVar125._4_4_ + fVar43,
                             auVar125._0_4_ + auVar125._4_4_ + fVar43),4,1);
  fStack_88 = auVar57._0_4_ + auVar57._4_4_ + auVar58._0_4_ + auVar58._4_4_;
  local_98 = (float *)(*(long *)(param_1 + 0x28) + (ulong)*(ushort *)(param_3 + 2));
  local_90 = (float)uVar52;
  auVar58._0_4_ = local_90 * local_90;
  fStack_8c = (float)((ulong)uVar52 >> 0x20);
  auVar58._4_4_ = fStack_8c * fStack_8c;
  auVar58._8_4_ = fStack_88 * fStack_88;
  auVar58._12_4_ = 0;
  auVar57 = NEON_ext(auVar58,auVar58,8,1);
  fVar43 = auVar57._0_4_ + auVar57._4_4_;
  fVar42 = auVar58._0_4_ + auVar58._4_4_ + fVar43;
  fVar43 = auVar58._0_4_ + auVar58._4_4_ + fVar43;
  uVar36 = CONCAT44(fVar43,fVar42);
  uVar52 = NEON_frsqrte(uVar36,4);
  fVar55 = (float)uVar52;
  fVar60 = (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar36,4);
  fVar55 = fVar55 * (float)uVar52;
  fVar60 = fVar60 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar36,4);
  fVar55 = fVar55 * (float)uVar52;
  fVar60 = fVar60 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar36,4);
  fVar55 = fVar55 * (float)uVar52;
  fVar60 = fVar60 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar36,4);
  uVar54 = CONCAT44(fVar43 * fVar60 * (float)((ulong)uVar52 >> 0x20),fVar42 * fVar55 * (float)uVar52
                   );
  uVar54 = uVar54 ^ (uVar54 ^ uVar36) & CONCAT44(-(uint)(fVar42 == 0.0),-(uint)(fVar42 == 0.0));
  uVar52 = NEON_frecpe(uVar54,4);
  uVar56 = NEON_frecps(uVar54,uVar52,4);
  fVar42 = (float)uVar52 * (float)uVar56;
  fVar43 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
  uVar52 = NEON_frecps(uVar54,CONCAT44(fVar43,fVar42),4);
  fVar42 = fVar42 * (float)uVar52;
  fVar43 = fVar43 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frecps(uVar54,CONCAT44(fVar43,fVar42),4);
  fVar42 = fVar42 * (float)uVar52;
  fVar43 = fVar43 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frecps(uVar54,CONCAT44(fVar43,fVar42),4);
  fVar42 = fVar42 * (float)uVar52;
  auVar108._0_8_ = NEON_frecps(uVar54,CONCAT44(fVar43 * (float)((ulong)uVar52 >> 0x20),fVar42),4);
  auVar108._8_8_ = 0;
  fVar42 = fVar42 * (float)auVar108._0_8_;
  local_90 = local_90 * fVar42;
  fStack_8c = fStack_8c * fVar42;
  fStack_88 = fStack_88 * fVar42;
  auVar58 = ZEXT816(0);
  uStack_84 = 0;
  local_b8 = param_6;
  auVar57 = FUN_0028f1d0(&local_90);
  plVar30 = local_b8;
  auStack_e8[2] = auVar58._8_8_;
  auStack_e8[1] = auVar58._0_8_;
  uStack_c8 = auVar57._8_8_;
  auStack_e8[3] = auVar57._0_8_;
  lVar31 = *(long *)(param_2 + 0x28);
  uVar3 = *(ushort *)(param_4 + 4);
  auStack_e8[0] = auVar108._8_8_;
  local_f0 = auVar108._0_8_;
  pauVar38 = (undefined1 (*) [16])
             ((long)auStack_e8 +
             (-8 - ((ulong)((uint)*(byte *)((long)param_3 + 0x12) * 0x10 + 0x1f) & 0x1ff0)));
  bVar2 = *(byte *)((long)param_4 + 0x12);
  pauVar39 = (undefined1 (*) [16])((long)pauVar38 - ((ulong)((uint)bVar2 * 0x10 + 0x1f) & 0x1ff0));
  local_b0 = (long)pauVar39 - ((ulong)(bVar2 + 0xf) & 0x1f0);
  local_a8 = local_b0 - ((ulong)((uint)bVar2 * 8 + 0x1f) & 0xff0);
  (**(code **)(*param_5 + 0x20))
            (param_5,local_98,*(byte *)((long)param_3 + 0x12),*(undefined8 *)(param_1 + 0x20),
             pauVar38);
  local_98 = param_4;
  (**(code **)(*plVar30 + 0x20))
            (plVar30,lVar31 + (ulong)uVar3,*(undefined1 *)((long)param_4 + 0x12),
             *(undefined8 *)(param_2 + 0x20),pauVar39);
  fVar42 = (float)_DAT_01d4a620;
  fVar43 = (float)((ulong)_DAT_01d4a620 >> 0x20);
  auVar57 = *pauVar39;
  bVar2 = *(byte *)((long)param_3 + 0x12);
  fVar55 = (float)auStack_e8[3];
  fVar60 = (float)(auStack_e8[3] >> 0x20);
  fVar50 = (float)uStack_c8;
  fVar68 = (float)auStack_e8[1];
  fVar69 = (float)(auStack_e8[1] >> 0x20);
  fVar70 = (float)auStack_e8[2];
  fVar71 = (float)(auStack_e8[2] >> 0x20);
  fVar72 = (float)local_f0;
  fVar73 = (float)((ulong)local_f0 >> 0x20);
  fVar74 = (float)auStack_e8[0];
  fVar75 = (float)(auStack_e8[0] >> 0x20);
  uVar52 = _DAT_01d4b8f0;
  if ((ulong)bVar2 != 0) {
    auVar49._8_8_ = _UNK_01d4a628;
    auVar49._0_8_ = _DAT_01d4a620;
    auVar53._8_8_ = _UNK_01d4b8f8;
    auVar53._0_8_ = _DAT_01d4b8f0;
    uVar36 = 0;
    do {
      uVar54 = uVar36 + 1;
      pauVar4 = pauVar38 + uVar36;
      fVar42 = *(float *)*pauVar4;
      fVar43 = *(float *)(*pauVar4 + 4);
      fVar51 = *(float *)(*pauVar4 + 8);
      auVar59._0_8_ =
           CONCAT44(fVar73 * fVar51 + fVar60 * fVar42 + fVar69 * fVar43,
                    fVar72 * fVar51 + fVar55 * fVar42 + fVar68 * fVar43);
      auVar59._8_4_ = fVar74 * fVar51 + fVar50 * fVar42 + fVar70 * fVar43;
      auVar59._12_4_ = 0;
      auVar53 = NEON_fmin(auVar53,auVar59,4);
      auVar49 = NEON_fmax(auVar49,auVar59,4);
      *(ulong *)(pauVar38[uVar36] + 8) = (ulong)(uint)auVar59._8_4_;
      *(undefined8 *)pauVar38[uVar36] = auVar59._0_8_;
      uVar36 = uVar54;
    } while (uVar54 < bVar2);
    uVar52 = CONCAT44(auVar53._4_4_ + (float)((ulong)_DAT_01d4a140 >> 0x20),
                      auVar53._0_4_ + (float)_DAT_01d4a140);
    fVar42 = auVar49._0_4_ + (float)_DAT_01d4a480;
    fVar43 = auVar49._4_4_ + (float)((ulong)_DAT_01d4a480 >> 0x20);
  }
  auVar58 = *pauVar38;
  fVar51 = auVar58._8_4_;
  uVar36 = (ulong)*(byte *)((long)local_98 + 0x12);
  fVar67 = (float)((ulong)uStack_c8 >> 0x20);
  if (*(byte *)((long)local_98 + 0x12) == 0) {
    return;
  }
  uVar61 = *local_a0;
  auVar63._8_8_ = _UNK_01d4a628;
  auVar63._0_8_ = _DAT_01d4a620;
  auVar62._8_8_ = _UNK_01d4b8f8;
  auVar62._0_8_ = _DAT_01d4b8f0;
  uVar56 = CONCAT44(fStack_8c,local_90);
  auVar121._8_4_ = fStack_88;
  auVar121._0_8_ = uVar56;
  uVar54 = 0;
  iVar100 = 0;
  auVar119 = auVar57;
  do {
    fVar40 = auVar119._0_4_ - (float)*(undefined8 *)(param_7 + 0xc);
    fVar128 = auVar119._4_4_ - (float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20);
    fVar129 = auVar119._8_4_ - (float)*(undefined8 *)(param_7 + 0xe);
    fVar124 = auVar119._12_4_ - (float)((ulong)*(undefined8 *)(param_7 + 0xe) >> 0x20);
    auVar103._0_4_ = *param_7 * fVar40;
    auVar103._4_4_ = param_7[1] * fVar128;
    auVar103._8_4_ = param_7[2] * fVar129;
    auVar103._12_4_ = param_7[3] * fVar124;
    auVar116._0_4_ = fVar40 * param_7[4];
    auVar116._4_4_ = fVar128 * param_7[5];
    auVar116._8_4_ = fVar129 * param_7[6];
    auVar116._12_4_ = fVar124 * param_7[7];
    fVar40 = fVar40 * param_7[8];
    fVar128 = fVar128 * param_7[9];
    uVar84 = (undefined1)((uint)fVar128 >> 8);
    uVar85 = (undefined1)((uint)fVar128 >> 0x10);
    uVar87 = (undefined1)((uint)fVar128 >> 0x18);
    fVar129 = fVar129 * param_7[10];
    uVar89 = (undefined1)((uint)fVar129 >> 8);
    uVar86 = (undefined1)((uint)fVar129 >> 0x10);
    uVar88 = (undefined1)((uint)fVar129 >> 0x18);
    fVar124 = fVar124 * param_7[0xb];
    uVar91 = (undefined1)((uint)fVar124 >> 8);
    uVar93 = (undefined1)((uint)fVar124 >> 0x10);
    uVar92 = (undefined1)((uint)fVar124 >> 0x18);
    auVar125 = NEON_ext(auVar103,auVar103,8,1);
    fVar44 = auVar125._0_4_ + auVar125._4_4_;
    auVar125 = NEON_ext(auVar116,auVar116,8,1);
    fVar45 = auVar125._0_4_ + auVar125._4_4_;
    auVar7[4] = SUB41(fVar128,0);
    auVar7._0_4_ = fVar40;
    auVar7[5] = uVar84;
    auVar7[6] = uVar85;
    auVar7[7] = uVar87;
    auVar7[8] = SUB41(fVar129,0);
    auVar7[9] = uVar89;
    auVar7[10] = uVar86;
    auVar7[0xb] = uVar88;
    auVar7[0xc] = SUB41(fVar124,0);
    auVar7[0xd] = uVar91;
    auVar7[0xe] = uVar93;
    auVar7[0xf] = uVar92;
    auVar8[4] = SUB41(fVar128,0);
    auVar8._0_4_ = fVar40;
    auVar8[5] = uVar84;
    auVar8[6] = uVar85;
    auVar8[7] = uVar87;
    auVar8[8] = SUB41(fVar129,0);
    auVar8[9] = uVar89;
    auVar8[10] = uVar86;
    auVar8[0xb] = uVar88;
    auVar8[0xc] = SUB41(fVar124,0);
    auVar8[0xd] = uVar91;
    auVar8[0xe] = uVar93;
    auVar8[0xf] = uVar92;
    auVar125 = NEON_ext(auVar7,auVar8,8,1);
    fVar40 = fVar40 + fVar128 + auVar125._0_4_ + auVar125._4_4_;
    uVar101 = NEON_ext(CONCAT44(auVar103._0_4_ + auVar103._4_4_ + fVar44,
                                auVar103._0_4_ + auVar103._4_4_ + fVar44),
                       CONCAT44(auVar116._0_4_ + auVar116._4_4_ + fVar45,
                                auVar116._0_4_ + auVar116._4_4_ + fVar45),4,1);
    fVar128 = (float)uVar101;
    fVar129 = (float)((ulong)uVar101 >> 0x20);
    fVar124 = fVar72 * fVar40 + fVar55 * fVar128 + fVar68 * fVar129;
    fVar44 = fVar73 * fVar40 + fVar60 * fVar128 + fVar69 * fVar129;
    fVar128 = fVar74 * fVar40 + fVar50 * fVar128 + fVar70 * fVar129;
    uVar84 = SUB41(fVar44,0);
    uVar85 = (undefined1)((uint)fVar44 >> 8);
    uVar87 = (undefined1)((uint)fVar44 >> 0x10);
    uVar89 = (undefined1)((uint)fVar44 >> 0x18);
    fVar40 = fVar128 - fVar51;
    *(ulong *)(local_a8 + uVar54 * 8) = CONCAT44(fVar40,fVar40);
    *(ulong *)(pauVar39[uVar54] + 8) = (ulong)(uint)fVar51;
    *(ulong *)pauVar39[uVar54] =
         CONCAT17(uVar89,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar84,fVar124))));
    if (fVar51 + (float)uVar61 <= fVar128) {
      *(undefined1 *)(local_b0 + uVar54) = 0;
    }
    else {
      *(undefined1 *)(local_b0 + uVar54) = 1;
      bVar2 = *(byte *)((long)param_3 + 0x12);
      bVar123 = -(fVar43 < fVar44) | -(fVar44 < (float)((ulong)uVar52 >> 0x20));
      bVar134 = (byte)(((uint)bVar123 << 0x1f) >> 0x18);
      bVar123 = (byte)(((uint)CONCAT12(bVar123,(ushort)(byte)(-(fVar42 < fVar124) |
                                                             -(fVar124 < (float)uVar52))) << 0x1f)
                      >> 0x18);
      iVar112 = CONCAT13((char)(bVar134 | bVar123) >> 7,
                         CONCAT12((char)(bVar134 | bVar123) >> 7,
                                  CONCAT11((char)(bVar134 | bVar123) >> 7,
                                           (char)(bVar134 | bVar123) >> 7)));
      auVar115._0_8_ =
           CONCAT17((char)(bVar134 | bVar123) >> 7,
                    CONCAT16((char)(bVar134 | bVar123) >> 7,
                             CONCAT15((char)(bVar134 | bVar123) >> 7,
                                      CONCAT14((char)(bVar134 | bVar123) >> 7,iVar112))));
      auVar115[8] = (char)(bVar134 | bVar123) >> 7;
      auVar115[9] = (char)(bVar134 | bVar123) >> 7;
      auVar115[10] = (char)(bVar134 | bVar123) >> 7;
      auVar115[0xb] = (char)(bVar134 | bVar123) >> 7;
      auVar117[0xc] = (char)(bVar134 | bVar123) >> 7;
      auVar117._0_12_ = auVar115;
      auVar117[0xd] = (char)(bVar134 | bVar123) >> 7;
      auVar117[0xe] = (char)(bVar134 | bVar123) >> 7;
      auVar117[0xf] = (char)(bVar134 | bVar123) >> 7;
      auVar118._0_4_ = -(uint)(iVar112 == -1);
      auVar118._4_4_ = -(uint)((int)((ulong)auVar115._0_8_ >> 0x20) == -1);
      auVar118._8_4_ = -(uint)(auVar115._8_4_ == -1);
      auVar118._12_4_ = -(uint)(auVar117._12_4_ == -1);
      NEON_ext(auVar118,auVar118,8,1);
      if (CONCAT13((char)auVar118._12_4_,
                   CONCAT12((char)auVar118._8_4_,CONCAT11((char)auVar118._4_4_,(char)auVar118._0_4_)
                           )) != -1 && bVar2 != 0) {
        iVar112 = 0;
        uVar35 = (ulong)bVar2 + 0xffffffff;
        uVar33 = 0;
        do {
          fVar45 = SUB164(pauVar38[uVar35 & 0xffffffff],4);
          fVar129 = SUB164(pauVar38[uVar35 & 0xffffffff],0);
          fVar79 = SUB164(pauVar38[uVar33],0);
          iVar28 = -(uint)(fVar44 == fVar45 && fVar124 == fVar129);
          fVar128 = SUB164(pauVar38[uVar33],4);
          iVar29 = -(uint)(fVar124 == fVar79 && fVar44 == fVar128);
          bVar134 = (byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar28 >> 0x10);
          bVar123 = (byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar28 >> 0x18);
          uVar23 = CONCAT11((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar28 >> 8),
                            (byte)iVar29 | (byte)iVar28);
          iVar28 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
          iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
          uVar86 = (undefined1)iVar29;
          uVar88 = (undefined1)((uint)iVar29 >> 8);
          uVar91 = (undefined1)((uint)iVar29 >> 0x10);
          uVar93 = (undefined1)((uint)iVar29 >> 0x18);
          iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
          uVar92 = (undefined1)iVar29;
          uVar94 = (undefined1)((uint)iVar29 >> 8);
          uVar95 = (undefined1)((uint)iVar29 >> 0x10);
          uVar96 = (undefined1)((uint)iVar29 >> 0x18);
          iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
          uVar97 = (undefined1)iVar29;
          uVar135 = (undefined1)((uint)iVar29 >> 8);
          uVar136 = (undefined1)((uint)iVar29 >> 0x10);
          uVar137 = (undefined1)((uint)iVar29 >> 0x18);
          auVar26[4] = uVar86;
          auVar26._0_4_ = iVar28;
          auVar26[5] = uVar88;
          auVar26[6] = uVar91;
          auVar26[7] = uVar93;
          auVar26[8] = uVar92;
          auVar26[9] = uVar94;
          auVar26[10] = uVar95;
          auVar26[0xb] = uVar96;
          auVar26[0xc] = uVar97;
          auVar26[0xd] = uVar135;
          auVar26[0xe] = uVar136;
          auVar26[0xf] = uVar137;
          auVar27[4] = uVar86;
          auVar27._0_4_ = iVar28;
          auVar27[5] = uVar88;
          auVar27[6] = uVar91;
          auVar27[7] = uVar93;
          auVar27[8] = uVar92;
          auVar27[9] = uVar94;
          auVar27[10] = uVar95;
          auVar27[0xb] = uVar96;
          auVar27[0xc] = uVar97;
          auVar27[0xd] = uVar135;
          auVar27[0xe] = uVar136;
          auVar27[0xf] = uVar137;
          NEON_ext(auVar26,auVar27,8,1);
          if (CONCAT13(uVar97,CONCAT12(uVar92,CONCAT11(uVar86,(char)iVar28))) == -1)
          goto LAB_002809b8;
          if (fVar44 < fVar45 != fVar44 < fVar128) {
            fVar128 = fVar128 - fVar45;
            fVar129 = (fVar44 - fVar45) * (fVar79 - fVar129) + (fVar129 + 1.1920929e-07) * fVar128;
            fVar45 = fVar124 * fVar128;
            if ((float)((uint)fVar129 ^ ((uint)fVar129 ^ (uint)fVar45) & -(uint)(0.0 < fVar128)) <=
                (float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)fVar129) & -(uint)(0.0 < fVar128))) {
              if (iVar112 == 1) goto LAB_00280a40;
              iVar112 = iVar112 + 1;
            }
          }
          uVar76 = uVar33 + 1;
          uVar35 = uVar33;
          uVar33 = uVar76;
        } while (uVar76 < bVar2);
        if (iVar112 != 0) {
LAB_002809b8:
          puVar34 = (undefined8 *)(param_8 + (ulong)*param_9 * 0x30);
          puVar34[1] = auVar119._8_8_;
          *puVar34 = auVar119._0_8_;
          auVar80._0_4_ = fVar55 * fVar124;
          auVar80._4_4_ = fVar60 * fVar44;
          auVar80._8_4_ = fVar50 * fVar51;
          auVar80._12_4_ = fVar67 * 0.0;
          auVar119 = NEON_ext(auVar80,auVar80,8,1);
          fVar128 = auVar119._0_4_ + auVar119._4_4_;
          auVar120._0_4_ = fVar68 * fVar124;
          auVar120._4_4_ = fVar69 * fVar44;
          auVar120._8_4_ = fVar70 * fVar51;
          auVar120._12_4_ = fVar71 * 0.0;
          auVar119 = NEON_ext(auVar120,auVar120,8,1);
          fVar129 = auVar119._0_4_ + auVar119._4_4_;
          auVar126._0_4_ = fVar72 * fVar124;
          auVar126._4_4_ = fVar73 * fVar44;
          auVar126._8_4_ = fVar74 * fVar51;
          auVar126._12_4_ = fVar75 * 0.0;
          auVar119 = NEON_ext(auVar126,auVar126,8,1);
          uVar101 = NEON_ext(CONCAT44(auVar80._0_4_ + auVar80._4_4_ + fVar128,
                                      auVar80._0_4_ + auVar80._4_4_ + fVar128),
                             CONCAT44(auVar120._0_4_ + auVar120._4_4_ + fVar129,
                                      auVar120._0_4_ + auVar120._4_4_ + fVar129),4,1);
          auVar121._12_4_ = fVar40;
          lVar31 = param_8 + (ulong)*param_9 * 0x30;
          *(ulong *)(lVar31 + 0x18) =
               (ulong)(uint)(auVar126._0_4_ + auVar126._4_4_ + auVar119._0_4_ + auVar119._4_4_);
          *(undefined8 *)(lVar31 + 0x10) = uVar101;
          lVar31 = param_8 + (ulong)*param_9 * 0x30;
          *param_9 = *param_9 + 1;
          iVar100 = iVar100 + 1;
          *(long *)(lVar31 + 0x28) = auVar121._8_8_;
          *(undefined8 *)(lVar31 + 0x20) = uVar56;
          uVar36 = (ulong)*(byte *)((long)local_98 + 0x12);
        }
      }
    }
LAB_00280a40:
    auVar9[4] = uVar84;
    auVar9._0_4_ = fVar124;
    auVar9[5] = uVar85;
    auVar9[6] = uVar87;
    auVar9[7] = uVar89;
    auVar9[8] = auVar58[8];
    auVar9[9] = auVar58[9];
    auVar9[10] = auVar58[10];
    auVar9[0xb] = auVar58[0xb];
    auVar9._12_4_ = 0;
    auVar62 = NEON_fmin(auVar62,auVar9,4);
    uVar54 = uVar54 + 1;
    auVar10[4] = uVar84;
    auVar10._0_4_ = fVar124;
    auVar10[5] = uVar85;
    auVar10[6] = uVar87;
    auVar10[7] = uVar89;
    auVar10[8] = auVar58[8];
    auVar10[9] = auVar58[9];
    auVar10[10] = auVar58[10];
    auVar10[0xb] = auVar58[0xb];
    auVar10._12_4_ = 0;
    auVar63 = NEON_fmax(auVar63,auVar10,4);
    if (uVar36 <= uVar54) {
      fVar42 = (float)_DAT_01d4a140;
      uVar54 = (ulong)_DAT_01d4a140 >> 0x20;
      fVar43 = (float)_DAT_01d4a480;
      uVar35 = (ulong)_DAT_01d4a480 >> 0x20;
      if (iVar100 == (int)uVar36) {
        return;
      }
      puVar34 = (undefined8 *)plVar30[6];
      fVar40 = *local_98;
      uVar36 = (ulong)*(byte *)((long)param_3 + 0x12);
      if (*(byte *)((long)param_3 + 0x12) == 0) {
        return;
      }
      fVar45 = local_98[1];
      fVar79 = local_98[2];
      fVar124 = (float)*puVar34 * fVar40;
      fVar44 = (float)((ulong)*puVar34 >> 0x20) * fVar45;
      fVar128 = (float)puVar34[1] * fVar79;
      fVar129 = (float)((ulong)puVar34[1] >> 0x20) * 0.0;
      auVar5._4_4_ = fVar44;
      auVar5._0_4_ = fVar124;
      auVar5._8_4_ = fVar128;
      auVar5._12_4_ = fVar129;
      auVar6._4_4_ = fVar44;
      auVar6._0_4_ = fVar124;
      auVar6._8_4_ = fVar128;
      auVar6._12_4_ = fVar129;
      auVar58 = NEON_ext(auVar5,auVar6,8,1);
      auVar64._0_4_ = fVar40 * *(float *)(puVar34 + 2);
      auVar64._4_4_ = fVar45 * *(float *)((long)puVar34 + 0x14);
      auVar64._8_4_ = fVar79 * *(float *)(puVar34 + 3);
      auVar64._12_4_ = *(float *)((long)puVar34 + 0x1c) * 0.0;
      fVar128 = auVar58._0_4_ + auVar58._4_4_;
      auVar58 = NEON_ext(auVar64,auVar64,8,1);
      fVar129 = auVar58._0_4_ + auVar58._4_4_;
      auVar77._0_4_ = fVar40 * *(float *)(puVar34 + 4);
      auVar77._4_4_ = fVar45 * *(float *)((long)puVar34 + 0x24);
      auVar77._8_4_ = fVar79 * *(float *)(puVar34 + 5);
      auVar77._12_4_ = *(float *)((long)puVar34 + 0x2c) * 0.0;
      auVar58 = NEON_ext(auVar77,auVar77,8,1);
      fVar40 = auVar77._0_4_ + auVar77._4_4_ + auVar58._0_4_ + auVar58._4_4_;
      uVar52 = NEON_ext(CONCAT44(fVar124 + fVar44 + fVar128,fVar124 + fVar44 + fVar128),
                        CONCAT44(auVar64._0_4_ + auVar64._4_4_ + fVar129,
                                 auVar64._0_4_ + auVar64._4_4_ + fVar129),4,1);
      fVar124 = (float)uVar52;
      fVar44 = (float)((ulong)uVar52 >> 0x20);
      auVar65._0_4_ = fVar124 * fVar124;
      auVar65._4_4_ = fVar44 * fVar44;
      auVar65._8_4_ = fVar40 * fVar40;
      auVar65._12_4_ = 0;
      auVar58 = NEON_ext(auVar65,auVar65,8,1);
      fVar129 = auVar58._0_4_ + auVar58._4_4_;
      fVar128 = auVar65._0_4_ + auVar65._4_4_ + fVar129;
      fVar129 = auVar65._0_4_ + auVar65._4_4_ + fVar129;
      uVar33 = CONCAT44(fVar129,fVar128);
      uVar52 = NEON_frsqrte(uVar33,4);
      fVar45 = (float)uVar52;
      fVar79 = (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar45 * fVar45),uVar33,4);
      fVar45 = fVar45 * (float)uVar52;
      fVar79 = fVar79 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar45 * fVar45),uVar33,4);
      fVar45 = fVar45 * (float)uVar52;
      fVar79 = fVar79 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar45 * fVar45),uVar33,4);
      fVar45 = fVar45 * (float)uVar52;
      fVar79 = fVar79 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar45 * fVar45),uVar33,4);
      uVar76 = CONCAT44(fVar129 * fVar79 * (float)((ulong)uVar52 >> 0x20),
                        fVar128 * fVar45 * (float)uVar52);
      uVar76 = uVar76 ^ (uVar76 ^ uVar33) &
                        CONCAT44(-(uint)(fVar128 == 0.0),-(uint)(fVar128 == 0.0));
      uVar52 = NEON_frecpe(uVar76,4);
      uVar56 = NEON_frecps(uVar76,uVar52,4);
      fVar129 = (float)uVar52 * (float)uVar56;
      fVar128 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      uVar52 = NEON_frecps(uVar76,CONCAT44(fVar128,fVar129),4);
      fVar129 = fVar129 * (float)uVar52;
      fVar128 = fVar128 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frecps(uVar76,CONCAT44(fVar128,fVar129),4);
      fVar129 = fVar129 * (float)uVar52;
      fVar128 = fVar128 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frecps(uVar76,CONCAT44(fVar128,fVar129),4);
      fVar129 = fVar129 * (float)uVar52;
      uVar52 = NEON_frecps(uVar76,CONCAT44(fVar128 * (float)((ulong)uVar52 >> 0x20),fVar129),4);
      fVar129 = fVar129 * (float)uVar52;
      uVar33 = 0;
      iVar100 = 0;
      fVar45 = *param_7 * local_90 + param_7[4] * fStack_8c + param_7[8] * fStack_88;
      fVar79 = param_7[1] * local_90 + param_7[5] * fStack_8c + param_7[9] * fStack_88;
      fVar66 = param_7[2] * local_90 + param_7[6] * fStack_8c + param_7[10] * fStack_88;
      auVar78._0_4_ = fVar124 * fVar129 * fVar45;
      auVar78._4_4_ = fVar44 * fVar129 * fVar79;
      auVar78._8_4_ = fVar40 * fVar129 * fVar66;
      auVar78._12_4_ = 0;
      auVar58 = NEON_ext(auVar78,auVar78,8,1);
      fVar128 = auVar58._0_4_ + auVar58._4_4_;
      do {
        auVar58 = pauVar38[uVar33];
        bVar2 = *(byte *)((long)local_98 + 0x12);
        fVar114 = auVar58._0_4_;
        fVar41 = auVar58._4_4_;
        fVar47 = auVar58._8_4_;
        fVar48 = auVar58._12_4_;
        bVar83 = (byte)(((uint)(byte)(-(auVar63._0_4_ + fVar43 < fVar114) |
                                     -(fVar114 < auVar62._0_4_ + fVar42)) << 0x1f) >> 0x18);
        bVar90 = (byte)(((uint)(byte)(-(auVar63._4_4_ + (float)uVar35 < fVar41) |
                                     -(fVar41 < auVar62._4_4_ + (float)uVar54)) << 0x1f) >> 0x18);
        iVar112 = (int)(char)bVar83 >> 7;
        iVar28 = (int)(char)bVar90 >> 7;
        bVar134 = (byte)iVar28;
        bVar123 = (byte)((uint)iVar28 >> 8);
        bVar82 = (byte)((uint)iVar28 >> 0x10);
        bVar98 = (byte)iVar112;
        bVar110 = (byte)((uint)iVar112 >> 8);
        bVar111 = (byte)((uint)iVar112 >> 0x10);
        iVar112 = -(uint)(CONCAT13((char)(bVar90 | bVar83) >> 7,
                                   CONCAT12(bVar82 | bVar111,
                                            CONCAT11(bVar123 | bVar110,bVar134 | bVar98))) == -1);
        iVar28 = -(uint)(CONCAT13((char)(bVar90 | bVar83) >> 7,
                                  CONCAT12(bVar82 | bVar111,
                                           CONCAT11(bVar123 | bVar110,bVar134 | bVar98))) == -1);
        uVar84 = (undefined1)iVar28;
        uVar85 = (undefined1)((uint)iVar28 >> 8);
        uVar87 = (undefined1)((uint)iVar28 >> 0x10);
        uVar89 = (undefined1)((uint)iVar28 >> 0x18);
        iVar28 = -(uint)(CONCAT13((char)(bVar90 | bVar83) >> 7,
                                  CONCAT12(bVar82 | bVar111,
                                           CONCAT11(bVar123 | bVar110,bVar134 | bVar98))) == -1);
        uVar86 = (undefined1)iVar28;
        uVar88 = (undefined1)((uint)iVar28 >> 8);
        uVar91 = (undefined1)((uint)iVar28 >> 0x10);
        uVar93 = (undefined1)((uint)iVar28 >> 0x18);
        iVar28 = -(uint)(CONCAT13((char)(bVar90 | bVar83) >> 7,
                                  CONCAT12(bVar82 | bVar111,
                                           CONCAT11(bVar123 | bVar110,bVar134 | bVar98))) == -1);
        uVar92 = (undefined1)iVar28;
        uVar94 = (undefined1)((uint)iVar28 >> 8);
        uVar95 = (undefined1)((uint)iVar28 >> 0x10);
        uVar96 = (undefined1)((uint)iVar28 >> 0x18);
        auVar11[4] = uVar84;
        auVar11._0_4_ = iVar112;
        auVar11[5] = uVar85;
        auVar11[6] = uVar87;
        auVar11[7] = uVar89;
        auVar11[8] = uVar86;
        auVar11[9] = uVar88;
        auVar11[10] = uVar91;
        auVar11[0xb] = uVar93;
        auVar11[0xc] = uVar92;
        auVar11[0xd] = uVar94;
        auVar11[0xe] = uVar95;
        auVar11[0xf] = uVar96;
        auVar12[4] = uVar84;
        auVar12._0_4_ = iVar112;
        auVar12[5] = uVar85;
        auVar12[6] = uVar87;
        auVar12[7] = uVar89;
        auVar12[8] = uVar86;
        auVar12[9] = uVar88;
        auVar12[10] = uVar91;
        auVar12[0xb] = uVar93;
        auVar12[0xc] = uVar92;
        auVar12[0xd] = uVar94;
        auVar12[0xe] = uVar95;
        auVar12[0xf] = uVar96;
        NEON_ext(auVar11,auVar12,8,1);
        if (CONCAT13(uVar92,CONCAT12(uVar86,CONCAT11(uVar84,(char)iVar112))) != -1 && bVar2 != 0) {
          fVar99 = (float)*(undefined8 *)pauVar38[uVar33];
          iVar112 = 0;
          uVar76 = (ulong)bVar2 + 0xffffffff;
          uVar37 = 0;
          do {
            fVar130 = SUB164(pauVar39[uVar76 & 0xffffffff],4);
            fVar113 = SUB164(pauVar39[uVar76 & 0xffffffff],0);
            fVar132 = SUB164(pauVar39[uVar37],4);
            fVar46 = SUB164(pauVar39[uVar37],0);
            iVar28 = -(uint)(fVar41 == fVar130 && fVar99 == fVar113);
            iVar29 = -(uint)(fVar99 == fVar46 && fVar41 == fVar132);
            bVar134 = (byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar28 >> 0x10);
            bVar123 = (byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar28 >> 0x18);
            uVar23 = CONCAT11((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar28 >> 8),
                              (byte)iVar29 | (byte)iVar28);
            iVar28 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
            iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
            uVar84 = (undefined1)iVar29;
            uVar85 = (undefined1)((uint)iVar29 >> 8);
            uVar87 = (undefined1)((uint)iVar29 >> 0x10);
            uVar89 = (undefined1)((uint)iVar29 >> 0x18);
            iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
            uVar86 = (undefined1)iVar29;
            uVar88 = (undefined1)((uint)iVar29 >> 8);
            uVar91 = (undefined1)((uint)iVar29 >> 0x10);
            uVar93 = (undefined1)((uint)iVar29 >> 0x18);
            iVar29 = -(uint)(CONCAT13(bVar123,CONCAT12(bVar134,uVar23)) == -1);
            uVar92 = (undefined1)iVar29;
            uVar94 = (undefined1)((uint)iVar29 >> 8);
            uVar95 = (undefined1)((uint)iVar29 >> 0x10);
            uVar96 = (undefined1)((uint)iVar29 >> 0x18);
            auVar24[4] = uVar84;
            auVar24._0_4_ = iVar28;
            auVar24[5] = uVar85;
            auVar24[6] = uVar87;
            auVar24[7] = uVar89;
            auVar24[8] = uVar86;
            auVar24[9] = uVar88;
            auVar24[10] = uVar91;
            auVar24[0xb] = uVar93;
            auVar24[0xc] = uVar92;
            auVar24[0xd] = uVar94;
            auVar24[0xe] = uVar95;
            auVar24[0xf] = uVar96;
            auVar25[4] = uVar84;
            auVar25._0_4_ = iVar28;
            auVar25[5] = uVar85;
            auVar25[6] = uVar87;
            auVar25[7] = uVar89;
            auVar25[8] = uVar86;
            auVar25[9] = uVar88;
            auVar25[10] = uVar91;
            auVar25[0xb] = uVar93;
            auVar25[0xc] = uVar92;
            auVar25[0xd] = uVar94;
            auVar25[0xe] = uVar95;
            auVar25[0xf] = uVar96;
            NEON_ext(auVar24,auVar25,8,1);
            if (CONCAT13(uVar92,CONCAT12(uVar86,CONCAT11(uVar84,(char)iVar28))) == -1)
            goto LAB_00280cc8;
            if (fVar41 < fVar130 != fVar41 < fVar132) {
              fVar132 = fVar132 - fVar130;
              fVar113 = (fVar41 - fVar130) * (fVar46 - fVar113) +
                        (fVar113 + 1.1920929e-07) * fVar132;
              fVar130 = fVar99 * fVar132;
              if ((float)((uint)fVar113 ^ ((uint)fVar113 ^ (uint)fVar130) & -(uint)(0.0 < fVar132))
                  <= (float)((uint)fVar130 ^
                            ((uint)fVar130 ^ (uint)fVar113) & -(uint)(0.0 < fVar132))) {
                if (iVar112 == 1) goto LAB_00280e38;
                iVar112 = iVar112 + 1;
              }
            }
            uVar1 = uVar37 + 1;
            uVar76 = uVar37;
            uVar37 = uVar1;
          } while (uVar1 < bVar2);
          if (iVar112 != 0) {
LAB_00280cc8:
            fVar99 = fVar55 * fVar99;
            fVar113 = fVar60 * fVar41;
            uVar84 = (undefined1)((uint)fVar113 >> 8);
            uVar85 = (undefined1)((uint)fVar113 >> 0x10);
            uVar87 = (undefined1)((uint)fVar113 >> 0x18);
            fVar130 = fVar50 * fVar47;
            uVar89 = (undefined1)((uint)fVar130 >> 8);
            uVar86 = (undefined1)((uint)fVar130 >> 0x10);
            uVar88 = (undefined1)((uint)fVar130 >> 0x18);
            fVar46 = fVar67 * fVar48;
            uVar91 = (undefined1)((uint)fVar46 >> 8);
            uVar93 = (undefined1)((uint)fVar46 >> 0x10);
            uVar92 = (undefined1)((uint)fVar46 >> 0x18);
            auVar19[4] = SUB41(fVar113,0);
            auVar19._0_4_ = fVar99;
            auVar19[5] = uVar84;
            auVar19[6] = uVar85;
            auVar19[7] = uVar87;
            auVar19[8] = SUB41(fVar130,0);
            auVar19[9] = uVar89;
            auVar19[10] = uVar86;
            auVar19[0xb] = uVar88;
            auVar19[0xc] = SUB41(fVar46,0);
            auVar19[0xd] = uVar91;
            auVar19[0xe] = uVar93;
            auVar19[0xf] = uVar92;
            auVar20[4] = SUB41(fVar113,0);
            auVar20._0_4_ = fVar99;
            auVar20[5] = uVar84;
            auVar20[6] = uVar85;
            auVar20[7] = uVar87;
            auVar20[8] = SUB41(fVar130,0);
            auVar20[9] = uVar89;
            auVar20[10] = uVar86;
            auVar20[0xb] = uVar88;
            auVar20[0xc] = SUB41(fVar46,0);
            auVar20[0xd] = uVar91;
            auVar20[0xe] = uVar93;
            auVar20[0xf] = uVar92;
            auVar58 = NEON_ext(auVar19,auVar20,8,1);
            fVar46 = auVar58._0_4_ + auVar58._4_4_;
            auVar104._0_4_ = fVar68 * fVar114;
            auVar104._4_4_ = fVar69 * fVar41;
            auVar104._8_4_ = fVar70 * fVar47;
            auVar104._12_4_ = fVar71 * fVar48;
            auVar81._0_4_ = fVar72 * fVar114;
            auVar81._4_4_ = fVar73 * fVar41;
            auVar81._8_4_ = fVar74 * fVar47;
            auVar81._12_4_ = fVar75 * fVar48;
            auVar58 = NEON_ext(auVar104,auVar104,8,1);
            fVar114 = auVar58._0_4_ + auVar58._4_4_;
            auVar58 = NEON_ext(auVar81,auVar81,8,1);
            fVar41 = fVar99 + fVar113 + fVar46;
            fVar130 = auVar81._0_4_ + auVar81._4_4_ + auVar58._0_4_ + auVar58._4_4_;
            uVar56 = NEON_ext(CONCAT17((char)((uint)fVar41 >> 0x18),
                                       CONCAT16((char)((uint)fVar41 >> 0x10),
                                                CONCAT15((char)((uint)fVar41 >> 8),
                                                         CONCAT14(SUB41(fVar41,0),
                                                                  fVar99 + fVar113 + fVar46)))),
                              CONCAT44(auVar104._0_4_ + auVar104._4_4_ + fVar114,
                                       auVar104._0_4_ + auVar104._4_4_ + fVar114),4,1);
            fVar114 = (float)uVar56;
            fVar41 = (float)((ulong)uVar56 >> 0x20);
            fVar99 = param_7[0xc] +
                     param_7[8] * fVar130 +
                     (float)*(undefined8 *)param_7 * fVar114 + param_7[4] * fVar41;
            fVar113 = param_7[0xd] +
                      param_7[9] * fVar130 +
                      (float)((ulong)*(undefined8 *)param_7 >> 0x20) * fVar114 + param_7[5] * fVar41
            ;
            fVar46 = param_7[0xe] +
                     param_7[10] * fVar130 +
                     (float)*(undefined8 *)(param_7 + 2) * fVar114 + param_7[6] * fVar41;
            fVar114 = fVar124 * fVar129 * (auVar57._0_4_ - fVar99);
            fVar47 = fVar44 * fVar129 * (auVar57._4_4_ - fVar113);
            uVar84 = (undefined1)((uint)fVar47 >> 8);
            uVar85 = (undefined1)((uint)fVar47 >> 0x10);
            uVar87 = (undefined1)((uint)fVar47 >> 0x18);
            fVar41 = fVar40 * fVar129 * (auVar57._8_4_ - fVar46);
            uVar89 = (undefined1)((uint)fVar41 >> 8);
            uVar86 = (undefined1)((uint)fVar41 >> 0x10);
            uVar88 = (undefined1)((uint)fVar41 >> 0x18);
            fVar48 = (auVar57._12_4_ - (param_7[0xf] + 0.0)) * 0.0;
            uVar91 = (undefined1)((uint)fVar48 >> 8);
            uVar93 = (undefined1)((uint)fVar48 >> 0x10);
            uVar92 = (undefined1)((uint)fVar48 >> 0x18);
            auVar21[4] = SUB41(fVar47,0);
            auVar21._0_4_ = fVar114;
            auVar21[5] = uVar84;
            auVar21[6] = uVar85;
            auVar21[7] = uVar87;
            auVar21[8] = SUB41(fVar41,0);
            auVar21[9] = uVar89;
            auVar21[10] = uVar86;
            auVar21[0xb] = uVar88;
            auVar21[0xc] = SUB41(fVar48,0);
            auVar21[0xd] = uVar91;
            auVar21[0xe] = uVar93;
            auVar21[0xf] = uVar92;
            auVar22[4] = SUB41(fVar47,0);
            auVar22._0_4_ = fVar114;
            auVar22[5] = uVar84;
            auVar22[6] = uVar85;
            auVar22[7] = uVar87;
            auVar22[8] = SUB41(fVar41,0);
            auVar22[9] = uVar89;
            auVar22[10] = uVar86;
            auVar22[0xb] = uVar88;
            auVar22[0xc] = SUB41(fVar48,0);
            auVar22[0xd] = uVar91;
            auVar22[0xe] = uVar93;
            auVar22[0xf] = uVar92;
            auVar58 = NEON_ext(auVar21,auVar22,8,1);
            fVar48 = auVar58._0_4_ + auVar58._4_4_;
            uVar52 = CONCAT44(auVar78._0_4_ + auVar78._4_4_ + fVar128,
                              auVar78._0_4_ + auVar78._4_4_ + fVar128);
            uVar61 = NEON_frecpe(uVar52,4);
            uVar101 = NEON_frecps(uVar52,uVar61,4);
            fVar41 = (float)uVar61 * (float)uVar101;
            fVar132 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar101 >> 0x20);
            uVar61 = NEON_frecps(uVar52,CONCAT44(fVar132,fVar41),4);
            fVar41 = fVar41 * (float)uVar61;
            fVar132 = fVar132 * (float)((ulong)uVar61 >> 0x20);
            uVar61 = NEON_frecps(uVar52,CONCAT44(fVar132,fVar41),4);
            fVar41 = fVar41 * (float)uVar61;
            fVar132 = fVar132 * (float)((ulong)uVar61 >> 0x20);
            uVar61 = NEON_frecps(uVar52,CONCAT44(fVar132,fVar41),4);
            fVar41 = fVar41 * (float)uVar61;
            fVar132 = fVar132 * (float)((ulong)uVar61 >> 0x20);
            uVar52 = NEON_frecps(uVar52,CONCAT44(fVar132,fVar41),4);
            fVar41 = (fVar114 + fVar47 + fVar48) * fVar41 * (float)uVar52;
            if (fVar41 <= (float)*local_a0) {
              auVar105._0_8_ = CONCAT44(fVar113 + fVar79 * fVar41,fVar99 + fVar45 * fVar41);
              auVar105._8_4_ = fVar46 + fVar66 * fVar41;
              auVar105._12_4_ = param_7[0xf] + 0.0 + fVar41 * 0.0;
              auVar58 = NEON_ext(auVar105,auVar105,8,1);
              iVar100 = iVar100 + 1;
              puVar34 = (undefined8 *)(param_8 + (ulong)*param_9 * 0x30);
              puVar34[1] = (ulong)auVar58._0_4_;
              *puVar34 = auVar105._0_8_;
              lVar31 = param_8 + (ulong)*param_9 * 0x30;
              *(ulong *)(lVar31 + 0x18) = (ulong)(uint)fVar130;
              *(undefined8 *)(lVar31 + 0x10) = uVar56;
              lVar31 = param_8 + (ulong)*param_9 * 0x30;
              *param_9 = *param_9 + 1;
              *(float *)(lVar31 + 0x28) = fStack_88;
              *(float *)(lVar31 + 0x2c) =
                   (fVar114 + fVar47 + fVar48) * fVar132 * (float)((ulong)uVar52 >> 0x20);
              *(float *)(lVar31 + 0x20) = local_90;
              *(float *)(lVar31 + 0x24) = fStack_8c;
              uVar36 = (ulong)*(byte *)((long)param_3 + 0x12);
            }
          }
        }
LAB_00280e38:
        uVar33 = uVar33 + 1;
        if (uVar36 <= uVar33) {
          if (iVar100 == (int)uVar36) {
            return;
          }
          if ((ulong)*(byte *)((long)local_98 + 0x12) == 0) {
            return;
          }
          uVar54 = (ulong)*(byte *)((long)local_98 + 0x12) + 0xffffffff;
          uVar35 = 0;
          uVar33 = uVar36;
          do {
            uVar54 = uVar54 & 0xffffffff;
            if ((*(char *)(local_b0 + uVar35) != '\0') || (*(char *)(local_b0 + uVar54) != '\0')) {
              if ((int)uVar33 == 0) {
                uVar33 = 0;
              }
              else {
                uVar52 = *(undefined8 *)(local_a8 + uVar54 * 8);
                auVar57 = pauVar39[uVar35];
                auVar58 = pauVar39[uVar54];
                fVar40 = fVar51 + (float)*(undefined8 *)(local_a8 + uVar35 * 8);
                fVar42 = auVar57._0_4_;
                fVar43 = auVar57._4_4_;
                auVar125 = NEON_fmax(auVar57,auVar58,4);
                auVar119 = NEON_fmin(auVar57,auVar58,4);
                fVar128 = auVar58._0_4_;
                fVar129 = auVar58._4_4_;
                uVar54 = uVar36 + 0xffffffff;
                uVar76 = 0;
                do {
                  auVar108 = pauVar38[uVar54 & 0xffffffff];
                  pauVar4 = pauVar38 + uVar76;
                  uVar56 = *(undefined8 *)(*pauVar4 + 8);
                  uVar84 = (undefined1)((ulong)uVar56 >> 8);
                  uVar85 = (undefined1)((ulong)uVar56 >> 0x10);
                  uVar87 = (undefined1)((ulong)uVar56 >> 0x18);
                  uVar89 = (undefined1)((ulong)uVar56 >> 0x20);
                  uVar86 = (undefined1)((ulong)uVar56 >> 0x28);
                  uVar88 = (undefined1)((ulong)uVar56 >> 0x30);
                  uVar91 = (undefined1)((ulong)uVar56 >> 0x38);
                  auVar13[9] = uVar84;
                  auVar13._0_9_ = *(unkbyte9 *)*pauVar4;
                  auVar13[10] = uVar85;
                  auVar13[0xb] = uVar87;
                  auVar13[0xc] = uVar89;
                  auVar13[0xd] = uVar86;
                  auVar13[0xe] = uVar88;
                  auVar13[0xf] = uVar91;
                  auVar49 = NEON_fmin(auVar13,auVar108,4);
                  auVar14[9] = uVar84;
                  auVar14._0_9_ = *(unkbyte9 *)*pauVar4;
                  auVar14[10] = uVar85;
                  auVar14[0xb] = uVar87;
                  auVar14[0xc] = uVar89;
                  auVar14[0xd] = uVar86;
                  auVar14[0xe] = uVar88;
                  auVar14[0xf] = uVar91;
                  auVar53 = NEON_fmax(auVar14,auVar108,4);
                  bVar134 = -(auVar53._4_4_ < auVar119._4_4_) | -(auVar125._4_4_ < auVar49._4_4_);
                  bVar2 = (byte)(((uint)bVar134 << 0x1f) >> 0x18);
                  bVar134 = (byte)(((uint)CONCAT12(bVar134,(ushort)(byte)(-(auVar53._0_4_ <
                                                                           auVar119._0_4_) |
                                                                         -(auVar125._0_4_ <
                                                                          auVar49._0_4_))) << 0x1f)
                                  >> 0x18);
                  iVar100 = CONCAT13((char)(bVar2 | bVar134) >> 7,
                                     CONCAT12((char)(bVar2 | bVar134) >> 7,
                                              CONCAT11((char)(bVar2 | bVar134) >> 7,
                                                       (char)(bVar2 | bVar134) >> 7)));
                  auVar102._0_8_ =
                       CONCAT17((char)(bVar2 | bVar134) >> 7,
                                CONCAT16((char)(bVar2 | bVar134) >> 7,
                                         CONCAT15((char)(bVar2 | bVar134) >> 7,
                                                  CONCAT14((char)(bVar2 | bVar134) >> 7,iVar100))));
                  auVar102[8] = (char)(bVar2 | bVar134) >> 7;
                  auVar102[9] = (char)(bVar2 | bVar134) >> 7;
                  auVar102[10] = (char)(bVar2 | bVar134) >> 7;
                  auVar102[0xb] = (char)(bVar2 | bVar134) >> 7;
                  auVar106[0xc] = (char)(bVar2 | bVar134) >> 7;
                  auVar106._0_12_ = auVar102;
                  auVar106[0xd] = (char)(bVar2 | bVar134) >> 7;
                  auVar106[0xe] = (char)(bVar2 | bVar134) >> 7;
                  auVar106[0xf] = (char)(bVar2 | bVar134) >> 7;
                  auVar107._0_4_ = -(uint)(iVar100 == -1);
                  auVar107._4_4_ = -(uint)((int)((ulong)auVar102._0_8_ >> 0x20) == -1);
                  auVar107._8_4_ = -(uint)(auVar102._8_4_ == -1);
                  auVar107._12_4_ = -(uint)(auVar106._12_4_ == -1);
                  NEON_ext(auVar107,auVar107,8,1);
                  if (CONCAT13((char)auVar107._12_4_,
                               CONCAT12((char)auVar107._8_4_,
                                        CONCAT11((char)auVar107._4_4_,(char)auVar107._0_4_))) != -1)
                  {
                    fVar124 = (float)*(undefined8 *)*pauVar4;
                    fVar44 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
                    fVar45 = auVar108._0_4_;
                    fVar66 = auVar108._4_4_;
                    fVar79 = (fVar124 - fVar42) * (fVar66 - fVar43) -
                             (fVar44 - fVar43) * (fVar45 - fVar42);
                    fVar114 = (fVar124 - fVar128) * (fVar66 - fVar129) -
                              (fVar44 - fVar129) * (fVar45 - fVar128);
                    if ((fVar79 * fVar114 < 0.0) &&
                       (((fVar42 - fVar124) * (fVar129 - fVar44) -
                        (fVar43 - fVar44) * (fVar128 - fVar124)) *
                        ((fVar42 - fVar45) * (fVar129 - fVar66) -
                        (fVar43 - fVar66) * (fVar128 - fVar45)) < 0.0)) {
                      uVar61 = CONCAT44(((fVar124 - fVar128) * (fVar66 - fVar129) -
                                        (fVar44 - fVar129) * (fVar45 - fVar128)) -
                                        ((fVar124 - fVar42) * (fVar66 - fVar43) -
                                        (fVar44 - fVar43) * (fVar45 - fVar42)),fVar114 - fVar79);
                      uVar56 = NEON_frecpe(uVar61,4);
                      uVar101 = NEON_frecps(uVar61,uVar56,4);
                      fVar124 = (float)uVar56 * (float)uVar101;
                      fVar44 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar101 >> 0x20);
                      uVar56 = NEON_frecps(uVar61,CONCAT17((char)((uint)fVar44 >> 0x18),
                                                           CONCAT16((char)((uint)fVar44 >> 0x10),
                                                                    CONCAT15((char)((uint)fVar44 >>
                                                                                   8),CONCAT14(SUB41
                                                  (fVar44,0),fVar124)))),4);
                      fVar124 = fVar124 * (float)uVar56;
                      fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
                      uVar56 = NEON_frecps(uVar61,CONCAT17((char)((uint)fVar44 >> 0x18),
                                                           CONCAT16((char)((uint)fVar44 >> 0x10),
                                                                    CONCAT15((char)((uint)fVar44 >>
                                                                                   8),CONCAT14(SUB41
                                                  (fVar44,0),fVar124)))),4);
                      fVar124 = fVar124 * (float)uVar56;
                      fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
                      uVar56 = NEON_frecps(uVar61,CONCAT17((char)((uint)fVar44 >> 0x18),
                                                           CONCAT16((char)((uint)fVar44 >> 0x10),
                                                                    CONCAT15((char)((uint)fVar44 >>
                                                                                   8),CONCAT14(SUB41
                                                  (fVar44,0),fVar124)))),4);
                      fVar124 = fVar124 * (float)uVar56;
                      fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
                      uVar56 = NEON_frecps(uVar61,CONCAT17((char)((uint)fVar44 >> 0x18),
                                                           CONCAT16((char)((uint)fVar44 >> 0x10),
                                                                    CONCAT15((char)((uint)fVar44 >>
                                                                                   8),CONCAT14(SUB41
                                                  (fVar44,0),fVar124)))),4);
                      fVar79 = fVar79 * fVar124 * (float)uVar56;
                      fVar124 = fVar42 - (fVar128 - fVar42) * fVar79;
                      fVar44 = fVar43 - (fVar129 - fVar43) * fVar79;
                      uVar84 = SUB41(fVar44,0);
                      uVar85 = (undefined1)((uint)fVar44 >> 8);
                      uVar87 = (undefined1)((uint)fVar44 >> 0x10);
                      uVar89 = (undefined1)((uint)fVar44 >> 0x18);
                      fVar45 = fVar40 - ((fVar51 + (float)uVar52) - fVar40) * fVar79;
                      uVar86 = (undefined1)((uint)fVar45 >> 8);
                      uVar88 = (undefined1)((uint)fVar45 >> 0x10);
                      uVar91 = (undefined1)((uint)fVar45 >> 0x18);
                      fVar79 = auVar57._12_4_ - (auVar58._12_4_ - auVar57._12_4_) * fVar79;
                      uVar93 = (undefined1)((uint)fVar79 >> 8);
                      uVar92 = (undefined1)((uint)fVar79 >> 0x10);
                      uVar94 = (undefined1)((uint)fVar79 >> 0x18);
                      auVar15[4] = uVar84;
                      auVar15._0_4_ = fVar124;
                      auVar15[5] = uVar85;
                      auVar15[6] = uVar87;
                      auVar15[7] = uVar89;
                      auVar15[8] = SUB41(fVar45,0);
                      auVar15[9] = uVar86;
                      auVar15[10] = uVar88;
                      auVar15[0xb] = uVar91;
                      auVar15[0xc] = SUB41(fVar79,0);
                      auVar15[0xd] = uVar93;
                      auVar15[0xe] = uVar92;
                      auVar15[0xf] = uVar94;
                      auVar16[4] = uVar84;
                      auVar16._0_4_ = fVar124;
                      auVar16[5] = uVar85;
                      auVar16[6] = uVar87;
                      auVar16[7] = uVar89;
                      auVar16[8] = SUB41(fVar45,0);
                      auVar16[9] = uVar86;
                      auVar16[10] = uVar88;
                      auVar16[0xb] = uVar91;
                      auVar16[0xc] = SUB41(fVar79,0);
                      auVar16[0xd] = uVar93;
                      auVar16[0xe] = uVar92;
                      auVar16[0xf] = uVar94;
                      auVar108 = NEON_ext(auVar15,auVar16,8,1);
                      fVar45 = auVar108._0_4_;
                      fVar79 = fVar45 - fVar51;
                      if (fVar45 - fVar51 <= (float)*local_a0) {
                        auVar131._0_4_ = fVar55 * fVar124;
                        auVar131._4_4_ = fVar60 * fVar44;
                        auVar131._8_4_ = fVar50 * fVar45;
                        auVar131._12_4_ = fVar67 * 0.0;
                        auVar108 = NEON_ext(auVar131,auVar131,8,1);
                        fVar47 = auVar108._0_4_ + auVar108._4_4_;
                        auVar133._0_4_ = fVar68 * fVar124;
                        auVar133._4_4_ = fVar69 * fVar44;
                        auVar133._8_4_ = fVar70 * fVar45;
                        auVar133._12_4_ = fVar71 * 0.0;
                        auVar108 = NEON_ext(auVar133,auVar133,8,1);
                        fVar66 = fVar72 * fVar124;
                        fVar44 = fVar73 * fVar44;
                        uVar86 = (undefined1)((uint)fVar44 >> 8);
                        uVar88 = (undefined1)((uint)fVar44 >> 0x10);
                        uVar91 = (undefined1)((uint)fVar44 >> 0x18);
                        fVar45 = fVar74 * fVar45;
                        uVar93 = (undefined1)((uint)fVar45 >> 8);
                        uVar92 = (undefined1)((uint)fVar45 >> 0x10);
                        uVar94 = (undefined1)((uint)fVar45 >> 0x18);
                        fVar114 = fVar75 * 0.0;
                        uVar95 = (undefined1)((uint)fVar114 >> 8);
                        uVar96 = (undefined1)((uint)fVar114 >> 0x10);
                        uVar97 = (undefined1)((uint)fVar114 >> 0x18);
                        fVar48 = auVar108._0_4_ + auVar108._4_4_;
                        auVar17[4] = SUB41(fVar44,0);
                        auVar17._0_4_ = fVar66;
                        auVar17[5] = uVar86;
                        auVar17[6] = uVar88;
                        auVar17[7] = uVar91;
                        auVar17[8] = SUB41(fVar45,0);
                        auVar17[9] = uVar93;
                        auVar17[10] = uVar92;
                        auVar17[0xb] = uVar94;
                        auVar17[0xc] = SUB41(fVar114,0);
                        auVar17[0xd] = uVar95;
                        auVar17[0xe] = uVar96;
                        auVar17[0xf] = uVar97;
                        auVar18[4] = SUB41(fVar44,0);
                        auVar18._0_4_ = fVar66;
                        auVar18[5] = uVar86;
                        auVar18[6] = uVar88;
                        auVar18[7] = uVar91;
                        auVar18[8] = SUB41(fVar45,0);
                        auVar18[9] = uVar93;
                        auVar18[10] = uVar92;
                        auVar18[0xb] = uVar94;
                        auVar18[0xc] = SUB41(fVar114,0);
                        auVar18[0xd] = uVar95;
                        auVar18[0xe] = uVar96;
                        auVar18[0xf] = uVar97;
                        auVar108 = NEON_ext(auVar17,auVar18,8,1);
                        auVar122._0_4_ = fVar55 * fVar124;
                        fVar45 = (float)(CONCAT17(uVar89,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(
                                                  uVar84,fVar124)))) >> 0x20);
                        auVar122._4_4_ = fVar60 * fVar45;
                        auVar122._8_4_ = fVar50 * fVar51;
                        auVar122._12_4_ = fVar67 * 0.0;
                        auVar49 = NEON_ext(auVar122,auVar122,8,1);
                        auVar127._0_4_ = fVar68 * fVar124;
                        auVar127._4_4_ = fVar69 * fVar45;
                        auVar127._8_4_ = fVar70 * fVar51;
                        auVar127._12_4_ = fVar71 * 0.0;
                        auVar109._0_4_ = fVar72 * fVar124;
                        auVar109._4_4_ = fVar73 * fVar45;
                        auVar109._8_4_ = fVar74 * fVar51;
                        auVar109._12_4_ = fVar75 * 0.0;
                        fVar124 = auVar49._0_4_ + auVar49._4_4_;
                        auVar49 = NEON_ext(auVar127,auVar127,8,1);
                        fVar41 = fVar66 + fVar44 + auVar108._0_4_ + auVar108._4_4_;
                        fVar44 = auVar49._0_4_ + auVar49._4_4_;
                        uVar61 = NEON_ext(CONCAT44(auVar131._0_4_ + auVar131._4_4_ + fVar47,
                                                   auVar131._0_4_ + auVar131._4_4_ + fVar47),
                                          CONCAT44(auVar133._0_4_ + auVar133._4_4_ + fVar48,
                                                   auVar133._0_4_ + auVar133._4_4_ + fVar48),4,1);
                        uVar56 = *(undefined8 *)param_7;
                        fVar45 = param_7[4];
                        fVar47 = (float)uVar61;
                        fVar48 = (float)((ulong)uVar61 >> 0x20);
                        uVar61 = NEON_ext(CONCAT44(auVar122._0_4_ + auVar122._4_4_ + fVar124,
                                                   auVar122._0_4_ + auVar122._4_4_ + fVar124),
                                          CONCAT44(auVar127._0_4_ + auVar127._4_4_ + fVar44,
                                                   auVar127._0_4_ + auVar127._4_4_ + fVar44),4,1);
                        fVar66 = param_7[8];
                        fVar114 = param_7[0xc];
                        auVar108 = NEON_ext(auVar109,auVar109,8,1);
                        fVar124 = param_7[0xd] +
                                  (float)((ulong)uVar56 >> 0x20) * fVar47 + param_7[5] * fVar48 +
                                  param_7[9] * fVar41;
                        fVar44 = param_7[0xf] + 0.0;
                        puVar34 = (undefined8 *)(param_8 + (ulong)*param_9 * 0x30);
                        puVar34[1] = CONCAT17((char)((uint)fVar44 >> 0x18),
                                              CONCAT16((char)((uint)fVar44 >> 0x10),
                                                       CONCAT15((char)((uint)fVar44 >> 8),
                                                                CONCAT14(SUB41(fVar44,0),
                                                                         param_7[0xe] +
                                                                         (float)*(undefined8 *)
                                                                                 (param_7 + 2) *
                                                                         fVar47 + param_7[6] *
                                                                                  fVar48 +
                                                                         param_7[10] * fVar41))));
                        *puVar34 = CONCAT17((char)((uint)fVar124 >> 0x18),
                                            CONCAT16((char)((uint)fVar124 >> 0x10),
                                                     CONCAT15((char)((uint)fVar124 >> 8),
                                                              CONCAT14(SUB41(fVar124,0),
                                                                       fVar114 + (float)uVar56 *
                                                                                 fVar47 + fVar45 * 
                                                  fVar48 + fVar66 * fVar41))));
                        lVar31 = param_8 + (ulong)*param_9 * 0x30;
                        *(ulong *)(lVar31 + 0x18) =
                             (ulong)(uint)(auVar109._0_4_ + auVar109._4_4_ +
                                          auVar108._0_4_ + auVar108._4_4_);
                        *(undefined8 *)(lVar31 + 0x10) = uVar61;
                        lVar31 = param_8 + (ulong)*param_9 * 0x30;
                        *param_9 = *param_9 + 1;
                        *(ulong *)(lVar31 + 0x28) =
                             CONCAT17((char)((uint)fVar79 >> 0x18),
                                      CONCAT16((char)((uint)fVar79 >> 0x10),
                                               CONCAT15((char)((uint)fVar79 >> 8),
                                                        CONCAT14(SUB41(fVar79,0),fStack_88))));
                        *(float *)(lVar31 + 0x20) = local_90;
                        *(float *)(lVar31 + 0x24) = fStack_8c;
                        uVar36 = (ulong)*(byte *)((long)param_3 + 0x12);
                      }
                    }
                  }
                  uVar37 = uVar76 + 1;
                  uVar54 = uVar76;
                  uVar76 = uVar37;
                  uVar33 = uVar36;
                } while (uVar37 < uVar36);
              }
            }
            uVar76 = uVar35 + 1;
            uVar54 = uVar35;
            uVar35 = uVar76;
          } while (uVar76 < *(byte *)((long)local_98 + 0x12));
          return;
        }
      } while( true );
    }
    auVar119 = pauVar39[uVar54];
  } while( true );
}


