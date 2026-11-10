/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00727a90; name: FUN_00727a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00727a90(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
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
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puVar31;
  int iVar32;
  long lVar33;
  undefined *puVar34;
  int iVar35;
  long *plVar36;
  undefined8 uVar37;
  undefined1 auVar38 [12];
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  undefined8 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar87;
  undefined8 uVar86;
  undefined8 uVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined4 uVar105;
  undefined8 uVar106;
  
  puVar31 = PTR_DAT_02715078;
  uVar90 = param_4._8_8_;
  uVar85 = param_4._0_8_;
  uVar37 = param_3._8_8_;
  uVar42 = param_3._0_8_;
  uVar86 = param_2._8_8_;
  uVar88 = param_2._0_8_;
  lVar33 = *(long *)(param_5 + 0x68);
  if ((lVar33 != 0) && (*(int *)(lVar33 + 0x54) != 0)) {
    piVar1 = (int *)(lVar33 + 0x54);
    puVar34 = PTR_DAT_02715080;
    iVar35 = *(int *)(lVar33 + 0x54);
    do {
      while( true ) {
        plVar36 = *(long **)(lVar33 + 0x58);
        if (((*puVar31 & 1) == 0) &&
           (iVar32 = __cxa_guard_acquire(puVar31), puVar34 = PTR_DAT_02715080, iVar32 != 0)) {
          uVar92 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar92;
          __cxa_guard_release(puVar31);
          puVar34 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar36 == (long *)0x0) goto LAB_00727bbc;
          if (plVar36 == (long *)puVar34) break;
          plVar36 = (long *)*plVar36;
        }
        iVar32 = *piVar1;
        if (iVar32 == iVar35) break;
        ClearExclusiveLocal();
        iVar35 = iVar32;
        if (iVar32 == 0) goto LAB_00727bbc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar35 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar33 = *(long *)(lVar33 + 0x60);
        if (lVar33 != 0) {
          if (*(char *)(param_5 + 0xf0) == '\0') {
            auVar38 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
            cVar2 = *(char *)(lVar33 + 0x70);
            auVar30 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
          }
          else {
            auVar39 = FUN_0075e360(param_5 + 0xc0);
            auVar38 = auVar39._0_12_;
            *(undefined1 *)(param_5 + 0xf0) = 0;
            *(undefined1 (*) [16])(param_5 + 0x80) = auVar39;
            *(undefined8 *)(param_5 + 0x98) = uVar86;
            *(undefined8 *)(param_5 + 0x90) = uVar88;
            *(undefined8 *)(param_5 + 0xa8) = uVar37;
            *(undefined8 *)(param_5 + 0xa0) = uVar42;
            *(undefined8 *)(param_5 + 0xb8) = uVar90;
            *(undefined8 *)(param_5 + 0xb0) = uVar85;
            cVar2 = *(char *)(lVar33 + 0x70);
            auVar30 = auVar38;
          }
          if (cVar2 == '\0') {
            uVar37 = auVar30._0_8_;
            fVar41 = auVar30._8_4_;
            fVar103 = (float)*(undefined8 *)(lVar33 + 0x18);
            fVar104 = (float)((ulong)*(undefined8 *)(lVar33 + 0x18) >> 0x20);
            fVar102 = (float)*(undefined8 *)(lVar33 + 0x10);
            fVar76 = (float)((ulong)*(undefined8 *)(lVar33 + 0x10) >> 0x20);
            uVar88 = *(undefined8 *)(lVar33 + 0x28);
            uVar86 = *(undefined8 *)(lVar33 + 0x20);
            uVar42 = *(undefined8 *)(lVar33 + 0x38);
            uVar60 = (undefined1)uVar42;
            uVar62 = (undefined1)((ulong)uVar42 >> 8);
            uVar64 = (undefined1)((ulong)uVar42 >> 0x10);
            uVar66 = (undefined1)((ulong)uVar42 >> 0x18);
            uVar68 = (undefined1)((ulong)uVar42 >> 0x20);
            uVar70 = (undefined1)((ulong)uVar42 >> 0x28);
            uVar72 = (undefined1)((ulong)uVar42 >> 0x30);
            uVar74 = (undefined1)((ulong)uVar42 >> 0x38);
            uVar42 = *(undefined8 *)(lVar33 + 0x30);
            uVar44 = (undefined1)uVar42;
            uVar46 = (undefined1)((ulong)uVar42 >> 8);
            uVar48 = (undefined1)((ulong)uVar42 >> 0x10);
            uVar50 = (undefined1)((ulong)uVar42 >> 0x18);
            uVar52 = (undefined1)((ulong)uVar42 >> 0x20);
            uVar54 = (undefined1)((ulong)uVar42 >> 0x28);
            uVar56 = (undefined1)((ulong)uVar42 >> 0x30);
            uVar58 = (undefined1)((ulong)uVar42 >> 0x38);
          }
          else {
            uVar37 = auVar38._0_8_;
            fVar41 = auVar38._8_4_;
            uVar86 = *(undefined8 *)(lVar33 + 0x58);
            uVar88 = *(undefined8 *)(lVar33 + 0x50);
            bVar43 = (byte)uVar88 & (byte)DAT_01d4ab50;
            bVar45 = (byte)((ulong)uVar88 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
            bVar47 = (byte)((ulong)uVar88 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
            bVar49 = (byte)((ulong)uVar88 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
            bVar51 = (byte)((ulong)uVar88 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
            bVar53 = (byte)((ulong)uVar88 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
            bVar55 = (byte)((ulong)uVar88 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
            bVar57 = (byte)((ulong)uVar88 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
            bVar59 = (byte)uVar86 & (byte)DAT_01d4ab58;
            bVar61 = (byte)((ulong)uVar86 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
            bVar63 = (byte)((ulong)uVar86 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
            bVar65 = (byte)((ulong)uVar86 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
            bVar67 = (byte)((ulong)uVar86 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
            bVar69 = (byte)((ulong)uVar86 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
            bVar71 = (byte)((ulong)uVar86 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
            bVar73 = (byte)((ulong)uVar86 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
            uVar42 = NEON_ext(CONCAT17(bVar57,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,
                                                  CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,
                                                  bVar43))))))),
                              CONCAT17(bVar57,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,
                                                  CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,
                                                  bVar43))))))),4,1);
            fVar91 = (float)((ulong)uVar42 >> 0x20);
            auVar39[1] = bVar45;
            auVar39[0] = bVar43;
            auVar39[2] = bVar47;
            auVar39[3] = bVar49;
            auVar39[4] = bVar51;
            auVar39[5] = bVar53;
            auVar39[6] = bVar55;
            auVar39[7] = bVar57;
            auVar39[8] = bVar59;
            auVar39[9] = bVar61;
            auVar39[10] = bVar63;
            auVar39[0xb] = bVar65;
            auVar39[0xc] = bVar67;
            auVar39[0xd] = bVar69;
            auVar39[0xe] = bVar71;
            auVar39[0xf] = bVar73;
            uVar88 = a64_TBL(ZEXT816(0),auVar39,DAT_01cd5188);
            fVar75 = (float)uVar88;
            fVar77 = (float)((ulong)uVar88 >> 0x20);
            auVar4[1] = bVar45;
            auVar4[0] = bVar43;
            auVar4[2] = bVar47;
            auVar4[3] = bVar49;
            auVar4[4] = bVar51;
            auVar4[5] = bVar53;
            auVar4[6] = bVar55;
            auVar4[7] = bVar57;
            auVar4[8] = bVar59;
            auVar4[9] = bVar61;
            auVar4[10] = bVar63;
            auVar4[0xb] = bVar65;
            auVar4[0xc] = bVar67;
            auVar4[0xd] = bVar69;
            auVar4[0xe] = bVar71;
            auVar4[0xf] = bVar73;
            uVar85 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5048);
            auVar5[1] = bVar45;
            auVar5[0] = bVar43;
            auVar5[2] = bVar47;
            auVar5[3] = bVar49;
            auVar5[4] = bVar51;
            auVar5[5] = bVar53;
            auVar5[6] = bVar55;
            auVar5[7] = bVar57;
            auVar5[8] = bVar59;
            auVar5[9] = bVar61;
            auVar5[10] = bVar63;
            auVar5[0xb] = bVar65;
            auVar5[0xc] = bVar67;
            auVar5[0xd] = bVar69;
            auVar5[0xe] = bVar71;
            auVar5[0xf] = bVar73;
            uVar92 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
            auVar6[1] = bVar45;
            auVar6[0] = bVar43;
            auVar6[2] = bVar47;
            auVar6[3] = bVar49;
            auVar6[4] = bVar51;
            auVar6[5] = bVar53;
            auVar6[6] = bVar55;
            auVar6[7] = bVar57;
            auVar6[8] = bVar59;
            auVar6[9] = bVar61;
            auVar6[10] = bVar63;
            auVar6[0xb] = bVar65;
            auVar6[0xc] = bVar67;
            auVar6[0xd] = bVar69;
            auVar6[0xe] = bVar71;
            auVar6[0xf] = bVar73;
            uVar90 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5158);
            auVar7[1] = bVar45;
            auVar7[0] = bVar43;
            auVar7[2] = bVar47;
            auVar7[3] = bVar49;
            auVar7[4] = bVar51;
            auVar7[5] = bVar53;
            auVar7[6] = bVar55;
            auVar7[7] = bVar57;
            auVar7[8] = bVar59;
            auVar7[9] = bVar61;
            auVar7[10] = bVar63;
            auVar7[0xb] = bVar65;
            auVar7[0xc] = bVar67;
            auVar7[0xd] = bVar69;
            auVar7[0xe] = bVar71;
            auVar7[0xf] = bVar73;
            uVar88 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
            *(undefined1 *)(lVar33 + 0x70) = 0;
            fVar79 = (float)uVar90;
            fVar81 = (float)((ulong)uVar90 >> 0x20);
            fVar89 = (float)uVar42 * (float)uVar42;
            fVar91 = fVar91 * fVar91;
            fVar87 = (float)((ulong)uVar85 >> 0x20);
            fVar84 = (float)uVar85 * (float)uVar85;
            fVar87 = fVar87 * fVar87;
            fVar101 = (float)uVar92 *
                      (float)CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43)));
            fVar102 = (float)((ulong)uVar92 >> 0x20) *
                      (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51)));
            fVar103 = fVar75 * (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59)));
            fVar104 = fVar77 * (float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar67)));
            fVar40 = (float)((ulong)uVar86 >> 0x20);
            fVar76 = (float)uVar88 * fVar40;
            fVar78 = (float)((ulong)uVar88 >> 0x20) * fVar40;
            fVar101 = fVar101 + fVar101;
            fVar102 = fVar102 + fVar102;
            fVar103 = fVar103 + fVar103;
            fVar104 = fVar104 + fVar104;
            fVar76 = fVar76 + fVar76;
            fVar78 = fVar78 + fVar78;
            fVar80 = fVar79 * fVar40 + fVar79 * fVar40;
            fVar82 = fVar81 * fVar40 + fVar81 * fVar40;
            fVar16 = fVar101 + fVar76;
            fVar40 = fVar102 + fVar78;
            uVar66 = SUB41(fVar40,0);
            uVar68 = (undefined1)((uint)fVar40 >> 8);
            uVar70 = (undefined1)((uint)fVar40 >> 0x10);
            uVar72 = (undefined1)((uint)fVar40 >> 0x18);
            fVar40 = fVar103 + fVar80;
            uVar74 = SUB41(fVar40,0);
            uVar94 = (undefined1)((uint)fVar40 >> 8);
            uVar95 = (undefined1)((uint)fVar40 >> 0x10);
            uVar96 = (undefined1)((uint)fVar40 >> 0x18);
            fVar40 = fVar104 + fVar82;
            uVar97 = SUB41(fVar40,0);
            uVar98 = (undefined1)((uint)fVar40 >> 8);
            uVar99 = (undefined1)((uint)fVar40 >> 0x10);
            uVar100 = (undefined1)((uint)fVar40 >> 0x18);
            fVar101 = fVar101 - fVar76;
            fVar102 = fVar102 - fVar78;
            fVar103 = fVar103 - fVar80;
            fVar104 = fVar104 - fVar82;
            fVar40 = (float)_DAT_01d4a130 - (fVar84 + fVar84 + fVar89 + fVar89);
            fVar76 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar87 + fVar87 + fVar91 + fVar91);
            uVar44 = SUB41(fVar76,0);
            uVar46 = (undefined1)((uint)fVar76 >> 8);
            uVar48 = (undefined1)((uint)fVar76 >> 0x10);
            uVar50 = (undefined1)((uint)fVar76 >> 0x18);
            fVar76 = (float)_UNK_01d4a138 -
                     (fVar79 * fVar79 + fVar79 * fVar79 + fVar75 * fVar75 + fVar75 * fVar75);
            uVar52 = (undefined1)((uint)fVar76 >> 8);
            uVar54 = (undefined1)((uint)fVar76 >> 0x10);
            uVar56 = (undefined1)((uint)fVar76 >> 0x18);
            fVar75 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
                     (fVar81 * fVar81 + fVar81 * fVar81 + fVar77 * fVar77 + fVar77 * fVar77);
            uVar58 = SUB41(fVar75,0);
            uVar60 = (undefined1)((uint)fVar75 >> 8);
            uVar62 = (undefined1)((uint)fVar75 >> 0x10);
            uVar64 = (undefined1)((uint)fVar75 >> 0x18);
            auVar12[4] = uVar66;
            auVar12._0_4_ = fVar16;
            auVar12[5] = uVar68;
            auVar12[6] = uVar70;
            auVar12[7] = uVar72;
            auVar12[8] = uVar74;
            auVar12[9] = uVar94;
            auVar12[10] = uVar95;
            auVar12[0xb] = uVar96;
            auVar12[0xc] = uVar97;
            auVar12[0xd] = uVar98;
            auVar12[0xe] = uVar99;
            auVar12[0xf] = uVar100;
            auVar17._4_4_ = fVar102;
            auVar17._0_4_ = fVar101;
            auVar17._8_4_ = fVar103;
            auVar17._12_4_ = fVar104;
            uVar88 = a64_TBL(ZEXT816(0),auVar12,auVar17,DAT_01cd5250);
            auVar13[4] = uVar66;
            auVar13._0_4_ = fVar16;
            auVar13[5] = uVar68;
            auVar13[6] = uVar70;
            auVar13[7] = uVar72;
            auVar13[8] = uVar74;
            auVar13[9] = uVar94;
            auVar13[10] = uVar95;
            auVar13[0xb] = uVar96;
            auVar13[0xc] = uVar97;
            auVar13[0xd] = uVar98;
            auVar13[0xe] = uVar99;
            auVar13[0xf] = uVar100;
            auVar18._4_4_ = fVar102;
            auVar18._0_4_ = fVar101;
            auVar18._8_4_ = fVar103;
            auVar18._12_4_ = fVar104;
            uVar86 = a64_TBL(ZEXT816(0),auVar13,auVar18,DAT_01cd51f8);
            auVar14[4] = uVar66;
            auVar14._0_4_ = fVar16;
            auVar14[5] = uVar68;
            auVar14[6] = uVar70;
            auVar14[7] = uVar72;
            auVar14[8] = uVar74;
            auVar14[9] = uVar94;
            auVar14[10] = uVar95;
            auVar14[0xb] = uVar96;
            auVar14[0xc] = uVar97;
            auVar14[0xd] = uVar98;
            auVar14[0xe] = uVar99;
            auVar14[0xf] = uVar100;
            auVar19._4_4_ = fVar102;
            auVar19._0_4_ = fVar101;
            auVar19._8_4_ = fVar103;
            auVar19._12_4_ = fVar104;
            uVar106 = a64_TBL(ZEXT816(0),auVar14,auVar19,DAT_01cd5430);
            auVar15[4] = uVar66;
            auVar15._0_4_ = fVar16;
            auVar15[5] = uVar68;
            auVar15[6] = uVar70;
            auVar15[7] = uVar72;
            auVar15[8] = uVar74;
            auVar15[9] = uVar94;
            auVar15[10] = uVar95;
            auVar15[0xb] = uVar96;
            auVar15[0xc] = uVar97;
            auVar15[0xd] = uVar98;
            auVar15[0xe] = uVar99;
            auVar15[0xf] = uVar100;
            auVar20._4_4_ = fVar102;
            auVar20._0_4_ = fVar101;
            auVar20._8_4_ = fVar103;
            auVar20._12_4_ = fVar104;
            uVar90 = a64_TBL(ZEXT816(0),auVar15,auVar20,DAT_01cd5050);
            uVar83 = (undefined4)((ulong)uVar86 >> 0x20);
            auVar8[4] = uVar44;
            auVar8._0_4_ = fVar40;
            auVar8[5] = uVar46;
            auVar8[6] = uVar48;
            auVar8[7] = uVar50;
            auVar8[8] = SUB41(fVar76,0);
            auVar8[9] = uVar52;
            auVar8[10] = uVar54;
            auVar8[0xb] = uVar56;
            auVar8[0xc] = uVar58;
            auVar8[0xd] = uVar60;
            auVar8[0xe] = uVar62;
            auVar8[0xf] = uVar64;
            auVar10._8_4_ = (int)uVar86;
            auVar10._0_8_ = uVar88;
            auVar10._12_4_ = uVar83;
            uVar42 = a64_TBL(ZEXT816(0),auVar8,auVar10,DAT_01cd50d8);
            auVar9[4] = uVar44;
            auVar9._0_4_ = fVar40;
            auVar9[5] = uVar46;
            auVar9[6] = uVar48;
            auVar9[7] = uVar50;
            auVar9[8] = SUB41(fVar76,0);
            auVar9[9] = uVar52;
            auVar9[10] = uVar54;
            auVar9[0xb] = uVar56;
            auVar9[0xc] = uVar58;
            auVar9[0xd] = uVar60;
            auVar9[0xe] = uVar62;
            auVar9[0xf] = uVar64;
            auVar11._8_4_ = (int)uVar86;
            auVar11._0_8_ = uVar88;
            auVar11._12_4_ = uVar83;
            uVar92 = a64_TBL(ZEXT816(0),auVar9,auVar11,DAT_01cd4fb8);
            uVar105 = (undefined4)
                      (CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,fVar76)))) >>
                      0x20);
            uVar83 = (undefined4)
                     (CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,fVar40)))) >>
                     0x20);
            auVar21._4_4_ = uVar83;
            auVar21._0_4_ = fVar40;
            auVar21._8_4_ = fVar76;
            auVar21._12_4_ = uVar105;
            auVar25._8_8_ = uVar90;
            auVar25._0_8_ = uVar106;
            uVar86 = a64_TBL(ZEXT816(0),auVar21,auVar25,DAT_01cd50b8);
            auVar22._4_4_ = uVar83;
            auVar22._0_4_ = fVar40;
            auVar22._8_4_ = fVar76;
            auVar22._12_4_ = uVar105;
            auVar26._8_8_ = uVar90;
            auVar26._0_8_ = uVar106;
            uVar85 = a64_TBL(ZEXT816(0),auVar22,auVar26,DAT_01cd5308);
            auVar23._4_4_ = uVar83;
            auVar23._0_4_ = fVar40;
            auVar23._8_4_ = fVar76;
            auVar23._12_4_ = uVar105;
            auVar27._8_8_ = uVar90;
            auVar27._0_8_ = uVar106;
            uVar93 = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd5008);
            auVar24._4_4_ = uVar83;
            auVar24._0_4_ = fVar40;
            auVar24._8_4_ = fVar76;
            auVar24._12_4_ = uVar105;
            auVar28._8_8_ = uVar90;
            auVar28._0_8_ = uVar106;
            uVar88 = a64_TBL(ZEXT816(0),auVar24,auVar28,DAT_01cd4fb0);
            fVar102 = (float)*(undefined8 *)(lVar33 + 0x88);
            fVar101 = (float)uVar42 * fVar102;
            uVar44 = SUB41(fVar101,0);
            uVar46 = (undefined1)((uint)fVar101 >> 8);
            uVar48 = (undefined1)((uint)fVar101 >> 0x10);
            uVar50 = (undefined1)((uint)fVar101 >> 0x18);
            fVar40 = (float)((ulong)uVar42 >> 0x20) * fVar102;
            uVar52 = SUB41(fVar40,0);
            uVar54 = (undefined1)((uint)fVar40 >> 8);
            uVar56 = (undefined1)((uint)fVar40 >> 0x10);
            uVar58 = (undefined1)((uint)fVar40 >> 0x18);
            fVar40 = (float)uVar92 * fVar102;
            uVar60 = SUB41(fVar40,0);
            uVar62 = (undefined1)((uint)fVar40 >> 8);
            uVar64 = (undefined1)((uint)fVar40 >> 0x10);
            uVar66 = (undefined1)((uint)fVar40 >> 0x18);
            fVar102 = (float)((ulong)uVar92 >> 0x20) * fVar102;
            uVar68 = SUB41(fVar102,0);
            uVar70 = (undefined1)((uint)fVar102 >> 8);
            uVar72 = (undefined1)((uint)fVar102 >> 0x10);
            uVar74 = (undefined1)((uint)fVar102 >> 0x18);
            fVar104 = (float)*(undefined8 *)(lVar33 + 0x80);
            fVar102 = (float)uVar86 * fVar104;
            fVar76 = (float)((ulong)uVar86 >> 0x20) * fVar104;
            fVar103 = (float)uVar85 * fVar104;
            fVar104 = (float)((ulong)uVar85 >> 0x20) * fVar104;
            *(ulong *)(lVar33 + 0x38) =
                 CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar68,fVar40))));
            *(ulong *)(lVar33 + 0x30) =
                 CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar52,fVar101))));
            *(undefined8 *)(lVar33 + 0x48) = *(undefined8 *)(lVar33 + 0x68);
            *(undefined8 *)(lVar33 + 0x40) = *(undefined8 *)(lVar33 + 0x60);
            fVar101 = (float)((ulong)*(undefined8 *)(lVar33 + 0x80) >> 0x20);
            uVar86 = CONCAT44((float)((ulong)uVar93 >> 0x20) * fVar101,(float)uVar93 * fVar101);
            uVar88 = CONCAT44((float)((ulong)uVar88 >> 0x20) * fVar101,(float)uVar88 * fVar101);
            *(ulong *)(lVar33 + 0x18) = CONCAT44(fVar104,fVar103);
            *(ulong *)(lVar33 + 0x10) = CONCAT44(fVar76,fVar102);
            *(undefined8 *)(lVar33 + 0x28) = uVar88;
            *(undefined8 *)(lVar33 + 0x20) = uVar86;
          }
          fVar101 = (float)uVar37;
          fVar40 = (float)((ulong)uVar37 >> 0x20);
          auVar29._4_4_ =
               fVar76 * fVar101 + (float)((ulong)uVar86 >> 0x20) * fVar40 +
               (float)CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(uVar54,uVar52))) * fVar41;
          auVar29._0_4_ =
               fVar102 * fVar101 + (float)uVar86 * fVar40 +
               (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44))) * fVar41;
          auVar29._12_4_ =
               fVar104 * fVar101 + (float)((ulong)uVar88 >> 0x20) * fVar40 +
               (float)CONCAT13(uVar74,CONCAT12(uVar72,CONCAT11(uVar70,uVar68))) * fVar41;
          auVar29._8_4_ =
               fVar103 * fVar101 + (float)uVar88 * fVar40 +
               (float)CONCAT13(uVar66,CONCAT12(uVar64,CONCAT11(uVar62,uVar60))) * fVar41;
          (**(code **)(*(long *)(lVar33 + -8) + 0x18))((long *)(lVar33 + -8));
          return auVar29;
        }
        break;
      }
      iVar35 = iVar32;
    } while (iVar32 != 0);
  }
LAB_00727bbc:
  if (*(char *)(param_5 + 0xf0) == '\0') {
    return *(undefined1 (*) [16])(param_5 + 0x80);
  }
  auVar39 = FUN_0075e360(param_5 + 0xc0);
  *(undefined1 *)(param_5 + 0xf0) = 0;
  *(undefined1 (*) [16])(param_5 + 0x80) = auVar39;
  *(undefined8 *)(param_5 + 0x98) = uVar86;
  *(undefined8 *)(param_5 + 0x90) = uVar88;
  *(undefined8 *)(param_5 + 0xa8) = uVar37;
  *(undefined8 *)(param_5 + 0xa0) = uVar42;
  *(undefined8 *)(param_5 + 0xb8) = uVar90;
  *(undefined8 *)(param_5 + 0xb0) = uVar85;
  return auVar39;
}


