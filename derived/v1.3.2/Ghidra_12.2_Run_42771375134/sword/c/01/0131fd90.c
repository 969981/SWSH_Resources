/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131fd90; name: FUN_0131fd90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0131fd90(undefined1 *param_1,long param_2,unkbyte9 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined8 *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined *puVar48;
  int iVar49;
  long *plVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long lVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  byte bVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  float fVar115;
  undefined8 uVar114;
  undefined8 uVar116;
  float fVar117;
  float fVar118;
  float fStack_68;
  float fStack_64;
  
  if (((*(long *)(param_2 + 8) == 0) || (*(int *)(*(long *)(param_2 + 8) + 0x54) == 0)) ||
     (*(long *)(param_2 + 0x60) == 0)) {
    *param_1 = 0;
  }
  else {
    if ((*(long *)(param_2 + 8) != 0) &&
       (puVar55 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x60), puVar55 != (undefined8 *)0x0)) {
      plVar50 = (long *)(**(code **)*puVar55)(puVar55);
      if (((*PTR_DAT_027150a8 & 1) == 0) &&
         (iVar49 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar49 != 0)) {
        uVar53 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_027150b0 = uVar53;
        __cxa_guard_release(PTR_DAT_027150a8);
      }
      for (; plVar50 != (long *)0x0; plVar50 = (long *)*plVar50) {
        if (plVar50 == (long *)PTR_DAT_027150b0) {
          puVar55 = puVar55 + -10;
          goto LAB_0131fe24;
        }
      }
    }
    puVar55 = (undefined8 *)0x0;
LAB_0131fe24:
    puVar56 = *(undefined8 **)(puVar55[0xd] + 0x60);
    plVar50 = (long *)(**(code **)*puVar56)(puVar56);
    puVar48 = PTR_DAT_02715078;
    puVar41 = (undefined8 *)PTR_DAT_02715080;
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar49 = __cxa_guard_acquire(PTR_DAT_02715078), puVar41 = (undefined8 *)PTR_DAT_02715080,
       iVar49 != 0)) {
      uVar53 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar53;
      __cxa_guard_release(PTR_DAT_02715078);
      puVar41 = (undefined8 *)PTR_DAT_02715080;
    }
    for (; plVar50 != puVar41; plVar50 = (long *)*plVar50) {
    }
    uVar58 = puVar56[0xd];
    uVar53 = puVar56[0xc];
    puVar56 = *(undefined8 **)(puVar55[0xd] + 0x60);
    PTR_DAT_02715080 = (undefined *)puVar41;
    plVar50 = (long *)(**(code **)*puVar56)(puVar56);
    if (((*puVar48 & 1) == 0) && (iVar49 = __cxa_guard_acquire(PTR_DAT_02715078), iVar49 != 0)) {
      uVar51 = FUN_00a87090();
      *puVar41 = uVar51;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar50 != puVar41; plVar50 = (long *)*plVar50) {
    }
    pauVar1 = (undefined1 (*) [12])(puVar56 + 10);
    uVar51 = *(undefined8 *)*pauVar1;
    auVar40 = *pauVar1;
    auVar39 = *pauVar1;
    auVar38 = *pauVar1;
    puVar55 = *(undefined8 **)(puVar55[0xd] + 0x60);
    fStack_68 = (float)puVar56[0xb];
    fStack_64 = (float)((ulong)puVar56[0xb] >> 0x20);
    plVar50 = (long *)(**(code **)*puVar55)(puVar55);
    if (((*puVar48 & 1) == 0) && (iVar49 = __cxa_guard_acquire(PTR_DAT_02715078), iVar49 != 0)) {
      uVar52 = FUN_00a87090();
      *puVar41 = uVar52;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar50 != puVar41; plVar50 = (long *)*plVar50) {
    }
    uVar112 = puVar55[0x10];
    lVar54 = *(long *)(*(long *)(param_2 + 0x60) + 0x120);
    iVar49 = *(int *)(*(long *)(*(long *)(param_2 + 0x60) + 0x128) + 0x40);
    FUN_00723030(lVar54,iVar49);
    uVar47 = DAT_01cd5418;
    uVar46 = DAT_01cd5270;
    uVar45 = DAT_01cd5120;
    uVar44 = DAT_01cd50f8;
    uVar43 = DAT_01cd50b0;
    uVar42 = DAT_01cd4f90;
    uVar91 = (undefined1)_UNK_01d4a788;
    uVar88 = (undefined1)((ulong)_UNK_01d4a788 >> 8);
    uVar89 = (undefined1)((ulong)_UNK_01d4a788 >> 0x10);
    uVar90 = (undefined1)((ulong)_UNK_01d4a788 >> 0x18);
    uVar92 = (undefined1)((ulong)_UNK_01d4a788 >> 0x20);
    uVar93 = (undefined1)((ulong)_UNK_01d4a788 >> 0x28);
    uVar94 = (undefined1)((ulong)_UNK_01d4a788 >> 0x30);
    uVar95 = (undefined1)((ulong)_UNK_01d4a788 >> 0x38);
    uVar52 = *(undefined8 *)((long)param_3 + 8);
    uVar74 = (undefined1)((ulong)uVar52 >> 8);
    uVar76 = (undefined1)((ulong)uVar52 >> 0x10);
    uVar78 = (undefined1)((ulong)uVar52 >> 0x18);
    uVar80 = (undefined1)((ulong)uVar52 >> 0x20);
    uVar82 = (undefined1)((ulong)uVar52 >> 0x28);
    uVar84 = (undefined1)((ulong)uVar52 >> 0x30);
    uVar86 = (undefined1)((ulong)uVar52 >> 0x38);
    auVar5[8] = uVar91;
    auVar5._0_8_ = _DAT_01d4a780;
    auVar5[9] = uVar88;
    auVar5[10] = uVar89;
    auVar5[0xb] = uVar90;
    auVar5[0xc] = uVar92;
    auVar5[0xd] = uVar93;
    auVar5[0xe] = uVar94;
    auVar5[0xf] = uVar95;
    uVar64 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
    fVar97 = (float)((ulong)uVar64 >> 0x20);
    fVar57 = (float)*(undefined8 *)param_3;
    fVar102 = fVar57 * (float)_DAT_01d4ae80;
    fVar101 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar98 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar104 = fVar101 * fVar98;
    fVar106 = (float)uVar52 * (float)_UNK_01d4ae88;
    fVar100 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar107 = (float)((ulong)uVar52 >> 0x20) * fVar100;
    auVar23._4_4_ = fVar104;
    auVar23._0_4_ = fVar102;
    auVar23._8_4_ = fVar106;
    auVar23._12_4_ = fVar107;
    uVar116 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    auVar6[8] = uVar91;
    auVar6._0_8_ = _DAT_01d4a780;
    auVar6[9] = uVar88;
    auVar6[10] = uVar89;
    auVar6[0xb] = uVar90;
    auVar6[0xc] = uVar92;
    auVar6[0xd] = uVar93;
    auVar6[0xe] = uVar94;
    auVar6[0xf] = uVar95;
    uVar109 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
    auVar7[8] = uVar91;
    auVar7._0_8_ = _DAT_01d4a780;
    auVar7[9] = uVar88;
    auVar7[10] = uVar89;
    auVar7[0xb] = uVar90;
    auVar7[0xc] = uVar92;
    auVar7[0xd] = uVar93;
    auVar7[0xe] = uVar94;
    auVar7[0xf] = uVar95;
    uVar52 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
    auVar24._4_4_ = fVar104;
    auVar24._0_4_ = fVar102;
    auVar24._8_4_ = fVar106;
    auVar24._12_4_ = fVar107;
    uVar96 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5120);
    auVar25._4_4_ = fVar104;
    auVar25._0_4_ = fVar102;
    auVar25._8_4_ = fVar106;
    auVar25._12_4_ = fVar107;
    uVar114 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar26._4_4_ = fVar104;
    auVar26._0_4_ = fVar102;
    auVar26._8_4_ = fVar106;
    auVar26._12_4_ = fVar107;
    uVar111 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5270);
    auVar27._4_4_ = fVar104;
    auVar27._0_4_ = fVar102;
    auVar27._8_4_ = fVar106;
    auVar27._12_4_ = fVar107;
    uVar63 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
    fVar103 = (float)((ulong)uVar109 >> 0x20);
    lVar54 = *(long *)(lVar54 + 0x1b8) + (long)iVar49 * 0x130;
    auVar28._4_4_ = fVar104;
    auVar28._0_4_ = fVar102;
    auVar28._8_4_ = fVar102;
    auVar28._12_4_ = fVar104;
    uVar110 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50b0);
    fVar59 = (float)_DAT_01d4ae90;
    fVar60 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar61 = (float)_UNK_01d4ae98;
    fVar62 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar105 = (float)((ulong)uVar52 >> 0x20);
    fVar117 = (float)uVar51;
    fVar118 = (float)((ulong)uVar51 >> 0x20);
    auVar2[9] = uVar74;
    auVar2._0_9_ = *param_3;
    auVar2[10] = uVar76;
    auVar2[0xb] = uVar78;
    auVar2[0xc] = uVar80;
    auVar2[0xd] = uVar82;
    auVar2[0xe] = uVar84;
    auVar2[0xf] = uVar86;
    uVar113 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    fVar102 = (fVar102 * (float)uVar64 + fVar59 * (float)uVar116 * 0.0 +
              fVar59 * (float)uVar52 * (float)uVar114) - (float)uVar109 * (float)uVar63;
    fVar104 = (fVar104 * fVar97 + fVar60 * (float)((ulong)uVar116 >> 0x20) * 0.0 +
              fVar60 * fVar105 * (float)((ulong)uVar114 >> 0x20)) -
              fVar103 * (float)((ulong)uVar63 >> 0x20);
    fVar99 = (fVar106 * (float)uVar64 + fVar61 * (float)uVar109 * (float)uVar96 +
             fVar61 * (float)uVar110 * 0.0) - (float)uVar52 * (float)uVar111;
    fVar107 = (fVar107 * fVar97 + fVar62 * fVar103 * (float)((ulong)uVar96 >> 0x20) +
              fVar62 * (float)((ulong)uVar110 >> 0x20) * 0.0) -
              fVar105 * (float)((ulong)uVar111 >> 0x20);
    auVar3[9] = uVar74;
    auVar3._0_9_ = *param_3;
    auVar3[10] = uVar76;
    auVar3[0xb] = uVar78;
    auVar3[0xc] = uVar80;
    auVar3[0xd] = uVar82;
    auVar3[0xe] = uVar84;
    auVar3[0xf] = uVar86;
    uVar63 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
    fVar105 = (float)((ulong)uVar63 >> 0x20);
    auVar4[9] = uVar74;
    auVar4._0_9_ = *param_3;
    auVar4[10] = uVar76;
    auVar4[0xb] = uVar78;
    auVar4[0xc] = uVar80;
    auVar4[0xd] = uVar82;
    auVar4[0xe] = uVar84;
    auVar4[0xf] = uVar86;
    uVar109 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    fVar108 = (float)((ulong)uVar109 >> 0x20);
    auVar11._4_4_ = fVar104;
    auVar11._0_4_ = fVar102;
    auVar11._8_4_ = fVar99;
    auVar11._12_4_ = fVar107;
    uVar110 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5120);
    auVar12._4_4_ = fVar104;
    auVar12._0_4_ = fVar102;
    auVar12._8_4_ = fVar99;
    auVar12._12_4_ = fVar107;
    uVar51 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
    fVar115 = (float)((ulong)uVar113 >> 0x20);
    auVar13._4_4_ = fVar104;
    auVar13._0_4_ = fVar102;
    auVar13._8_4_ = fVar99;
    auVar13._12_4_ = fVar107;
    uVar114 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
    auVar14._4_4_ = fVar104;
    auVar14._0_4_ = fVar102;
    auVar14._8_4_ = fVar99;
    auVar14._12_4_ = fVar107;
    uVar64 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
    auVar15._4_4_ = fVar104;
    auVar15._0_4_ = fVar102;
    auVar15._8_4_ = fVar99;
    auVar15._12_4_ = fVar107;
    uVar111 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
    auVar16._4_4_ = fVar104;
    auVar16._0_4_ = fVar102;
    auVar16._8_4_ = fVar102;
    auVar16._12_4_ = fVar104;
    uVar52 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50b0);
    fVar106 = fVar117 * (float)_DAT_01d4ae80;
    fVar98 = fVar118 * fVar98;
    fStack_68 = fStack_68 * (float)_UNK_01d4ae88;
    fVar100 = fStack_64 * fVar100;
    auVar17._4_4_ = fVar98;
    auVar17._0_4_ = fVar106;
    auVar17._8_4_ = fStack_68;
    auVar17._12_4_ = fVar100;
    uVar96 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
    auVar18._4_4_ = fVar98;
    auVar18._0_4_ = fVar106;
    auVar18._8_4_ = fStack_68;
    auVar18._12_4_ = fVar100;
    uVar116 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
    fVar103 = ((float)uVar113 * fVar102 + fVar59 * fVar57 * (float)uVar51 +
              fVar59 * (float)uVar109 * (float)uVar114) - (float)uVar63 * (float)uVar64;
    fVar102 = (fVar115 * fVar104 + fVar60 * fVar101 * (float)((ulong)uVar51 >> 0x20) +
              fVar60 * fVar108 * (float)((ulong)uVar114 >> 0x20)) -
              fVar105 * (float)((ulong)uVar64 >> 0x20);
    fVar97 = ((float)uVar113 * fVar99 + fVar61 * (float)uVar63 * (float)uVar110 +
             fVar61 * fVar57 * (float)uVar52) - (float)uVar109 * (float)uVar111;
    fVar104 = (fVar115 * fVar107 + fVar62 * fVar105 * (float)((ulong)uVar110 >> 0x20) +
              fVar62 * fVar101 * (float)((ulong)uVar52 >> 0x20)) -
              fVar108 * (float)((ulong)uVar111 >> 0x20);
    uVar52 = *(undefined8 *)(lVar54 + 0xd8);
    uVar51 = *(undefined8 *)(lVar54 + 0xd0);
    bVar73 = (byte)DAT_01d4ab58;
    bVar75 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar77 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar79 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar81 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar83 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar85 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar87 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar65 = (byte)DAT_01d4ab50;
    bVar66 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar67 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar68 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar69 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar70 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar71 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar72 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    fVar99 = (float)uVar112;
    fVar57 = (float)uVar51 * fVar99 +
             (float)CONCAT13((byte)((uint)fVar103 >> 0x18) & bVar68,
                             CONCAT12((byte)((uint)fVar103 >> 0x10) & bVar67,
                                      CONCAT11((byte)((uint)fVar103 >> 8) & bVar66,
                                               SUB41(fVar103,0) & bVar65)));
    fVar101 = (float)((ulong)uVar51 >> 0x20) * fVar99 +
              (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & bVar72,
                              CONCAT12((byte)((uint)fVar102 >> 0x10) & bVar71,
                                       CONCAT11((byte)((uint)fVar102 >> 8) & bVar70,
                                                SUB41(fVar102,0) & bVar69)));
    uVar74 = SUB41(fVar101,0);
    uVar76 = (undefined1)((uint)fVar101 >> 8);
    uVar78 = (undefined1)((uint)fVar101 >> 0x10);
    uVar80 = (undefined1)((uint)fVar101 >> 0x18);
    fVar101 = (float)uVar52 * fVar99 +
              (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & bVar79,
                              CONCAT12((byte)((uint)fVar97 >> 0x10) & bVar77,
                                       CONCAT11((byte)((uint)fVar97 >> 8) & bVar75,
                                                SUB41(fVar97,0) & bVar73)));
    uVar82 = SUB41(fVar101,0);
    uVar84 = (undefined1)((uint)fVar101 >> 8);
    uVar86 = (undefined1)((uint)fVar101 >> 0x10);
    uVar91 = (undefined1)((uint)fVar101 >> 0x18);
    fVar101 = (float)((ulong)uVar52 >> 0x20) * fVar99 +
              (float)CONCAT13((byte)((uint)fVar104 >> 0x18) & bVar87,
                              CONCAT12((byte)((uint)fVar104 >> 0x10) & bVar85,
                                       CONCAT11((byte)((uint)fVar104 >> 8) & bVar83,
                                                SUB41(fVar104,0) & bVar81)));
    uVar88 = SUB41(fVar101,0);
    uVar89 = (undefined1)((uint)fVar101 >> 8);
    uVar90 = (undefined1)((uint)fVar101 >> 0x10);
    uVar92 = (undefined1)((uint)fVar101 >> 0x18);
    auVar19._4_4_ = fVar98;
    auVar19._0_4_ = fVar106;
    auVar19._8_4_ = fStack_68;
    auVar19._12_4_ = fVar100;
    uVar111 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5120);
    auVar34._4_4_ = fVar98;
    auVar34._0_4_ = fVar106;
    auVar34._8_4_ = fVar106;
    auVar34._12_4_ = fVar98;
    uVar64 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50b0);
    auVar8[4] = uVar74;
    auVar8._0_4_ = fVar57;
    auVar8[5] = uVar76;
    auVar8[6] = uVar78;
    auVar8[7] = uVar80;
    auVar8[8] = uVar82;
    auVar8[9] = uVar84;
    auVar8[10] = uVar86;
    auVar8[0xb] = uVar91;
    auVar8[0xc] = uVar88;
    auVar8[0xd] = uVar89;
    auVar8[0xe] = uVar90;
    auVar8[0xf] = uVar92;
    uVar63 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    fVar102 = (float)((ulong)uVar63 >> 0x20);
    auVar9[4] = uVar74;
    auVar9._0_4_ = fVar57;
    auVar9[5] = uVar76;
    auVar9[6] = uVar78;
    auVar9[7] = uVar80;
    auVar9[8] = uVar82;
    auVar9[9] = uVar84;
    auVar9[10] = uVar86;
    auVar9[0xb] = uVar91;
    auVar9[0xc] = uVar88;
    auVar9[0xd] = uVar89;
    auVar9[0xe] = uVar90;
    auVar9[0xf] = uVar92;
    uVar112 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    auVar10[4] = uVar74;
    auVar10._0_4_ = fVar57;
    auVar10[5] = uVar76;
    auVar10[6] = uVar78;
    auVar10[7] = uVar80;
    auVar10[8] = uVar82;
    auVar10[9] = uVar84;
    auVar10[10] = uVar86;
    auVar10[0xb] = uVar91;
    auVar10[0xc] = uVar88;
    auVar10[0xd] = uVar89;
    auVar10[0xe] = uVar90;
    auVar10[0xf] = uVar92;
    uVar109 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
    auVar35._12_4_ = fStack_64;
    auVar35._0_12_ = auVar38;
    uVar110 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd4f90);
    fVar99 = (float)((ulong)uVar110 >> 0x20);
    *param_1 = 1;
    auVar20._4_4_ = fVar98;
    auVar20._0_4_ = fVar106;
    auVar20._8_4_ = fStack_68;
    auVar20._12_4_ = fVar100;
    uVar51 = a64_TBL(ZEXT816(0),auVar20,uVar47);
    fVar101 = (float)((ulong)uVar112 >> 0x20);
    auVar21._4_4_ = fVar98;
    auVar21._0_4_ = fVar106;
    auVar21._8_4_ = fStack_68;
    auVar21._12_4_ = fVar100;
    uVar52 = a64_TBL(ZEXT816(0),auVar21,uVar46);
    fVar97 = (float)((ulong)uVar109 >> 0x20);
    auVar36._12_4_ = fStack_64;
    auVar36._0_12_ = auVar39;
    uVar113 = a64_TBL(ZEXT816(0),auVar36,uVar44);
    auVar37._12_4_ = fStack_64;
    auVar37._0_12_ = auVar40;
    uVar114 = a64_TBL(ZEXT816(0),auVar37,uVar47);
    fVar103 = (fVar106 * (float)uVar63 + fVar59 * (float)uVar96 * fVar57 +
              fVar59 * (float)uVar116 * (float)uVar109) - (float)uVar112 * (float)uVar51;
    fVar104 = (fVar98 * fVar102 +
               fVar60 * (float)((ulong)uVar96 >> 0x20) *
                        (float)(CONCAT17(uVar80,CONCAT16(uVar78,CONCAT15(uVar76,CONCAT14(uVar74,
                                                  fVar57)))) >> 0x20) +
              fVar60 * (float)((ulong)uVar116 >> 0x20) * fVar97) -
              fVar101 * (float)((ulong)uVar51 >> 0x20);
    fVar106 = (fStack_68 * (float)uVar63 + fVar61 * (float)uVar111 * (float)uVar112 +
              fVar61 * (float)uVar64 * fVar57) - (float)uVar109 * (float)uVar52;
    fVar98 = (fVar100 * fVar102 + fVar62 * (float)((ulong)uVar111 >> 0x20) * fVar101 +
             fVar62 * (float)((ulong)uVar64 >> 0x20) *
                      (float)(CONCAT17(uVar80,CONCAT16(uVar78,CONCAT15(uVar76,CONCAT14(uVar74,fVar57
                                                                                      )))) >> 0x20))
             - fVar97 * (float)((ulong)uVar52 >> 0x20);
    auVar29._4_4_ = fVar104;
    auVar29._0_4_ = fVar103;
    auVar29._8_4_ = fVar106;
    auVar29._12_4_ = fVar98;
    uVar51 = a64_TBL(ZEXT816(0),auVar29,uVar42);
    auVar30._4_4_ = fVar104;
    auVar30._0_4_ = fVar103;
    auVar30._8_4_ = fVar106;
    auVar30._12_4_ = fVar98;
    uVar52 = a64_TBL(ZEXT816(0),auVar30,uVar45);
    auVar31._4_4_ = fVar104;
    auVar31._0_4_ = fVar103;
    auVar31._8_4_ = fVar106;
    auVar31._12_4_ = fVar98;
    uVar96 = a64_TBL(ZEXT816(0),auVar31,uVar47);
    auVar32._4_4_ = fVar104;
    auVar32._0_4_ = fVar103;
    auVar32._8_4_ = fVar106;
    auVar32._12_4_ = fVar98;
    uVar63 = a64_TBL(ZEXT816(0),auVar32,uVar46);
    auVar33._4_4_ = fVar104;
    auVar33._0_4_ = fVar103;
    auVar33._8_4_ = fVar106;
    auVar33._12_4_ = fVar98;
    uVar111 = a64_TBL(ZEXT816(0),auVar33,uVar44);
    auVar22._4_4_ = fVar104;
    auVar22._0_4_ = fVar103;
    auVar22._8_4_ = fVar103;
    auVar22._12_4_ = fVar104;
    uVar64 = a64_TBL(ZEXT816(0),auVar22,uVar43);
    fVar97 = (float)((ulong)uVar113 >> 0x20);
    fVar102 = (float)((ulong)uVar114 >> 0x20);
    fVar57 = ((float)uVar110 * fVar103 + fVar59 * fVar117 * (float)uVar51 +
             fVar59 * (float)uVar114 * (float)uVar111) - (float)uVar113 * (float)uVar96;
    fVar101 = (fVar99 * fVar104 + fVar60 * fVar118 * (float)((ulong)uVar51 >> 0x20) +
              fVar60 * fVar102 * (float)((ulong)uVar111 >> 0x20)) -
              fVar97 * (float)((ulong)uVar96 >> 0x20);
    fVar103 = ((float)uVar110 * fVar106 + fVar61 * (float)uVar113 * (float)uVar52 +
              fVar61 * fVar117 * (float)uVar64) - (float)uVar114 * (float)uVar63;
    fVar102 = (fVar99 * fVar98 + fVar62 * fVar97 * (float)((ulong)uVar52 >> 0x20) +
              fVar62 * fVar118 * (float)((ulong)uVar64 >> 0x20)) -
              fVar102 * (float)((ulong)uVar63 >> 0x20);
    fVar57 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & bVar68,
                             CONCAT12((byte)((uint)fVar57 >> 0x10) & bVar67,
                                      CONCAT11((byte)((uint)fVar57 >> 8) & bVar66,
                                               SUB41(fVar57,0) & bVar65)));
    fVar103 = (float)CONCAT13((byte)((uint)fVar103 >> 0x18) & bVar79,
                              CONCAT12((byte)((uint)fVar103 >> 0x10) & bVar77,
                                       CONCAT11((byte)((uint)fVar103 >> 8) & bVar75,
                                                SUB41(fVar103,0) & bVar73)));
    *(ulong *)(param_1 + 0x18) =
         CONCAT44((float)((ulong)uVar58 >> 0x20) +
                  (float)(CONCAT17((byte)((uint)fVar102 >> 0x18) & bVar87,
                                   CONCAT16((byte)((uint)fVar102 >> 0x10) & bVar85,
                                            CONCAT15((byte)((uint)fVar102 >> 8) & bVar83,
                                                     CONCAT14(SUB41(fVar102,0) & bVar81,fVar103))))
                         >> 0x20),(float)uVar58 + fVar103);
    *(ulong *)(param_1 + 0x10) =
         CONCAT44((float)((ulong)uVar53 >> 0x20) +
                  (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) & bVar72,
                                   CONCAT16((byte)((uint)fVar101 >> 0x10) & bVar71,
                                            CONCAT15((byte)((uint)fVar101 >> 8) & bVar70,
                                                     CONCAT14(SUB41(fVar101,0) & bVar69,fVar57))))
                         >> 0x20),(float)uVar53 + fVar57);
  }
  return;
}


