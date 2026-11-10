/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00167910; name: FUN_00167910
 */


void FUN_00167910(long *param_1,char *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 *puVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  float *pfVar41;
  ulong uVar42;
  ulong uVar43;
  float *pfVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
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
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  byte bVar98;
  float fVar99;
  undefined8 uVar100;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  int iVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  int iVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  ulong uVar116;
  undefined1 auVar117 [16];
  undefined1 local_80 [80];
  
  if ((short)param_1[2] == -1) {
    fVar65 = 0.0;
    pfVar41 = (float *)*param_1;
    fVar69 = 0.0;
    fVar66 = *pfVar41;
    fVar67 = pfVar41[1];
    fVar68 = pfVar41[2];
    fVar62 = pfVar41[4];
    fVar63 = pfVar41[5];
    fVar64 = pfVar41[6];
  }
  else {
    FUN_001637d0(local_80,*param_1);
    fVar68 = local_80._8_4_;
    fVar69 = local_80._12_4_;
    fVar66 = local_80._0_4_;
    fVar67 = local_80._4_4_;
    fVar64 = local_80._24_4_;
    fVar65 = local_80._28_4_;
    fVar62 = local_80._16_4_;
    fVar63 = local_80._20_4_;
  }
  if (*(short *)((long)param_1 + 0x12) == -1) {
    fVar73 = 0.0;
    pfVar41 = (float *)param_1[1];
    fVar77 = 0.0;
    fVar74 = *pfVar41;
    fVar75 = pfVar41[1];
    fVar76 = pfVar41[2];
    fVar70 = pfVar41[4];
    fVar71 = pfVar41[5];
    fVar72 = pfVar41[6];
    uVar1 = *(ushort *)((long)param_1 + 0x1e);
  }
  else {
    FUN_001637d0(local_80,param_1[1]);
    fVar76 = local_80._8_4_;
    fVar77 = local_80._12_4_;
    fVar74 = local_80._0_4_;
    fVar75 = local_80._4_4_;
    fVar72 = local_80._24_4_;
    fVar73 = local_80._28_4_;
    fVar70 = local_80._16_4_;
    fVar71 = local_80._20_4_;
    uVar1 = *(ushort *)((long)param_1 + 0x1e);
  }
  if ((ulong)uVar1 == 0) {
    fVar78 = 0.0;
    fVar51 = 0.0;
    fVar81 = 0.0;
    fVar48 = 0.0;
    sVar2 = (short)param_1[2];
  }
  else {
    uVar38 = param_1[4];
    fVar50 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar83 = 0.0;
    fVar81 = 0.0;
    fVar82 = 0.0;
    fVar53 = 0.0;
    fVar51 = 0.0;
    fVar52 = 0.0;
    fVar80 = 0.0;
    fVar78 = 0.0;
    fVar79 = 0.0;
    uVar39 = uVar38;
    do {
      bVar98 = *(byte *)(uVar39 + 2);
      uVar43 = (ulong)bVar98;
      bVar102 = *(byte *)(uVar39 + 3);
      uVar40 = (ulong)bVar102;
      Hint_Prefetch(uVar39 + 0x50,0,0,0);
      pfVar41 = (float *)(uVar39 + 0x50 + uVar43 * 0x70);
      uVar42 = (ulong)((uint)bVar98 * 4 + 0xc) & 0x7f0;
      lVar37 = (long)pfVar41 + uVar42;
      if (bVar98 == 0) {
        auVar96 = ZEXT816(0);
        fVar60 = 0.0;
        fVar58 = 0.0;
        fVar59 = 0.0;
        auVar105 = ZEXT816(0);
        auVar95 = ZEXT816(0);
        fVar92 = 0.0;
        fVar93 = 0.0;
      }
      else {
        uVar90 = *(undefined8 *)(uVar39 + 0x28);
        uVar87 = *(undefined8 *)(uVar39 + 0x20);
        auVar96 = ZEXT816(0);
        fVar60 = 0.0;
        fVar58 = 0.0;
        fVar59 = 0.0;
        auVar105 = ZEXT816(0);
        auVar95 = ZEXT816(0);
        fVar92 = 0.0;
        fVar93 = 0.0;
        pfVar44 = (float *)(uVar39 + 0x60);
        uVar45 = uVar43;
        do {
          Hint_Prefetch(pfVar44 + 0x18,0,0,0);
          fVar86 = (float)uVar87;
          fVar88 = (float)((ulong)uVar87 >> 0x20);
          fVar89 = (float)uVar90;
          fVar91 = (float)((ulong)uVar90 >> 0x20);
          fVar94 = *pfVar44;
          fVar25 = pfVar44[1];
          fVar26 = pfVar44[2];
          fVar112 = pfVar44[3];
          uVar45 = uVar45 - 1;
          fVar61 = *pfVar41;
          auVar101._0_4_ =
               (fVar86 * fVar66 + fVar62 * pfVar44[-4]) - (fVar86 * fVar74 + fVar70 * fVar94);
          auVar101._4_4_ =
               (fVar88 * fVar67 + fVar63 * pfVar44[-3]) - (fVar88 * fVar75 + fVar71 * fVar25);
          auVar101._8_4_ =
               (fVar89 * fVar68 + fVar64 * pfVar44[-2]) - (fVar89 * fVar76 + fVar72 * fVar26);
          auVar101._12_4_ =
               (fVar91 * fVar69 + fVar65 * pfVar44[-1]) - (fVar91 * fVar77 + fVar73 * fVar112);
          auVar108 = NEON_ext(auVar101,auVar101,8,1);
          fVar46 = auVar108._0_4_ + auVar108._4_4_;
          fVar27 = pfVar44[0xc];
          fVar47 = pfVar44[0xd];
          fVar111 = pfVar44[0xe];
          fVar28 = pfVar44[0xf];
          uVar100 = NEON_fmax(CONCAT44(pfVar44[5] -
                                       (auVar101._0_4_ + auVar101._4_4_ + fVar46) * pfVar44[4],
                                       pfVar44[5] -
                                       (auVar101._0_4_ + auVar101._4_4_ + fVar46) * pfVar44[4]),
                              CONCAT44(-fVar61,-fVar61),4);
          fVar99 = (float)uVar100;
          fVar92 = fVar92 + fVar61 + fVar99;
          fVar93 = fVar93 + fVar61 + (float)((ulong)uVar100 >> 0x20);
          fVar66 = fVar66 + pfVar44[8] * fVar99;
          fVar67 = fVar67 + pfVar44[9] * fVar99;
          fVar68 = fVar68 + pfVar44[10] * fVar99;
          fVar69 = fVar69 + pfVar44[0xb] * fVar99;
          fVar46 = pfVar44[0x10];
          fVar29 = pfVar44[0x11];
          fVar30 = pfVar44[0x12];
          fVar31 = pfVar44[0x13];
          fVar32 = pfVar44[0x14];
          fVar33 = pfVar44[0x15];
          fVar34 = pfVar44[0x16];
          fVar35 = pfVar44[0x17];
          auVar84._0_8_ =
               CONCAT44(auVar105._4_4_ + pfVar44[-3] * fVar99,auVar105._0_4_ + pfVar44[-4] * fVar99)
          ;
          auVar84._8_4_ = auVar105._8_4_ + pfVar44[-2] * fVar99;
          auVar84._12_4_ = auVar105._12_4_ + pfVar44[-1] * fVar99;
          *pfVar41 = fVar61 + fVar99;
          fVar62 = fVar62 + fVar27 * fVar99;
          fVar63 = fVar63 + fVar47 * fVar99;
          fVar64 = fVar64 + fVar111 * fVar99;
          fVar65 = fVar65 + fVar28 * fVar99;
          pfVar44 = pfVar44 + 0x1c;
          auVar56._0_8_ = CONCAT44(auVar96._4_4_ + fVar88 * fVar99,auVar96._0_4_ + fVar86 * fVar99);
          auVar56._8_4_ = auVar96._8_4_ + fVar89 * fVar99;
          auVar56._12_4_ = auVar96._12_4_ + fVar91 * fVar99;
          auVar115._4_4_ = fVar67;
          auVar115._0_4_ = fVar66;
          auVar115._8_4_ = fVar68;
          auVar115._12_4_ = fVar69;
          auVar117._4_4_ = fVar67;
          auVar117._0_4_ = fVar66;
          auVar117._8_4_ = fVar68;
          auVar117._12_4_ = fVar69;
          auVar96 = NEON_ext(auVar115,auVar117,8,1);
          auVar54._0_8_ = CONCAT44(auVar95._4_4_ + fVar25 * fVar99,auVar95._0_4_ + fVar94 * fVar99);
          auVar54._8_4_ = auVar95._8_4_ + fVar26 * fVar99;
          auVar54._12_4_ = auVar95._12_4_ + fVar112 * fVar99;
          auVar95 = NEON_ext(auVar54,auVar54,8,1);
          fVar58 = fVar58 + fVar86 * fVar99;
          fVar59 = fVar59 + fVar88 * fVar99;
          fVar60 = fVar60 + fVar89 * fVar99;
          fVar61 = fVar91 * fVar99 + 0.0;
          fVar68 = auVar96._0_4_;
          fVar69 = 0.0;
          auVar96 = NEON_ext(auVar56,auVar56,8,1);
          fVar74 = fVar74 + fVar46 * fVar99;
          fVar75 = fVar75 + fVar29 * fVar99;
          fVar76 = fVar76 + fVar30 * fVar99;
          fVar77 = fVar77 + fVar31 * fVar99;
          auVar106._4_4_ = fVar63;
          auVar106._0_4_ = fVar62;
          auVar106._8_4_ = fVar64;
          auVar106._12_4_ = fVar65;
          auVar109._4_4_ = fVar63;
          auVar109._0_4_ = fVar62;
          auVar109._8_4_ = fVar64;
          auVar109._12_4_ = fVar65;
          auVar105 = NEON_ext(auVar106,auVar109,8,1);
          fVar64 = auVar105._0_4_;
          auVar17._4_4_ = fVar75;
          auVar17._0_4_ = fVar74;
          auVar17._8_4_ = fVar76;
          auVar17._12_4_ = fVar77;
          auVar18._4_4_ = fVar75;
          auVar18._0_4_ = fVar74;
          auVar18._8_4_ = fVar76;
          auVar18._12_4_ = fVar77;
          auVar105 = NEON_ext(auVar17,auVar18,8,1);
          fVar70 = fVar70 + fVar32 * fVar99;
          fVar71 = fVar71 + fVar33 * fVar99;
          fVar72 = fVar72 + fVar34 * fVar99;
          fVar73 = fVar73 + fVar35 * fVar99;
          auVar13._4_4_ = fVar71;
          auVar13._0_4_ = fVar70;
          auVar13._8_4_ = fVar72;
          auVar13._12_4_ = fVar73;
          auVar14._4_4_ = fVar71;
          auVar14._0_4_ = fVar70;
          auVar14._8_4_ = fVar72;
          auVar14._12_4_ = fVar73;
          auVar109 = NEON_ext(auVar13,auVar14,8,1);
          fVar65 = 0.0;
          auVar106 = NEON_ext(auVar84,auVar84,8,1);
          fVar76 = auVar105._0_4_;
          auVar96._8_4_ = auVar96._0_4_;
          auVar96._0_8_ = auVar56._0_8_;
          auVar96._12_4_ = 0;
          auVar108._4_4_ = fVar59;
          auVar108._0_4_ = fVar58;
          auVar108._8_4_ = fVar60;
          auVar108._12_4_ = fVar61;
          auVar114._4_4_ = fVar59;
          auVar114._0_4_ = fVar58;
          auVar114._8_4_ = fVar60;
          auVar114._12_4_ = fVar61;
          auVar105 = NEON_ext(auVar108,auVar114,8,1);
          fVar72 = auVar109._0_4_;
          fVar73 = 0.0;
          fVar60 = auVar105._0_4_;
          fVar77 = 0.0;
          auVar105._8_4_ = auVar106._0_4_;
          auVar105._0_8_ = auVar84._0_8_;
          auVar105._12_4_ = 0;
          auVar95._8_4_ = auVar95._0_4_;
          auVar95._0_8_ = auVar54._0_8_;
          auVar95._12_4_ = 0;
          pfVar41 = pfVar41 + 1;
        } while (uVar45 != 0);
      }
      uVar45 = lVar37 + uVar40 * 0x80;
      if ((bVar102 != 0) && (*param_2 != '\0')) {
        Hint_Prefetch(lVar37,0,0,0);
        fVar61 = fVar92 * (float)*(undefined8 *)(uVar39 + 0x10);
        fVar94 = (float)((ulong)*(undefined8 *)(uVar39 + 0x10) >> 0x20);
        fVar92 = fVar92 * fVar94;
        fVar93 = fVar93 * fVar94;
        pfVar41 = (float *)(uVar39 + uVar43 * 0x70 + uVar42 + 0x70);
        auVar108 = ZEXT816(0);
        do {
          Hint_Prefetch(pfVar41 + 0x18,0,0,0);
          fVar94 = pfVar41[-8];
          fVar25 = pfVar41[-7];
          fVar26 = pfVar41[-6];
          fVar112 = pfVar41[-5];
          fVar27 = pfVar41[-1];
          uVar40 = uVar40 - 1;
          auVar113._0_4_ =
               (fVar66 * fVar94 + fVar62 * pfVar41[-4]) - (fVar74 * fVar94 + fVar70 * *pfVar41);
          auVar113._4_4_ =
               (fVar67 * fVar25 + fVar63 * pfVar41[-3]) - (fVar75 * fVar25 + fVar71 * pfVar41[1]);
          auVar113._8_4_ =
               (fVar68 * fVar26 + fVar64 * pfVar41[-2]) - (fVar76 * fVar26 + fVar72 * pfVar41[2]);
          auVar113._12_4_ = (fVar69 * 0.0 + fVar65 * 0.0) - (fVar77 * 0.0 + fVar73 * 0.0);
          auVar114 = NEON_ext(auVar113,auVar113,8,1);
          fVar47 = auVar114._0_4_ + auVar114._4_4_;
          fVar111 = (fVar112 - (pfVar41[3] - pfVar41[4]) * fVar27) -
                    (auVar113._0_4_ + auVar113._4_4_ + fVar47) * fVar27;
          uVar42 = CONCAT44((fVar112 - (pfVar41[3] - pfVar41[4]) * fVar27) -
                            (auVar113._0_4_ + auVar113._4_4_ + fVar47) * fVar27,fVar111);
          iVar110 = -(uint)(fVar61 < fVar111);
          iVar107 = -(uint)(fVar111 < -fVar61);
          uVar116 = NEON_fmin(CONCAT44(fVar93,fVar92),uVar42,4);
          uVar43 = NEON_fmax(CONCAT44(-fVar93,-fVar92),uVar42,4);
          uVar42 = uVar42 ^ (uVar42 ^ uVar116) & CONCAT44(iVar110,iVar110);
          uVar42 = uVar42 ^ (uVar42 ^ uVar43) & CONCAT44(iVar107,iVar107);
          fVar112 = (float)uVar42 - fVar112;
          fVar62 = fVar62 + pfVar41[0xc] * fVar112;
          fVar63 = fVar63 + pfVar41[0xd] * fVar112;
          fVar64 = fVar64 + pfVar41[0xe] * fVar112;
          fVar65 = fVar65 + pfVar41[0xf] * fVar112;
          fVar74 = fVar74 + (float)*(undefined8 *)(pfVar41 + 0x10) * fVar112;
          fVar75 = fVar75 + (float)((ulong)*(undefined8 *)(pfVar41 + 0x10) >> 0x20) * fVar112;
          fVar76 = fVar76 + (float)*(undefined8 *)(pfVar41 + 0x12) * fVar112;
          fVar77 = fVar77 + (float)((ulong)*(undefined8 *)(pfVar41 + 0x12) >> 0x20) * fVar112;
          fVar70 = fVar70 + (float)*(undefined8 *)(pfVar41 + 0x14) * fVar112;
          fVar71 = fVar71 + (float)((ulong)*(undefined8 *)(pfVar41 + 0x14) >> 0x20) * fVar112;
          fVar72 = fVar72 + (float)*(undefined8 *)(pfVar41 + 0x16) * fVar112;
          fVar73 = fVar73 + (float)((ulong)*(undefined8 *)(pfVar41 + 0x16) >> 0x20) * fVar112;
          auVar85._0_8_ =
               CONCAT44(auVar105._4_4_ + pfVar41[-3] * fVar112,
                        auVar105._0_4_ + pfVar41[-4] * fVar112);
          auVar85._8_4_ = auVar105._8_4_ + pfVar41[-2] * fVar112;
          auVar85._12_4_ = auVar105._12_4_ + fVar112 * 0.0;
          auVar15._4_4_ = fVar71;
          auVar15._0_4_ = fVar70;
          auVar15._8_4_ = fVar72;
          auVar15._12_4_ = fVar73;
          auVar16._4_4_ = fVar71;
          auVar16._0_4_ = fVar70;
          auVar16._8_4_ = fVar72;
          auVar16._12_4_ = fVar73;
          auVar114 = NEON_ext(auVar15,auVar16,8,1);
          fVar66 = fVar66 + pfVar41[8] * fVar112;
          fVar67 = fVar67 + pfVar41[9] * fVar112;
          fVar68 = fVar68 + pfVar41[10] * fVar112;
          fVar69 = fVar69 + pfVar41[0xb] * fVar112;
          auVar109 = NEON_ext(auVar85,auVar85,8,1);
          auVar57._0_8_ =
               CONCAT44(auVar96._4_4_ + fVar25 * fVar112,auVar96._0_4_ + fVar94 * fVar112);
          auVar57._8_4_ = auVar96._8_4_ + fVar26 * fVar112;
          auVar57._12_4_ = auVar96._12_4_ + fVar112 * 0.0;
          auVar106 = NEON_ext(auVar57,auVar57,8,1);
          fVar58 = fVar58 + fVar94 * fVar112;
          fVar59 = fVar59 + fVar25 * fVar112;
          fVar60 = fVar60 + fVar26 * fVar112;
          fVar72 = fVar112 * 0.0 + 0.0;
          auVar19._4_4_ = fVar75;
          auVar19._0_4_ = fVar74;
          auVar19._8_4_ = fVar76;
          auVar19._12_4_ = fVar77;
          auVar20._4_4_ = fVar75;
          auVar20._0_4_ = fVar74;
          auVar20._8_4_ = fVar76;
          auVar20._12_4_ = fVar77;
          auVar105 = NEON_ext(auVar19,auVar20,8,1);
          auVar55._0_8_ =
               CONCAT44(auVar95._4_4_ + pfVar41[1] * fVar112,auVar95._0_4_ + *pfVar41 * fVar112);
          auVar55._8_4_ = auVar95._8_4_ + pfVar41[2] * fVar112;
          auVar55._12_4_ = auVar95._12_4_ + fVar112 * 0.0;
          auVar9._4_4_ = fVar63;
          auVar9._0_4_ = fVar62;
          auVar9._8_4_ = fVar64;
          auVar9._12_4_ = fVar65;
          auVar10._4_4_ = fVar63;
          auVar10._0_4_ = fVar62;
          auVar10._8_4_ = fVar64;
          auVar10._12_4_ = fVar65;
          auVar96 = NEON_ext(auVar9,auVar10,8,1);
          pfVar41[-6] = fVar26;
          pfVar41[-5] = (float)(uVar42 >> 0x20);
          pfVar41[-8] = fVar94;
          pfVar41[-7] = fVar25;
          auVar11._4_4_ = fVar67;
          auVar11._0_4_ = fVar66;
          auVar11._8_4_ = fVar68;
          auVar11._12_4_ = fVar69;
          auVar12._4_4_ = fVar67;
          auVar12._0_4_ = fVar66;
          auVar12._8_4_ = fVar68;
          auVar12._12_4_ = fVar69;
          auVar95 = NEON_ext(auVar11,auVar12,8,1);
          auVar7._4_4_ = fVar59;
          auVar7._0_4_ = fVar58;
          auVar7._8_4_ = fVar60;
          auVar7._12_4_ = fVar72;
          auVar8._4_4_ = fVar59;
          auVar8._0_4_ = fVar58;
          auVar8._8_4_ = fVar60;
          auVar8._12_4_ = fVar72;
          auVar115 = NEON_ext(auVar7,auVar8,8,1);
          auVar117 = NEON_ext(auVar55,auVar55,8,1);
          pfVar41 = pfVar41 + 0x20;
          fVar64 = auVar96._0_4_;
          fVar76 = auVar105._0_4_;
          fVar72 = auVar114._0_4_;
          fVar68 = auVar95._0_4_;
          fVar60 = auVar115._0_4_;
          fVar65 = 0.0;
          fVar69 = 0.0;
          bVar98 = (byte)iVar110 | (byte)iVar107;
          bVar102 = (byte)((uint)iVar110 >> 8) | (byte)((uint)iVar107 >> 8);
          bVar103 = (byte)((uint)iVar110 >> 0x10) | (byte)((uint)iVar107 >> 0x10);
          bVar104 = (byte)((uint)iVar110 >> 0x18) | (byte)((uint)iVar107 >> 0x18);
          fVar77 = 0.0;
          fVar73 = 0.0;
          auVar97._0_4_ =
               CONCAT13(bVar104 | auVar108[3],
                        CONCAT12(bVar103 | auVar108[2],
                                 CONCAT11(bVar102 | auVar108[1],bVar98 | auVar108[0])));
          auVar97._4_3_ = 0;
          auVar97[7] = bVar104 | auVar108[7];
          auVar97[8] = bVar98 | auVar108[8];
          auVar97[9] = bVar102 | auVar108[9];
          auVar97[10] = bVar103 | auVar108[10];
          auVar97[0xb] = bVar104 | auVar108[0xb];
          auVar97[0xc] = bVar98 | auVar108[0xc];
          auVar97[0xd] = bVar102 | auVar108[0xd];
          auVar97[0xe] = bVar103 | auVar108[0xe];
          auVar97[0xf] = bVar104 | auVar108[0xf];
          auVar96._8_4_ = auVar106._0_4_;
          auVar96._0_8_ = auVar57._0_8_;
          auVar96._12_4_ = 0;
          auVar105._8_4_ = auVar109._0_4_;
          auVar105._0_8_ = auVar85._0_8_;
          auVar105._12_4_ = 0;
          auVar95._8_4_ = auVar117._0_4_;
          auVar95._0_8_ = auVar55._0_8_;
          auVar95._12_4_ = 0;
          auVar108 = auVar97;
        } while (uVar40 != 0);
        *(uint *)(uVar39 + 0x34) = auVar97._0_4_;
      }
      fVar93 = *(float *)(uVar39 + 4);
      fVar92 = *(float *)(uVar39 + 8);
      fVar78 = fVar78 - auVar95._0_4_ * fVar92;
      fVar79 = fVar79 - auVar95._4_4_ * fVar92;
      fVar80 = fVar80 - auVar95._8_4_ * fVar92;
      fVar92 = 0.0 - auVar95._12_4_ * fVar92;
      fVar61 = (float)*(undefined8 *)(uVar39 + 0x18);
      auVar21._4_4_ = fVar79;
      auVar21._0_4_ = fVar78;
      auVar21._8_4_ = fVar80;
      auVar21._12_4_ = fVar92;
      auVar22._4_4_ = fVar79;
      auVar22._0_4_ = fVar78;
      auVar22._8_4_ = fVar80;
      auVar22._12_4_ = fVar92;
      auVar95 = NEON_ext(auVar21,auVar22,8,1);
      fVar92 = (float)((ulong)*(undefined8 *)(uVar39 + 0x18) >> 0x20);
      fVar51 = fVar51 + auVar105._0_4_ * fVar93;
      fVar52 = fVar52 + auVar105._4_4_ * fVar93;
      fVar53 = fVar53 + auVar105._8_4_ * fVar93;
      fVar80 = auVar105._12_4_ * fVar93 + 0.0;
      auVar5._4_4_ = fVar52;
      auVar5._0_4_ = fVar51;
      auVar5._8_4_ = fVar53;
      auVar5._12_4_ = fVar80;
      auVar6._4_4_ = fVar52;
      auVar6._0_4_ = fVar51;
      auVar6._8_4_ = fVar53;
      auVar6._12_4_ = fVar80;
      auVar105 = NEON_ext(auVar5,auVar6,8,1);
      fVar48 = fVar48 + auVar96._0_4_ * fVar61;
      fVar49 = fVar49 + auVar96._4_4_ * fVar61;
      fVar50 = fVar50 + auVar96._8_4_ * fVar61;
      fVar53 = auVar96._12_4_ * fVar61 + 0.0;
      auVar3._4_4_ = fVar49;
      auVar3._0_4_ = fVar48;
      auVar3._8_4_ = fVar50;
      auVar3._12_4_ = fVar53;
      auVar4._4_4_ = fVar49;
      auVar4._0_4_ = fVar48;
      auVar4._8_4_ = fVar50;
      auVar4._12_4_ = fVar53;
      auVar96 = NEON_ext(auVar3,auVar4,8,1);
      fVar81 = fVar81 - fVar58 * fVar92;
      fVar82 = fVar82 - fVar59 * fVar92;
      fVar83 = fVar83 - fVar60 * fVar92;
      fVar58 = 0.0 - fVar92 * 0.0;
      fVar53 = auVar105._0_4_;
      fVar50 = auVar96._0_4_;
      fVar80 = auVar95._0_4_;
      auVar23._4_4_ = fVar82;
      auVar23._0_4_ = fVar81;
      auVar23._8_4_ = fVar83;
      auVar23._12_4_ = fVar58;
      auVar24._4_4_ = fVar82;
      auVar24._0_4_ = fVar81;
      auVar24._8_4_ = fVar83;
      auVar24._12_4_ = fVar58;
      auVar95 = NEON_ext(auVar23,auVar24,8,1);
      fVar83 = auVar95._0_4_;
      uVar39 = uVar45;
    } while (uVar45 < uVar38 + (ulong)uVar1 * 0x10);
    sVar2 = (short)param_1[2];
  }
  if (sVar2 == -1) {
    puVar36 = (undefined8 *)*param_1;
    *puVar36 = CONCAT44(fVar67,fVar66);
    *(float *)(puVar36 + 1) = fVar68;
    lVar37 = *param_1;
    *(ulong *)(lVar37 + 0x10) = CONCAT44(fVar63,fVar62);
    *(float *)(lVar37 + 0x18) = fVar64;
    sVar2 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_00163630(fVar48,fVar51,*param_1);
    sVar2 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar2 == -1) {
    puVar36 = (undefined8 *)param_1[1];
    *puVar36 = CONCAT44(fVar75,fVar74);
    *(float *)(puVar36 + 1) = fVar76;
    lVar37 = param_1[1];
    *(ulong *)(lVar37 + 0x10) = CONCAT44(fVar71,fVar70);
    *(float *)(lVar37 + 0x18) = fVar72;
  }
  else {
    FUN_00163630(fVar81,fVar78,param_1[1]);
  }
  return;
}


