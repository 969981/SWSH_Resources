/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0cb0; name: FUN_00fb0cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb0cb0(long param_1)

{
  unkbyte9 *pVar1;
  unkbyte9 *pVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  long *plVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 *puVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined8 uVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar112;
  float fVar113;
  undefined8 uVar114;
  float fVar115;
  float fVar116;
  undefined8 uVar117;
  float fVar118;
  float fVar119;
  
  if ((*(long *)(param_1 + 0x198) != 0) && (*(int *)(*(long *)(param_1 + 0x198) + 0x54) != 0)) {
    puVar45 = *(undefined8 **)(*(long *)(param_1 + 0x198) + 0x60);
    plVar42 = (long *)(**(code **)*puVar45)(puVar45);
    uVar43 = DAT_01cd4f90;
    uVar28 = DAT_01cd50b0;
    uVar31 = DAT_01cd50f8;
    uVar65 = DAT_01cd5120;
    uVar38 = DAT_01cd5270;
    uVar66 = DAT_01cd5418;
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar41 = __cxa_guard_acquire(PTR_DAT_02715078), uVar43 = DAT_01cd4f90, uVar28 = DAT_01cd50b0
       , uVar31 = DAT_01cd50f8, uVar65 = DAT_01cd5120, uVar38 = DAT_01cd5270, uVar66 = DAT_01cd5418,
       iVar41 != 0)) {
      uVar43 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar43;
      __cxa_guard_release(PTR_DAT_02715078);
      uVar43 = DAT_01cd4f90;
      uVar28 = DAT_01cd50b0;
      uVar31 = DAT_01cd50f8;
      uVar65 = DAT_01cd5120;
      uVar38 = DAT_01cd5270;
      uVar66 = DAT_01cd5418;
    }
    for (; plVar42 != (long *)PTR_DAT_02715080; plVar42 = (long *)*plVar42) {
    }
    pVar2 = (unkbyte9 *)(puVar45 + 10);
    uVar64 = puVar45[0xb];
    uVar49 = (undefined1)((ulong)uVar64 >> 8);
    uVar50 = (undefined1)((ulong)uVar64 >> 0x10);
    uVar51 = (undefined1)((ulong)uVar64 >> 0x18);
    uVar52 = (undefined1)((ulong)uVar64 >> 0x20);
    uVar53 = (undefined1)((ulong)uVar64 >> 0x28);
    uVar54 = (undefined1)((ulong)uVar64 >> 0x30);
    uVar55 = (undefined1)((ulong)uVar64 >> 0x38);
    uVar16 = puVar45[0xd];
    uVar12 = puVar45[0xc];
    fVar17 = (float)*(undefined8 *)pVar2;
    fVar104 = fVar17 * (float)_DAT_01d4ae80;
    fVar18 = (float)((ulong)*(undefined8 *)pVar2 >> 0x20);
    fVar105 = fVar18 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar106 = (float)uVar64 * (float)_UNK_01d4ae88;
    fVar107 = (float)((ulong)uVar64 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    pVar1 = (unkbyte9 *)(param_1 + 0x1b0);
    uVar64 = *(undefined8 *)(param_1 + 0x1b8);
    uVar56 = (undefined1)((ulong)uVar64 >> 8);
    uVar57 = (undefined1)((ulong)uVar64 >> 0x10);
    uVar58 = (undefined1)((ulong)uVar64 >> 0x18);
    uVar59 = (undefined1)((ulong)uVar64 >> 0x20);
    uVar60 = (undefined1)((ulong)uVar64 >> 0x28);
    uVar61 = (undefined1)((ulong)uVar64 >> 0x30);
    uVar62 = (undefined1)((ulong)uVar64 >> 0x38);
    auVar19[9] = uVar56;
    auVar19._0_9_ = *pVar1;
    auVar19[10] = uVar57;
    auVar19[0xb] = uVar58;
    auVar19[0xc] = uVar59;
    auVar19[0xd] = uVar60;
    auVar19[0xe] = uVar61;
    auVar19[0xf] = uVar62;
    uVar89 = a64_TBL(ZEXT816(0),auVar19,uVar66);
    auVar33._4_4_ = fVar105;
    auVar33._0_4_ = fVar104;
    auVar33._8_4_ = fVar106;
    auVar33._12_4_ = fVar107;
    uVar93 = a64_TBL(ZEXT816(0),auVar33,uVar65);
    auVar34._4_4_ = fVar105;
    auVar34._0_4_ = fVar104;
    auVar34._8_4_ = fVar106;
    auVar34._12_4_ = fVar107;
    uVar114 = a64_TBL(ZEXT816(0),auVar34,uVar43);
    auVar20[9] = uVar56;
    auVar20._0_9_ = *pVar1;
    auVar20[10] = uVar57;
    auVar20[0xb] = uVar58;
    auVar20[0xc] = uVar59;
    auVar20[0xd] = uVar60;
    auVar20[0xe] = uVar61;
    auVar20[0xf] = uVar62;
    uVar64 = a64_TBL(ZEXT816(0),auVar20,uVar43);
    fVar68 = (float)((ulong)uVar64 >> 0x20);
    auVar21[9] = uVar56;
    auVar21._0_9_ = *pVar1;
    auVar21[10] = uVar57;
    auVar21[0xb] = uVar58;
    auVar21[0xc] = uVar59;
    auVar21[0xd] = uVar60;
    auVar21[0xe] = uVar61;
    auVar21[0xf] = uVar62;
    uVar30 = a64_TBL(ZEXT816(0),auVar21,uVar31);
    auVar35._4_4_ = fVar105;
    auVar35._0_4_ = fVar104;
    auVar35._8_4_ = fVar106;
    auVar35._12_4_ = fVar107;
    uVar111 = a64_TBL(ZEXT816(0),auVar35,uVar66);
    auVar36._4_4_ = fVar105;
    auVar36._0_4_ = fVar104;
    auVar36._8_4_ = fVar106;
    auVar36._12_4_ = fVar107;
    uVar94 = a64_TBL(ZEXT816(0),auVar36,uVar38);
    auVar37._4_4_ = fVar105;
    auVar37._0_4_ = fVar104;
    auVar37._8_4_ = fVar106;
    auVar37._12_4_ = fVar107;
    uVar117 = a64_TBL(ZEXT816(0),auVar37,uVar31);
    auVar13[9] = uVar49;
    auVar13._0_9_ = *pVar2;
    auVar13[10] = uVar50;
    auVar13[0xb] = uVar51;
    auVar13[0xc] = uVar52;
    auVar13[0xd] = uVar53;
    auVar13[0xe] = uVar54;
    auVar13[0xf] = uVar55;
    uVar109 = a64_TBL(ZEXT816(0),auVar13,uVar43);
    auVar32._4_4_ = fVar105;
    auVar32._0_4_ = fVar104;
    auVar32._8_4_ = fVar104;
    auVar32._12_4_ = fVar105;
    uVar95 = a64_TBL(ZEXT816(0),auVar32,uVar28);
    auVar14[9] = uVar49;
    auVar14._0_9_ = *pVar2;
    auVar14[10] = uVar50;
    auVar14[0xb] = uVar51;
    auVar14[0xc] = uVar52;
    auVar14[0xd] = uVar53;
    auVar14[0xe] = uVar54;
    auVar14[0xf] = uVar55;
    uVar63 = a64_TBL(ZEXT816(0),auVar14,uVar31);
    fVar48 = (float)*(undefined8 *)pVar1;
    fVar46 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar115 = (float)((ulong)uVar114 >> 0x20);
    fVar47 = (float)((ulong)uVar30 >> 0x20);
    fVar116 = (float)((ulong)uVar93 >> 0x20);
    auVar15[9] = uVar49;
    auVar15._0_9_ = *pVar2;
    auVar15[10] = uVar50;
    auVar15[0xb] = uVar51;
    auVar15[0xc] = uVar52;
    auVar15[0xd] = uVar53;
    auVar15[0xe] = uVar54;
    auVar15[0xf] = uVar55;
    uVar102 = a64_TBL(ZEXT816(0),auVar15,uVar66);
    fVar72 = (float)((ulong)uVar89 >> 0x20);
    fVar118 = (float)((ulong)uVar117 >> 0x20);
    fVar119 = (float)((ulong)uVar95 >> 0x20);
    fVar92 = (float)_DAT_01d4ae90;
    fVar96 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar97 = (float)_UNK_01d4ae98;
    fVar98 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar112 = (float)((ulong)uVar111 >> 0x20);
    fVar113 = (float)((ulong)uVar94 >> 0x20);
    fVar67 = (fVar104 * (float)uVar64 + fVar92 * fVar48 * (float)uVar114 +
             fVar92 * (float)uVar89 * (float)uVar117) - (float)uVar30 * (float)uVar111;
    fVar69 = (fVar105 * fVar68 + fVar96 * fVar46 * fVar115 + fVar96 * fVar72 * fVar118) -
             fVar47 * fVar112;
    fVar70 = (fVar106 * (float)uVar64 + fVar97 * (float)uVar30 * (float)uVar93 +
             fVar97 * fVar48 * (float)uVar95) - (float)uVar89 * (float)uVar94;
    fVar72 = (fVar107 * fVar68 + fVar98 * fVar47 * fVar116 + fVar98 * fVar46 * fVar119) -
             fVar72 * fVar113;
    auVar22._4_4_ = fVar69;
    auVar22._0_4_ = fVar67;
    auVar22._8_4_ = fVar70;
    auVar22._12_4_ = fVar72;
    uVar64 = a64_TBL(ZEXT816(0),auVar22,uVar43);
    auVar23._4_4_ = fVar69;
    auVar23._0_4_ = fVar67;
    auVar23._8_4_ = fVar70;
    auVar23._12_4_ = fVar72;
    uVar89 = a64_TBL(ZEXT816(0),auVar23,uVar65);
    auVar24._4_4_ = fVar69;
    auVar24._0_4_ = fVar67;
    auVar24._8_4_ = fVar70;
    auVar24._12_4_ = fVar72;
    uVar90 = a64_TBL(ZEXT816(0),auVar24,uVar31);
    fVar108 = (float)uVar109;
    fVar110 = (float)((ulong)uVar109 >> 0x20);
    auVar25._4_4_ = fVar69;
    auVar25._0_4_ = fVar67;
    auVar25._8_4_ = fVar70;
    auVar25._12_4_ = fVar72;
    uVar91 = a64_TBL(ZEXT816(0),auVar25,uVar66);
    uVar49 = (undefined1)((uint)fVar69 >> 8);
    uVar50 = (undefined1)((uint)fVar69 >> 0x10);
    uVar51 = (undefined1)((uint)fVar69 >> 0x18);
    auVar29[4] = SUB41(fVar69,0);
    auVar29._0_4_ = fVar67;
    auVar29[5] = uVar49;
    auVar29[6] = uVar50;
    auVar29[7] = uVar51;
    auVar29[8] = SUB41(fVar67,0);
    auVar29[9] = (char)((uint)fVar67 >> 8);
    auVar29[10] = (char)((uint)fVar67 >> 0x10);
    auVar29[0xb] = (char)((uint)fVar67 >> 0x18);
    auVar29[0xc] = SUB41(fVar69,0);
    auVar29[0xd] = uVar49;
    auVar29[0xe] = uVar50;
    auVar29[0xf] = uVar51;
    uVar109 = a64_TBL(ZEXT816(0),auVar29,uVar28);
    fVar99 = (float)uVar63;
    fVar100 = (float)((ulong)uVar63 >> 0x20);
    auVar26._4_4_ = fVar69;
    auVar26._0_4_ = fVar67;
    auVar26._8_4_ = fVar70;
    auVar26._12_4_ = fVar72;
    uVar30 = a64_TBL(ZEXT816(0),auVar26,uVar38);
    bVar81 = (byte)DAT_01d4ab58;
    bVar82 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar83 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar84 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar85 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar86 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar87 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar88 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar73 = (byte)DAT_01d4ab50;
    bVar74 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar75 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar76 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar77 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar78 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar79 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar80 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    fVar101 = (float)uVar102;
    fVar103 = (float)((ulong)uVar102 >> 0x20);
    fVar68 = *(float *)(param_1 + 0x1d0);
    fVar48 = (fVar108 * fVar67 + fVar92 * fVar17 * (float)uVar64 + fVar92 * fVar101 * (float)uVar90)
             - fVar99 * (float)uVar91;
    fVar46 = (fVar110 * fVar69 + fVar96 * fVar18 * (float)((ulong)uVar64 >> 0x20) +
             fVar96 * fVar103 * (float)((ulong)uVar90 >> 0x20)) -
             fVar100 * (float)((ulong)uVar91 >> 0x20);
    fVar47 = (fVar108 * fVar70 + fVar97 * fVar99 * (float)uVar89 + fVar97 * fVar17 * (float)uVar109)
             - fVar101 * (float)uVar30;
    fVar67 = (fVar110 * fVar72 + fVar98 * fVar100 * (float)((ulong)uVar89 >> 0x20) +
             fVar98 * fVar18 * (float)((ulong)uVar109 >> 0x20)) -
             fVar103 * (float)((ulong)uVar30 >> 0x20);
    fVar71 = (float)_UNK_01d4a138;
    uVar40 = (ulong)_UNK_01d4a138 >> 0x20;
    fVar72 = (float)_DAT_01d4a130;
    uVar39 = (ulong)_DAT_01d4a130 >> 0x20;
    DAT_01cd4f90 = uVar43;
    DAT_01cd50b0 = uVar28;
    DAT_01cd50f8 = uVar31;
    DAT_01cd5120 = uVar65;
    DAT_01cd5270 = uVar38;
    DAT_01cd5418 = uVar66;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x1c8);
    fVar69 = (float)uVar39 * fVar68;
    fVar70 = (float)uVar40 * fVar68;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    lVar44 = *(long *)(param_1 + 0x1a0);
    *(ulong *)(param_1 + 0xd8) =
         CONCAT17((char)((uint)fVar70 >> 0x18),
                  CONCAT16((char)((uint)fVar70 >> 0x10),
                           CONCAT15((char)((uint)fVar70 >> 8),
                                    CONCAT14(SUB41(fVar70,0),fVar71 * fVar68))));
    *(ulong *)(param_1 + 0xd0) =
         CONCAT17((char)((uint)fVar69 >> 0x18),
                  CONCAT16((char)((uint)fVar69 >> 0x10),
                           CONCAT15((char)((uint)fVar69 >> 8),
                                    CONCAT14(SUB41(fVar69,0),fVar72 * fVar68))));
    *(ulong *)(param_1 + 0xb8) =
         CONCAT44((float)((ulong)uVar16 >> 0x20) +
                  (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & bVar88,
                                  CONCAT12((byte)((uint)fVar67 >> 0x10) & bVar87,
                                           CONCAT11((byte)((uint)fVar67 >> 8) & bVar86,
                                                    SUB41(fVar67,0) & bVar85))),
                  (float)uVar16 +
                  (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & bVar84,
                                  CONCAT12((byte)((uint)fVar47 >> 0x10) & bVar83,
                                           CONCAT11((byte)((uint)fVar47 >> 8) & bVar82,
                                                    SUB41(fVar47,0) & bVar81))));
    *(ulong *)(param_1 + 0xb0) =
         CONCAT44((float)((ulong)uVar12 >> 0x20) +
                  (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & bVar80,
                                  CONCAT12((byte)((uint)fVar46 >> 0x10) & bVar79,
                                           CONCAT11((byte)((uint)fVar46 >> 8) & bVar78,
                                                    SUB41(fVar46,0) & bVar77))),
                  (float)uVar12 +
                  (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar76,
                                  CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar75,
                                           CONCAT11((byte)((uint)fVar48 >> 8) & bVar74,
                                                    SUB41(fVar48,0) & bVar73))));
    if (lVar44 != 0) {
      lVar3 = *(long *)(lVar44 + 0x120);
      iVar41 = *(int *)(*(long *)(lVar44 + 0x128) + 0x40);
      FUN_00723030(lVar3,iVar41);
      lVar44 = *(long *)(lVar3 + 0x1b8) + (long)iVar41 * 0x130;
      fVar46 = (float)*(undefined8 *)(lVar44 + 0xd0) +
               (float)*(undefined8 *)(lVar44 + 0xa0) * 0.0 +
               (float)*(undefined8 *)(lVar44 + 0xb0) * 0.0 +
               (float)*(undefined8 *)(lVar44 + 0xc0) * 0.0;
      fVar47 = (float)((ulong)*(undefined8 *)(lVar44 + 0xd0) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar44 + 0xa0) >> 0x20) * 0.0 +
               (float)((ulong)*(undefined8 *)(lVar44 + 0xb0) >> 0x20) * 0.0 +
               (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20) * 0.0;
      fVar48 = (float)*(undefined8 *)(lVar44 + 0xd8) +
               (float)*(undefined8 *)(lVar44 + 0xa8) * 0.0 +
               (float)*(undefined8 *)(lVar44 + 0xb8) * 0.0 +
               (float)*(undefined8 *)(lVar44 + 200) * 0.0;
      fVar67 = (float)((ulong)*(undefined8 *)(lVar44 + 0xd8) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar44 + 0xa8) >> 0x20) * 0.0 +
               (float)((ulong)*(undefined8 *)(lVar44 + 0xb8) >> 0x20) * 0.0 +
               (float)((ulong)*(undefined8 *)(lVar44 + 200) >> 0x20) * 0.0;
      if (*(char *)(param_1 + 0x1d4) != '\0') {
        fVar46 = fVar46 * (float)puVar45[0x10];
        fVar47 = fVar47 * (float)((ulong)puVar45[0x10] >> 0x20);
        fVar48 = fVar48 * (float)puVar45[0x11];
        fVar67 = 0.0;
        fVar47 = (float)(CONCAT17((char)((uint)fVar47 >> 0x18),
                                  CONCAT16((char)((uint)fVar47 >> 0x10),
                                           CONCAT15((char)((uint)fVar47 >> 8),
                                                    CONCAT14(SUB41(fVar47,0),fVar46)))) >> 0x20);
      }
      auVar4._4_4_ = fVar47;
      auVar4._0_4_ = fVar46;
      auVar4._8_4_ = fVar48;
      auVar4._12_4_ = fVar67;
      uVar16 = a64_TBL(ZEXT816(0),auVar4,uVar31);
      auVar5._4_4_ = fVar47;
      auVar5._0_4_ = fVar46;
      auVar5._8_4_ = fVar48;
      auVar5._12_4_ = fVar67;
      uVar64 = a64_TBL(ZEXT816(0),auVar5,uVar66);
      fVar68 = (float)((ulong)uVar16 >> 0x20);
      auVar6._4_4_ = fVar47;
      auVar6._0_4_ = fVar46;
      auVar6._8_4_ = fVar48;
      auVar6._12_4_ = fVar67;
      uVar12 = a64_TBL(ZEXT816(0),auVar6,uVar43);
      fVar67 = (float)((ulong)uVar12 >> 0x20);
      fVar72 = (float)((ulong)uVar64 >> 0x20);
      fVar48 = (fVar104 * (float)uVar12 + fVar92 * (float)uVar114 * fVar46 +
               fVar92 * (float)uVar117 * (float)uVar64) - (float)uVar16 * (float)uVar111;
      fVar69 = (fVar105 * fVar67 + fVar96 * fVar115 * fVar47 + fVar96 * fVar118 * fVar72) -
               fVar68 * fVar112;
      fVar70 = (fVar106 * (float)uVar12 + fVar97 * (float)uVar93 * (float)uVar16 +
               fVar97 * (float)uVar95 * fVar46) - (float)uVar64 * (float)uVar94;
      fVar47 = (fVar107 * fVar67 + fVar98 * fVar116 * fVar68 + fVar98 * fVar119 * fVar47) -
               fVar72 * fVar113;
      auVar7._4_4_ = fVar69;
      auVar7._0_4_ = fVar48;
      auVar7._8_4_ = fVar70;
      auVar7._12_4_ = fVar47;
      uVar12 = a64_TBL(ZEXT816(0),auVar7,uVar43);
      auVar8._4_4_ = fVar69;
      auVar8._0_4_ = fVar48;
      auVar8._8_4_ = fVar70;
      auVar8._12_4_ = fVar47;
      uVar65 = a64_TBL(ZEXT816(0),auVar8,uVar65);
      auVar9._4_4_ = fVar69;
      auVar9._0_4_ = fVar48;
      auVar9._8_4_ = fVar70;
      auVar9._12_4_ = fVar47;
      uVar31 = a64_TBL(ZEXT816(0),auVar9,uVar31);
      auVar10._4_4_ = fVar69;
      auVar10._0_4_ = fVar48;
      auVar10._8_4_ = fVar70;
      auVar10._12_4_ = fVar47;
      uVar66 = a64_TBL(ZEXT816(0),auVar10,uVar66);
      auVar27._4_4_ = fVar69;
      auVar27._0_4_ = fVar48;
      auVar27._8_4_ = fVar48;
      auVar27._12_4_ = fVar69;
      uVar28 = a64_TBL(ZEXT816(0),auVar27,uVar28);
      auVar11._4_4_ = fVar69;
      auVar11._0_4_ = fVar48;
      auVar11._8_4_ = fVar70;
      auVar11._12_4_ = fVar47;
      uVar43 = a64_TBL(ZEXT816(0),auVar11,uVar38);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      fVar48 = fVar108 * fVar48 + fVar92 * fVar17 * (float)uVar12 + fVar92 * fVar101 * (float)uVar31
               + (float)uVar66 * -fVar99;
      fVar46 = fVar110 * fVar69 + fVar96 * fVar18 * (float)((ulong)uVar12 >> 0x20) +
               fVar96 * fVar103 * (float)((ulong)uVar31 >> 0x20) +
               (float)((ulong)uVar66 >> 0x20) * -fVar100;
      fVar17 = fVar108 * fVar70 + fVar97 * fVar99 * (float)uVar65 + fVar97 * fVar17 * (float)uVar28
               + (float)uVar43 * -fVar101;
      fVar18 = fVar110 * fVar47 + fVar98 * fVar100 * (float)((ulong)uVar65 >> 0x20) +
               fVar98 * fVar18 * (float)((ulong)uVar28 >> 0x20) +
               (float)((ulong)uVar43 >> 0x20) * -fVar103;
      *(ulong *)(param_1 + 0xb8) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) +
                    (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & bVar88,
                                    CONCAT12((byte)((uint)fVar18 >> 0x10) & bVar87,
                                             CONCAT11((byte)((uint)fVar18 >> 8) & bVar86,
                                                      SUB41(fVar18,0) & bVar85))),
                    (float)*(undefined8 *)(param_1 + 0xb8) +
                    (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & bVar84,
                                    CONCAT12((byte)((uint)fVar17 >> 0x10) & bVar83,
                                             CONCAT11((byte)((uint)fVar17 >> 8) & bVar82,
                                                      SUB41(fVar17,0) & bVar81))));
      *(ulong *)(param_1 + 0xb0) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) +
                    (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & bVar80,
                                    CONCAT12((byte)((uint)fVar46 >> 0x10) & bVar79,
                                             CONCAT11((byte)((uint)fVar46 >> 8) & bVar78,
                                                      SUB41(fVar46,0) & bVar77))),
                    (float)*(undefined8 *)(param_1 + 0xb0) +
                    (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar76,
                                    CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar75,
                                             CONCAT11((byte)((uint)fVar48 >> 8) & bVar74,
                                                      SUB41(fVar48,0) & bVar73))));
    }
  }
  return;
}


