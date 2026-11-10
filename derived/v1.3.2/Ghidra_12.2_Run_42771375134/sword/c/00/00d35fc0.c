/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d35fc0; name: FUN_00d35fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00d35fc0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
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
  undefined1 auVar29 [12];
  undefined *puVar30;
  int iVar31;
  undefined8 uVar32;
  undefined *puVar33;
  int iVar34;
  long *plVar35;
  long lVar36;
  undefined8 uVar37;
  undefined1 auVar38 [12];
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  float fVar74;
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
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar30 = PTR_DAT_02715b90;
  uVar90 = param_4._8_8_;
  uVar85 = param_4._0_8_;
  uVar88 = param_3._8_8_;
  uVar86 = param_3._0_8_;
  uVar37 = param_2._8_8_;
  uVar32 = param_2._0_8_;
  lVar36 = *(long *)(param_5 + 0x108);
  if ((lVar36 != 0) && (*(int *)(lVar36 + 0x54) != 0)) {
    piVar1 = (int *)(lVar36 + 0x54);
    puVar33 = PTR_DAT_02715b98;
    iVar34 = *(int *)(lVar36 + 0x54);
    do {
      while( true ) {
        plVar35 = *(long **)(lVar36 + 0x58);
        if (((*puVar30 & 1) == 0) &&
           (iVar31 = __cxa_guard_acquire(puVar30), puVar33 = PTR_DAT_02715b98, iVar31 != 0)) {
          uVar92 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02715b98 = uVar92;
          __cxa_guard_release(puVar30);
          puVar33 = PTR_DAT_02715b98;
        }
        while( true ) {
          if (plVar35 == (long *)0x0) goto LAB_00d360f4;
          if (plVar35 == (long *)puVar33) break;
          plVar35 = (long *)*plVar35;
        }
        iVar31 = *piVar1;
        if (iVar31 == iVar34) break;
        ClearExclusiveLocal();
        iVar34 = iVar31;
        if (iVar31 == 0) goto LAB_00d360f4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar34 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar36 = *(long *)(lVar36 + 0x60);
        if (lVar36 != 0) {
          iVar34 = *(int *)(param_5 + 0x118);
          plVar35 = (long *)(lVar36 + -0x50);
          if (iVar34 < 0) {
            if (*(char *)(param_5 + 0xf0) == '\0') {
              auVar38 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
            }
            else {
              auVar40 = FUN_0075e360(param_5 + 0xc0);
              auVar38 = auVar40._0_12_;
              *(undefined1 *)(param_5 + 0xf0) = 0;
              *(undefined1 (*) [16])(param_5 + 0x80) = auVar40;
              *(undefined8 *)(param_5 + 0x98) = uVar37;
              *(undefined8 *)(param_5 + 0x90) = uVar32;
              *(undefined8 *)(param_5 + 0xa8) = uVar88;
              *(undefined8 *)(param_5 + 0xa0) = uVar86;
              *(undefined8 *)(param_5 + 0xb8) = uVar90;
              *(undefined8 *)(param_5 + 0xb0) = uVar85;
            }
            local_40 = auVar38._0_8_;
            uStack_38._0_4_ = auVar38._8_4_;
            auVar40 = FUN_00727a90(plVar35);
          }
          else {
            if (*(char *)(param_5 + 0xf0) == '\0') {
              auVar38 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
            }
            else {
              auVar40 = FUN_0075e360(param_5 + 0xc0);
              auVar38 = auVar40._0_12_;
              iVar34 = *(int *)(param_5 + 0x118);
              *(undefined1 *)(param_5 + 0xf0) = 0;
              *(undefined1 (*) [16])(param_5 + 0x80) = auVar40;
              *(undefined8 *)(param_5 + 0x98) = uVar37;
              *(undefined8 *)(param_5 + 0x90) = uVar32;
              *(undefined8 *)(param_5 + 0xa8) = uVar88;
              *(undefined8 *)(param_5 + 0xa0) = uVar86;
              *(undefined8 *)(param_5 + 0xb8) = uVar90;
              *(undefined8 *)(param_5 + 0xb0) = uVar85;
            }
            local_40 = auVar38._0_8_;
            uStack_38._0_4_ = auVar38._8_4_;
            auVar40 = (**(code **)(*plVar35 + 0x78))(plVar35,iVar34);
          }
          fVar41 = (float)local_40;
          fVar101 = (float)((ulong)local_40 >> 0x20);
          fVar78 = (float)uVar86 * (float)uStack_38;
          fVar102 = (float)((ulong)uVar86 >> 0x20) * (float)uStack_38;
          uStack_38 = CONCAT44(auVar40._12_4_ * fVar41 + (float)((ulong)uVar37 >> 0x20) * fVar101 +
                               (float)((ulong)uVar88 >> 0x20) * (float)uStack_38,
                               auVar40._8_4_ * fVar41 + (float)uVar37 * fVar101 +
                               (float)uVar88 * (float)uStack_38);
          local_40 = CONCAT44(auVar40._4_4_ * fVar41 + (float)((ulong)uVar32 >> 0x20) * fVar101 +
                              fVar102,auVar40._0_4_ * fVar41 + (float)uVar32 * fVar101 + fVar78);
          goto LAB_00d3649c;
        }
        break;
      }
      iVar34 = iVar31;
    } while (iVar31 != 0);
  }
