/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013383b0; name: FUN_013383b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013383b0(long param_1,long *param_2)

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
  float fVar13;
  undefined8 uVar14;
  float fVar15;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int iVar41;
  undefined8 uVar42;
  long lVar43;
  undefined *puVar44;
  int iVar45;
  byte *pbVar46;
  long *plVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
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
  byte bVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar85;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  float fVar86;
  float fVar87;
  float fVar90;
  undefined8 uVar88;
  float fVar91;
  undefined8 uVar89;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined8 uVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined8 uVar114;
  float fVar115;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar43 = *(long *)(param_1 + 0xd0);
  if ((lVar43 != 0) && (*(int *)(lVar43 + 0x54) != 0)) {
    piVar1 = (int *)(lVar43 + 0x54);
    puVar44 = PTR_DAT_02715080;
    pbVar46 = PTR_DAT_02715078;
    iVar45 = *(int *)(lVar43 + 0x54);
    do {
      while( true ) {
        plVar47 = *(long **)(lVar43 + 0x58);
        if (((*pbVar46 & 1) == 0) &&
           (iVar41 = __cxa_guard_acquire(PTR_DAT_02715078), pbVar46 = PTR_DAT_02715078,
           puVar44 = PTR_DAT_02715080, iVar41 != 0)) {
          uVar42 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar42;
          __cxa_guard_release(PTR_DAT_02715078);
          pbVar46 = PTR_DAT_02715078;
          puVar44 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_01338500;
          if (plVar47 == (long *)puVar44) break;
          plVar47 = (long *)*plVar47;
        }
        iVar41 = *piVar1;
        if (iVar41 == iVar45) break;
        ClearExclusiveLocal();
        iVar45 = iVar41;
        if (iVar41 == 0) goto LAB_01338500;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar45 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar43 = *(long *)(lVar43 + 0x60);
        if (lVar43 != 0) {
          uVar14 = *(undefined8 *)(lVar43 + 0x68);
          uVar42 = *(undefined8 *)(lVar43 + 0x60);
          (**(code **)(*(long *)(lVar43 + -8) + 0x18))();
          lVar43 = *(long *)(param_1 + 0xd0);
          pbVar46 = PTR_DAT_02715078;
          puVar44 = PTR_DAT_02715080;
          goto joined_r0x013384f8;
        }
        break;
      }
      iVar45 = iVar41;
    } while (iVar41 != 0);
  }
LAB_01338500:
  lVar43 = *(long *)(param_1 + 0xd0);
  uVar42 = _DAT_000000b0;
  uVar14 = _DAT_000000b8;
  pbVar46 = PTR_DAT_02715078;
  puVar44 = PTR_DAT_02715080;
joined_r0x013384f8:
  PTR_DAT_02715078 = pbVar46;
  PTR_DAT_02715080 = puVar44;
  if ((lVar43 != 0) && (*(int *)(lVar43 + 0x54) != 0)) {
    piVar1 = (int *)(lVar43 + 0x54);
    iVar45 = *(int *)(lVar43 + 0x54);
    do {
      while( true ) {
        plVar47 = *(long **)(lVar43 + 0x58);
        if (((*pbVar46 & 1) == 0) &&
           (iVar41 = __cxa_guard_acquire(PTR_DAT_02715078), pbVar46 = PTR_DAT_02715078,
           puVar44 = PTR_DAT_02715080, iVar41 != 0)) {
          uVar77 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar77;
          __cxa_guard_release(PTR_DAT_02715078);
          pbVar46 = PTR_DAT_02715078;
          puVar44 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_01338630;
          if (plVar47 == (long *)puVar44) break;
          plVar47 = (long *)*plVar47;
        }
        iVar41 = *piVar1;
        if (iVar41 == iVar45) break;
        ClearExclusiveLocal();
        iVar45 = iVar41;
        if (iVar41 == 0) goto LAB_01338630;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar45 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar43 = *(long *)(lVar43 + 0x60);
        if (lVar43 != 0) {
          uVar79 = *(undefined8 *)(lVar43 + 0x58);
          uVar77 = *(undefined8 *)(lVar43 + 0x50);
          (**(code **)(*(long *)(lVar43 + -8) + 0x18))();
          fVar112 = (float)uVar79;
          fVar113 = (float)((ulong)uVar79 >> 0x20);
          fVar110 = (float)uVar77;
          fVar111 = (float)((ulong)uVar77 >> 0x20);
          goto LAB_01338638;
        }
        break;
      }
      iVar45 = iVar41;
    } while (iVar41 != 0);
  }
