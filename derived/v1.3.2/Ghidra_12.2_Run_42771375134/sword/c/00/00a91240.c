/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a91240; name: FUN_00a91240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a91240(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 extraout_b0;
  byte bVar20;
  undefined1 extraout_var;
  byte bVar21;
  undefined1 extraout_var_00;
  byte bVar22;
  undefined1 extraout_var_01;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  float fVar46;
  int iVar47;
  undefined8 uVar48;
  int iVar58;
  undefined1 auVar50 [16];
  float fVar56;
  undefined1 auVar51 [16];
  int iVar57;
  int iVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar49;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar60;
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined8 uVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_00a916a0();
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (*(char *)(param_1 + 0x80) != '\0') {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
      fVar17 = *(float *)PTR_FloatDegree180_027194f0;
      uVar14 = (ulong)-(DAT_02a55a54 * (fVar16 / fVar17));
      pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar14 >> 0x18 & 0xff) * 0x10);
      fVar16 = (float)((uint)uVar14 & 0xffffff) * DAT_01d4bc78;
      fVar69 = *(float *)(param_1 + 0x30) + (float)*(undefined8 *)(param_1 + 0x60);
      fVar46 = *(float *)(param_1 + 0x38) + (float)*(undefined8 *)(param_1 + 0x68);
      fVar56 = pfVar1[1] + pfVar1[3] * fVar16;
      fVar82 = (float)*(undefined8 *)(param_1 + 0x40) + (float)*(undefined8 *)(param_1 + 0x70);
      fVar84 = (float)*(undefined8 *)(param_1 + 0x48) + (float)*(undefined8 *)(param_1 + 0x78);
      fVar68 = *pfVar1 + pfVar1[2] * fVar16;
      fVar85 = (float)_DAT_02a55a40;
      fVar16 = (float)((ulong)_DAT_02a55a40 >> 0x20);
      fVar15 = fVar16 + *(float *)(param_1 + 0x34) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar89 = (float)uRam0000000002a55a48;
      fVar90 = (float)((ulong)uRam0000000002a55a48 >> 0x20);
      fVar16 = fVar16 + (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      if (*(char *)(param_1 + 0xc1) != '\0') {
        fVar76 = *(float *)(param_1 + 0x58);
        fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar76) & -(uint)(fVar15 < fVar76));
        if (fVar16 < fVar76) {
          fVar16 = fVar76;
        }
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x1a8);
      *(float *)(lVar13 + 0xf8) = fVar89 + fVar56 * fVar69 + fVar68 * fVar46;
      *(float *)(lVar13 + 0xfc) = fVar90 + 0.0;
      *(float *)(lVar13 + 0xf0) = fVar85 + (fVar68 * fVar69 - fVar56 * fVar46);
      *(float *)(lVar13 + 0xf4) = fVar15;
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x1a8);
      *(float *)(lVar13 + 0xe8) = fVar89 + fVar56 * fVar82 + fVar68 * fVar84;
      *(float *)(lVar13 + 0xec) = fVar90 + 0.0;
      *(float *)(lVar13 + 0xe0) = fVar85 + (fVar68 * fVar82 - fVar56 * fVar84);
      *(float *)(lVar13 + 0xe4) = fVar16;
      *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1a8) + 0xa0) + 200) =
           *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1a8) + 0xa0) + 0xcc) =
           *(undefined4 *)(param_1 + 0x5c);
      fVar17 = *(float *)PTR_FloatPi_02715160 / fVar17;
      *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1a8) + 0xa0) + 0xd0) =
           *(float *)(param_1 + 0x54) * fVar17;
      *(float *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1a8) + 0x144) =
           fVar17 * *(float *)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    iVar47 = *(int *)(param_1 + 0x28);
    puVar12 = (undefined8 *)PTR_DAT_027107a8;
  }
  else {
    FUN_00a91d10(param_1);
    iVar47 = *(int *)(param_1 + 0x28);
    puVar12 = (undefined8 *)PTR_DAT_027107a8;
  }
  PTR_DAT_027107a8 = (undefined *)puVar12;
  if (iVar47 == 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x1a8);
    uStack_38 = *(undefined8 *)(lVar13 + 0xf8);
    local_40 = *(undefined8 *)(lVar13 + 0xf0);
    fVar17 = (float)local_40 - *(float *)(lVar13 + 0xe0);
    fVar16 = (float)((ulong)local_40 >> 0x20) - *(float *)(lVar13 + 0xe4);
    fVar68 = (float)uStack_38 - *(float *)(lVar13 + 0xe8);
    fVar69 = (float)((ulong)uStack_38 >> 0x20) - *(float *)(lVar13 + 0xec);
    auVar50._0_4_ = fVar17 * fVar17;
    auVar50._4_4_ = fVar16 * fVar16;
    auVar50._8_4_ = fVar68 * fVar68;
    auVar50._12_4_ = fVar69 * fVar69;
    auVar61 = NEON_ext(auVar50,auVar50,8,1);
    fVar46 = auVar61._0_4_ + auVar50._0_4_;
    fVar56 = auVar61._4_4_ + auVar50._4_4_;
    fVar15 = fVar46 + fVar56;
    fVar46 = fVar46 + fVar56;
    iVar60 = -(uint)(fVar15 == 0.0);
    auVar51._8_8_ = CONCAT44(fVar46,fVar15);
    auVar51._0_8_ = CONCAT44(fVar46,fVar15);
    auVar61 = NEON_frsqrte(auVar51,4);
    auVar77._0_4_ = auVar61._0_4_ * fVar15;
    auVar77._4_4_ = auVar61._4_4_ * fVar46;
    auVar77._8_4_ = auVar61._8_4_ * fVar15;
    auVar77._12_4_ = auVar61._12_4_ * fVar46;
    auVar78 = NEON_frsqrts(auVar61,auVar77,4);
    auVar70._0_4_ = auVar61._0_4_ * auVar78._0_4_;
    auVar70._4_4_ = auVar61._4_4_ * auVar78._4_4_;
    auVar70._8_4_ = auVar61._8_4_ * auVar78._8_4_;
    auVar70._12_4_ = auVar61._12_4_ * auVar78._12_4_;
    auVar79._0_4_ = fVar15 * auVar70._0_4_;
    auVar79._4_4_ = fVar46 * auVar70._4_4_;
    auVar79._8_4_ = fVar15 * auVar70._8_4_;
    auVar79._12_4_ = fVar46 * auVar70._12_4_;
    iVar47 = -(uint)(fVar15 == 0.0);
    iVar57 = -(uint)(fVar46 == 0.0);
    iVar58 = -(uint)(fVar15 == 0.0);
    iVar59 = -(uint)(fVar46 == 0.0);
    auVar61 = NEON_frsqrts(auVar70,auVar79,4);
    fVar17 = fVar17 * auVar70._0_4_ * auVar61._0_4_;
    fVar16 = fVar16 * auVar70._4_4_ * auVar61._4_4_;
    fVar68 = fVar68 * auVar70._8_4_ * auVar61._8_4_;
    fVar69 = fVar69 * auVar70._12_4_ * auVar61._12_4_;
    auVar52._0_4_ =
         CONCAT13(~(byte)((uint)iVar60 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar60 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar60 >> 8),~(byte)iVar60)));
    auVar62._8_8_ = _UNK_01d4ae58;
    auVar62._0_8_ = _DAT_01d4ae50;
    auVar52._4_4_ = auVar52._0_4_;
    auVar52._8_4_ = auVar52._0_4_;
    auVar52._12_4_ = auVar52._0_4_;
    auVar61[1] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar47 >> 8);
    auVar61[0] = SUB41(fVar17,0) & ~(byte)iVar47;
    auVar61[2] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
    auVar61[3] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
    auVar61[4] = SUB41(fVar16,0) & ~(byte)iVar57;
    auVar61[5] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar61[6] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar61[7] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar61[8] = SUB41(fVar68,0) & ~(byte)iVar58;
    auVar61[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar58 >> 8);
    auVar61[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    auVar61[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    auVar61[0xc] = SUB41(fVar69,0) & ~(byte)iVar59;
    auVar61[0xd] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar61[0xe] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar61[0xf] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar53 = auVar62 ^ (auVar62 ^ auVar61) & auVar52;
    fVar17 = (float)((ulong)DAT_01cd52f0 >> 0x20);
    fVar16 = (float)DAT_01cd52f0 + fVar17;
    fVar17 = (float)DAT_01cd52f0 + fVar17;
    uVar19 = SUB41(fVar17,0);
    uVar24 = (undefined1)((uint)fVar17 >> 8);
    uVar26 = (undefined1)((uint)fVar17 >> 0x10);
    uVar28 = (undefined1)((uint)fVar17 >> 0x18);
    auVar78[4] = uVar19;
    auVar78._0_4_ = fVar16;
    auVar78[5] = uVar24;
    auVar78[6] = uVar26;
    auVar78[7] = uVar28;
    auVar78[8] = SUB41(fVar16,0);
    auVar78[9] = (char)((uint)fVar16 >> 8);
    auVar78[10] = (char)((uint)fVar16 >> 0x10);
    auVar78[0xb] = (char)((uint)fVar16 >> 0x18);
    auVar78[0xc] = uVar19;
    auVar78[0xd] = uVar24;
    auVar78[0xe] = uVar26;
    auVar78[0xf] = uVar28;
    auVar61 = NEON_frsqrte(auVar78,4);
    auVar71._0_4_ = auVar61._0_4_ * fVar16;
    auVar71._4_4_ = auVar61._4_4_ * fVar17;
    auVar71._8_4_ = auVar61._8_4_ * fVar16;
    uVar10 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar19,fVar16)) >> 0x20);
    auVar71._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10));
    auVar78 = NEON_frsqrts(auVar61,auVar71,4);
    auVar63._0_4_ = auVar61._0_4_ * auVar78._0_4_;
    auVar63._4_4_ = auVar61._4_4_ * auVar78._4_4_;
    auVar63._8_4_ = auVar61._8_4_ * auVar78._8_4_;
    auVar63._12_4_ = auVar61._12_4_ * auVar78._12_4_;
    auVar72._0_4_ = fVar16 * auVar63._0_4_;
    auVar72._4_4_ = fVar17 * auVar63._4_4_;
    auVar72._8_4_ = fVar16 * auVar63._8_4_;
    auVar72._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10)) * auVar63._12_4_;
    iVar47 = -(uint)(fVar16 == 0.0);
    iVar57 = -(uint)(fVar17 == 0.0);
    iVar58 = -(uint)(fVar16 == 0.0);
    iVar59 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10)) == 0.0);
    auVar61 = NEON_frsqrts(auVar63,auVar72,4);
    fVar17 = auVar63._0_4_ * auVar61._0_4_ * (float)_DAT_01d4b580;
    fVar16 = auVar63._4_4_ * auVar61._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
    fVar68 = auVar63._8_4_ * auVar61._8_4_ * (float)_UNK_01d4b588;
    fVar69 = auVar63._12_4_ * auVar61._12_4_ * (float)((ulong)_UNK_01d4b588 >> 0x20);
    bVar18 = SUB41(fVar17,0) & ~(byte)iVar47;
    bVar20 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar47 >> 8);
    bVar21 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
    bVar22 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
    bVar23 = SUB41(fVar16,0) & ~(byte)iVar57;
    bVar25 = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar57 >> 8);
    bVar27 = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    bVar29 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    bVar30 = SUB41(fVar68,0) & ~(byte)iVar58;
    bVar32 = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar58 >> 8);
    bVar34 = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    bVar36 = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    bVar38 = SUB41(fVar69,0) & ~(byte)iVar59;
    bVar40 = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar59 >> 8);
    bVar42 = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    bVar44 = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    uStack_48 = auVar53._8_8_;
    local_50 = auVar53._0_8_;
    if (1.0 - ABS(auVar53._4_4_) <= DAT_01d4c708) {
      auVar64._8_8_ = _UNK_01d4aea8;
      auVar64._0_8_ = _DAT_01d4aea0;
      auVar61 = NEON_ext(auVar64,auVar53,8,1);
      auVar61 = NEON_ext(auVar61,auVar61,8,1);
      fVar68 = auVar61._0_4_;
      auVar65._0_4_ = fVar68 * fVar68;
      fVar69 = auVar61._4_4_;
      auVar65._4_4_ = fVar69 * fVar69;
      fVar15 = auVar61._8_4_;
      auVar65._8_4_ = fVar15 * fVar15;
      fVar46 = auVar61._12_4_;
      auVar65._12_4_ = fVar46 * fVar46;
      auVar61 = NEON_ext(auVar65,auVar65,8,1);
      fVar16 = auVar61._0_4_ + auVar65._0_4_;
      fVar56 = auVar61._4_4_ + auVar65._4_4_;
      fVar17 = fVar16 + fVar56;
      fVar16 = fVar16 + fVar56;
      auVar66._8_8_ = CONCAT44(fVar16,fVar17);
      auVar66._0_8_ = CONCAT44(fVar16,fVar17);
      auVar61 = NEON_frsqrte(auVar66,4);
      auVar80._0_4_ = auVar61._0_4_ * fVar17;
      auVar80._4_4_ = auVar61._4_4_ * fVar16;
      auVar80._8_4_ = auVar61._8_4_ * fVar17;
      auVar80._12_4_ = auVar61._12_4_ * fVar16;
      auVar78 = NEON_frsqrts(auVar61,auVar80,4);
      auVar73._0_4_ = auVar61._0_4_ * auVar78._0_4_;
      auVar73._4_4_ = auVar61._4_4_ * auVar78._4_4_;
      auVar73._8_4_ = auVar61._8_4_ * auVar78._8_4_;
      auVar73._12_4_ = auVar61._12_4_ * auVar78._12_4_;
      auVar81._0_4_ = fVar17 * auVar73._0_4_;
      auVar81._4_4_ = fVar16 * auVar73._4_4_;
      auVar81._8_4_ = fVar17 * auVar73._8_4_;
      auVar81._12_4_ = fVar16 * auVar73._12_4_;
      iVar47 = -(uint)(fVar17 == 0.0);
      iVar57 = -(uint)(fVar16 == 0.0);
      iVar58 = -(uint)(fVar17 == 0.0);
      iVar59 = -(uint)(fVar16 == 0.0);
      auVar61 = NEON_frsqrts(auVar73,auVar81,4);
      fVar68 = fVar68 * auVar73._0_4_ * auVar61._0_4_;
      fVar69 = fVar69 * auVar73._4_4_ * auVar61._4_4_;
      fVar15 = fVar15 * auVar73._8_4_ * auVar61._8_4_;
      fVar46 = fVar46 * auVar73._12_4_ * auVar61._12_4_;
      auVar53._0_8_ =
           CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                    CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                             CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar57 >> 8),
                                      CONCAT14(SUB41(fVar69,0) & ~(byte)iVar57,
                                               CONCAT13((byte)((uint)fVar68 >> 0x18) &
                                                        ~(byte)((uint)iVar47 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                                                 ~(byte)((uint)iVar47 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar68 >> 8)
                                                                          & ~(byte)((uint)iVar47 >>
                                                                                   8),
                                                                          SUB41(fVar68,0) &
                                                                          ~(byte)iVar47)))))));
      auVar53[8] = SUB41(fVar15,0) & ~(byte)iVar58;
      auVar53[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar58 >> 8);
      auVar53[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
      auVar53[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
      auVar53[0xc] = SUB41(fVar46,0) & ~(byte)iVar59;
      auVar53[0xd] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar59 >> 8);
      auVar53[0xe] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
      auVar53[0xf] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
      uStack_48 = auVar53._8_8_;
      local_50 = auVar53._0_8_;
    }
    uVar83 = a64_TBL(ZEXT816(0),auVar53,DAT_01cd5418);
    uVar86 = a64_TBL(ZEXT816(0),auVar53,DAT_01cd5188);
    auVar2[1] = bVar20;
    auVar2[0] = bVar18;
    auVar2[2] = bVar21;
    auVar2[3] = bVar22;
    auVar2[4] = bVar23;
    auVar2[5] = bVar25;
    auVar2[6] = bVar27;
    auVar2[7] = bVar29;
    auVar2[8] = bVar30;
    auVar2[9] = bVar32;
    auVar2[10] = bVar34;
    auVar2[0xb] = bVar36;
    auVar2[0xc] = bVar38;
    auVar2[0xd] = bVar40;
    auVar2[0xe] = bVar42;
    auVar2[0xf] = bVar44;
    uVar91 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    auVar3[1] = bVar20;
    auVar3[0] = bVar18;
    auVar3[2] = bVar21;
    auVar3[3] = bVar22;
    auVar3[4] = bVar23;
    auVar3[5] = bVar25;
    auVar3[6] = bVar27;
    auVar3[7] = bVar29;
    auVar3[8] = bVar30;
    auVar3[9] = bVar32;
    auVar3[10] = bVar34;
    auVar3[0xb] = bVar36;
    auVar3[0xc] = bVar38;
    auVar3[0xd] = bVar40;
    auVar3[0xe] = bVar42;
    auVar3[0xf] = bVar44;
    uVar87 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5158);
    uVar88 = a64_TBL(ZEXT816(0),auVar53,DAT_01cd50f8);
    uVar48 = a64_TBL(ZEXT816(0),auVar53,DAT_01cd5158);
    auVar4[1] = bVar20;
    auVar4[0] = bVar18;
    auVar4[2] = bVar21;
    auVar4[3] = bVar22;
    auVar4[4] = bVar23;
    auVar4[5] = bVar25;
    auVar4[6] = bVar27;
    auVar4[7] = bVar29;
    auVar4[8] = bVar30;
    auVar4[9] = bVar32;
    auVar4[10] = bVar34;
    auVar4[0xb] = bVar36;
    auVar4[0xc] = bVar38;
    auVar4[0xd] = bVar40;
    auVar4[0xe] = bVar42;
    auVar4[0xf] = bVar44;
    uVar49 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar5[1] = bVar20;
    auVar5[0] = bVar18;
    auVar5[2] = bVar21;
    auVar5[3] = bVar22;
    auVar5[4] = bVar23;
    auVar5[5] = bVar25;
    auVar5[6] = bVar27;
    auVar5[7] = bVar29;
    auVar5[8] = bVar30;
    auVar5[9] = bVar32;
    auVar5[10] = bVar34;
    auVar5[0xb] = bVar36;
    auVar5[0xc] = bVar38;
    auVar5[0xd] = bVar40;
    auVar5[0xe] = bVar42;
    auVar5[0xf] = bVar44;
    uVar11 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5188);
    fVar68 = (float)((ulong)uVar83 >> 0x20);
    fVar69 = (float)((ulong)uVar86 >> 0x20);
    fVar15 = (float)((ulong)uVar88 >> 0x20);
    fVar46 = (float)((ulong)uVar48 >> 0x20);
    fVar17 = (float)uVar83 * (float)uVar91 - (float)uVar88 * (float)uVar49;
    fVar16 = fVar68 * (float)((ulong)uVar91 >> 0x20) - fVar15 * (float)((ulong)uVar49 >> 0x20);
    uVar19 = SUB41(fVar16,0);
    uVar24 = (undefined1)((uint)fVar16 >> 8);
    uVar26 = (undefined1)((uint)fVar16 >> 0x10);
    uVar28 = (undefined1)((uint)fVar16 >> 0x18);
    fVar16 = (float)uVar86 * (float)uVar87 - (float)uVar48 * (float)uVar11;
    uVar31 = SUB41(fVar16,0);
    uVar33 = (undefined1)((uint)fVar16 >> 8);
    uVar35 = (undefined1)((uint)fVar16 >> 0x10);
    uVar37 = (undefined1)((uint)fVar16 >> 0x18);
    fVar16 = fVar69 * (float)((ulong)uVar87 >> 0x20) - fVar46 * (float)((ulong)uVar11 >> 0x20);
    uVar39 = SUB41(fVar16,0);
    uVar41 = (undefined1)((uint)fVar16 >> 8);
    uVar43 = (undefined1)((uint)fVar16 >> 0x10);
    uVar45 = (undefined1)((uint)fVar16 >> 0x18);
    auVar6[4] = uVar19;
    auVar6._0_4_ = fVar17;
    auVar6[5] = uVar24;
    auVar6[6] = uVar26;
    auVar6[7] = uVar28;
    auVar6[8] = uVar31;
    auVar6[9] = uVar33;
    auVar6[10] = uVar35;
    auVar6[0xb] = uVar37;
    auVar6[0xc] = uVar39;
    auVar6[0xd] = uVar41;
    auVar6[0xe] = uVar43;
    auVar6[0xf] = uVar45;
    uVar49 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7[4] = uVar19;
    auVar7._0_4_ = fVar17;
    auVar7[5] = uVar24;
    auVar7[6] = uVar26;
    auVar7[7] = uVar28;
    auVar7[8] = uVar31;
    auVar7[9] = uVar33;
    auVar7[10] = uVar35;
    auVar7[0xb] = uVar37;
    auVar7[0xc] = uVar39;
    auVar7[0xd] = uVar41;
    auVar7[0xe] = uVar43;
    auVar7[0xf] = uVar45;
    uVar87 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5188);
    auVar8[4] = uVar19;
    auVar8._0_4_ = fVar17;
    auVar8[5] = uVar24;
    auVar8[6] = uVar26;
    auVar8[7] = uVar28;
    auVar8[8] = uVar31;
    auVar8[9] = uVar33;
    auVar8[10] = uVar35;
    auVar8[0xb] = uVar37;
    auVar8[0xc] = uVar39;
    auVar8[0xd] = uVar41;
    auVar8[0xe] = uVar43;
    auVar8[0xf] = uVar45;
    uVar91 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
    auVar9[4] = uVar19;
    auVar9._0_4_ = fVar17;
    auVar9[5] = uVar24;
    auVar9[6] = uVar26;
    auVar9[7] = uVar28;
    auVar9[8] = uVar31;
    auVar9[9] = uVar33;
    auVar9[10] = uVar35;
    auVar9[0xb] = uVar37;
    auVar9[0xc] = uVar39;
    auVar9[0xd] = uVar41;
    auVar9[0xe] = uVar43;
    auVar9[0xf] = uVar45;
    uVar11 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5158);
    fVar17 = (float)uVar88 * (float)uVar49 - (float)uVar91 * (float)uVar83;
    fVar16 = fVar15 * (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar91 >> 0x20) * fVar68;
    fVar68 = (float)uVar48 * (float)uVar87 - (float)uVar11 * (float)uVar86;
    fVar69 = fVar46 * (float)((ulong)uVar87 >> 0x20) - (float)((ulong)uVar11 >> 0x20) * fVar69;
    auVar54._0_4_ = fVar17 * fVar17;
    auVar54._4_4_ = fVar16 * fVar16;
    auVar54._8_4_ = fVar68 * fVar68;
    auVar54._12_4_ = fVar69 * fVar69;
    auVar61 = NEON_ext(auVar54,auVar54,8,1);
    fVar46 = auVar61._0_4_ + auVar54._0_4_;
    fVar56 = auVar61._4_4_ + auVar54._4_4_;
    fVar15 = fVar46 + fVar56;
    fVar46 = fVar46 + fVar56;
    auVar55._8_8_ = CONCAT44(fVar46,fVar15);
    auVar55._0_8_ = CONCAT44(fVar46,fVar15);
    auVar61 = NEON_frsqrte(auVar55,4);
    auVar74._0_4_ = auVar61._0_4_ * fVar15;
    auVar74._4_4_ = auVar61._4_4_ * fVar46;
    auVar74._8_4_ = auVar61._8_4_ * fVar15;
    auVar74._12_4_ = auVar61._12_4_ * fVar46;
    auVar78 = NEON_frsqrts(auVar61,auVar74,4);
    auVar67._0_4_ = auVar61._0_4_ * auVar78._0_4_;
    auVar67._4_4_ = auVar61._4_4_ * auVar78._4_4_;
    auVar67._8_4_ = auVar61._8_4_ * auVar78._8_4_;
    auVar67._12_4_ = auVar61._12_4_ * auVar78._12_4_;
    auVar75._0_4_ = fVar15 * auVar67._0_4_;
    auVar75._4_4_ = fVar46 * auVar67._4_4_;
    auVar75._8_4_ = fVar15 * auVar67._8_4_;
    auVar75._12_4_ = fVar46 * auVar67._12_4_;
    iVar47 = -(uint)(fVar15 == 0.0);
    iVar57 = -(uint)(fVar46 == 0.0);
    iVar58 = -(uint)(fVar15 == 0.0);
    iVar59 = -(uint)(fVar46 == 0.0);
    auVar61 = NEON_frsqrts(auVar67,auVar75,4);
    fVar17 = fVar17 * auVar67._0_4_ * auVar61._0_4_;
    fVar16 = fVar16 * auVar67._4_4_ * auVar61._4_4_;
    fVar68 = fVar68 * auVar67._8_4_ * auVar61._8_4_;
    fVar69 = fVar69 * auVar67._12_4_ * auVar61._12_4_;
    uStack_58 = CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                         CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                  CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                           CONCAT14(SUB41(fVar69,0) & ~(byte)iVar59,
                                                    CONCAT13((byte)((uint)fVar68 >> 0x18) &
                                                             ~(byte)((uint)iVar58 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                                                      ~(byte)((uint)iVar58 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar68
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar58
                                                                                      >> 8),
                                                                               SUB41(fVar68,0) &
                                                                               ~(byte)iVar58)))))));
    local_60 = CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                        CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                                 CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar57 >> 8),
                                          CONCAT14(SUB41(fVar16,0) & ~(byte)iVar57,
                                                   CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                            ~(byte)((uint)iVar47 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                     ~(byte)((uint)iVar47 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar17 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar47
                                                                                     >> 8),
                                                                              SUB41(fVar17,0) &
                                                                              ~(byte)iVar47)))))));
    FUN_00893ed0(*puVar12,&local_40,&local_50,&local_60);
    fVar16 = *(float *)(param_1 + 0x54);
    fVar17 = *(float *)(param_1 + 0x71c);
    uVar19 = 0;
    if (fVar17 <= fVar16) {
      uVar19 = 0;
      if (fVar16 < *(float *)(param_1 + 0x720)) {
        uVar19 = SUB41((fVar16 - fVar17) / (*(float *)(param_1 + 0x720) - fVar17),0);
      }
    }
    fVar17 = *(float *)(param_1 + 0x724);
    fVar16 = *(float *)(param_1 + 0x728);
    (**(code **)PTR_PTR_02718e90)(uVar19);
    FUN_00893f20(SUB41(fVar17 + (fVar16 - fVar17) *
                                (float)CONCAT13(extraout_var_01,
                                                CONCAT12(extraout_var_00,
                                                         CONCAT11(extraout_var,extraout_b0))),0),
                 *puVar12);
  }
  return;
}


