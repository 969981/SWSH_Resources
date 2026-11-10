/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723460; name: FUN_00723460
 */


void FUN_00723460(long *param_1,undefined8 *param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  ulong uVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  void *pvVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  void *__src;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  byte bVar51;
  float fVar52;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined8 uVar53;
  undefined8 uVar54;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  float fVar63;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  float fVar100;
  
  lVar27 = param_1[1] - *param_1 >> 4;
  uVar37 = 0xd79435e50d7943;
  uVar3 = lVar27 * -0x79435e50d79435e5 + 1;
  if (0xd79435e50d7943 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar29 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar29 * -0x79435e50d79435e5) < 0x6bca1af286bca1) {
    uVar30 = lVar29 * 0xd79435e50d79436;
    uVar37 = uVar3;
    if (uVar3 <= uVar30) {
      uVar37 = uVar30;
    }
    if (uVar37 == 0) {
      lVar29 = 0;
      goto LAB_0072353c;
    }
  }
  lVar29 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar37 * 0x130,0x10);
  if (lVar29 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0072353c:
  puVar25 = PTR_DAT_02710860;
  lVar35 = param_1[3];
  lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar26 + 0x80)) {
LAB_00723874:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar35;
  puVar33 = (undefined8 *)(lVar29 + lVar27 * 0x10);
  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
  uVar36 = *param_2;
  FUN_0075e2a0(puVar33);
  lVar27 = lVar29 + lVar27 * 0x10;
  FUN_0075e2a0((void *)(lVar27 + 0x30));
  *(undefined8 *)(lVar27 + 0x120) = uVar36;
  *(long *)(lVar27 + 0x128) = param_3;
  uVar36 = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(lVar27 + 0x78) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(lVar27 + 0x68) = uVar36;
  uVar36 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(lVar27 + 0x98) = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(lVar27 + 0x88) = uVar36;
  uVar36 = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(lVar27 + 0x70) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(lVar27 + 0x60) = uVar36;
  uVar28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(lVar27 + 0x80) = *(undefined8 *)(param_3 + 0xa0);
  uVar31 = DAT_01cd5418;
  uVar24 = DAT_01cd5188;
  uVar54 = DAT_01cd5158;
  uVar42 = DAT_01cd50f8;
  pauVar2 = (undefined1 (*) [12])(lVar27 + 0x60);
  fVar83 = (float)*(undefined8 *)(lVar27 + 0x68);
  fVar84 = (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20);
  fVar82 = (float)*(undefined8 *)*pauVar2;
  fVar46 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar4 = (undefined1 (*) [12])(lVar27 + 0x70);
  uVar38 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x78) >> 0x20);
  auVar12._12_4_ = uVar38;
  auVar12._0_12_ = *pauVar4;
  uVar47 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  auVar13._12_4_ = uVar38;
  auVar13._0_12_ = *pauVar4;
  uVar53 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5188);
  pauVar1 = (undefined1 (*) [12])(lVar27 + 0x80);
  uVar39 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x88) >> 0x20);
  auVar20._12_4_ = uVar39;
  auVar20._0_12_ = *pauVar1;
  uVar86 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
  auVar21._12_4_ = uVar39;
  auVar21._0_12_ = *pauVar1;
  uVar92 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5158);
  auVar14._12_4_ = uVar38;
  auVar14._0_12_ = *pauVar4;
  uVar93 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5158);
  auVar15._12_4_ = uVar38;
  auVar15._0_12_ = *pauVar4;
  uVar87 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  auVar22._12_4_ = uVar39;
  auVar22._0_12_ = *pauVar1;
  uVar94 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
  auVar23._12_4_ = uVar39;
  auVar23._0_12_ = *pauVar1;
  uVar36 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5188);
  *(undefined8 *)(lVar27 + 0x90) = uVar28;
  uVar38 = SUB124(*pauVar2,8);
  uVar40 = SUB124(*pauVar1,8);
  fVar82 = fVar82 * (float)uVar47 * (float)uVar86 - fVar82 * (float)uVar87 * (float)uVar94;
  fVar46 = fVar46 * (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar86 >> 0x20) -
           fVar46 * (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar94 >> 0x20);
  uVar71 = (undefined1)((uint)fVar46 >> 8);
  uVar72 = (undefined1)((uint)fVar46 >> 0x10);
  uVar73 = (undefined1)((uint)fVar46 >> 0x18);
  fVar83 = fVar83 * (float)uVar53 * (float)uVar92 - fVar83 * (float)uVar93 * (float)uVar36;
  uVar74 = (undefined1)((uint)fVar83 >> 8);
  uVar75 = (undefined1)((uint)fVar83 >> 0x10);
  uVar76 = (undefined1)((uint)fVar83 >> 0x18);
  fVar84 = fVar84 * (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar92 >> 0x20) -
           fVar84 * (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar36 >> 0x20);
  uVar77 = (undefined1)((uint)fVar84 >> 8);
  uVar78 = (undefined1)((uint)fVar84 >> 0x10);
  uVar79 = (undefined1)((uint)fVar84 >> 0x18);
  auVar88[4] = SUB41(fVar46,0);
  auVar88._0_4_ = fVar82;
  auVar88[5] = uVar71;
  auVar88[6] = uVar72;
  auVar88[7] = uVar73;
  auVar88[8] = SUB41(fVar83,0);
  auVar88[9] = uVar74;
  auVar88[10] = uVar75;
  auVar88[0xb] = uVar76;
  auVar88[0xc] = SUB41(fVar84,0);
  auVar88[0xd] = uVar77;
  auVar88[0xe] = uVar78;
  auVar88[0xf] = uVar79;
  auVar95[4] = SUB41(fVar46,0);
  auVar95._0_4_ = fVar82;
  auVar95[5] = uVar71;
  auVar95[6] = uVar72;
  auVar95[7] = uVar73;
  auVar95[8] = SUB41(fVar83,0);
  auVar95[9] = uVar74;
  auVar95[10] = uVar75;
  auVar95[0xb] = uVar76;
  auVar95[0xc] = SUB41(fVar84,0);
  auVar95[0xd] = uVar77;
  auVar95[0xe] = uVar78;
  auVar95[0xf] = uVar79;
  auVar88 = NEON_ext(auVar88,auVar95,8,1);
  fVar82 = fVar82 + fVar46 + auVar88._0_4_ + auVar88._4_4_;
  uVar71 = SUB41(fVar82,0);
  uVar72 = (undefined1)((uint)fVar82 >> 8);
  uVar73 = (undefined1)((uint)fVar82 >> 0x10);
  uVar74 = (undefined1)((uint)fVar82 >> 0x18);
  auVar5[4] = uVar71;
  auVar5._0_4_ = fVar82;
  auVar5[5] = uVar72;
  auVar5[6] = uVar73;
  auVar5[7] = uVar74;
  auVar5[8] = uVar71;
  auVar5[9] = uVar72;
  auVar5[10] = uVar73;
  auVar5[0xb] = uVar74;
  auVar5[0xc] = uVar71;
  auVar5[0xd] = uVar72;
  auVar5[0xe] = uVar73;
  auVar5[0xf] = uVar74;
  auVar88 = NEON_frecpe(auVar5,4);
  auVar6[4] = uVar71;
  auVar6._0_4_ = fVar82;
  auVar6[5] = uVar72;
  auVar6[6] = uVar73;
  auVar6[7] = uVar74;
  auVar6[8] = uVar71;
  auVar6[9] = uVar72;
  auVar6[10] = uVar73;
  auVar6[0xb] = uVar74;
  auVar6[0xc] = uVar71;
  auVar6[0xd] = uVar72;
  auVar6[0xe] = uVar73;
  auVar6[0xf] = uVar74;
  auVar95 = NEON_frecps(auVar88,auVar6,4);
  auVar89._0_4_ = auVar88._0_4_ * auVar95._0_4_;
  auVar89._4_4_ = auVar88._4_4_ * auVar95._4_4_;
  auVar89._8_4_ = auVar88._8_4_ * auVar95._8_4_;
  auVar89._12_4_ = auVar88._12_4_ * auVar95._12_4_;
  auVar7[4] = uVar71;
  auVar7._0_4_ = fVar82;
  auVar7[5] = uVar72;
  auVar7[6] = uVar73;
  auVar7[7] = uVar74;
  auVar7[8] = uVar71;
  auVar7[9] = uVar72;
  auVar7[10] = uVar73;
  auVar7[0xb] = uVar74;
  auVar7[0xc] = uVar71;
  auVar7[0xd] = uVar72;
  auVar7[0xe] = uVar73;
  auVar7[0xf] = uVar74;
  auVar88 = NEON_frecps(auVar89,auVar7,4);
  iVar8 = -(uint)(fVar82 == 0.0);
  iVar9 = -(uint)(fVar82 == 0.0);
  iVar10 = -(uint)(fVar82 == 0.0);
  iVar11 = -(uint)(fVar82 == 0.0);
  fVar82 = auVar89._0_4_ * auVar88._0_4_;
  fVar83 = auVar89._4_4_ * auVar88._4_4_;
  fVar84 = auVar89._8_4_ * auVar88._8_4_;
  fVar85 = auVar89._12_4_ * auVar88._12_4_;
  uVar39 = SUB124(*pauVar4,8);
  auVar90._4_4_ = SUB124(*pauVar4,0);
  auVar90._0_4_ = SUB124(*pauVar2,0);
  auVar90._8_4_ = SUB124(*pauVar1,0);
  auVar90._12_4_ = 0;
  auVar96._4_4_ = SUB124(*pauVar4,4);
  auVar96._0_4_ = SUB124(*pauVar2,4);
  auVar96._8_4_ = SUB124(*pauVar1,4);
  auVar96._12_4_ = 0;
  uVar28 = a64_TBL(ZEXT816(0),auVar96,uVar31);
  fVar81 = (float)((ulong)uVar28 >> 0x20);
  uVar47 = a64_TBL(ZEXT816(0),auVar96,uVar24);
  fVar100 = (float)((ulong)uVar47 >> 0x20);
  auVar16._4_4_ = uVar39;
  auVar16._0_4_ = uVar38;
  auVar16._8_4_ = uVar40;
  auVar16._12_4_ = 0;
  uVar93 = a64_TBL(ZEXT816(0),auVar16,uVar54);
  auVar17._4_4_ = uVar39;
  auVar17._0_4_ = uVar38;
  auVar17._8_4_ = uVar40;
  auVar17._12_4_ = 0;
  uVar53 = a64_TBL(ZEXT816(0),auVar17,uVar42);
  fVar43 = (float)((ulong)uVar53 >> 0x20);
  auVar18._4_4_ = uVar39;
  auVar18._0_4_ = uVar38;
  auVar18._8_4_ = uVar40;
  auVar18._12_4_ = 0;
  uVar94 = a64_TBL(ZEXT816(0),auVar18,uVar31);
  auVar19._4_4_ = uVar39;
  auVar19._0_4_ = uVar38;
  auVar19._8_4_ = uVar40;
  auVar19._12_4_ = 0;
  uVar36 = a64_TBL(ZEXT816(0),auVar19,uVar24);
  fVar45 = (float)((ulong)uVar36 >> 0x20);
  uVar86 = a64_TBL(ZEXT816(0),auVar90,uVar31);
  uVar31 = a64_TBL(ZEXT816(0),auVar96,uVar42);
  fVar63 = (float)((ulong)uVar31 >> 0x20);
  uVar92 = a64_TBL(ZEXT816(0),auVar96,uVar54);
  uVar87 = a64_TBL(ZEXT816(0),auVar90,uVar42);
  uVar54 = a64_TBL(ZEXT816(0),auVar90,uVar54);
  fVar52 = (float)((ulong)uVar93 >> 0x20);
  uVar42 = a64_TBL(ZEXT816(0),auVar90,uVar24);
  fVar80 = (float)((ulong)uVar92 >> 0x20);
  fVar44 = (float)((ulong)uVar94 >> 0x20);
  fVar49 = (float)((ulong)uVar87 >> 0x20);
  fVar50 = (float)((ulong)uVar54 >> 0x20);
  fVar46 = (float)((ulong)uVar86 >> 0x20);
  fVar48 = (float)((ulong)uVar42 >> 0x20);
  fVar91 = fVar82 * ((float)uVar28 * (float)uVar53 - (float)uVar94 * (float)uVar31);
  fVar97 = fVar83 * (fVar81 * fVar43 - fVar44 * fVar63);
  fVar98 = fVar84 * ((float)uVar47 * (float)uVar93 - (float)uVar36 * (float)uVar92);
  fVar99 = fVar85 * (fVar100 * fVar52 - fVar45 * fVar80);
  fVar41 = fVar82 * ((float)uVar94 * (float)uVar87 - (float)uVar86 * (float)uVar53);
  fVar43 = fVar83 * (fVar44 * fVar49 - fVar46 * fVar43);
  fVar44 = fVar84 * ((float)uVar36 * (float)uVar54 - (float)uVar42 * (float)uVar93);
  fVar45 = fVar85 * (fVar45 * fVar50 - fVar48 * fVar52);
  fVar52 = (float)*(undefined8 *)(lVar27 + 0x90);
  fVar82 = fVar82 * ((float)uVar31 * (float)uVar86 - (float)uVar28 * (float)uVar87);
  fVar83 = fVar83 * (fVar63 * fVar46 - fVar81 * fVar49);
  fVar84 = fVar84 * ((float)uVar92 * (float)uVar42 - (float)uVar47 * (float)uVar54);
  fVar85 = fVar85 * (fVar80 * fVar48 - fVar100 * fVar50);
  fVar50 = (float)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20);
  fVar63 = (float)*(undefined8 *)(lVar27 + 0x98);
  fVar46 = (-(fVar91 * fVar52) - fVar41 * fVar50) - fVar82 * fVar63;
  fVar48 = (-(fVar97 * fVar52) - fVar43 * fVar50) - fVar83 * fVar63;
  fVar49 = (-(fVar98 * fVar52) - fVar44 * fVar50) - fVar84 * fVar63;
  fVar50 = (-(fVar99 * fVar52) - fVar45 * fVar50) - fVar85 * fVar63;
  bVar51 = ~(byte)iVar8;
  bVar55 = ~(byte)((uint)iVar8 >> 8);
  bVar56 = ~(byte)((uint)iVar8 >> 0x10);
  bVar57 = ~(byte)((uint)iVar8 >> 0x18);
  bVar58 = ~(byte)iVar9;
  bVar59 = ~(byte)((uint)iVar9 >> 8);
  bVar60 = ~(byte)((uint)iVar9 >> 0x10);
  bVar61 = ~(byte)((uint)iVar9 >> 0x18);
  bVar62 = ~(byte)iVar10;
  bVar64 = ~(byte)((uint)iVar10 >> 8);
  bVar65 = ~(byte)((uint)iVar10 >> 0x10);
  bVar66 = ~(byte)((uint)iVar10 >> 0x18);
  bVar67 = ~(byte)iVar11;
  bVar68 = ~(byte)((uint)iVar11 >> 8);
  bVar69 = ~(byte)((uint)iVar11 >> 0x10);
  bVar70 = ~(byte)((uint)iVar11 >> 0x18);
  *(ulong *)(lVar27 + 0x68) =
       CONCAT17((byte)((uint)fVar99 >> 0x18) & bVar70,
                CONCAT16((byte)((uint)fVar99 >> 0x10) & bVar69,
                         CONCAT15((byte)((uint)fVar99 >> 8) & bVar68,
                                  CONCAT14(SUB41(fVar99,0) & bVar67,
                                           CONCAT13((byte)((uint)fVar98 >> 0x18) & bVar66,
                                                    CONCAT12((byte)((uint)fVar98 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar98 >> 8) &
                                                                      bVar64,SUB41(fVar98,0) &
                                                                             bVar62)))))));
  *(ulong *)(lVar27 + 0x60) =
       CONCAT17((byte)((uint)fVar97 >> 0x18) & bVar61,
                CONCAT16((byte)((uint)fVar97 >> 0x10) & bVar60,
                         CONCAT15((byte)((uint)fVar97 >> 8) & bVar59,
                                  CONCAT14(SUB41(fVar97,0) & bVar58,
                                           CONCAT13((byte)((uint)fVar91 >> 0x18) & bVar57,
                                                    CONCAT12((byte)((uint)fVar91 >> 0x10) & bVar56,
                                                             CONCAT11((byte)((uint)fVar91 >> 8) &
                                                                      bVar55,SUB41(fVar91,0) &
                                                                             bVar51)))))));
  *(ulong *)(lVar27 + 0x78) =
       CONCAT17((byte)((uint)fVar45 >> 0x18) & bVar70,
                CONCAT16((byte)((uint)fVar45 >> 0x10) & bVar69,
                         CONCAT15((byte)((uint)fVar45 >> 8) & bVar68,
                                  CONCAT14(SUB41(fVar45,0) & bVar67,
                                           CONCAT13((byte)((uint)fVar44 >> 0x18) & bVar66,
                                                    CONCAT12((byte)((uint)fVar44 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar44 >> 8) &
                                                                      bVar64,SUB41(fVar44,0) &
                                                                             bVar62)))))));
  *(ulong *)(lVar27 + 0x70) =
       CONCAT17((byte)((uint)fVar43 >> 0x18) & bVar61,
                CONCAT16((byte)((uint)fVar43 >> 0x10) & bVar60,
                         CONCAT15((byte)((uint)fVar43 >> 8) & bVar59,
                                  CONCAT14(SUB41(fVar43,0) & bVar58,
                                           CONCAT13((byte)((uint)fVar41 >> 0x18) & bVar57,
                                                    CONCAT12((byte)((uint)fVar41 >> 0x10) & bVar56,
                                                             CONCAT11((byte)((uint)fVar41 >> 8) &
                                                                      bVar55,SUB41(fVar41,0) &
                                                                             bVar51)))))));
  *(ulong *)(lVar27 + 0x88) =
       CONCAT17((byte)((uint)fVar85 >> 0x18) & bVar70,
                CONCAT16((byte)((uint)fVar85 >> 0x10) & bVar69,
                         CONCAT15((byte)((uint)fVar85 >> 8) & bVar68,
                                  CONCAT14(SUB41(fVar85,0) & bVar67,
                                           CONCAT13((byte)((uint)fVar84 >> 0x18) & bVar66,
                                                    CONCAT12((byte)((uint)fVar84 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar84 >> 8) &
                                                                      bVar64,SUB41(fVar84,0) &
                                                                             bVar62)))))));
  *(ulong *)(lVar27 + 0x80) =
       CONCAT17((byte)((uint)fVar83 >> 0x18) & bVar61,
                CONCAT16((byte)((uint)fVar83 >> 0x10) & bVar60,
                         CONCAT15((byte)((uint)fVar83 >> 8) & bVar59,
                                  CONCAT14(SUB41(fVar83,0) & bVar58,
                                           CONCAT13((byte)((uint)fVar82 >> 0x18) & bVar57,
                                                    CONCAT12((byte)((uint)fVar82 >> 0x10) & bVar56,
                                                             CONCAT11((byte)((uint)fVar82 >> 8) &
                                                                      bVar55,SUB41(fVar82,0) &
                                                                             bVar51)))))));
  *(ulong *)(lVar27 + 0x98) =
       CONCAT17((byte)((uint)fVar50 >> 0x18) & bVar70,
                CONCAT16((byte)((uint)fVar50 >> 0x10) & bVar69,
                         CONCAT15((byte)((uint)fVar50 >> 8) & bVar68,
                                  CONCAT14(SUB41(fVar50,0) & bVar67,
                                           CONCAT13((byte)((uint)fVar49 >> 0x18) & bVar66,
                                                    CONCAT12((byte)((uint)fVar49 >> 0x10) & bVar65,
                                                             CONCAT11((byte)((uint)fVar49 >> 8) &
                                                                      bVar64,SUB41(fVar49,0) &
                                                                             bVar62)))))));
  *(ulong *)(lVar27 + 0x90) =
       CONCAT17((byte)((uint)fVar48 >> 0x18) & bVar61,
                CONCAT16((byte)((uint)fVar48 >> 0x10) & bVar60,
                         CONCAT15((byte)((uint)fVar48 >> 8) & bVar59,
                                  CONCAT14(SUB41(fVar48,0) & bVar58,
                                           CONCAT13((byte)((uint)fVar46 >> 0x18) & bVar57,
                                                    CONCAT12((byte)((uint)fVar46 >> 0x10) & bVar56,
                                                             CONCAT11((byte)((uint)fVar46 >> 8) &
                                                                      bVar55,SUB41(fVar46,0) &
                                                                             bVar51)))))));
  uVar36 = *(undefined8 *)(param_3 + 0x50);
  puVar33[1] = *(undefined8 *)(param_3 + 0x58);
  uVar31 = *(undefined8 *)(param_3 + 0x68);
  puVar33[5] = *(undefined8 *)(param_3 + 0x78);
  puVar33[3] = uVar31;
  *puVar33 = uVar36;
  uVar36 = *(undefined8 *)(param_3 + 0x60);
  puVar33[4] = *(undefined8 *)(param_3 + 0x70);
  puVar33[2] = uVar36;
  memmove((void *)(lVar27 + 0x30),(undefined8 *)(param_3 + 0x50),0x30);
  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
  pvVar32 = (void *)*param_1;
  __src = (void *)param_1[1];
  puVar34 = puVar33;
  if (__src != pvVar32) {
    do {
      lVar26 = param_1[3];
      lVar27 = nn::os::GetTlsValue(*(undefined4 *)puVar25);
      if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00723874;
      *(long *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = lVar26;
      __src = (void *)((long)__src + -0x130);
      puVar34 = puVar34 + -0x26;
      *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
      memcpy(puVar34,__src,0x130);
      *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
    } while (pvVar32 != __src);
    pvVar32 = (void *)*param_1;
  }
  *param_1 = (long)puVar34;
  param_1[1] = (long)(puVar33 + 0x26);
  lVar27 = param_1[2];
  param_1[2] = lVar29 + uVar37 * 0x130;
  if (pvVar32 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00723850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pvVar32,lVar27 - (long)pvVar32,0x10);
  return;
}