LAB_01338630:
  fVar112 = (float)_DAT_000000a8;
  fVar113 = (float)((ulong)_DAT_000000a8 >> 0x20);
  fVar110 = (float)_DAT_000000a0;
  fVar111 = (float)((ulong)_DAT_000000a0 >> 0x20);
LAB_01338638:
  uVar40 = DAT_01cd5418;
  uVar39 = DAT_01cd5270;
  uVar38 = DAT_01cd5120;
  uVar37 = DAT_01cd50f8;
  uVar36 = DAT_01cd50b0;
  uVar89 = DAT_01cd4f90;
  fVar25 = (float)*(undefined8 *)(param_1 + 0xe0) + (float)_DAT_01d4ac90;
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) +
           (float)((ulong)_DAT_01d4ac90 >> 0x20);
  uVar68 = SUB41(fVar26,0);
  uVar70 = (undefined1)((uint)fVar26 >> 8);
  uVar72 = (undefined1)((uint)fVar26 >> 0x10);
  uVar74 = (undefined1)((uint)fVar26 >> 0x18);
  fVar98 = (float)*(undefined8 *)(param_1 + 0xe8) + (float)_UNK_01d4ac98;
  uVar52 = SUB41(fVar98,0);
  uVar54 = (undefined1)((uint)fVar98 >> 8);
  uVar56 = (undefined1)((uint)fVar98 >> 0x10);
  uVar58 = (undefined1)((uint)fVar98 >> 0x18);
  fVar98 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) +
           (float)((ulong)_UNK_01d4ac98 >> 0x20);
  uVar60 = SUB41(fVar98,0);
  uVar62 = (undefined1)((uint)fVar98 >> 8);
  uVar64 = (undefined1)((uint)fVar98 >> 0x10);
  uVar66 = (undefined1)((uint)fVar98 >> 0x18);
  fVar100 = fVar110 * (float)_DAT_01d4ae80;
  fVar101 = fVar111 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar102 = fVar112 * (float)_UNK_01d4ae88;
  fVar103 = fVar113 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar16[4] = uVar68;
  auVar16._0_4_ = fVar25;
  auVar16[5] = uVar70;
  auVar16[6] = uVar72;
  auVar16[7] = uVar74;
  auVar16[8] = uVar52;
  auVar16[9] = uVar54;
  auVar16[10] = uVar56;
  auVar16[0xb] = uVar58;
  auVar16[0xc] = uVar60;
  auVar16[0xd] = uVar62;
  auVar16[0xe] = uVar64;
  auVar16[0xf] = uVar66;
  uVar77 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd4f90);
  auVar17[4] = uVar68;
  auVar17._0_4_ = fVar25;
  auVar17[5] = uVar70;
  auVar17[6] = uVar72;
  auVar17[7] = uVar74;
  auVar17[8] = uVar52;
  auVar17[9] = uVar54;
  auVar17[10] = uVar56;
  auVar17[0xb] = uVar58;
  auVar17[0xc] = uVar60;
  auVar17[0xd] = uVar62;
  auVar17[0xe] = uVar64;
  auVar17[0xf] = uVar66;
  uVar76 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar68;
  auVar18._0_4_ = fVar25;
  auVar18[5] = uVar70;
  auVar18[6] = uVar72;
  auVar18[7] = uVar74;
  auVar18[8] = uVar52;
  auVar18[9] = uVar54;
  auVar18[10] = uVar56;
  auVar18[0xb] = uVar58;
  auVar18[0xc] = uVar60;
  auVar18[0xd] = uVar62;
  auVar18[0xe] = uVar64;
  auVar18[0xf] = uVar66;
  uVar80 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
  auVar28._4_4_ = fVar101;
  auVar28._0_4_ = fVar100;
  auVar28._8_4_ = fVar102;
  auVar28._12_4_ = fVar103;
  uVar105 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd4f90);
  auVar29._4_4_ = fVar101;
  auVar29._0_4_ = fVar100;
  auVar29._8_4_ = fVar102;
  auVar29._12_4_ = fVar103;
  uVar83 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5120);
  fVar92 = (float)((ulong)uVar83 >> 0x20);
  auVar30._4_4_ = fVar101;
  auVar30._0_4_ = fVar100;
  auVar30._8_4_ = fVar102;
  auVar30._12_4_ = fVar103;
  uVar114 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50f8);
  auVar31._4_4_ = fVar101;
  auVar31._0_4_ = fVar100;
  auVar31._8_4_ = fVar102;
  auVar31._12_4_ = fVar103;
  uVar81 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
  fVar106 = (float)((ulong)uVar105 >> 0x20);
  fVar15 = (float)((ulong)uVar76 >> 0x20);
  fVar98 = (float)((ulong)uVar77 >> 0x20);
  fVar104 = (float)_DAT_01d4ae90;
  fVar107 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar108 = (float)_UNK_01d4ae98;
  fVar109 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar27._4_4_ = fVar101;
  auVar27._0_4_ = fVar100;
  auVar27._8_4_ = fVar100;
  auVar27._12_4_ = fVar101;
  uVar84 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd50b0);
  fVar93 = (float)((ulong)uVar84 >> 0x20);
  fVar90 = (float)((ulong)uVar80 >> 0x20);
  fVar115 = (float)((ulong)uVar114 >> 0x20);
  auVar32._4_4_ = fVar101;
  auVar32._0_4_ = fVar100;
  auVar32._8_4_ = fVar102;
  auVar32._12_4_ = fVar103;
  uVar79 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5270);
  auVar33._4_4_ = fVar111;
  auVar33._0_4_ = fVar110;
  auVar33._8_4_ = fVar112;
  auVar33._12_4_ = fVar113;
  uVar78 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd4f90);
  fVar85 = (float)((ulong)uVar81 >> 0x20);
  fVar86 = (float)((ulong)uVar79 >> 0x20);
  fVar99 = (fVar100 * (float)uVar77 + fVar104 * fVar25 * (float)uVar105 +
           fVar104 * (float)uVar80 * (float)uVar114) - (float)uVar76 * (float)uVar81;
  fVar26 = (fVar101 * fVar98 + fVar107 * fVar26 * fVar106 + fVar107 * fVar90 * fVar115) -
           fVar15 * fVar85;
  uVar52 = SUB41(fVar26,0);
  uVar54 = (undefined1)((uint)fVar26 >> 8);
  uVar56 = (undefined1)((uint)fVar26 >> 0x10);
  uVar58 = (undefined1)((uint)fVar26 >> 0x18);
  fVar13 = (fVar102 * (float)uVar77 + fVar108 * (float)uVar76 * (float)uVar83 +
           fVar108 * fVar25 * (float)uVar84) - (float)uVar80 * (float)uVar79;
  uVar60 = SUB41(fVar13,0);
  uVar62 = (undefined1)((uint)fVar13 >> 8);
  uVar64 = (undefined1)((uint)fVar13 >> 0x10);
  uVar66 = (undefined1)((uint)fVar13 >> 0x18);
  fVar98 = (fVar103 * fVar98 + fVar109 * fVar15 * fVar92 +
           fVar109 * (float)(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar68,fVar25)
                                                                     ))) >> 0x20) * fVar93) -
           fVar90 * fVar86;
  uVar68 = SUB41(fVar98,0);
  uVar70 = (undefined1)((uint)fVar98 >> 8);
  uVar72 = (undefined1)((uint)fVar98 >> 0x10);
  uVar74 = (undefined1)((uint)fVar98 >> 0x18);
  auVar34._4_4_ = fVar111;
  auVar34._0_4_ = fVar110;
  auVar34._8_4_ = fVar112;
  auVar34._12_4_ = fVar113;
  uVar77 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50f8);
  auVar4[4] = uVar52;
  auVar4._0_4_ = fVar99;
  auVar4[5] = uVar54;
  auVar4[6] = uVar56;
  auVar4[7] = uVar58;
  auVar4[8] = uVar60;
  auVar4[9] = uVar62;
  auVar4[10] = uVar64;
  auVar4[0xb] = uVar66;
  auVar4[0xc] = uVar68;
  auVar4[0xd] = uVar70;
  auVar4[0xe] = uVar72;
  auVar4[0xf] = uVar74;
  uVar80 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
  fVar94 = (float)uVar77;
  fVar96 = (float)((ulong)uVar77 >> 0x20);
  auVar5[4] = uVar52;
  auVar5._0_4_ = fVar99;
  auVar5[5] = uVar54;
  auVar5[6] = uVar56;
  auVar5[7] = uVar58;
  auVar5[8] = uVar60;
  auVar5[9] = uVar62;
  auVar5[10] = uVar64;
  auVar5[0xb] = uVar66;
  auVar5[0xc] = uVar68;
  auVar5[0xd] = uVar70;
  auVar5[0xe] = uVar72;
  auVar5[0xf] = uVar74;
  uVar76 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
  fVar15 = (float)uVar78;
  fVar25 = (float)((ulong)uVar78 >> 0x20);
  auVar6[4] = uVar52;
  auVar6._0_4_ = fVar99;
  auVar6[5] = uVar54;
  auVar6[6] = uVar56;
  auVar6[7] = uVar58;
  auVar6[8] = uVar60;
  auVar6[9] = uVar62;
  auVar6[10] = uVar64;
  auVar6[0xb] = uVar66;
  auVar6[0xc] = uVar68;
  auVar6[0xd] = uVar70;
  auVar6[0xe] = uVar72;
  auVar6[0xf] = uVar74;
  uVar82 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
  auVar35._4_4_ = fVar111;
  auVar35._0_4_ = fVar110;
  auVar35._8_4_ = fVar112;
  auVar35._12_4_ = fVar113;
  uVar77 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5418);
  fVar95 = (float)uVar77;
  fVar97 = (float)((ulong)uVar77 >> 0x20);
  auVar7[4] = uVar52;
  auVar7._0_4_ = fVar99;
  auVar7[5] = uVar54;
  auVar7[6] = uVar56;
  auVar7[7] = uVar58;
  auVar7[8] = uVar60;
  auVar7[9] = uVar62;
  auVar7[10] = uVar64;
  auVar7[0xb] = uVar66;
  auVar7[0xc] = uVar68;
  auVar7[0xd] = uVar70;
  auVar7[0xe] = uVar72;
  auVar7[0xf] = uVar74;
  uVar78 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
  auVar8[4] = uVar52;
  auVar8._0_4_ = fVar99;
  auVar8[5] = uVar54;
  auVar8[6] = uVar56;
  auVar8[7] = uVar58;
  auVar8[8] = uVar60;
  auVar8[9] = uVar62;
  auVar8[10] = uVar64;
  auVar8[0xb] = uVar66;
  auVar8[0xc] = uVar68;
  auVar8[0xd] = uVar70;
  auVar8[0xe] = uVar72;
  auVar8[0xf] = uVar74;
  uVar88 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
  lVar43 = *(long *)*param_2;
  auVar9[4] = uVar52;
  auVar9._0_4_ = fVar99;
  auVar9[5] = uVar54;
  auVar9[6] = uVar56;
  auVar9[7] = uVar58;
  auVar9[8] = SUB41(fVar99,0);
  auVar9[9] = (char)((uint)fVar99 >> 8);
  auVar9[10] = (char)((uint)fVar99 >> 0x10);
  auVar9[0xb] = (char)((uint)fVar99 >> 0x18);
  auVar9[0xc] = uVar52;
  auVar9[0xd] = uVar54;
  auVar9[0xe] = uVar56;
  auVar9[0xf] = uVar58;
  uVar77 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50b0);
  bVar61 = (byte)DAT_01d4ab58;
  bVar63 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar65 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar67 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar69 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar71 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar73 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar75 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar48 = (byte)DAT_01d4ab50;
  bVar49 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar50 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar51 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar53 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar55 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar57 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar59 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar90 = (fVar15 * fVar99 + fVar104 * fVar110 * (float)uVar76 + fVar104 * fVar95 * (float)uVar78)
           - fVar94 * (float)uVar82;
  fVar112 = (fVar25 * fVar26 + fVar107 * fVar111 * (float)((ulong)uVar76 >> 0x20) +
            fVar107 * fVar97 * (float)((ulong)uVar78 >> 0x20)) -
            fVar96 * (float)((ulong)uVar82 >> 0x20);
  fVar26 = (fVar15 * fVar13 + fVar108 * fVar94 * (float)uVar80 + fVar108 * fVar110 * (float)uVar77)
           - fVar95 * (float)uVar88;
  fVar113 = (fVar25 * fVar98 + fVar109 * fVar96 * (float)((ulong)uVar80 >> 0x20) +
            fVar109 * fVar111 * (float)((ulong)uVar77 >> 0x20)) -
            fVar97 * (float)((ulong)uVar88 >> 0x20);
  fVar98 = (float)((ulong)uVar42 >> 0x20);
  fVar112 = fVar98 + (float)CONCAT13((byte)((uint)fVar112 >> 0x18) & bVar59,
                                     CONCAT12((byte)((uint)fVar112 >> 0x10) & bVar57,
                                              CONCAT11((byte)((uint)fVar112 >> 8) & bVar55,
                                                       SUB41(fVar112,0) & bVar53)));
  fVar99 = (float)((ulong)uVar14 >> 0x20);
  fVar113 = fVar99 + (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & bVar75,
                                     CONCAT12((byte)((uint)fVar113 >> 0x10) & bVar73,
                                              CONCAT11((byte)((uint)fVar113 >> 8) & bVar71,
                                                       SUB41(fVar113,0) & bVar69)));
  uStack_78 = CONCAT17((char)((uint)fVar113 >> 0x18),
                       CONCAT16((char)((uint)fVar113 >> 0x10),
                                CONCAT15((char)((uint)fVar113 >> 8),
                                         CONCAT14(SUB41(fVar113,0),
                                                  (float)uVar14 +
                                                  (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                                  bVar67,CONCAT12((byte)((uint)
                                                  fVar26 >> 0x10) & bVar65,
                                                  CONCAT11((byte)((uint)fVar26 >> 8) & bVar63,
                                                           SUB41(fVar26,0) & bVar61)))))));
  local_80 = CONCAT17((char)((uint)fVar112 >> 0x18),
                      CONCAT16((char)((uint)fVar112 >> 0x10),
                               CONCAT15((char)((uint)fVar112 >> 8),
                                        CONCAT14(SUB41(fVar112,0),
                                                 (float)uVar42 +
                                                 (float)CONCAT13((byte)((uint)fVar90 >> 0x18) &
                                                                 bVar51,CONCAT12((byte)((uint)fVar90
                                                                                       >> 0x10) &
                                                                                 bVar50,CONCAT11((
                                                  byte)((uint)fVar90 >> 8) & bVar49,
                                                  SUB41(fVar90,0) & bVar48)))))));
  FUN_012dc9c0(*(undefined8 *)(lVar43 + 0x10),&local_80);
  *(undefined1 *)(lVar43 + 0x18) = 1;
  fVar112 = (float)*(undefined8 *)(param_1 + 0xe0) + (float)_DAT_01d4a9f0;
  fVar113 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) +
            (float)((ulong)_DAT_01d4a9f0 >> 0x20);
  uVar52 = SUB41(fVar113,0);
  uVar54 = (undefined1)((uint)fVar113 >> 8);
  uVar56 = (undefined1)((uint)fVar113 >> 0x10);
  uVar58 = (undefined1)((uint)fVar113 >> 0x18);
  fVar113 = (float)*(undefined8 *)(param_1 + 0xe8) + (float)_UNK_01d4a9f8;
  uVar60 = SUB41(fVar113,0);
  uVar62 = (undefined1)((uint)fVar113 >> 8);
  uVar64 = (undefined1)((uint)fVar113 >> 0x10);
  uVar66 = (undefined1)((uint)fVar113 >> 0x18);
  fVar113 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) +
            (float)((ulong)_UNK_01d4a9f8 >> 0x20);
  uVar68 = SUB41(fVar113,0);
  uVar70 = (undefined1)((uint)fVar113 >> 8);
  uVar72 = (undefined1)((uint)fVar113 >> 0x10);
  uVar74 = (undefined1)((uint)fVar113 >> 0x18);
  auVar10[4] = uVar52;
  auVar10._0_4_ = fVar112;
  auVar10[5] = uVar54;
  auVar10[6] = uVar56;
  auVar10[7] = uVar58;
  auVar10[8] = uVar60;
  auVar10[9] = uVar62;
  auVar10[10] = uVar64;
  auVar10[0xb] = uVar66;
  auVar10[0xc] = uVar68;
  auVar10[0xd] = uVar70;
  auVar10[0xe] = uVar72;
  auVar10[0xf] = uVar74;
  uVar77 = a64_TBL(ZEXT816(0),auVar10,uVar89);
  fVar113 = (float)((ulong)uVar77 >> 0x20);
  auVar11[4] = uVar52;
  auVar11._0_4_ = fVar112;
  auVar11[5] = uVar54;
  auVar11[6] = uVar56;
  auVar11[7] = uVar58;
  auVar11[8] = uVar60;
  auVar11[9] = uVar62;
  auVar11[10] = uVar64;
  auVar11[0xb] = uVar66;
  auVar11[0xc] = uVar68;
  auVar11[0xd] = uVar70;
  auVar11[0xe] = uVar72;
  auVar11[0xf] = uVar74;
  uVar78 = a64_TBL(ZEXT816(0),auVar11,uVar37);
  fVar87 = (float)((ulong)uVar78 >> 0x20);
  auVar12[4] = uVar52;
  auVar12._0_4_ = fVar112;
  auVar12[5] = uVar54;
  auVar12[6] = uVar56;
  auVar12[7] = uVar58;
  auVar12[8] = uVar60;
  auVar12[9] = uVar62;
  auVar12[10] = uVar64;
  auVar12[0xb] = uVar66;
  auVar12[0xc] = uVar68;
  auVar12[0xd] = uVar70;
  auVar12[0xe] = uVar72;
  auVar12[0xf] = uVar74;
  uVar76 = a64_TBL(ZEXT816(0),auVar12,uVar40);
  fVar91 = (float)((ulong)uVar76 >> 0x20);
  fVar26 = (fVar100 * (float)uVar77 + fVar104 * (float)uVar105 * fVar112 +
           fVar104 * (float)uVar114 * (float)uVar76) - (float)uVar78 * (float)uVar81;
  fVar13 = (fVar101 * fVar113 +
            fVar107 * fVar106 * (float)(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(
                                                  uVar52,fVar112)))) >> 0x20) +
           fVar107 * fVar115 * fVar91) - fVar87 * fVar85;
  uVar60 = SUB41(fVar13,0);
  uVar62 = (undefined1)((uint)fVar13 >> 8);
  uVar64 = (undefined1)((uint)fVar13 >> 0x10);
  uVar66 = (undefined1)((uint)fVar13 >> 0x18);
  fVar90 = (fVar102 * (float)uVar77 + fVar108 * (float)uVar83 * (float)uVar78 +
           fVar108 * (float)uVar84 * fVar112) - (float)uVar76 * (float)uVar79;
  uVar68 = SUB41(fVar90,0);
  uVar70 = (undefined1)((uint)fVar90 >> 8);
  uVar72 = (undefined1)((uint)fVar90 >> 0x10);
  uVar74 = (undefined1)((uint)fVar90 >> 0x18);
  fVar85 = (fVar103 * fVar113 + fVar109 * fVar92 * fVar87 +
           fVar109 * fVar93 * (float)(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(
                                                  uVar52,fVar112)))) >> 0x20)) - fVar91 * fVar86;
  uVar52 = SUB41(fVar85,0);
  uVar54 = (undefined1)((uint)fVar85 >> 8);
  uVar56 = (undefined1)((uint)fVar85 >> 0x10);
  uVar58 = (undefined1)((uint)fVar85 >> 0x18);
  auVar19[4] = uVar60;
  auVar19._0_4_ = fVar26;
  auVar19[5] = uVar62;
  auVar19[6] = uVar64;
  auVar19[7] = uVar66;
  auVar19[8] = uVar68;
  auVar19[9] = uVar70;
  auVar19[10] = uVar72;
  auVar19[0xb] = uVar74;
  auVar19[0xc] = uVar52;
  auVar19[0xd] = uVar54;
  auVar19[0xe] = uVar56;
  auVar19[0xf] = uVar58;
  uVar79 = a64_TBL(ZEXT816(0),auVar19,uVar89);
  auVar20[4] = uVar60;
  auVar20._0_4_ = fVar26;
  auVar20[5] = uVar62;
  auVar20[6] = uVar64;
  auVar20[7] = uVar66;
  auVar20[8] = uVar68;
  auVar20[9] = uVar70;
  auVar20[10] = uVar72;
  auVar20[0xb] = uVar74;
  auVar20[0xc] = uVar52;
  auVar20[0xd] = uVar54;
  auVar20[0xe] = uVar56;
  auVar20[0xf] = uVar58;
  uVar83 = a64_TBL(ZEXT816(0),auVar20,uVar38);
  auVar21[4] = uVar60;
  auVar21._0_4_ = fVar26;
  auVar21[5] = uVar62;
  auVar21[6] = uVar64;
  auVar21[7] = uVar66;
  auVar21[8] = uVar68;
  auVar21[9] = uVar70;
  auVar21[10] = uVar72;
  auVar21[0xb] = uVar74;
  auVar21[0xc] = uVar52;
  auVar21[0xd] = uVar54;
  auVar21[0xe] = uVar56;
  auVar21[0xf] = uVar58;
  uVar78 = a64_TBL(ZEXT816(0),auVar21,uVar37);
  auVar22[4] = uVar60;
  auVar22._0_4_ = fVar26;
  auVar22[5] = uVar62;
  auVar22[6] = uVar64;
  auVar22[7] = uVar66;
  auVar22[8] = uVar68;
  auVar22[9] = uVar70;
  auVar22[10] = uVar72;
  auVar22[0xb] = uVar74;
  auVar22[0xc] = uVar52;
  auVar22[0xd] = uVar54;
  auVar22[0xe] = uVar56;
  auVar22[0xf] = uVar58;
  uVar84 = a64_TBL(ZEXT816(0),auVar22,uVar40);
  auVar23[4] = uVar60;
  auVar23._0_4_ = fVar26;
  auVar23[5] = uVar62;
  auVar23[6] = uVar64;
  auVar23[7] = uVar66;
  auVar23[8] = uVar68;
  auVar23[9] = uVar70;
  auVar23[10] = uVar72;
  auVar23[0xb] = uVar74;
  auVar23[0xc] = uVar52;
  auVar23[0xd] = uVar54;
  auVar23[0xe] = uVar56;
  auVar23[0xf] = uVar58;
  uVar89 = a64_TBL(ZEXT816(0),auVar23,uVar39);
  auVar24[4] = uVar60;
  auVar24._0_4_ = fVar26;
  auVar24[5] = uVar62;
  auVar24[6] = uVar64;
  auVar24[7] = uVar66;
  auVar24[8] = SUB41(fVar26,0);
  auVar24[9] = (char)((uint)fVar26 >> 8);
  auVar24[10] = (char)((uint)fVar26 >> 0x10);
  auVar24[0xb] = (char)((uint)fVar26 >> 0x18);
  auVar24[0xc] = uVar60;
  auVar24[0xd] = uVar62;
  auVar24[0xe] = uVar64;
  auVar24[0xf] = uVar66;
  uVar77 = a64_TBL(ZEXT816(0),auVar24,uVar36);
  fVar112 = (fVar15 * fVar26 + fVar104 * fVar110 * (float)uVar79 + fVar104 * fVar95 * (float)uVar78)
            - fVar94 * (float)uVar84;
  fVar113 = (fVar25 * fVar13 + fVar107 * fVar111 * (float)((ulong)uVar79 >> 0x20) +
            fVar107 * fVar97 * (float)((ulong)uVar78 >> 0x20)) -
            fVar96 * (float)((ulong)uVar84 >> 0x20);
  fVar110 = (fVar15 * fVar90 + fVar108 * fVar94 * (float)uVar83 + fVar108 * fVar110 * (float)uVar77)
            - fVar95 * (float)uVar89;
  fVar111 = (fVar25 * fVar85 + fVar109 * fVar96 * (float)((ulong)uVar83 >> 0x20) +
            fVar109 * fVar111 * (float)((ulong)uVar77 >> 0x20)) -
            fVar97 * (float)((ulong)uVar89 >> 0x20);
  lVar43 = *(long *)(*param_2 + 8);
  fVar98 = fVar98 + (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & bVar59,
                                    CONCAT12((byte)((uint)fVar113 >> 0x10) & bVar57,
                                             CONCAT11((byte)((uint)fVar113 >> 8) & bVar55,
                                                      SUB41(fVar113,0) & bVar53)));
  fVar99 = fVar99 + (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & bVar75,
                                    CONCAT12((byte)((uint)fVar111 >> 0x10) & bVar73,
                                             CONCAT11((byte)((uint)fVar111 >> 8) & bVar71,
                                                      SUB41(fVar111,0) & bVar69)));
  uStack_78 = CONCAT17((char)((uint)fVar99 >> 0x18),
                       CONCAT16((char)((uint)fVar99 >> 0x10),
                                CONCAT15((char)((uint)fVar99 >> 8),
                                         CONCAT14(SUB41(fVar99,0),
                                                  (float)uVar14 +
                                                  (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                                  bVar67,CONCAT12((byte)((uint)
                                                  fVar110 >> 0x10) & bVar65,
                                                  CONCAT11((byte)((uint)fVar110 >> 8) & bVar63,
                                                           SUB41(fVar110,0) & bVar61)))))));
  local_80 = CONCAT17((char)((uint)fVar98 >> 0x18),
                      CONCAT16((char)((uint)fVar98 >> 0x10),
                               CONCAT15((char)((uint)fVar98 >> 8),
                                        CONCAT14(SUB41(fVar98,0),
                                                 (float)uVar42 +
                                                 (float)CONCAT13((byte)((uint)fVar112 >> 0x18) &
                                                                 bVar51,CONCAT12((byte)((uint)
                                                  fVar112 >> 0x10) & bVar50,
                                                  CONCAT11((byte)((uint)fVar112 >> 8) & bVar49,
                                                           SUB41(fVar112,0) & bVar48)))))));
  FUN_012dc9c0(*(undefined8 *)(lVar43 + 0x10),&local_80);
  *(undefined1 *)(lVar43 + 0x18) = 1;
  FUN_01314400(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(*(long *)*param_2 + 0x10),
               *(undefined8 *)(((long *)*param_2)[1] + 0x10),0);
  return;
}


