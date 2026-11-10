/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ab840; name: FUN_013ab840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ab840(long param_1)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined1 auVar22 [12];
  int iVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar35;
  int iVar36;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [12];
  float fVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  undefined1 auVar63 [16];
  undefined8 uVar65;
  float fVar76;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar66;
  float fVar77;
  float fVar78;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar75;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  float fVar94;
  undefined8 uVar93;
  float fVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar16 = _DAT_00000350;
    if (puVar19 == (undefined8 *)0x0) goto joined_r0x013ab928;
    plVar16 = (long *)(**(code **)*puVar19)(puVar19);
    lVar17 = FUN_0132d9a0();
    for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      if (plVar16 == (long *)lVar17) {
        puVar20 = puVar19 + -10;
        plVar16 = (long *)puVar19[0x60];
        if (plVar16 != (long *)0x0) goto LAB_013ab8b0;
        goto LAB_013ab92c;
      }
    }
  }
  plVar16 = _DAT_00000350;
joined_r0x013ab928:
  puVar20 = (undefined8 *)0x0;
  _DAT_00000350 = plVar16;
  if (plVar16 == (long *)0x0) {
LAB_013ab92c:
    local_70 = _DAT_000000a0;
    uStack_68 = _DAT_000000a8;
  }
  else {
LAB_013ab8b0:
    lVar17 = plVar16[0xb];
    if (*(long *)(lVar17 + 0x58) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar17 + 0x60))();
      *(undefined8 *)(lVar17 + 0x58) = uVar18;
    }
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_68 = SUB168(*(undefined1 (*) [16])(plVar16 + 0x14),8);
    local_70 = SUB168(*(undefined1 (*) [16])(plVar16 + 0x14),0);
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x60) = 0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  uVar15 = DAT_01cd5418;
  uVar97 = DAT_01cd5270;
  uVar96 = DAT_01cd5120;
  uVar14 = DAT_01cd50f8;
  uVar13 = DAT_01cd50b0;
  uVar93 = DAT_01cd4f90;
  auVar43 = *(undefined1 (*) [16])(param_1 + 0xa0);
  plVar16 = (long *)puVar20[0x6a];
  auVar41 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x98) + 0xa0);
  auVar56 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x98) + 0xb0);
  fVar76 = auVar41._0_4_;
  fVar88 = (float)_DAT_01d4ae80;
  fVar50 = auVar41._4_4_;
  fVar95 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  auVar67._0_8_ = CONCAT44(fVar50 * fVar95,fVar76 * fVar88);
  fVar64 = (float)_UNK_01d4ae88;
  auVar67._8_4_ = auVar41._8_4_ * fVar64;
  fVar114 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar67._12_4_ = auVar41._12_4_ * fVar114;
  uVar18 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd4f90);
  uVar90 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5418);
  uVar38 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd4f90);
  uVar86 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd50f8);
  uVar87 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd5120);
  fVar78 = (float)((ulong)uVar38 >> 0x20);
  uVar92 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd5270);
  uVar91 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd5418);
  fVar51 = (float)((ulong)uVar86 >> 0x20);
  uVar53 = a64_TBL(ZEXT816(0),auVar67,DAT_01cd50f8);
  auVar68._8_8_ = auVar67._0_8_;
  auVar68._0_8_ = auVar67._0_8_;
  uVar65 = a64_TBL(ZEXT816(0),auVar68,DAT_01cd50b0);
  fVar52 = (float)((ulong)uVar90 >> 0x20);
  fVar110 = (float)_DAT_01d4ae90;
  fVar111 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar112 = (float)_UNK_01d4ae98;
  fVar113 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar79 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50f8);
  uVar66 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd4f90);
  fVar37 = (fVar76 * fVar88 * (float)uVar38 + fVar110 * auVar43._0_4_ * (float)uVar18 +
           fVar110 * (float)uVar90 * (float)uVar53) - (float)uVar86 * (float)uVar91;
  fVar49 = (fVar50 * fVar95 * fVar78 + fVar111 * auVar43._4_4_ * (float)((ulong)uVar18 >> 0x20) +
           fVar111 * fVar52 * (float)((ulong)uVar53 >> 0x20)) -
           fVar51 * (float)((ulong)uVar91 >> 0x20);
  auVar40._0_8_ = CONCAT44(fVar49,fVar37);
  auVar40._8_4_ =
       (auVar67._8_4_ * (float)uVar38 + fVar112 * (float)uVar86 * (float)uVar87 +
       fVar112 * auVar43._0_4_ * (float)uVar65) - (float)uVar90 * (float)uVar92;
  auVar40._12_4_ =
       (auVar67._12_4_ * fVar78 + fVar113 * fVar51 * (float)((ulong)uVar87 >> 0x20) +
       fVar113 * auVar43._4_4_ * (float)((ulong)uVar65 >> 0x20)) -
       fVar52 * (float)((ulong)uVar92 >> 0x20);
  uVar91 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd4f90);
  uVar38 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5120);
  fVar78 = (float)((ulong)uVar66 >> 0x20);
  uVar65 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5270);
  fVar51 = (float)((ulong)uVar79 >> 0x20);
  uVar92 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd5418);
  uVar53 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd50f8);
  uVar87 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5418);
  auVar41._8_8_ = auVar40._0_8_;
  auVar41._0_8_ = auVar40._0_8_;
  uVar18 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50b0);
  fVar52 = (float)((ulong)uVar92 >> 0x20);
  fVar37 = ((float)uVar66 * fVar37 + fVar110 * fVar76 * (float)uVar91 +
           fVar110 * (float)uVar92 * (float)uVar53) - (float)uVar79 * (float)uVar87;
  fVar49 = (fVar78 * fVar49 + fVar111 * fVar50 * (float)((ulong)uVar91 >> 0x20) +
           fVar111 * fVar52 * (float)((ulong)uVar53 >> 0x20)) -
           fVar51 * (float)((ulong)uVar87 >> 0x20);
  fVar76 = ((float)uVar66 * auVar40._8_4_ + fVar112 * (float)uVar79 * (float)uVar38 +
           fVar112 * fVar76 * (float)uVar18) - (float)uVar92 * (float)uVar65;
  fVar78 = (fVar78 * auVar40._12_4_ + fVar113 * fVar51 * (float)((ulong)uVar38 >> 0x20) +
           fVar113 * fVar50 * (float)((ulong)uVar18 >> 0x20)) -
           fVar52 * (float)((ulong)uVar65 >> 0x20);
  bVar115 = (byte)DAT_01d4ab50;
  bVar116 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar117 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar118 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  fVar37 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & bVar118,
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & bVar117,
                                    CONCAT11((byte)((uint)fVar37 >> 8) & bVar116,
                                             SUB41(fVar37,0) & bVar115)));
  bVar119 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar120 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar121 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar122 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  auVar39._0_8_ =
       CONCAT17((byte)((uint)fVar49 >> 0x18) & bVar122,
                CONCAT16((byte)((uint)fVar49 >> 0x10) & bVar121,
                         CONCAT15((byte)((uint)fVar49 >> 8) & bVar120,
                                  CONCAT14(SUB41(fVar49,0) & bVar119,fVar37))));
  bVar123 = (byte)DAT_01d4ab58;
  auVar39[8] = SUB41(fVar76,0) & bVar123;
  bVar124 = (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar39[9] = (byte)((uint)fVar76 >> 8) & bVar124;
  bVar125 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar39[10] = (byte)((uint)fVar76 >> 0x10) & bVar125;
  bVar126 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar39[0xb] = (byte)((uint)fVar76 >> 0x18) & bVar126;
  bVar127 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar42[0xc] = SUB41(fVar78,0) & bVar127;
  auVar42._0_12_ = auVar39;
  bVar128 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar42[0xd] = (byte)((uint)fVar78 >> 8) & bVar128;
  bVar129 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar42[0xe] = (byte)((uint)fVar78 >> 0x10) & bVar129;
  bVar130 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  auVar42[0xf] = (byte)((uint)fVar78 >> 0x18) & bVar130;
  fVar37 = auVar56._0_4_ + fVar37;
  fVar78 = auVar56._4_4_ + (float)((ulong)auVar39._0_8_ >> 0x20);
  auVar43._0_8_ = CONCAT44(fVar78,fVar37);
  auVar43._8_4_ = auVar56._8_4_ + auVar39._8_4_;
  auVar43._12_4_ = auVar56._12_4_ + auVar42._12_4_;
  if (plVar16 == (long *)0x0) {
    auVar56._0_4_ = 0.0 - (fVar37 - _DAT_000000b0);
    auVar56._4_4_ = 0.0 - (fVar78 - fRam00000000000000b4);
    auVar56._8_4_ = 0.0 - (auVar43._8_4_ - _DAT_000000b8);
    auVar56._12_4_ = 0.0 - (auVar43._12_4_ - fRam00000000000000bc);
  }
  else {
    lVar17 = plVar16[0xb];
    if (*(long *)(lVar17 + 0x58) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar17 + 0x60))();
      auVar43._8_8_ = auVar43._8_8_;
      *(undefined8 *)(lVar17 + 0x58) = uVar18;
    }
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    auVar56._0_8_ =
         CONCAT44(0.0 - (auVar43._4_4_ - *(float *)((long)plVar16 + 0xb4)),
                  0.0 - (auVar43._0_4_ - *(float *)(plVar16 + 0x16)));
    auVar56._8_4_ = 0.0 - (auVar43._8_4_ - *(float *)(plVar16 + 0x17));
    auVar56._12_4_ = 0.0 - (auVar43._12_4_ - *(float *)((long)plVar16 + 0xbc));
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x60) = 0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      auVar56._8_8_ = auVar56._8_8_;
    }
  }
  fVar76 = auVar56._0_4_;
  auVar25._0_4_ = fVar76 * fVar76;
  fVar50 = auVar56._4_4_;
  auVar25._4_4_ = fVar50 * fVar50;
  fVar51 = auVar56._8_4_;
  auVar25._8_4_ = fVar51 * fVar51;
  fVar52 = auVar56._12_4_;
  auVar25._12_4_ = fVar52 * fVar52;
  auVar43 = NEON_ext(auVar25,auVar25,8,1);
  fVar78 = auVar43._0_4_ + auVar25._0_4_;
  fVar49 = auVar43._4_4_ + auVar25._4_4_;
  fVar37 = fVar78 + fVar49;
  fVar78 = fVar78 + fVar49;
  auVar26._8_8_ = CONCAT44(fVar78,fVar37);
  auVar26._0_8_ = CONCAT44(fVar78,fVar37);
  auVar43 = NEON_frsqrte(auVar26,4);
  auVar55._0_4_ = auVar43._0_4_ * fVar37;
  auVar55._4_4_ = auVar43._4_4_ * fVar78;
  auVar55._8_4_ = auVar43._8_4_ * fVar37;
  auVar55._12_4_ = auVar43._12_4_ * fVar78;
  auVar56 = NEON_frsqrts(auVar43,auVar55,4);
  auVar44._0_4_ = auVar43._0_4_ * auVar56._0_4_;
  auVar44._4_4_ = auVar43._4_4_ * auVar56._4_4_;
  auVar44._8_4_ = auVar43._8_4_ * auVar56._8_4_;
  auVar44._12_4_ = auVar43._12_4_ * auVar56._12_4_;
  auVar57._0_4_ = fVar37 * auVar44._0_4_;
  auVar57._4_4_ = fVar78 * auVar44._4_4_;
  auVar57._8_4_ = fVar37 * auVar44._8_4_;
  auVar57._12_4_ = fVar78 * auVar44._12_4_;
  iVar21 = -(uint)(fVar37 == 0.0);
  iVar34 = -(uint)(fVar78 == 0.0);
  iVar35 = -(uint)(fVar37 == 0.0);
  iVar36 = -(uint)(fVar78 == 0.0);
  auVar43 = NEON_frsqrts(auVar44,auVar57,4);
  auVar58._8_8_ = _UNK_01d4b588;
  auVar58._0_8_ = _DAT_01d4b580;
  fVar76 = fVar76 * auVar44._0_4_ * auVar43._0_4_;
  fVar50 = fVar50 * auVar44._4_4_ * auVar43._4_4_;
  fVar51 = fVar51 * auVar44._8_4_ * auVar43._8_4_;
  fVar52 = fVar52 * auVar44._12_4_ * auVar43._12_4_;
  auVar22._0_8_ =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                         CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                  CONCAT14(SUB41(fVar50,0) & ~(byte)iVar34,
                                           CONCAT13((byte)((uint)fVar76 >> 0x18) &
                                                    ~(byte)((uint)iVar21 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                                             ~(byte)((uint)iVar21 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar76 >> 8) &
                                                                      ~(byte)((uint)iVar21 >> 8),
                                                                      SUB41(fVar76,0) &
                                                                      ~(byte)iVar21)))))));
  auVar22[8] = SUB41(fVar51,0) & ~(byte)iVar35;
  auVar22[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar22[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar22[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar27[0xc] = SUB41(fVar52,0) & ~(byte)iVar36;
  auVar27._0_12_ = auVar22;
  auVar27[0xd] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar36 >> 8);
  auVar27[0xe] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  auVar27[0xf] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  uVar53 = a64_TBL(ZEXT816(0),auVar58,uVar15);
  uVar91 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd5188);
  uVar92 = a64_TBL(ZEXT816(0),auVar27,uVar14);
  uVar38 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5158);
  uVar66 = a64_TBL(ZEXT816(0),auVar27,uVar15);
  uVar65 = a64_TBL(ZEXT816(0),auVar58,uVar14);
  uVar87 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd5158);
  uVar18 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5188);
  fVar49 = (float)((ulong)uVar92 >> 0x20);
  fVar76 = (float)((ulong)uVar66 >> 0x20);
  fVar78 = (float)uVar53 * (float)uVar92 - (float)uVar65 * (float)uVar66;
  fVar37 = (float)((ulong)uVar53 >> 0x20) * fVar49 - (float)((ulong)uVar65 >> 0x20) * fVar76;
  auVar45._0_8_ = CONCAT44(fVar37,fVar78);
  auVar45._8_4_ = (float)uVar91 * (float)uVar38 - (float)uVar87 * (float)uVar18;
  auVar45._12_4_ =
       (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar38 >> 0x20) -
       (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar18 >> 0x20);
  auVar59._0_4_ = 0.0 - fVar78;
  auVar59._4_4_ = 0.0 - fVar37;
  auVar59._8_4_ = 0.0 - auVar45._8_4_;
  auVar59._12_4_ = 0.0 - auVar45._12_4_;
  uVar65 = a64_TBL(ZEXT816(0),auVar59,uVar15);
  uVar87 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5188);
  uVar91 = a64_TBL(ZEXT816(0),auVar59,uVar14);
  uVar53 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5158);
  fVar51 = (float)uVar92 * (float)uVar65 - (float)uVar91 * (float)uVar66;
  fVar52 = fVar49 * (float)((ulong)uVar65 >> 0x20) - (float)((ulong)uVar91 >> 0x20) * fVar76;
  fVar77 = (float)uVar38 * (float)uVar87 - (float)uVar53 * (float)uVar18;
  uVar101 = (undefined4)_UNK_01d49dc8;
  uVar102 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar37 = auVar22._8_4_;
  auVar43 = NEON_fmov(0x3f800000,4);
  auVar4._8_4_ = uVar101;
  auVar4._0_8_ = _DAT_01d49dc0;
  auVar4._12_4_ = uVar102;
  uVar66 = a64_TBL(ZEXT816(0),auVar4,uVar14);
  fVar49 = (float)_DAT_01d4ab60 * fVar78 + (float)_DAT_01d4b9d0 * fVar52 +
           (float)_DAT_01d4b2f0 * fVar37 + auVar43._0_4_;
  fVar76 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar78 +
           (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar52 +
           (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar37 + auVar43._4_4_;
  fVar50 = (float)_UNK_01d4ab68 * fVar78 + (float)_UNK_01d4b9d8 * fVar52 +
           (float)_UNK_01d4b2f8 * fVar37 + auVar43._8_4_;
  fVar78 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar78 +
           (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar52 +
           (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar37 + auVar43._12_4_;
  auVar5._8_4_ = uVar101;
  auVar5._0_8_ = _DAT_01d49dc0;
  auVar5._12_4_ = uVar102;
  uVar79 = a64_TBL(ZEXT816(0),auVar5,uVar15);
  uVar18 = NEON_ext(auVar45._0_8_,auVar22._0_8_,4,1);
  fVar52 = (float)((ulong)uVar18 >> 0x20);
  auVar43 = NEON_ext(auVar45,auVar45,8,1);
  fVar37 = (float)((ulong)auVar22._0_8_ >> 0x20);
  auVar69._0_4_ = fVar51 + (float)uVar18;
  auVar69._4_4_ = auVar43._0_4_ + fVar52;
  auVar69._8_4_ = fVar37 + fVar77;
  auVar69._12_4_ = 0;
  auVar81._0_4_ = (float)uVar18 - fVar51;
  auVar81._4_4_ = fVar52 - auVar43._0_4_;
  auVar81._8_4_ = fVar77 - fVar37;
  auVar81._12_4_ = 0;
  uVar87 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd5420);
  uVar103 = (undefined4)((ulong)uVar87 >> 0x20);
  uVar91 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd51d0);
  uVar104 = (undefined4)((ulong)uVar91 >> 0x20);
  auVar106._0_8_ = CONCAT44(-(uint)(fVar49 <= fVar76),-(uint)(fVar49 <= fVar76));
  auVar106._8_4_ = -(uint)(fVar49 <= fVar76);
  auVar106._12_4_ = -(uint)(fVar49 <= fVar76);
  auVar108._8_8_ = auVar106._8_8_;
  auVar108._0_8_ = auVar106._0_8_;
  uVar92 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd5250);
  auVar8._4_4_ = fVar49;
  auVar8._0_4_ = fVar49;
  auVar8._8_4_ = fVar49;
  auVar8._12_4_ = fVar49;
  auVar10._4_4_ = fVar76;
  auVar10._0_4_ = fVar76;
  auVar10._8_4_ = fVar76;
  auVar10._12_4_ = fVar76;
  auVar109._4_4_ = fVar49;
  auVar109._0_4_ = fVar49;
  auVar109._8_4_ = fVar49;
  auVar109._12_4_ = fVar49;
  auVar109 = auVar109 ^ (auVar8 ^ auVar10) & auVar108;
  uVar38 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd50b8);
  uVar18 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd5190);
  uVar53 = a64_TBL(ZEXT816(0),auVar69,auVar81,DAT_01cd4f98);
  auVar70._0_8_ = a64_TBL(ZEXT816(0),auVar69,auVar81,uVar15);
  auVar28._0_4_ = (undefined4)uVar87;
  auVar28._4_4_ = fVar76;
  auVar28._8_8_ = uVar92;
  auVar7._4_4_ = uVar103;
  auVar7._0_4_ = fVar49;
  auVar7._8_4_ = (int)uVar91;
  auVar7._12_4_ = uVar104;
  auVar107._4_4_ = uVar103;
  auVar107._0_4_ = fVar49;
  auVar107._8_4_ = (int)uVar91;
  auVar107._12_4_ = uVar104;
  auVar107 = auVar107 ^ (auVar7 ^ auVar28) & auVar106;
  auVar29._4_4_ = fVar50;
  auVar29._0_4_ = fVar50;
  auVar29._8_4_ = fVar50;
  auVar29._12_4_ = fVar50;
  auVar46._0_8_ = CONCAT44(-(uint)(auVar109._4_4_ <= fVar50),-(uint)(auVar109._0_4_ <= fVar50));
  auVar46._8_4_ = -(uint)(auVar109._8_4_ <= fVar50);
  auVar46._12_4_ = -(uint)(auVar109._12_4_ <= fVar50);
  auVar82._8_8_ = auVar46._8_8_;
  auVar82._0_8_ = auVar46._0_8_;
  auVar70._12_4_ = (undefined4)((ulong)uVar38 >> 0x20);
  auVar70._8_4_ = fVar50;
  auVar109 = auVar109 ^ (auVar109 ^ auVar29) & auVar82;
  auVar107 = auVar107 ^ (auVar107 ^ auVar70) & auVar46;
  auVar30._0_4_ = -(uint)(auVar109._0_4_ <= fVar78);
  auVar30._4_4_ = -(uint)(auVar109._4_4_ <= fVar78);
  auVar30._8_4_ = -(uint)(auVar109._8_4_ <= fVar78);
  auVar30._12_4_ = -(uint)(auVar109._12_4_ <= fVar78);
  auVar9._8_4_ = (int)uVar53;
  auVar9._0_8_ = uVar18;
  auVar9._12_4_ = fVar78;
  auVar107 = auVar107 ^ (auVar107 ^ auVar9) & auVar30;
  fVar49 = auVar107._0_4_;
  auVar47._0_4_ = fVar49 * fVar49;
  fVar76 = auVar107._4_4_;
  auVar47._4_4_ = fVar76 * fVar76;
  fVar50 = auVar107._8_4_;
  auVar47._8_4_ = fVar50 * fVar50;
  fVar51 = auVar107._12_4_;
  auVar47._12_4_ = fVar51 * fVar51;
  auVar43 = NEON_ext(auVar47,auVar47,8,1);
  fVar78 = auVar43._0_4_ + auVar47._0_4_;
  fVar52 = auVar43._4_4_ + auVar47._4_4_;
  fVar37 = fVar78 + fVar52;
  fVar78 = fVar78 + fVar52;
  auVar48._8_8_ = CONCAT44(fVar78,fVar37);
  auVar48._0_8_ = CONCAT44(fVar78,fVar37);
  auVar43 = NEON_frsqrte(auVar48,4);
  auVar71._0_4_ = auVar43._0_4_ * fVar37;
  auVar71._4_4_ = auVar43._4_4_ * fVar78;
  auVar71._8_4_ = auVar43._8_4_ * fVar37;
  auVar71._12_4_ = auVar43._12_4_ * fVar78;
  auVar56 = NEON_frsqrts(auVar43,auVar71,4);
  auVar60._0_4_ = auVar43._0_4_ * auVar56._0_4_;
  auVar60._4_4_ = auVar43._4_4_ * auVar56._4_4_;
  auVar60._8_4_ = auVar43._8_4_ * auVar56._8_4_;
  auVar60._12_4_ = auVar43._12_4_ * auVar56._12_4_;
  auVar72._0_4_ = fVar37 * auVar60._0_4_;
  auVar72._4_4_ = fVar78 * auVar60._4_4_;
  auVar72._8_4_ = fVar37 * auVar60._8_4_;
  auVar72._12_4_ = fVar78 * auVar60._12_4_;
  iVar21 = -(uint)(fVar37 == 0.0);
  iVar34 = -(uint)(fVar78 == 0.0);
  iVar35 = -(uint)(fVar37 == 0.0);
  iVar36 = -(uint)(fVar78 == 0.0);
  auVar43 = NEON_frsqrts(auVar60,auVar72,4);
  auVar6._8_4_ = uVar101;
  auVar6._0_8_ = _DAT_01d49dc0;
  auVar6._12_4_ = uVar102;
  uVar53 = a64_TBL(ZEXT816(0),auVar6,uVar93);
  fVar49 = auVar60._0_4_ * auVar43._0_4_ * fVar49;
  fVar76 = auVar60._4_4_ * auVar43._4_4_ * fVar76;
  fVar50 = auVar60._8_4_ * auVar43._8_4_ * fVar50;
  fVar51 = auVar60._12_4_ * auVar43._12_4_ * fVar51;
  fVar37 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar49,0) & ~(byte)iVar21)));
  auVar23._0_8_ =
       CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                CONCAT16((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                         CONCAT15((byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                  CONCAT14(SUB41(fVar76,0) & ~(byte)iVar34,fVar37))));
  auVar23[8] = SUB41(fVar50,0) & ~(byte)iVar35;
  auVar23[9] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar23[10] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar23[0xb] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar31[0xc] = SUB41(fVar51,0) & ~(byte)iVar36;
  auVar31._0_12_ = auVar23;
  auVar31[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar36 >> 8);
  auVar31[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  auVar31[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  auVar12._8_8_ = uStack_68;
  auVar12._0_8_ = local_70;
  fVar49 = (float)local_70;
  fVar76 = (float)((ulong)local_70 >> 0x20);
  auVar61._0_8_ = CONCAT44(fVar76 * fVar95,fVar49 * fVar88);
  auVar61._8_4_ = (float)uStack_68 * fVar64;
  auVar61._12_4_ = (float)((ulong)uStack_68 >> 0x20) * fVar114;
  uStack_78 = auVar31._8_8_;
  uVar18 = a64_TBL(ZEXT816(0),auVar61,uVar93);
  uVar87 = a64_TBL(ZEXT816(0),auVar61,uVar96);
  uVar92 = a64_TBL(ZEXT816(0),auVar61,uVar15);
  fVar77 = (float)uVar53;
  fVar75 = (float)((ulong)uVar53 >> 0x20);
  uVar38 = a64_TBL(ZEXT816(0),auVar61,uVar97);
  uVar91 = a64_TBL(ZEXT816(0),auVar61,uVar14);
  auVar62._8_8_ = auVar61._0_8_;
  auVar62._0_8_ = auVar61._0_8_;
  uVar65 = a64_TBL(ZEXT816(0),auVar62,uVar13);
  fVar98 = (float)uVar66;
  fVar99 = (float)((ulong)uVar66 >> 0x20);
  uVar53 = a64_TBL(ZEXT816(0),auVar12,uVar14);
  fVar100 = (float)((ulong)uVar53 >> 0x20);
  fVar89 = (float)uVar79;
  fVar94 = (float)((ulong)uVar79 >> 0x20);
  uVar90 = a64_TBL(ZEXT816(0),auVar12,uVar93);
  fVar50 = (fVar49 * fVar88 * fVar77 + fVar110 * (float)uVar18 * 0.0 +
           fVar110 * fVar89 * (float)uVar91) - fVar98 * (float)uVar92;
  fVar52 = (fVar76 * fVar95 * fVar75 + fVar111 * (float)((ulong)uVar18 >> 0x20) * 0.0 +
           fVar111 * fVar94 * (float)((ulong)uVar91 >> 0x20)) -
           fVar99 * (float)((ulong)uVar92 >> 0x20);
  auVar83._0_8_ = CONCAT44(fVar52,fVar50);
  auVar83._8_4_ =
       (auVar61._8_4_ * fVar77 + fVar112 * fVar98 * (float)uVar87 + fVar112 * (float)uVar65 * 0.0) -
       fVar89 * (float)uVar38;
  auVar83._12_4_ =
       (auVar61._12_4_ * fVar75 + fVar113 * fVar99 * (float)((ulong)uVar87 >> 0x20) +
       fVar113 * (float)((ulong)uVar65 >> 0x20) * 0.0) - fVar94 * (float)((ulong)uVar38 >> 0x20);
  uVar87 = a64_TBL(ZEXT816(0),auVar83,uVar93);
  uVar65 = a64_TBL(ZEXT816(0),auVar83,uVar96);
  fVar51 = (float)((ulong)uVar90 >> 0x20);
  auVar11._8_4_ = fVar50;
  auVar11._0_8_ = auVar83._0_8_;
  auVar11._12_4_ = fVar52;
  uVar66 = a64_TBL(ZEXT816(0),auVar11,uVar13);
  uVar91 = a64_TBL(ZEXT816(0),auVar12,uVar15);
  fVar105 = (float)((ulong)uVar91 >> 0x20);
  uVar86 = a64_TBL(ZEXT816(0),auVar83,uVar14);
  uVar79 = a64_TBL(ZEXT816(0),auVar83,uVar15);
  uVar80 = a64_TBL(ZEXT816(0),auVar83,uVar97);
  fVar78 = (float)((ulong)auVar23._0_8_ >> 0x20);
  auVar84._0_8_ = CONCAT44(fVar78 * fVar95,fVar37 * fVar88);
  auVar84._8_4_ = auVar23._8_4_ * fVar64;
  auVar84._12_4_ = auVar31._12_4_ * fVar114;
  uVar18 = a64_TBL(ZEXT816(0),auVar84,uVar93);
  uVar92 = a64_TBL(ZEXT816(0),auVar84,uVar96);
  uVar38 = a64_TBL(ZEXT816(0),auVar84,uVar97);
  fVar50 = ((float)uVar90 * fVar50 + fVar110 * fVar49 * (float)uVar87 +
           fVar110 * (float)uVar91 * (float)uVar86) - (float)uVar53 * (float)uVar79;
  fVar64 = (fVar51 * fVar52 + fVar111 * fVar76 * (float)((ulong)uVar87 >> 0x20) +
           fVar111 * fVar105 * (float)((ulong)uVar86 >> 0x20)) -
           fVar100 * (float)((ulong)uVar79 >> 0x20);
  fVar49 = ((float)uVar90 * auVar83._8_4_ + fVar112 * (float)uVar53 * (float)uVar65 +
           fVar112 * fVar49 * (float)uVar66) - (float)uVar91 * (float)uVar80;
  fVar76 = (fVar51 * auVar83._12_4_ + fVar113 * fVar100 * (float)((ulong)uVar65 >> 0x20) +
           fVar113 * fVar76 * (float)((ulong)uVar66 >> 0x20)) -
           fVar105 * (float)((ulong)uVar80 >> 0x20);
  uVar66 = a64_TBL(ZEXT816(0),auVar84,uVar14);
  uVar53 = a64_TBL(ZEXT816(0),auVar84,uVar15);
  auVar85._8_8_ = auVar84._0_8_;
  auVar85._0_8_ = auVar84._0_8_;
  uVar91 = a64_TBL(ZEXT816(0),auVar85,uVar13);
  fVar52 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & bVar118,
                           CONCAT12((byte)((uint)fVar50 >> 0x10) & bVar117,
                                    CONCAT11((byte)((uint)fVar50 >> 8) & bVar116,
                                             SUB41(fVar50,0) & bVar115)));
  auVar54._0_8_ =
       CONCAT17((byte)((uint)fVar64 >> 0x18) & bVar122,
                CONCAT16((byte)((uint)fVar64 >> 0x10) & bVar121,
                         CONCAT15((byte)((uint)fVar64 >> 8) & bVar120,
                                  CONCAT14(SUB41(fVar64,0) & bVar119,fVar52))));
  auVar54[8] = SUB41(fVar49,0) & bVar123;
  auVar54[9] = (byte)((uint)fVar49 >> 8) & bVar124;
  auVar54[10] = (byte)((uint)fVar49 >> 0x10) & bVar125;
  auVar54[0xb] = (byte)((uint)fVar49 >> 0x18) & bVar126;
  auVar63[0xc] = SUB41(fVar76,0) & bVar127;
  auVar63._0_12_ = auVar54;
  auVar63[0xd] = (byte)((uint)fVar76 >> 8) & bVar128;
  auVar63[0xe] = (byte)((uint)fVar76 >> 0x10) & bVar129;
  auVar63[0xf] = (byte)((uint)fVar76 >> 0x18) & bVar130;
  uVar65 = a64_TBL(ZEXT816(0),auVar31,uVar14);
  uVar87 = a64_TBL(ZEXT816(0),auVar31,uVar93);
  fVar49 = (fVar77 * fVar37 * fVar88 + fVar110 * (float)uVar18 * 0.0 +
           fVar110 * fVar89 * (float)uVar66) - fVar98 * (float)uVar53;
  fVar50 = (fVar75 * fVar78 * fVar95 + fVar111 * (float)((ulong)uVar18 >> 0x20) * 0.0 +
           fVar111 * fVar94 * (float)((ulong)uVar66 >> 0x20)) -
           fVar99 * (float)((ulong)uVar53 >> 0x20);
  auVar73._0_8_ = CONCAT44(fVar50,fVar49);
  auVar73._8_4_ =
       (fVar77 * auVar84._8_4_ + fVar112 * fVar98 * (float)uVar92 + fVar112 * (float)uVar91 * 0.0) -
       fVar89 * (float)uVar38;
  auVar73._12_4_ =
       (fVar75 * auVar84._12_4_ + fVar113 * fVar99 * (float)((ulong)uVar92 >> 0x20) +
       fVar113 * (float)((ulong)uVar91 >> 0x20) * 0.0) - fVar94 * (float)((ulong)uVar38 >> 0x20);
  uVar92 = a64_TBL(ZEXT816(0),auVar73,uVar93);
  uVar96 = a64_TBL(ZEXT816(0),auVar73,uVar96);
  uVar97 = a64_TBL(ZEXT816(0),auVar73,uVar97);
  fVar76 = (float)((ulong)uVar87 >> 0x20);
  fVar88 = (float)((ulong)uVar65 >> 0x20);
  uVar93 = a64_TBL(ZEXT816(0),auVar31,uVar15);
  uVar18 = a64_TBL(ZEXT816(0),auVar73,uVar14);
  uVar91 = a64_TBL(ZEXT816(0),auVar73,uVar15);
  auVar74._8_8_ = auVar73._0_8_;
  auVar74._0_8_ = auVar73._0_8_;
  uVar53 = a64_TBL(ZEXT816(0),auVar74,uVar13);
  fVar95 = (float)((ulong)uVar93 >> 0x20);
  fVar49 = ((float)uVar87 * fVar49 + fVar110 * fVar37 * (float)uVar92 +
           fVar110 * (float)uVar93 * (float)uVar18) - (float)uVar65 * (float)uVar91;
  fVar50 = (fVar76 * fVar50 + fVar111 * fVar78 * (float)((ulong)uVar92 >> 0x20) +
           fVar111 * fVar95 * (float)((ulong)uVar18 >> 0x20)) -
           fVar88 * (float)((ulong)uVar91 >> 0x20);
  fVar51 = ((float)uVar87 * auVar73._8_4_ + fVar112 * (float)uVar65 * (float)uVar96 +
           fVar112 * fVar37 * (float)uVar53) - (float)uVar93 * (float)uVar97;
  fVar78 = (fVar76 * auVar73._12_4_ + fVar113 * fVar88 * (float)((ulong)uVar96 >> 0x20) +
           fVar113 * fVar78 * (float)((ulong)uVar53 >> 0x20)) -
           fVar95 * (float)((ulong)uVar97 >> 0x20);
  fVar37 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & bVar118,
                           CONCAT12((byte)((uint)fVar49 >> 0x10) & bVar117,
                                    CONCAT11((byte)((uint)fVar49 >> 8) & bVar116,
                                             SUB41(fVar49,0) & bVar115)));
  auVar24._0_8_ =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar122,
                CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar121,
                         CONCAT15((byte)((uint)fVar50 >> 8) & bVar120,
                                  CONCAT14(SUB41(fVar50,0) & bVar119,fVar37))));
  auVar24[8] = SUB41(fVar51,0) & bVar123;
  auVar24[9] = (byte)((uint)fVar51 >> 8) & bVar124;
  auVar24[10] = (byte)((uint)fVar51 >> 0x10) & bVar125;
  auVar24[0xb] = (byte)((uint)fVar51 >> 0x18) & bVar126;
  auVar32[0xc] = SUB41(fVar78,0) & bVar127;
  auVar32._0_12_ = auVar24;
  auVar32[0xd] = (byte)((uint)fVar78 >> 8) & bVar128;
  auVar32[0xe] = (byte)((uint)fVar78 >> 0x10) & bVar129;
  auVar32[0xf] = (byte)((uint)fVar78 >> 0x18) & bVar130;
  auVar33._0_4_ = fVar52 * fVar37;
  auVar33._4_4_ = (float)((ulong)auVar54._0_8_ >> 0x20) * (float)((ulong)auVar24._0_8_ >> 0x20);
  auVar33._8_4_ = auVar54._8_4_ * auVar24._8_4_;
  auVar33._12_4_ = auVar63._12_4_ * auVar32._12_4_;
  auVar43 = NEON_ext(auVar33,auVar33,8,1);
  local_80 = auVar23._0_8_;
  acosf(auVar43._0_4_ + auVar33._0_4_ + auVar43._4_4_ + auVar33._4_4_);
  auVar43 = FUN_0075e7d0(&local_70,&local_80);
  FUN_013a5170(&local_88);
  FUN_0130ab90(local_88,0);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  plVar16 = (long *)puVar20[0x6a];
  if (plVar16 == (long *)0x0) {
    puVar19 = (undefined8 *)(_DAT_000001a8 + 0x110);
    *(long *)(_DAT_000001a8 + 0x118) = auVar43._8_8_;
    *puVar19 = auVar43._0_8_;
  }
  else {
    lVar17 = plVar16[0xb];
    if (*(long *)(lVar17 + 0x58) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar17 + 0x60))();
      *(undefined8 *)(lVar17 + 0x58) = uVar18;
    }
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar17 = plVar16[0x35];
    *(long *)(lVar17 + 0x118) = auVar43._8_8_;
    *(long *)(lVar17 + 0x110) = auVar43._0_8_;
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x60) = 0;
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  return;
}


