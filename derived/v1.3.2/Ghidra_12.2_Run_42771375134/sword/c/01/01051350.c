/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01051350; name: FUN_01051350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01051350(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  unkbyte9 *pVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
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
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  float fVar108;
  float fVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  float fVar112;
  undefined8 uVar113;
  float fVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  long local_48;
  
  lVar41 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar41 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar41 + *(ulong *)(lVar41 + 0x80) * 8) = param_3;
  *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + 1;
  lVar42 = (**(code **)(*param_3 + 0x10))(param_3,0x1b0,0x10);
  if (lVar42 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_0070c3a0(lVar42,*param_4);
  *(long **)(lVar42 + 8) = param_3;
  *(long *)(lVar42 + 0x10) = lVar42;
  *(undefined8 *)(lVar42 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar42 + 0x20) = 0x10;
  *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + -1;
  *param_1 = lVar42;
  lVar41 = 0;
  if (lVar42 != 0) {
    lVar41 = *(long *)(lVar42 + 0x58);
    if (*(long *)(lVar41 + 0x58) == 0) {
      uVar43 = (**(code **)**(undefined8 **)(lVar41 + 0x60))();
      *(undefined8 *)(lVar41 + 0x58) = uVar43;
    }
    piVar2 = (int *)(lVar41 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar41 = *param_1;
  }
  local_48 = lVar41;
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
  }
  FUN_01025970(&local_48,param_2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) =
       *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) & 0xffffffffffffffef;
  *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) =
       *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) & 0xfffffffffffffffd;
  *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) = *(ulong *)(*(long *)(lVar41 + 0x1a8) + 0x138) | 1;
  uVar40 = DAT_01cd5418;
  uVar39 = DAT_01cd5270;
  uVar58 = DAT_01cd5120;
  uVar38 = DAT_01cd50f8;
  uVar57 = DAT_01cd50b0;
  uVar44 = DAT_01cd4f90;
  lVar42 = *(long *)(lVar41 + 0x1a8);
  fVar62 = (float)_UNK_01d4ae88;
  fVar64 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar60 = (float)_DAT_01d4ae80;
  fVar61 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar46 = (undefined4)_UNK_01d4b588;
  uVar47 = (undefined4)((ulong)_UNK_01d4b588 >> 0x20);
  pVar1 = (unkbyte9 *)(lVar42 + 0x110);
  uVar43 = *(undefined8 *)(lVar42 + 0x118);
  uVar101 = (undefined1)((ulong)uVar43 >> 8);
  uVar102 = (undefined1)((ulong)uVar43 >> 0x10);
  uVar103 = (undefined1)((ulong)uVar43 >> 0x18);
  uVar104 = (undefined1)((ulong)uVar43 >> 0x20);
  uVar105 = (undefined1)((ulong)uVar43 >> 0x28);
  uVar106 = (undefined1)((ulong)uVar43 >> 0x30);
  uVar107 = (undefined1)((ulong)uVar43 >> 0x38);
  auVar5._8_4_ = uVar46;
  auVar5._0_8_ = _DAT_01d4b580;
  auVar5._12_4_ = uVar47;
  uVar67 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
  auVar6._8_4_ = uVar46;
  auVar6._0_8_ = _DAT_01d4b580;
  auVar6._12_4_ = uVar47;
  uVar45 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
  fVar59 = (float)*(undefined8 *)pVar1;
  fVar48 = fVar59 * fVar60;
  fVar63 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar50 = fVar63 * fVar61;
  fVar52 = (float)uVar43 * fVar62;
  fVar54 = (float)((ulong)uVar43 >> 0x20) * fVar64;
  auVar7._8_4_ = uVar46;
  auVar7._0_8_ = _DAT_01d4b580;
  auVar7._12_4_ = uVar47;
  uVar43 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  fVar69 = (float)uVar43;
  fVar70 = (float)((ulong)uVar43 >> 0x20);
  auVar8._4_4_ = fVar50;
  auVar8._0_4_ = fVar48;
  auVar8._8_4_ = fVar52;
  auVar8._12_4_ = fVar54;
  uVar43 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
  auVar9._4_4_ = fVar50;
  auVar9._0_4_ = fVar48;
  auVar9._8_4_ = fVar52;
  auVar9._12_4_ = fVar54;
  uVar56 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
  fVar71 = (float)DAT_01cd52f0;
  fVar72 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  auVar10._4_4_ = fVar50;
  auVar10._0_4_ = fVar48;
  auVar10._8_4_ = fVar52;
  auVar10._12_4_ = fVar54;
  uVar111 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  auVar11._4_4_ = fVar50;
  auVar11._0_4_ = fVar48;
  auVar11._8_4_ = fVar52;
  auVar11._12_4_ = fVar54;
  uVar113 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
  fVar66 = (float)uVar67;
  fVar68 = (float)((ulong)uVar67 >> 0x20);
  auVar26[9] = uVar101;
  auVar26._0_9_ = *pVar1;
  auVar26[10] = uVar102;
  auVar26[0xb] = uVar103;
  auVar26[0xc] = uVar104;
  auVar26[0xd] = uVar105;
  auVar26[0xe] = uVar106;
  auVar26[0xf] = uVar107;
  uVar67 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd4f90);
  fVar108 = (float)uVar45;
  fVar109 = (float)((ulong)uVar45 >> 0x20);
  auVar12._4_4_ = fVar50;
  auVar12._0_4_ = fVar48;
  auVar12._8_4_ = fVar52;
  auVar12._12_4_ = fVar54;
  uVar115 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
  auVar13._4_4_ = fVar50;
  auVar13._0_4_ = fVar48;
  auVar13._8_4_ = fVar48;
  auVar13._12_4_ = fVar50;
  uVar45 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
  fVar53 = (float)_UNK_01d4ae98;
  fVar55 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar49 = (float)_DAT_01d4ae90;
  fVar51 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  auVar27[9] = uVar101;
  auVar27._0_9_ = *pVar1;
  auVar27[10] = uVar102;
  auVar27[0xb] = uVar103;
  auVar27[0xc] = uVar104;
  auVar27[0xd] = uVar105;
  auVar27[0xe] = uVar106;
  auVar27[0xf] = uVar107;
  uVar110 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd50f8);
  fVar48 = (fVar48 * fVar66 + fVar49 * fVar71 * (float)uVar43 + fVar49 * fVar69 * (float)uVar111) -
           fVar108 * (float)uVar113;
  fVar50 = (fVar50 * fVar68 + fVar51 * fVar72 * (float)((ulong)uVar43 >> 0x20) +
           fVar51 * fVar70 * (float)((ulong)uVar111 >> 0x20)) -
           fVar109 * (float)((ulong)uVar113 >> 0x20);
  uVar77 = SUB41(fVar50,0);
  uVar79 = (undefined1)((uint)fVar50 >> 8);
  uVar81 = (undefined1)((uint)fVar50 >> 0x10);
  uVar83 = (undefined1)((uint)fVar50 >> 0x18);
  fVar52 = (fVar52 * fVar66 + fVar53 * fVar108 * (float)uVar56 + fVar53 * fVar71 * (float)uVar45) -
           fVar69 * (float)uVar115;
  uVar85 = SUB41(fVar52,0);
  uVar87 = (undefined1)((uint)fVar52 >> 8);
  uVar89 = (undefined1)((uint)fVar52 >> 0x10);
  uVar91 = (undefined1)((uint)fVar52 >> 0x18);
  fVar54 = (fVar54 * fVar68 + fVar55 * fVar109 * (float)((ulong)uVar56 >> 0x20) +
           fVar55 * fVar72 * (float)((ulong)uVar45 >> 0x20)) -
           fVar70 * (float)((ulong)uVar115 >> 0x20);
  uVar93 = SUB41(fVar54,0);
  uVar95 = (undefined1)((uint)fVar54 >> 8);
  uVar97 = (undefined1)((uint)fVar54 >> 0x10);
  uVar99 = (undefined1)((uint)fVar54 >> 0x18);
  auVar20[4] = uVar77;
  auVar20._0_4_ = fVar48;
  auVar20[5] = uVar79;
  auVar20[6] = uVar81;
  auVar20[7] = uVar83;
  auVar20[8] = uVar85;
  auVar20[9] = uVar87;
  auVar20[10] = uVar89;
  auVar20[0xb] = uVar91;
  auVar20[0xc] = uVar93;
  auVar20[0xd] = uVar95;
  auVar20[0xe] = uVar97;
  auVar20[0xf] = uVar99;
  uVar111 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
  auVar21[4] = uVar77;
  auVar21._0_4_ = fVar48;
  auVar21[5] = uVar79;
  auVar21[6] = uVar81;
  auVar21[7] = uVar83;
  auVar21[8] = uVar85;
  auVar21[9] = uVar87;
  auVar21[10] = uVar89;
  auVar21[0xb] = uVar91;
  auVar21[0xc] = uVar93;
  auVar21[0xd] = uVar95;
  auVar21[0xe] = uVar97;
  auVar21[0xf] = uVar99;
  uVar115 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
  fVar65 = (float)((ulong)uVar67 >> 0x20);
  auVar22[4] = uVar77;
  auVar22._0_4_ = fVar48;
  auVar22[5] = uVar79;
  auVar22[6] = uVar81;
  auVar22[7] = uVar83;
  auVar22[8] = uVar85;
  auVar22[9] = uVar87;
  auVar22[10] = uVar89;
  auVar22[0xb] = uVar91;
  auVar22[0xc] = uVar93;
  auVar22[0xd] = uVar95;
  auVar22[0xe] = uVar97;
  auVar22[0xf] = uVar99;
  uVar116 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5270);
  fVar112 = (float)((ulong)uVar110 >> 0x20);
  auVar28[9] = uVar101;
  auVar28._0_9_ = *pVar1;
  auVar28[10] = uVar102;
  auVar28[0xb] = uVar103;
  auVar28[0xc] = uVar104;
  auVar28[0xd] = uVar105;
  auVar28[0xe] = uVar106;
  auVar28[0xf] = uVar107;
  uVar113 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5418);
  auVar23[4] = uVar77;
  auVar23._0_4_ = fVar48;
  auVar23[5] = uVar79;
  auVar23[6] = uVar81;
  auVar23[7] = uVar83;
  auVar23[8] = uVar85;
  auVar23[9] = uVar87;
  auVar23[10] = uVar89;
  auVar23[0xb] = uVar91;
  auVar23[0xc] = uVar93;
  auVar23[0xd] = uVar95;
  auVar23[0xe] = uVar97;
  auVar23[0xf] = uVar99;
  uVar45 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50f8);
  auVar24[4] = uVar77;
  auVar24._0_4_ = fVar48;
  auVar24[5] = uVar79;
  auVar24[6] = uVar81;
  auVar24[7] = uVar83;
  auVar24[8] = uVar85;
  auVar24[9] = uVar87;
  auVar24[10] = uVar89;
  auVar24[0xb] = uVar91;
  auVar24[0xc] = uVar93;
  auVar24[0xd] = uVar95;
  auVar24[0xe] = uVar97;
  auVar24[0xf] = uVar99;
  uVar56 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5418);
  auVar25[4] = uVar77;
  auVar25._0_4_ = fVar48;
  auVar25[5] = uVar79;
  auVar25[6] = uVar81;
  auVar25[7] = uVar83;
  auVar25[8] = SUB41(fVar48,0);
  auVar25[9] = (char)((uint)fVar48 >> 8);
  auVar25[10] = (char)((uint)fVar48 >> 0x10);
  auVar25[0xb] = (char)((uint)fVar48 >> 0x18);
  auVar25[0xc] = uVar77;
  auVar25[0xd] = uVar79;
  auVar25[0xe] = uVar81;
  auVar25[0xf] = uVar83;
  uVar43 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
  fVar114 = (float)((ulong)uVar113 >> 0x20);
  bVar86 = (byte)DAT_01d4ab58;
  bVar88 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar90 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar92 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar94 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar96 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar98 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar100 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar73 = (byte)DAT_01d4ab50;
  bVar74 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar75 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar76 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar78 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar80 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar82 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar84 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar48 = ((float)uVar67 * fVar48 + fVar49 * fVar59 * (float)uVar111 +
           fVar49 * (float)uVar113 * (float)uVar45) - (float)uVar110 * (float)uVar56;
  fVar50 = (fVar65 * fVar50 + fVar51 * fVar63 * (float)((ulong)uVar111 >> 0x20) +
           fVar51 * fVar114 * (float)((ulong)uVar45 >> 0x20)) -
           fVar112 * (float)((ulong)uVar56 >> 0x20);
  fVar52 = ((float)uVar67 * fVar52 + fVar53 * (float)uVar110 * (float)uVar115 +
           fVar53 * fVar59 * (float)uVar43) - (float)uVar113 * (float)uVar116;
  fVar54 = (fVar65 * fVar54 + fVar55 * fVar112 * (float)((ulong)uVar115 >> 0x20) +
           fVar55 * fVar63 * (float)((ulong)uVar43 >> 0x20)) -
           fVar114 * (float)((ulong)uVar116 >> 0x20);
  *(ulong *)(lVar42 + 0xd8) =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & bVar100,
                CONCAT16((byte)((uint)fVar54 >> 0x10) & bVar98,
                         CONCAT15((byte)((uint)fVar54 >> 8) & bVar96,
                                  CONCAT14(SUB41(fVar54,0) & bVar94,
                                           CONCAT13((byte)((uint)fVar52 >> 0x18) & bVar92,
                                                    CONCAT12((byte)((uint)fVar52 >> 0x10) & bVar90,
                                                             CONCAT11((byte)((uint)fVar52 >> 8) &
                                                                      bVar88,SUB41(fVar52,0) &
                                                                             bVar86)))))));
  *(ulong *)(lVar42 + 0xd0) =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar84,
                CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar82,
                         CONCAT15((byte)((uint)fVar50 >> 8) & bVar80,
                                  CONCAT14(SUB41(fVar50,0) & bVar78,
                                           CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar76,
                                                    CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar75,
                                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                                      bVar74,SUB41(fVar48,0) &
                                                                             bVar73)))))));
  *(ulong *)(lVar42 + 0x138) = *(ulong *)(lVar42 + 0x138) & 0xfffffffffffffff3 | 4;
  lVar42 = *(long *)(lVar41 + 0x1a8);
  pVar1 = (unkbyte9 *)(lVar42 + 0x110);
  uVar43 = *(undefined8 *)(lVar42 + 0x118);
  uVar77 = (undefined1)((ulong)uVar43 >> 8);
  uVar79 = (undefined1)((ulong)uVar43 >> 0x10);
  uVar81 = (undefined1)((ulong)uVar43 >> 0x18);
  uVar83 = (undefined1)((ulong)uVar43 >> 0x20);
  uVar85 = (undefined1)((ulong)uVar43 >> 0x28);
  uVar87 = (undefined1)((ulong)uVar43 >> 0x30);
  uVar89 = (undefined1)((ulong)uVar43 >> 0x38);
  fVar48 = (float)*(undefined8 *)pVar1;
  fVar60 = fVar48 * fVar60;
  fVar50 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar61 = fVar50 * fVar61;
  uVar91 = SUB41(fVar61,0);
  uVar93 = (undefined1)((uint)fVar61 >> 8);
  uVar95 = (undefined1)((uint)fVar61 >> 0x10);
  uVar97 = (undefined1)((uint)fVar61 >> 0x18);
  fVar62 = (float)uVar43 * fVar62;
  uVar99 = SUB41(fVar62,0);
  uVar101 = (undefined1)((uint)fVar62 >> 8);
  uVar102 = (undefined1)((uint)fVar62 >> 0x10);
  uVar103 = (undefined1)((uint)fVar62 >> 0x18);
  fVar64 = (float)((ulong)uVar43 >> 0x20) * fVar64;
  uVar104 = SUB41(fVar64,0);
  uVar105 = (undefined1)((uint)fVar64 >> 8);
  uVar106 = (undefined1)((uint)fVar64 >> 0x10);
  uVar107 = (undefined1)((uint)fVar64 >> 0x18);
  auVar32[4] = uVar91;
  auVar32._0_4_ = fVar60;
  auVar32[5] = uVar93;
  auVar32[6] = uVar95;
  auVar32[7] = uVar97;
  auVar32[8] = uVar99;
  auVar32[9] = uVar101;
  auVar32[10] = uVar102;
  auVar32[0xb] = uVar103;
  auVar32[0xc] = uVar104;
  auVar32[0xd] = uVar105;
  auVar32[0xe] = uVar106;
  auVar32[0xf] = uVar107;
  uVar56 = a64_TBL(ZEXT816(0),auVar32,uVar58);
  auVar33[4] = uVar91;
  auVar33._0_4_ = fVar60;
  auVar33[5] = uVar93;
  auVar33[6] = uVar95;
  auVar33[7] = uVar97;
  auVar33[8] = uVar99;
  auVar33[9] = uVar101;
  auVar33[10] = uVar102;
  auVar33[0xb] = uVar103;
  auVar33[0xc] = uVar104;
  auVar33[0xd] = uVar105;
  auVar33[0xe] = uVar106;
  auVar33[0xf] = uVar107;
  uVar45 = a64_TBL(ZEXT816(0),auVar33,uVar44);
  auVar34[4] = uVar91;
  auVar34._0_4_ = fVar60;
  auVar34[5] = uVar93;
  auVar34[6] = uVar95;
  auVar34[7] = uVar97;
  auVar34[8] = uVar99;
  auVar34[9] = uVar101;
  auVar34[10] = uVar102;
  auVar34[0xb] = uVar103;
  auVar34[0xc] = uVar104;
  auVar34[0xd] = uVar105;
  auVar34[0xe] = uVar106;
  auVar34[0xf] = uVar107;
  uVar111 = a64_TBL(ZEXT816(0),auVar34,uVar40);
  auVar35[4] = uVar91;
  auVar35._0_4_ = fVar60;
  auVar35[5] = uVar93;
  auVar35[6] = uVar95;
  auVar35[7] = uVar97;
  auVar35[8] = uVar99;
  auVar35[9] = uVar101;
  auVar35[10] = uVar102;
  auVar35[0xb] = uVar103;
  auVar35[0xc] = uVar104;
  auVar35[0xd] = uVar105;
  auVar35[0xe] = uVar106;
  auVar35[0xf] = uVar107;
  uVar67 = a64_TBL(ZEXT816(0),auVar35,uVar38);
  auVar36[4] = uVar91;
  auVar36._0_4_ = fVar60;
  auVar36[5] = uVar93;
  auVar36[6] = uVar95;
  auVar36[7] = uVar97;
  auVar36[8] = uVar99;
  auVar36[9] = uVar101;
  auVar36[10] = uVar102;
  auVar36[0xb] = uVar103;
  auVar36[0xc] = uVar104;
  auVar36[0xd] = uVar105;
  auVar36[0xe] = uVar106;
  auVar36[0xf] = uVar107;
  uVar113 = a64_TBL(ZEXT816(0),auVar36,uVar39);
  auVar37[4] = uVar91;
  auVar37._0_4_ = fVar60;
  auVar37[5] = uVar93;
  auVar37[6] = uVar95;
  auVar37[7] = uVar97;
  auVar37[8] = SUB41(fVar60,0);
  auVar37[9] = (char)((uint)fVar60 >> 8);
  auVar37[10] = (char)((uint)fVar60 >> 0x10);
  auVar37[0xb] = (char)((uint)fVar60 >> 0x18);
  auVar37[0xc] = uVar91;
  auVar37[0xd] = uVar93;
  auVar37[0xe] = uVar95;
  auVar37[0xf] = uVar97;
  uVar43 = a64_TBL(ZEXT816(0),auVar37,uVar57);
  auVar29[9] = uVar77;
  auVar29._0_9_ = *pVar1;
  auVar29[10] = uVar79;
  auVar29[0xb] = uVar81;
  auVar29[0xc] = uVar83;
  auVar29[0xd] = uVar85;
  auVar29[0xe] = uVar87;
  auVar29[0xf] = uVar89;
  uVar110 = a64_TBL(ZEXT816(0),auVar29,uVar44);
  fVar52 = (fVar66 * fVar60 + fVar49 * fVar71 * (float)uVar45 + fVar49 * fVar69 * (float)uVar67) -
           fVar108 * (float)uVar111;
  fVar54 = (fVar68 * fVar61 + fVar51 * fVar72 * (float)((ulong)uVar45 >> 0x20) +
           fVar51 * fVar70 * (float)((ulong)uVar67 >> 0x20)) -
           fVar109 * (float)((ulong)uVar111 >> 0x20);
  fVar63 = (fVar66 * fVar62 + fVar53 * fVar108 * (float)uVar56 + fVar53 * fVar71 * (float)uVar43) -
           fVar69 * (float)uVar113;
  fVar65 = (fVar68 * fVar64 + fVar55 * fVar109 * (float)((ulong)uVar56 >> 0x20) +
           fVar55 * fVar72 * (float)((ulong)uVar43 >> 0x20)) -
           fVar70 * (float)((ulong)uVar113 >> 0x20);
  fVar60 = (float)((ulong)uVar110 >> 0x20);
  auVar30[9] = uVar77;
  auVar30._0_9_ = *pVar1;
  auVar30[10] = uVar79;
  auVar30[0xb] = uVar81;
  auVar30[0xc] = uVar83;
  auVar30[0xd] = uVar85;
  auVar30[0xe] = uVar87;
  auVar30[0xf] = uVar89;
  uVar111 = a64_TBL(ZEXT816(0),auVar30,uVar38);
  auVar14._4_4_ = fVar54;
  auVar14._0_4_ = fVar52;
  auVar14._8_4_ = fVar63;
  auVar14._12_4_ = fVar65;
  uVar67 = a64_TBL(ZEXT816(0),auVar14,uVar44);
  auVar15._4_4_ = fVar54;
  auVar15._0_4_ = fVar52;
  auVar15._8_4_ = fVar63;
  auVar15._12_4_ = fVar65;
  uVar58 = a64_TBL(ZEXT816(0),auVar15,uVar58);
  fVar61 = (float)((ulong)uVar111 >> 0x20);
  auVar31[9] = uVar77;
  auVar31._0_9_ = *pVar1;
  auVar31[10] = uVar79;
  auVar31[0xb] = uVar81;
  auVar31[0xc] = uVar83;
  auVar31[0xd] = uVar85;
  auVar31[0xe] = uVar87;
  auVar31[0xf] = uVar89;
  uVar56 = a64_TBL(ZEXT816(0),auVar31,uVar40);
  auVar16._4_4_ = fVar54;
  auVar16._0_4_ = fVar52;
  auVar16._8_4_ = fVar63;
  auVar16._12_4_ = fVar65;
  uVar45 = a64_TBL(ZEXT816(0),auVar16,uVar38);
  auVar19._4_4_ = fVar54;
  auVar19._0_4_ = fVar52;
  auVar19._8_4_ = fVar52;
  auVar19._12_4_ = fVar54;
  uVar57 = a64_TBL(ZEXT816(0),auVar19,uVar57);
  auVar17._4_4_ = fVar54;
  auVar17._0_4_ = fVar52;
  auVar17._8_4_ = fVar63;
  auVar17._12_4_ = fVar65;
  uVar44 = a64_TBL(ZEXT816(0),auVar17,uVar40);
  auVar18._4_4_ = fVar54;
  auVar18._0_4_ = fVar52;
  auVar18._8_4_ = fVar63;
  auVar18._12_4_ = fVar65;
  uVar43 = a64_TBL(ZEXT816(0),auVar18,uVar39);
  fVar59 = (float)((ulong)uVar56 >> 0x20);
  fVar52 = ((float)uVar110 * fVar52 + fVar49 * fVar48 * (float)uVar67 +
           fVar49 * (float)uVar56 * (float)uVar45) - (float)uVar111 * (float)uVar44;
  fVar54 = (fVar60 * fVar54 + fVar51 * fVar50 * (float)((ulong)uVar67 >> 0x20) +
           fVar51 * fVar59 * (float)((ulong)uVar45 >> 0x20)) -
           fVar61 * (float)((ulong)uVar44 >> 0x20);
  fVar48 = ((float)uVar110 * fVar63 + fVar53 * (float)uVar111 * (float)uVar58 +
           fVar53 * fVar48 * (float)uVar57) - (float)uVar56 * (float)uVar43;
  fVar50 = (fVar60 * fVar65 + fVar55 * fVar61 * (float)((ulong)uVar58 >> 0x20) +
           fVar55 * fVar50 * (float)((ulong)uVar57 >> 0x20)) -
           fVar59 * (float)((ulong)uVar43 >> 0x20);
  *(ulong *)(lVar42 + 0xd8) =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar100,
                CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar98,
                         CONCAT15((byte)((uint)fVar50 >> 8) & bVar96,
                                  CONCAT14(SUB41(fVar50,0) & bVar94,
                                           CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar92,
                                                    CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar90,
                                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                                      bVar88,SUB41(fVar48,0) &
                                                                             bVar86)))))));
  *(ulong *)(lVar42 + 0xd0) =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & bVar84,
                CONCAT16((byte)((uint)fVar54 >> 0x10) & bVar82,
                         CONCAT15((byte)((uint)fVar54 >> 8) & bVar80,
                                  CONCAT14(SUB41(fVar54,0) & bVar78,
                                           CONCAT13((byte)((uint)fVar52 >> 0x18) & bVar76,
                                                    CONCAT12((byte)((uint)fVar52 >> 0x10) & bVar75,
                                                             CONCAT11((byte)((uint)fVar52 >> 8) &
                                                                      bVar74,SUB41(fVar52,0) &
                                                                             bVar73)))))));
  (**(code **)(*(long *)(lVar41 + 0x1a0) + 0x10))(lVar41 + 0x1a0);
  (**(code **)(*(long *)(lVar41 + 0x1a0) + 0x18))(lVar41 + 0x1a0);
  uVar43 = _DAT_01d4af90;
  lVar42 = *(long *)(lVar41 + 0x1a8);
  *(undefined8 *)(lVar42 + 0xf8) = _UNK_01d4af98;
  *(undefined8 *)(lVar42 + 0xf0) = uVar43;
  lVar41 = *(long *)(lVar41 + 0x1a8);
  *(undefined8 *)(lVar41 + 0xe0) = 0;
  *(undefined8 *)(lVar41 + 0xe8) = 0;
  return;
}