LAB_00d360f4:
  puVar30 = PTR_DAT_02715078;
  lVar36 = *(long *)(param_5 + 0xf8);
  if ((lVar36 != 0) && (*(int *)(lVar36 + 0x54) != 0)) {
    piVar1 = (int *)(lVar36 + 0x54);
    puVar33 = PTR_DAT_02715080;
    iVar34 = *(int *)(lVar36 + 0x54);
    do {
      while( true ) {
        plVar35 = *(long **)(lVar36 + 0x58);
        if (((*puVar30 & 1) == 0) &&
           (iVar31 = __cxa_guard_acquire(puVar30), puVar33 = PTR_DAT_02715080, iVar31 != 0)) {
          uVar32 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar32;
          __cxa_guard_release(puVar30);
          puVar33 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar35 == (long *)0x0) goto LAB_00d361d8;
          uStack_38 = 0;
          local_40 = 0;
          if (plVar35 == (long *)puVar33) break;
          plVar35 = (long *)*plVar35;
        }
        iVar31 = *piVar1;
        if (iVar31 != iVar34) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar34 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar36 = *(long *)(lVar36 + 0x60);
          if (lVar36 != 0) {
            if (*(char *)(param_5 + 0xf0) == '\0') {
              auVar38 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
              auVar29 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x80),0);
              if (*(char *)(lVar36 + 0x70) == '\0') goto LAB_00d363b0;
LAB_00d36268:
              uVar37 = auVar38._0_8_;
              fVar41 = auVar38._8_4_;
              uVar86 = *(undefined8 *)(lVar36 + 0x58);
              uVar32 = *(undefined8 *)(lVar36 + 0x50);
              bVar42 = (byte)uVar32 & (byte)DAT_01d4ab50;
              bVar44 = (byte)((ulong)uVar32 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
              bVar46 = (byte)((ulong)uVar32 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
              bVar48 = (byte)((ulong)uVar32 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
              bVar50 = (byte)((ulong)uVar32 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
              bVar52 = (byte)((ulong)uVar32 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
              bVar54 = (byte)((ulong)uVar32 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
              bVar56 = (byte)((ulong)uVar32 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
              bVar58 = (byte)uVar86 & (byte)DAT_01d4ab58;
              bVar60 = (byte)((ulong)uVar86 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
              bVar62 = (byte)((ulong)uVar86 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
              bVar64 = (byte)((ulong)uVar86 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
              bVar66 = (byte)((ulong)uVar86 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
              bVar68 = (byte)((ulong)uVar86 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
              bVar70 = (byte)((ulong)uVar86 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
              bVar72 = (byte)((ulong)uVar86 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
              uVar88 = NEON_ext(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,
                                                  CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,
                                                  bVar42))))))),
                                CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,
                                                  CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,
                                                  bVar42))))))),4,1);
              fVar91 = (float)((ulong)uVar88 >> 0x20);
              auVar40[1] = bVar44;
              auVar40[0] = bVar42;
              auVar40[2] = bVar46;
              auVar40[3] = bVar48;
              auVar40[4] = bVar50;
              auVar40[5] = bVar52;
              auVar40[6] = bVar54;
              auVar40[7] = bVar56;
              auVar40[8] = bVar58;
              auVar40[9] = bVar60;
              auVar40[10] = bVar62;
              auVar40[0xb] = bVar64;
              auVar40[0xc] = bVar66;
              auVar40[0xd] = bVar68;
              auVar40[0xe] = bVar70;
              auVar40[0xf] = bVar72;
              uVar32 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5188);
              fVar74 = (float)uVar32;
              fVar76 = (float)((ulong)uVar32 >> 0x20);
              auVar4[1] = bVar44;
              auVar4[0] = bVar42;
              auVar4[2] = bVar46;
              auVar4[3] = bVar48;
              auVar4[4] = bVar50;
              auVar4[5] = bVar52;
              auVar4[6] = bVar54;
              auVar4[7] = bVar56;
              auVar4[8] = bVar58;
              auVar4[9] = bVar60;
              auVar4[10] = bVar62;
              auVar4[0xb] = bVar64;
              auVar4[0xc] = bVar66;
              auVar4[0xd] = bVar68;
              auVar4[0xe] = bVar70;
              auVar4[0xf] = bVar72;
              uVar85 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5048);
              auVar5[1] = bVar44;
              auVar5[0] = bVar42;
              auVar5[2] = bVar46;
              auVar5[3] = bVar48;
              auVar5[4] = bVar50;
              auVar5[5] = bVar52;
              auVar5[6] = bVar54;
              auVar5[7] = bVar56;
              auVar5[8] = bVar58;
              auVar5[9] = bVar60;
              auVar5[10] = bVar62;
              auVar5[0xb] = bVar64;
              auVar5[0xc] = bVar66;
              auVar5[0xd] = bVar68;
              auVar5[0xe] = bVar70;
              auVar5[0xf] = bVar72;
              uVar92 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
              auVar6[1] = bVar44;
              auVar6[0] = bVar42;
              auVar6[2] = bVar46;
              auVar6[3] = bVar48;
              auVar6[4] = bVar50;
              auVar6[5] = bVar52;
              auVar6[6] = bVar54;
              auVar6[7] = bVar56;
              auVar6[8] = bVar58;
              auVar6[9] = bVar60;
              auVar6[10] = bVar62;
              auVar6[0xb] = bVar64;
              auVar6[0xc] = bVar66;
              auVar6[0xd] = bVar68;
              auVar6[0xe] = bVar70;
              auVar6[0xf] = bVar72;
              uVar90 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5158);
              auVar7[1] = bVar44;
              auVar7[0] = bVar42;
              auVar7[2] = bVar46;
              auVar7[3] = bVar48;
              auVar7[4] = bVar50;
              auVar7[5] = bVar52;
              auVar7[6] = bVar54;
              auVar7[7] = bVar56;
              auVar7[8] = bVar58;
              auVar7[9] = bVar60;
              auVar7[10] = bVar62;
              auVar7[0xb] = bVar64;
              auVar7[0xc] = bVar66;
              auVar7[0xd] = bVar68;
              auVar7[0xe] = bVar70;
              auVar7[0xf] = bVar72;
              uVar32 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
              *(undefined1 *)(lVar36 + 0x70) = 0;
              fVar79 = (float)uVar90;
              fVar81 = (float)((ulong)uVar90 >> 0x20);
              fVar89 = (float)uVar88 * (float)uVar88;
              fVar91 = fVar91 * fVar91;
              fVar87 = (float)((ulong)uVar85 >> 0x20);
              fVar84 = (float)uVar85 * (float)uVar85;
              fVar87 = fVar87 * fVar87;
              fVar101 = (float)uVar92 *
                        (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar42)));
              fVar102 = (float)((ulong)uVar92 >> 0x20) *
                        (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
              fVar103 = fVar74 * (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58)));
              fVar104 = fVar76 * (float)CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar68,bVar66)));
              fVar78 = (float)((ulong)uVar86 >> 0x20);
              fVar75 = (float)uVar32 * fVar78;
              fVar77 = (float)((ulong)uVar32 >> 0x20) * fVar78;
              fVar101 = fVar101 + fVar101;
              fVar102 = fVar102 + fVar102;
              fVar103 = fVar103 + fVar103;
              fVar104 = fVar104 + fVar104;
              fVar75 = fVar75 + fVar75;
              fVar77 = fVar77 + fVar77;
              fVar80 = fVar79 * fVar78 + fVar79 * fVar78;
              fVar82 = fVar81 * fVar78 + fVar81 * fVar78;
              fVar16 = fVar101 + fVar75;
              fVar78 = fVar102 + fVar77;
              uVar65 = SUB41(fVar78,0);
              uVar67 = (undefined1)((uint)fVar78 >> 8);
              uVar69 = (undefined1)((uint)fVar78 >> 0x10);
              uVar71 = (undefined1)((uint)fVar78 >> 0x18);
              fVar78 = fVar103 + fVar80;
              uVar73 = SUB41(fVar78,0);
              uVar94 = (undefined1)((uint)fVar78 >> 8);
              uVar95 = (undefined1)((uint)fVar78 >> 0x10);
              uVar96 = (undefined1)((uint)fVar78 >> 0x18);
              fVar78 = fVar104 + fVar82;
              uVar97 = SUB41(fVar78,0);
              uVar98 = (undefined1)((uint)fVar78 >> 8);
              uVar99 = (undefined1)((uint)fVar78 >> 0x10);
              uVar100 = (undefined1)((uint)fVar78 >> 0x18);
              fVar101 = fVar101 - fVar75;
              fVar102 = fVar102 - fVar77;
              fVar103 = fVar103 - fVar80;
              fVar104 = fVar104 - fVar82;
              fVar78 = (float)_DAT_01d4a130 - (fVar84 + fVar84 + fVar89 + fVar89);
              fVar75 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar87 + fVar87 + fVar91 + fVar91);
              uVar43 = SUB41(fVar75,0);
              uVar45 = (undefined1)((uint)fVar75 >> 8);
              uVar47 = (undefined1)((uint)fVar75 >> 0x10);
              uVar49 = (undefined1)((uint)fVar75 >> 0x18);
              fVar75 = (float)_UNK_01d4a138 -
                       (fVar79 * fVar79 + fVar79 * fVar79 + fVar74 * fVar74 + fVar74 * fVar74);
              uVar51 = (undefined1)((uint)fVar75 >> 8);
              uVar53 = (undefined1)((uint)fVar75 >> 0x10);
              uVar55 = (undefined1)((uint)fVar75 >> 0x18);
              fVar74 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
                       (fVar81 * fVar81 + fVar81 * fVar81 + fVar76 * fVar76 + fVar76 * fVar76);
              uVar57 = SUB41(fVar74,0);
              uVar59 = (undefined1)((uint)fVar74 >> 8);
              uVar61 = (undefined1)((uint)fVar74 >> 0x10);
              uVar63 = (undefined1)((uint)fVar74 >> 0x18);
              auVar12[4] = uVar65;
              auVar12._0_4_ = fVar16;
              auVar12[5] = uVar67;
              auVar12[6] = uVar69;
              auVar12[7] = uVar71;
              auVar12[8] = uVar73;
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
              uVar32 = a64_TBL(ZEXT816(0),auVar12,auVar17,DAT_01cd5250);
              auVar13[4] = uVar65;
              auVar13._0_4_ = fVar16;
              auVar13[5] = uVar67;
              auVar13[6] = uVar69;
              auVar13[7] = uVar71;
              auVar13[8] = uVar73;
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
              auVar14[4] = uVar65;
              auVar14._0_4_ = fVar16;
              auVar14[5] = uVar67;
              auVar14[6] = uVar69;
              auVar14[7] = uVar71;
              auVar14[8] = uVar73;
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
              auVar15[4] = uVar65;
              auVar15._0_4_ = fVar16;
              auVar15[5] = uVar67;
              auVar15[6] = uVar69;
              auVar15[7] = uVar71;
              auVar15[8] = uVar73;
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
              auVar8[4] = uVar43;
              auVar8._0_4_ = fVar78;
              auVar8[5] = uVar45;
              auVar8[6] = uVar47;
              auVar8[7] = uVar49;
              auVar8[8] = SUB41(fVar75,0);
              auVar8[9] = uVar51;
              auVar8[10] = uVar53;
              auVar8[0xb] = uVar55;
              auVar8[0xc] = uVar57;
              auVar8[0xd] = uVar59;
              auVar8[0xe] = uVar61;
              auVar8[0xf] = uVar63;
              auVar10._8_4_ = (int)uVar86;
              auVar10._0_8_ = uVar32;
              auVar10._12_4_ = uVar83;
              uVar88 = a64_TBL(ZEXT816(0),auVar8,auVar10,DAT_01cd50d8);
              auVar9[4] = uVar43;
              auVar9._0_4_ = fVar78;
              auVar9[5] = uVar45;
              auVar9[6] = uVar47;
              auVar9[7] = uVar49;
              auVar9[8] = SUB41(fVar75,0);
              auVar9[9] = uVar51;
              auVar9[10] = uVar53;
              auVar9[0xb] = uVar55;
              auVar9[0xc] = uVar57;
              auVar9[0xd] = uVar59;
              auVar9[0xe] = uVar61;
              auVar9[0xf] = uVar63;
              auVar11._8_4_ = (int)uVar86;
              auVar11._0_8_ = uVar32;
              auVar11._12_4_ = uVar83;
              uVar92 = a64_TBL(ZEXT816(0),auVar9,auVar11,DAT_01cd4fb8);
              uVar105 = (undefined4)
                        (CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,fVar75))))
                        >> 0x20);
              uVar83 = (undefined4)
                       (CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,fVar78))))
                       >> 0x20);
              auVar21._4_4_ = uVar83;
              auVar21._0_4_ = fVar78;
              auVar21._8_4_ = fVar75;
              auVar21._12_4_ = uVar105;
              auVar25._8_8_ = uVar90;
              auVar25._0_8_ = uVar106;
              uVar86 = a64_TBL(ZEXT816(0),auVar21,auVar25,DAT_01cd50b8);
              auVar22._4_4_ = uVar83;
              auVar22._0_4_ = fVar78;
              auVar22._8_4_ = fVar75;
              auVar22._12_4_ = uVar105;
              auVar26._8_8_ = uVar90;
              auVar26._0_8_ = uVar106;
              uVar85 = a64_TBL(ZEXT816(0),auVar22,auVar26,DAT_01cd5308);
              auVar23._4_4_ = uVar83;
              auVar23._0_4_ = fVar78;
              auVar23._8_4_ = fVar75;
              auVar23._12_4_ = uVar105;
              auVar27._8_8_ = uVar90;
              auVar27._0_8_ = uVar106;
              uVar93 = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd5008);
              auVar24._4_4_ = uVar83;
              auVar24._0_4_ = fVar78;
              auVar24._8_4_ = fVar75;
              auVar24._12_4_ = uVar105;
              auVar28._8_8_ = uVar90;
              auVar28._0_8_ = uVar106;
              uVar32 = a64_TBL(ZEXT816(0),auVar24,auVar28,DAT_01cd4fb0);
              fVar78 = (float)*(undefined8 *)(lVar36 + 0x88);
              fVar103 = (float)uVar88 * fVar78;
              uVar43 = SUB41(fVar103,0);
              uVar45 = (undefined1)((uint)fVar103 >> 8);
              uVar47 = (undefined1)((uint)fVar103 >> 0x10);
              uVar49 = (undefined1)((uint)fVar103 >> 0x18);
              fVar101 = (float)((ulong)uVar88 >> 0x20) * fVar78;
              uVar51 = SUB41(fVar101,0);
              uVar53 = (undefined1)((uint)fVar101 >> 8);
              uVar55 = (undefined1)((uint)fVar101 >> 0x10);
              uVar57 = (undefined1)((uint)fVar101 >> 0x18);
              fVar104 = (float)uVar92 * fVar78;
              uVar59 = SUB41(fVar104,0);
              uVar61 = (undefined1)((uint)fVar104 >> 8);
              uVar63 = (undefined1)((uint)fVar104 >> 0x10);
              uVar65 = (undefined1)((uint)fVar104 >> 0x18);
              fVar78 = (float)((ulong)uVar92 >> 0x20) * fVar78;
              uVar67 = SUB41(fVar78,0);
              uVar69 = (undefined1)((uint)fVar78 >> 8);
              uVar71 = (undefined1)((uint)fVar78 >> 0x10);
              uVar73 = (undefined1)((uint)fVar78 >> 0x18);
              fVar75 = (float)*(undefined8 *)(lVar36 + 0x80);
              fVar101 = (float)uVar86 * fVar75;
              fVar78 = (float)((ulong)uVar86 >> 0x20) * fVar75;
              fVar102 = (float)uVar85 * fVar75;
              fVar75 = (float)((ulong)uVar85 >> 0x20) * fVar75;
              *(ulong *)(lVar36 + 0x38) =
                   CONCAT17(uVar73,CONCAT16(uVar71,CONCAT15(uVar69,CONCAT14(uVar67,fVar104))));
              *(ulong *)(lVar36 + 0x30) =
                   CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,fVar103))));
              *(undefined8 *)(lVar36 + 0x48) = *(undefined8 *)(lVar36 + 0x68);
              *(undefined8 *)(lVar36 + 0x40) = *(undefined8 *)(lVar36 + 0x60);
              fVar103 = (float)((ulong)*(undefined8 *)(lVar36 + 0x80) >> 0x20);
              uVar86 = CONCAT44((float)((ulong)uVar93 >> 0x20) * fVar103,(float)uVar93 * fVar103);
              uVar88 = CONCAT44((float)((ulong)uVar32 >> 0x20) * fVar103,(float)uVar32 * fVar103);
              *(ulong *)(lVar36 + 0x18) = CONCAT44(fVar75,fVar102);
              *(ulong *)(lVar36 + 0x10) = CONCAT44(fVar78,fVar101);
              *(undefined8 *)(lVar36 + 0x28) = uVar88;
              *(undefined8 *)(lVar36 + 0x20) = uVar86;
            }
            else {
              uVar32 = local_40;
              uVar37 = uStack_38;
              uVar86 = local_40;
              uVar88 = uStack_38;
              auVar40 = FUN_0075e360(0,param_5 + 0xc0);
              auVar38 = auVar40._0_12_;
              *(undefined1 *)(param_5 + 0xf0) = 0;
              *(undefined1 (*) [16])(param_5 + 0x80) = auVar40;
              *(undefined8 *)(param_5 + 0x98) = uStack_38;
              *(undefined8 *)(param_5 + 0x90) = local_40;
              *(undefined8 *)(param_5 + 0xa8) = uVar37;
              *(undefined8 *)(param_5 + 0xa0) = uVar32;
              *(undefined8 *)(param_5 + 0xb8) = uVar88;
              *(undefined8 *)(param_5 + 0xb0) = uVar86;
              auVar29 = auVar38;
              if (*(char *)(lVar36 + 0x70) != '\0') goto LAB_00d36268;
LAB_00d363b0:
              uVar37 = auVar29._0_8_;
              fVar41 = auVar29._8_4_;
              fVar102 = (float)*(undefined8 *)(lVar36 + 0x18);
              fVar75 = (float)((ulong)*(undefined8 *)(lVar36 + 0x18) >> 0x20);
              fVar101 = (float)*(undefined8 *)(lVar36 + 0x10);
              fVar78 = (float)((ulong)*(undefined8 *)(lVar36 + 0x10) >> 0x20);
              uVar88 = *(undefined8 *)(lVar36 + 0x28);
              uVar86 = *(undefined8 *)(lVar36 + 0x20);
              uVar32 = *(undefined8 *)(lVar36 + 0x38);
              uVar59 = (undefined1)uVar32;
              uVar61 = (undefined1)((ulong)uVar32 >> 8);
              uVar63 = (undefined1)((ulong)uVar32 >> 0x10);
              uVar65 = (undefined1)((ulong)uVar32 >> 0x18);
              uVar67 = (undefined1)((ulong)uVar32 >> 0x20);
              uVar69 = (undefined1)((ulong)uVar32 >> 0x28);
              uVar71 = (undefined1)((ulong)uVar32 >> 0x30);
              uVar73 = (undefined1)((ulong)uVar32 >> 0x38);
              uVar32 = *(undefined8 *)(lVar36 + 0x30);
              uVar43 = (undefined1)uVar32;
              uVar45 = (undefined1)((ulong)uVar32 >> 8);
              uVar47 = (undefined1)((ulong)uVar32 >> 0x10);
              uVar49 = (undefined1)((ulong)uVar32 >> 0x18);
              uVar51 = (undefined1)((ulong)uVar32 >> 0x20);
              uVar53 = (undefined1)((ulong)uVar32 >> 0x28);
              uVar55 = (undefined1)((ulong)uVar32 >> 0x30);
              uVar57 = (undefined1)((ulong)uVar32 >> 0x38);
            }
            fVar103 = (float)uVar37;
            fVar104 = (float)((ulong)uVar37 >> 0x20);
            local_40 = CONCAT44(fVar78 * fVar103 + (float)((ulong)uVar86 >> 0x20) * fVar104 +
                                (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51))) *
                                fVar41,fVar101 * fVar103 + (float)uVar86 * fVar104 +
                                       (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar45,uVar43
                                                                                      ))) * fVar41);
            uStack_38 = CONCAT44(fVar75 * fVar103 + (float)((ulong)uVar88 >> 0x20) * fVar104 +
                                 (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))) *
                                 fVar41,fVar102 * fVar103 + (float)uVar88 * fVar104 +
                                        (float)CONCAT13(uVar65,CONCAT12(uVar63,CONCAT11(uVar61,
                                                  uVar59))) * fVar41);
LAB_00d3649c:
            (**(code **)(*(long *)(lVar36 + -8) + 0x18))((long *)(lVar36 + -8));
          }
          goto LAB_00d361e4;
        }
        iVar34 = iVar31;
        if (iVar31 == 0) goto LAB_00d361d8;
      }
      ClearExclusiveLocal();
      iVar34 = iVar31;
    } while (iVar31 != 0);
  }
LAB_00d361d8:
  uStack_38 = 0;
  local_40 = 0;
LAB_00d361e4:
  auVar39._8_8_ = uStack_38;
  auVar39._0_8_ = local_40;
  return auVar39;
}


