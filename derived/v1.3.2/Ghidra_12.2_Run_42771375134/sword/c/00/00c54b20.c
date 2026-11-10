/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c54b20; name: FUN_00c54b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c54b20(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined2 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  int iVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  long *plVar39;
  float fVar40;
  undefined1 uVar41;
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
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  float fVar66;
  int iVar67;
  float fVar73;
  undefined8 uVar68;
  int iVar75;
  int iVar76;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  undefined1 auVar72 [16];
  int iVar77;
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar86;
  undefined8 uVar82;
  float fVar87;
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar105;
  undefined8 uVar104;
  float fVar106;
  float fVar107;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar36 = *(long *)(param_1 + 0x68);
  if (lVar36 == 0) {
    return;
  }
  lVar37 = *(long *)(lVar36 + 0x120);
  iVar38 = *(int *)(*(long *)(lVar36 + 0x128) + 0x40);
  FUN_00723030(lVar37,iVar38);
  puVar33 = PTR_DAT_02715b98;
  puVar32 = PTR_DAT_02715b90;
  puVar31 = PTR_DAT_02715b88;
  puVar30 = PTR_DAT_02715b80;
  lVar36 = *(long *)(lVar37 + 0x1b8) + (long)iVar38 * 0x130;
  fVar23 = *(float *)(lVar37 + 0x60);
  fVar74 = *(float *)(lVar37 + 100);
  fVar24 = *(float *)(lVar37 + 0x68);
  fVar101 = *(float *)(lVar37 + 0x6c);
  auVar69 = *(undefined1 (*) [16])(lVar37 + 0x70);
  fVar25 = *(float *)(lVar37 + 0x80);
  fVar26 = *(float *)(lVar37 + 0x84);
  fVar27 = *(float *)(lVar37 + 0x88);
  fVar28 = *(float *)(lVar37 + 0x8c);
  fVar73 = *(float *)(lVar36 + 0xc0);
  fVar98 = *(float *)(lVar36 + 0xc4);
  fVar99 = *(float *)(lVar36 + 200);
  fVar81 = auVar69._0_4_;
  fVar86 = auVar69._4_4_;
  fVar87 = auVar69._8_4_;
  fVar88 = auVar69._12_4_;
  fVar40 = (float)*(undefined8 *)(lVar36 + 0xb0);
  fVar66 = (float)((ulong)*(undefined8 *)(lVar36 + 0xb0) >> 0x20);
  fVar103 = fVar23 * fVar73 + fVar81 * fVar98 + fVar25 * fVar99;
  fVar105 = fVar74 * fVar73 + fVar86 * fVar98 + fVar26 * fVar99;
  uVar104 = CONCAT44(fVar105,fVar103);
  fVar106 = fVar24 * fVar73 + fVar87 * fVar98 + fVar27 * fVar99;
  fVar107 = fVar101 * fVar73 + fVar88 * fVar98 + fVar28 * fVar99;
  uVar35 = CONCAT44(fVar107,fVar106);
  fVar73 = (float)*(undefined8 *)(lVar36 + 0xb8);
  fVar98 = fVar23 * fVar40 + fVar81 * fVar66 + fVar25 * fVar73;
  fVar99 = fVar74 * fVar40 + fVar86 * fVar66 + fVar26 * fVar73;
  fVar100 = fVar24 * fVar40 + fVar87 * fVar66 + fVar27 * fVar73;
  fVar102 = fVar101 * fVar40 + fVar88 * fVar66 + fVar28 * fVar73;
  fVar40 = (float)*(undefined8 *)(lVar36 + 0xd0);
  fVar66 = (float)((ulong)*(undefined8 *)(lVar36 + 0xd0) >> 0x20);
  fVar73 = (float)*(undefined8 *)(lVar36 + 0xd8);
  uStack_68 = CONCAT44(fVar102,fVar100);
  local_70 = CONCAT44(fVar99,fVar98);
  fVar74 = (float)((ulong)*(undefined8 *)(lVar37 + 0x90) >> 0x20) +
           fVar74 * fVar40 + fVar86 * fVar66 + fVar26 * fVar73;
  fVar101 = (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20) +
            fVar101 * fVar40 + fVar88 * fVar66 + fVar28 * fVar73;
  uStack_48 = CONCAT17((char)((uint)fVar101 >> 0x18),
                       CONCAT16((char)((uint)fVar101 >> 0x10),
                                CONCAT15((char)((uint)fVar101 >> 8),
                                         CONCAT14(SUB41(fVar101,0),
                                                  (float)*(undefined8 *)(lVar37 + 0x98) +
                                                  fVar24 * fVar40 + fVar87 * fVar66 +
                                                  fVar27 * fVar73))));
  local_50 = CONCAT17((char)((uint)fVar74 >> 0x18),
                      CONCAT16((char)((uint)fVar74 >> 0x10),
                               CONCAT15((char)((uint)fVar74 >> 8),
                                        CONCAT14(SUB41(fVar74,0),
                                                 (float)*(undefined8 *)(lVar37 + 0x90) +
                                                 fVar23 * fVar40 + fVar81 * fVar66 + fVar25 * fVar73
                                                ))));
  fVar103 = fVar103 * fVar103;
  fVar105 = fVar105 * fVar105;
  uVar41 = (undefined1)((uint)fVar105 >> 8);
  uVar43 = (undefined1)((uint)fVar105 >> 0x10);
  uVar45 = (undefined1)((uint)fVar105 >> 0x18);
  fVar106 = fVar106 * fVar106;
  uVar47 = (undefined1)((uint)fVar106 >> 8);
  uVar49 = (undefined1)((uint)fVar106 >> 0x10);
  uVar51 = (undefined1)((uint)fVar106 >> 0x18);
  fVar107 = fVar107 * fVar107;
  uVar53 = (undefined1)((uint)fVar107 >> 8);
  uVar55 = (undefined1)((uint)fVar107 >> 0x10);
  uVar64 = (undefined1)((uint)fVar107 >> 0x18);
  auVar69[4] = SUB41(fVar105,0);
  auVar69._0_4_ = fVar103;
  auVar69[5] = uVar41;
  auVar69[6] = uVar43;
  auVar69[7] = uVar45;
  auVar69[8] = SUB41(fVar106,0);
  auVar69[9] = uVar47;
  auVar69[10] = uVar49;
  auVar69[0xb] = uVar51;
  auVar69[0xc] = SUB41(fVar107,0);
  auVar69[0xd] = uVar53;
  auVar69[0xe] = uVar55;
  auVar69[0xf] = uVar64;
  auVar84[4] = SUB41(fVar105,0);
  auVar84._0_4_ = fVar103;
  auVar84[5] = uVar41;
  auVar84[6] = uVar43;
  auVar84[7] = uVar45;
  auVar84[8] = SUB41(fVar106,0);
  auVar84[9] = uVar47;
  auVar84[10] = uVar49;
  auVar84[0xb] = uVar51;
  auVar84[0xc] = SUB41(fVar107,0);
  auVar84[0xd] = uVar53;
  auVar84[0xe] = uVar55;
  auVar84[0xf] = uVar64;
  auVar69 = NEON_ext(auVar69,auVar84,8,1);
  fVar103 = auVar69._0_4_ + fVar103;
  fVar105 = auVar69._4_4_ + fVar105;
  fVar40 = fVar103 + fVar105;
  fVar103 = fVar103 + fVar105;
  uVar41 = SUB41(fVar40,0);
  uVar43 = (undefined1)((uint)fVar40 >> 8);
  uVar45 = (undefined1)((uint)fVar40 >> 0x10);
  uVar47 = (undefined1)((uint)fVar40 >> 0x18);
  uVar49 = SUB41(fVar103,0);
  uVar51 = (undefined1)((uint)fVar103 >> 8);
  uVar53 = (undefined1)((uint)fVar103 >> 0x10);
  uVar55 = (undefined1)((uint)fVar103 >> 0x18);
  if (DAT_01d4bac8 <= fVar40) {
    auVar91._0_4_ = fVar98 * fVar98;
    auVar91._4_4_ = fVar99 * fVar99;
    auVar91._8_4_ = fVar100 * fVar100;
    auVar91._12_4_ = fVar102 * fVar102;
    auVar69 = NEON_ext(auVar91,auVar91,8,1);
    fVar66 = auVar69._0_4_ + auVar91._0_4_;
    fVar73 = auVar69._4_4_ + auVar91._4_4_;
    fVar40 = fVar66 + fVar73;
    uVar68 = CONCAT44(fVar66 + fVar73,fVar40);
    if (DAT_01d4bac8 <= fVar40) goto LAB_00c54f24;
  }
  lVar36 = *(long *)(param_1 + 0x60);
  piVar1 = (int *)(lVar36 + 0x54);
  iVar38 = *(int *)(lVar36 + 0x54);
  local_60 = uVar104;
  uStack_58 = uVar35;
  do {
    while( true ) {
      plVar39 = *(long **)(lVar36 + 0x58);
      if (((*puVar30 & 1) == 0) && (iVar34 = __cxa_guard_acquire(puVar30), iVar34 != 0)) {
        if (((*puVar32 & 1) == 0) && (iVar34 = __cxa_guard_acquire(puVar32), iVar34 != 0)) {
          uVar35 = FUN_00706e40();
          *(undefined8 *)puVar33 = uVar35;
          __cxa_guard_release(puVar32);
        }
        *(undefined **)puVar31 = puVar33;
        __cxa_guard_release(puVar30);
      }
      for (; plVar39 != (long *)puVar31; plVar39 = (long *)*plVar39) {
      }
      iVar34 = *piVar1;
      if (iVar34 == iVar38) break;
      ClearExclusiveLocal();
      iVar38 = iVar34;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar38 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar38 = iVar34;
  } while (cVar2 != '\0');
  lVar37 = *(long *)(lVar36 + 0x60);
  lVar36 = 0;
  if (lVar37 != 0) {
    lVar36 = lVar37 + -0x50;
  }
  uVar104 = *(undefined8 *)(lVar36 + 0xd8);
  uVar35 = *(undefined8 *)(lVar36 + 0xd0);
  bVar42 = (byte)uVar35 & (byte)DAT_01d4ab50;
  bVar44 = (byte)((ulong)uVar35 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar46 = (byte)((ulong)uVar35 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar48 = (byte)((ulong)uVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar50 = (byte)((ulong)uVar35 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar52 = (byte)((ulong)uVar35 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar54 = (byte)((ulong)uVar35 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar56 = (byte)((ulong)uVar35 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
  bVar57 = (byte)uVar104 & (byte)DAT_01d4ab58;
  bVar58 = (byte)((ulong)uVar104 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar59 = (byte)((ulong)uVar104 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar60 = (byte)((ulong)uVar104 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar61 = (byte)((ulong)uVar104 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar62 = (byte)((ulong)uVar104 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar63 = (byte)((ulong)uVar104 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar65 = (byte)((ulong)uVar104 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  uVar35 = NEON_ext(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(bVar48,
                                                  CONCAT12(bVar46,CONCAT11(bVar44,bVar42))))))),
                    CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(bVar48,
                                                  CONCAT12(bVar46,CONCAT11(bVar44,bVar42))))))),4,1)
  ;
  fVar66 = (float)((ulong)uVar35 >> 0x20);
  auVar5[1] = bVar44;
  auVar5[0] = bVar42;
  auVar5[2] = bVar46;
  auVar5[3] = bVar48;
  auVar5[4] = bVar50;
  auVar5[5] = bVar52;
  auVar5[6] = bVar54;
  auVar5[7] = bVar56;
  auVar5[8] = bVar57;
  auVar5[9] = bVar58;
  auVar5[10] = bVar59;
  auVar5[0xb] = bVar60;
  auVar5[0xc] = bVar61;
  auVar5[0xd] = bVar62;
  auVar5[0xe] = bVar63;
  auVar5[0xf] = bVar65;
  uVar68 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5188);
  auVar6[1] = bVar44;
  auVar6[0] = bVar42;
  auVar6[2] = bVar46;
  auVar6[3] = bVar48;
  auVar6[4] = bVar50;
  auVar6[5] = bVar52;
  auVar6[6] = bVar54;
  auVar6[7] = bVar56;
  auVar6[8] = bVar57;
  auVar6[9] = bVar58;
  auVar6[10] = bVar59;
  auVar6[0xb] = bVar60;
  auVar6[0xc] = bVar61;
  auVar6[0xd] = bVar62;
  auVar6[0xe] = bVar63;
  auVar6[0xf] = bVar65;
  uVar78 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5048);
  auVar7[1] = bVar44;
  auVar7[0] = bVar42;
  auVar7[2] = bVar46;
  auVar7[3] = bVar48;
  auVar7[4] = bVar50;
  auVar7[5] = bVar52;
  auVar7[6] = bVar54;
  auVar7[7] = bVar56;
  auVar7[8] = bVar57;
  auVar7[9] = bVar58;
  auVar7[10] = bVar59;
  auVar7[0xb] = bVar60;
  auVar7[0xc] = bVar61;
  auVar7[0xd] = bVar62;
  auVar7[0xe] = bVar63;
  auVar7[0xf] = bVar65;
  uVar82 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5158);
  fVar101 = (float)uVar68;
  fVar107 = (float)((ulong)uVar68 >> 0x20);
  auVar8[1] = bVar44;
  auVar8[0] = bVar42;
  auVar8[2] = bVar46;
  auVar8[3] = bVar48;
  auVar8[4] = bVar50;
  auVar8[5] = bVar52;
  auVar8[6] = bVar54;
  auVar8[7] = bVar56;
  auVar8[8] = bVar57;
  auVar8[9] = bVar58;
  auVar8[10] = bVar59;
  auVar8[0xb] = bVar60;
  auVar8[0xc] = bVar61;
  auVar8[0xd] = bVar62;
  auVar8[0xe] = bVar63;
  auVar8[0xf] = bVar65;
  uVar68 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
  fVar40 = (float)uVar35 * (float)uVar35;
  fVar66 = fVar66 * fVar66;
  fVar73 = (float)uVar78 * (float)uVar78;
  fVar103 = (float)((ulong)uVar78 >> 0x20);
  fVar103 = fVar103 * fVar103;
  fVar98 = (float)uVar82;
  fVar74 = (float)((ulong)uVar82 >> 0x20);
  fVar105 = (float)uVar68 * (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar42)));
  fVar99 = (float)((ulong)uVar68 >> 0x20) *
           (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
  fVar106 = fVar101 * (float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57)));
  fVar100 = fVar107 * (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar62,bVar61)));
  auVar9[1] = bVar44;
  auVar9[0] = bVar42;
  auVar9[2] = bVar46;
  auVar9[3] = bVar48;
  auVar9[4] = bVar50;
  auVar9[5] = bVar52;
  auVar9[6] = bVar54;
  auVar9[7] = bVar56;
  auVar9[8] = bVar57;
  auVar9[9] = bVar58;
  auVar9[10] = bVar59;
  auVar9[0xb] = bVar60;
  auVar9[0xc] = bVar61;
  auVar9[0xd] = bVar62;
  auVar9[0xe] = bVar63;
  auVar9[0xf] = bVar65;
  uVar35 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  fVar105 = fVar105 + fVar105;
  fVar99 = fVar99 + fVar99;
  fVar106 = fVar106 + fVar106;
  fVar100 = fVar100 + fVar100;
  auVar70._0_8_ =
       CONCAT44((float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar103 + fVar103 + fVar66 + fVar66),
                (float)_DAT_01d4a130 - (fVar73 + fVar73 + fVar40 + fVar40));
  auVar70._8_4_ =
       (float)_UNK_01d4a138 -
       (fVar98 * fVar98 + fVar98 * fVar98 + fVar101 * fVar101 + fVar101 * fVar101);
  auVar70._12_4_ =
       (float)((ulong)_UNK_01d4a138 >> 0x20) -
       (fVar74 * fVar74 + fVar74 * fVar74 + fVar107 * fVar107 + fVar107 * fVar107);
  fVar103 = (float)((ulong)uVar104 >> 0x20);
  fVar40 = (float)uVar35 * fVar103;
  fVar66 = (float)((ulong)uVar35 >> 0x20) * fVar103;
  fVar40 = fVar40 + fVar40;
  fVar66 = fVar66 + fVar66;
  fVar73 = fVar98 * fVar103 + fVar98 * fVar103;
  fVar103 = fVar74 * fVar103 + fVar74 * fVar103;
  fVar98 = fVar105 + fVar40;
  fVar74 = fVar99 + fVar66;
  uVar41 = SUB41(fVar74,0);
  uVar43 = (undefined1)((uint)fVar74 >> 8);
  uVar45 = (undefined1)((uint)fVar74 >> 0x10);
  uVar47 = (undefined1)((uint)fVar74 >> 0x18);
  fVar74 = fVar106 + fVar73;
  uVar49 = SUB41(fVar74,0);
  uVar51 = (undefined1)((uint)fVar74 >> 8);
  uVar53 = (undefined1)((uint)fVar74 >> 0x10);
  uVar55 = (undefined1)((uint)fVar74 >> 0x18);
  fVar74 = fVar100 + fVar103;
  uVar64 = SUB41(fVar74,0);
  uVar95 = (undefined1)((uint)fVar74 >> 8);
  uVar96 = (undefined1)((uint)fVar74 >> 0x10);
  uVar97 = (undefined1)((uint)fVar74 >> 0x18);
  fVar105 = fVar105 - fVar40;
  fVar99 = fVar99 - fVar66;
  fVar106 = fVar106 - fVar73;
  fVar100 = fVar100 - fVar103;
  auVar15[4] = uVar41;
  auVar15._0_4_ = fVar98;
  auVar15[5] = uVar43;
  auVar15[6] = uVar45;
  auVar15[7] = uVar47;
  auVar15[8] = uVar49;
  auVar15[9] = uVar51;
  auVar15[10] = uVar53;
  auVar15[0xb] = uVar55;
  auVar15[0xc] = uVar64;
  auVar15[0xd] = uVar95;
  auVar15[0xe] = uVar96;
  auVar15[0xf] = uVar97;
  auVar19._4_4_ = fVar99;
  auVar19._0_4_ = fVar105;
  auVar19._8_4_ = fVar106;
  auVar19._12_4_ = fVar100;
  auVar79._0_8_ = a64_TBL(ZEXT816(0),auVar15,auVar19,DAT_01cd5250);
  auVar16[4] = uVar41;
  auVar16._0_4_ = fVar98;
  auVar16[5] = uVar43;
  auVar16[6] = uVar45;
  auVar16[7] = uVar47;
  auVar16[8] = uVar49;
  auVar16[9] = uVar51;
  auVar16[10] = uVar53;
  auVar16[0xb] = uVar55;
  auVar16[0xc] = uVar64;
  auVar16[0xd] = uVar95;
  auVar16[0xe] = uVar96;
  auVar16[0xf] = uVar97;
  auVar20._4_4_ = fVar99;
  auVar20._0_4_ = fVar105;
  auVar20._8_4_ = fVar106;
  auVar20._12_4_ = fVar100;
  uVar35 = a64_TBL(ZEXT816(0),auVar16,auVar20,DAT_01cd51f8);
  auVar79._8_8_ = uVar35;
  auVar17[4] = uVar41;
  auVar17._0_4_ = fVar98;
  auVar17[5] = uVar43;
  auVar17[6] = uVar45;
  auVar17[7] = uVar47;
  auVar17[8] = uVar49;
  auVar17[9] = uVar51;
  auVar17[10] = uVar53;
  auVar17[0xb] = uVar55;
  auVar17[0xc] = uVar64;
  auVar17[0xd] = uVar95;
  auVar17[0xe] = uVar96;
  auVar17[0xf] = uVar97;
  auVar21._4_4_ = fVar99;
  auVar21._0_4_ = fVar105;
  auVar21._8_4_ = fVar106;
  auVar21._12_4_ = fVar100;
  auVar89._0_8_ = a64_TBL(ZEXT816(0),auVar17,auVar21,DAT_01cd5430);
  auVar18[4] = uVar41;
  auVar18._0_4_ = fVar98;
  auVar18[5] = uVar43;
  auVar18[6] = uVar45;
  auVar18[7] = uVar47;
  auVar18[8] = uVar49;
  auVar18[9] = uVar51;
  auVar18[10] = uVar53;
  auVar18[0xb] = uVar55;
  auVar18[0xc] = uVar64;
  auVar18[0xd] = uVar95;
  auVar18[0xe] = uVar96;
  auVar18[0xf] = uVar97;
  auVar22._4_4_ = fVar99;
  auVar22._0_4_ = fVar105;
  auVar22._8_4_ = fVar106;
  auVar22._12_4_ = fVar100;
  uVar35 = a64_TBL(ZEXT816(0),auVar18,auVar22,DAT_01cd5050);
  auVar89._8_8_ = uVar35;
  auVar83._8_8_ = auVar70._8_8_;
  auVar83._0_8_ = auVar70._0_8_;
  uVar35 = a64_TBL(ZEXT816(0),auVar83,auVar89,DAT_01cd5008);
  fVar98 = (float)uVar35;
  fVar99 = (float)((ulong)uVar35 >> 0x20);
  uVar68 = a64_TBL(ZEXT816(0),auVar83,auVar89,DAT_01cd4fb0);
  uVar104 = a64_TBL(ZEXT816(0),auVar70,auVar79,DAT_01cd50d8);
  uVar35 = a64_TBL(ZEXT816(0),auVar70,auVar79,DAT_01cd4fb8);
  if (lVar37 != 0) {
    (**(code **)(*(long *)(lVar36 + 0x48) + 0x18))();
  }
  fVar100 = (float)uVar68;
  fVar102 = (float)((ulong)uVar68 >> 0x20);
  lVar36 = *(long *)(param_1 + 0x60);
  piVar1 = (int *)(lVar36 + 0x54);
  iVar38 = *(int *)(lVar36 + 0x54);
  do {
    while( true ) {
      plVar39 = *(long **)(lVar36 + 0x58);
      if (((*puVar30 & 1) == 0) && (iVar34 = __cxa_guard_acquire(puVar30), iVar34 != 0)) {
        if (((*puVar32 & 1) == 0) && (iVar34 = __cxa_guard_acquire(puVar32), iVar34 != 0)) {
          uVar68 = FUN_00706e40();
          *(undefined8 *)puVar33 = uVar68;
          __cxa_guard_release(puVar32);
        }
        *(undefined **)puVar31 = puVar33;
        __cxa_guard_release(puVar30);
      }
      for (; plVar39 != (long *)puVar31; plVar39 = (long *)*plVar39) {
      }
      iVar34 = *piVar1;
      if (iVar34 == iVar38) break;
      ClearExclusiveLocal();
      iVar38 = iVar34;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar38 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar38 = iVar34;
  } while (cVar2 != '\0');
  lVar37 = *(long *)(lVar36 + 0x60);
  lVar36 = 0;
  if (lVar37 != 0) {
    lVar36 = lVar37 + -0x50;
  }
  uStack_48 = *(undefined8 *)(lVar36 + 0xe8);
  local_50 = *(undefined8 *)(lVar36 + 0xe0);
  if (lVar37 != 0) {
    (**(code **)(*(long *)(lVar36 + 0x48) + 0x18))();
  }
  fVar40 = (float)uVar104 * (float)uVar104;
  fVar66 = (float)((ulong)uVar104 >> 0x20);
  fVar66 = fVar66 * fVar66;
  uVar41 = (undefined1)((uint)fVar66 >> 8);
  uVar43 = (undefined1)((uint)fVar66 >> 0x10);
  uVar45 = (undefined1)((uint)fVar66 >> 0x18);
  fVar73 = (float)uVar35 * (float)uVar35;
  uVar47 = (undefined1)((uint)fVar73 >> 8);
  uVar49 = (undefined1)((uint)fVar73 >> 0x10);
  uVar51 = (undefined1)((uint)fVar73 >> 0x18);
  fVar103 = (float)((ulong)uVar35 >> 0x20);
  fVar103 = fVar103 * fVar103;
  uVar53 = (undefined1)((uint)fVar103 >> 8);
  uVar55 = (undefined1)((uint)fVar103 >> 0x10);
  uVar64 = (undefined1)((uint)fVar103 >> 0x18);
  auVar10[4] = SUB41(fVar66,0);
  auVar10._0_4_ = fVar40;
  auVar10[5] = uVar41;
  auVar10[6] = uVar43;
  auVar10[7] = uVar45;
  auVar10[8] = SUB41(fVar73,0);
  auVar10[9] = uVar47;
  auVar10[10] = uVar49;
  auVar10[0xb] = uVar51;
  auVar10[0xc] = SUB41(fVar103,0);
  auVar10[0xd] = uVar53;
  auVar10[0xe] = uVar55;
  auVar10[0xf] = uVar64;
  auVar11[4] = SUB41(fVar66,0);
  auVar11._0_4_ = fVar40;
  auVar11[5] = uVar41;
  auVar11[6] = uVar43;
  auVar11[7] = uVar45;
  auVar11[8] = SUB41(fVar73,0);
  auVar11[9] = uVar47;
  auVar11[10] = uVar49;
  auVar11[0xb] = uVar51;
  auVar11[0xc] = SUB41(fVar103,0);
  auVar11[0xd] = uVar53;
  auVar11[0xe] = uVar55;
  auVar11[0xf] = uVar64;
  auVar69 = NEON_ext(auVar10,auVar11,8,1);
  fVar40 = auVar69._0_4_ + fVar40;
  fVar66 = auVar69._4_4_ + fVar66;
  auVar71._0_4_ = fVar98 * fVar98;
  auVar71._4_4_ = fVar99 * fVar99;
  auVar71._8_4_ = fVar100 * fVar100;
  auVar71._12_4_ = fVar102 * fVar102;
  auVar69 = NEON_ext(auVar71,auVar71,8,1);
  fVar103 = auVar69._0_4_ + auVar71._0_4_;
  fVar74 = auVar69._4_4_ + auVar71._4_4_;
  fVar73 = fVar40 + fVar66;
  fVar40 = fVar40 + fVar66;
  uVar41 = SUB41(fVar73,0);
  uVar43 = (undefined1)((uint)fVar73 >> 8);
  uVar45 = (undefined1)((uint)fVar73 >> 0x10);
  uVar47 = (undefined1)((uint)fVar73 >> 0x18);
  uVar49 = SUB41(fVar40,0);
  uVar51 = (undefined1)((uint)fVar40 >> 8);
  uVar53 = (undefined1)((uint)fVar40 >> 0x10);
  uVar55 = (undefined1)((uint)fVar40 >> 0x18);
  uVar68 = CONCAT44(fVar103 + fVar74,fVar103 + fVar74);
LAB_00c54f24:
  uVar4 = CONCAT11(uVar43,uVar41);
  uVar29 = CONCAT11(uVar51,uVar49);
  auVar72._8_8_ = uVar68;
  auVar72._0_8_ = uVar68;
  auVar12[1] = uVar43;
  auVar12[0] = uVar41;
  auVar12[2] = uVar45;
  auVar12[3] = uVar47;
  auVar12[4] = uVar49;
  auVar12[5] = uVar51;
  auVar12[6] = uVar53;
  auVar12[7] = uVar55;
  auVar12[8] = uVar41;
  auVar12[9] = uVar43;
  auVar12[10] = uVar45;
  auVar12[0xb] = uVar47;
  auVar12[0xc] = uVar49;
  auVar12[0xd] = uVar51;
  auVar12[0xe] = uVar53;
  auVar12[0xf] = uVar55;
  auVar69 = NEON_frsqrte(auVar12,4);
  auVar84 = NEON_frsqrte(auVar72,4);
  auVar90._0_4_ = auVar69._0_4_ * (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41)));
  auVar90._4_4_ = auVar69._4_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49)));
  auVar90._8_4_ = auVar69._8_4_ * (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4));
  auVar90._12_4_ = auVar69._12_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar53,uVar29));
  auVar91 = NEON_frsqrts(auVar69,auVar90,4);
  auVar80._0_4_ = auVar69._0_4_ * auVar91._0_4_;
  auVar80._4_4_ = auVar69._4_4_ * auVar91._4_4_;
  auVar80._8_4_ = auVar69._8_4_ * auVar91._8_4_;
  auVar80._12_4_ = auVar69._12_4_ * auVar91._12_4_;
  fVar40 = (float)uVar68;
  auVar92._0_4_ = auVar84._0_4_ * fVar40;
  fVar66 = (float)((ulong)uVar68 >> 0x20);
  auVar92._4_4_ = auVar84._4_4_ * fVar66;
  auVar92._8_4_ = auVar84._8_4_ * fVar40;
  auVar92._12_4_ = auVar84._12_4_ * fVar66;
  auVar69 = NEON_frsqrts(auVar84,auVar92,4);
  auVar85._0_4_ = auVar84._0_4_ * auVar69._0_4_;
  auVar85._4_4_ = auVar84._4_4_ * auVar69._4_4_;
  auVar85._8_4_ = auVar84._8_4_ * auVar69._8_4_;
  auVar85._12_4_ = auVar84._12_4_ * auVar69._12_4_;
  auVar93._0_4_ = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) * auVar80._0_4_;
  auVar93._4_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49))) * auVar80._4_4_;
  auVar93._8_4_ = (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4)) * auVar80._8_4_;
  auVar93._12_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar53,uVar29)) * auVar80._12_4_;
  iVar38 = -(uint)((float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) == 0.0);
  iVar34 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49))) == 0.0);
  iVar13 = -(uint)((float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4)) == 0.0);
  iVar14 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar53,uVar29)) == 0.0);
  auVar69 = NEON_frsqrts(auVar80,auVar93,4);
  auVar94._0_4_ = fVar40 * auVar85._0_4_;
  auVar94._4_4_ = fVar66 * auVar85._4_4_;
  auVar94._8_4_ = fVar40 * auVar85._8_4_;
  auVar94._12_4_ = fVar66 * auVar85._12_4_;
  iVar67 = -(uint)(fVar40 == 0.0);
  iVar75 = -(uint)(fVar66 == 0.0);
  iVar76 = -(uint)(fVar40 == 0.0);
  iVar77 = -(uint)(fVar66 == 0.0);
  auVar84 = NEON_frsqrts(auVar85,auVar94,4);
  fVar40 = (float)uVar104 * auVar80._0_4_ * auVar69._0_4_;
  fVar66 = (float)((ulong)uVar104 >> 0x20) * auVar80._4_4_ * auVar69._4_4_;
  fVar73 = (float)uVar35 * auVar80._8_4_ * auVar69._8_4_;
  fVar103 = (float)((ulong)uVar35 >> 0x20) * auVar80._12_4_ * auVar69._12_4_;
  uStack_58 = CONCAT17((byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                       CONCAT16((byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                CONCAT15((byte)((uint)fVar103 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                         CONCAT14(SUB41(fVar103,0) & ~(byte)iVar14,
                                                  CONCAT13((byte)((uint)fVar73 >> 0x18) &
                                                           ~(byte)((uint)iVar13 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar73 >> 0x10) &
                                                                    ~(byte)((uint)iVar13 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar73 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar13 >>
                                                                                    8),
                                                                             SUB41(fVar73,0) &
                                                                             ~(byte)iVar13)))))));
  local_60 = CONCAT17((byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                      CONCAT16((byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                               CONCAT15((byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                        CONCAT14(SUB41(fVar66,0) & ~(byte)iVar34,
                                                 CONCAT13((byte)((uint)fVar40 >> 0x18) &
                                                          ~(byte)((uint)iVar38 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                                                   ~(byte)((uint)iVar38 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar40 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar38 >> 8),SUB41(fVar40,0) & ~(byte)iVar38))))))
                     );
  fVar98 = fVar98 * auVar85._0_4_ * auVar84._0_4_;
  fVar99 = fVar99 * auVar85._4_4_ * auVar84._4_4_;
  fVar100 = fVar100 * auVar85._8_4_ * auVar84._8_4_;
  fVar102 = fVar102 * auVar85._12_4_ * auVar84._12_4_;
  uStack_68 = CONCAT17((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                       CONCAT16((byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                                CONCAT15((byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                         CONCAT14(SUB41(fVar102,0) & ~(byte)iVar77,
                                                  CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                                           ~(byte)((uint)iVar76 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                                    ~(byte)((uint)iVar76 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar100 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar76 >>
                                                                                    8),
                                                                             SUB41(fVar100,0) &
                                                                             ~(byte)iVar76)))))));
  local_70 = CONCAT17((byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                      CONCAT16((byte)((uint)fVar99 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                               CONCAT15((byte)((uint)fVar99 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                        CONCAT14(SUB41(fVar99,0) & ~(byte)iVar75,
                                                 CONCAT13((byte)((uint)fVar98 >> 0x18) &
                                                          ~(byte)((uint)iVar67 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar98 >> 0x10) &
                                                                   ~(byte)((uint)iVar67 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar98 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar67 >> 8),SUB41(fVar98,0) & ~(byte)iVar67))))))
                     );
  FUN_00895e30(*(undefined8 *)(param_1 + 0x78),&local_50,&local_60,&local_70);
  return;
}


