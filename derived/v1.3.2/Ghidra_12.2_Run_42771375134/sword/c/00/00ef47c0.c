/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef47c0; name: FUN_00ef47c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef47c0(long param_1)

{
  char *__s;
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  bool bVar63;
  size_t sVar64;
  long *plVar65;
  long lVar66;
  long lVar67;
  ushort *puVar68;
  ushort *puVar69;
  byte *pbVar70;
  uint *puVar71;
  int *piVar72;
  long lVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  long lVar77;
  long lVar78;
  int *piVar79;
  int *piVar80;
  uint *puVar81;
  undefined1 uVar82;
  undefined1 extraout_b0;
  undefined1 uVar83;
  undefined1 extraout_var;
  undefined1 uVar84;
  undefined1 extraout_var_00;
  undefined1 uVar85;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar86;
  undefined1 extraout_var_10;
  undefined1 uVar87;
  undefined1 extraout_var_11;
  undefined1 uVar88;
  undefined1 extraout_var_12;
  undefined1 uVar89;
  undefined1 extraout_var_13;
  float fVar90;
  undefined8 uVar91;
  undefined8 uVar92;
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
  undefined4 uVar103;
  float fVar104;
  undefined8 uVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined8 uVar110;
  float fVar112;
  undefined8 uVar111;
  float fVar114;
  undefined8 uVar113;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined8 uVar128;
  float fVar130;
  undefined8 uVar129;
  float fVar131;
  float fVar132;
  undefined8 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined8 uVar163;
  undefined8 uVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  
  lVar66 = *(long *)(param_1 + 0xa8);
  lVar67 = *(long *)(param_1 + 0x128);
  piVar72 = *(int **)(*(long *)PTR_DAT_02717c48 + 0x48);
  if (piVar72 != (int *)0x0) {
    uVar75 = (ulong)*(ushort *)((long)piVar72 + (4 - (long)*piVar72));
    puVar1 = (uint *)((long)piVar72 + uVar75);
    uVar76 = (ulong)*puVar1;
    puVar1 = (uint *)((long)puVar1 + uVar76);
    uVar74 = (ulong)*puVar1;
    if (uVar74 != 0) {
      puVar71 = (uint *)((long)piVar72 + uVar76 + uVar75 + 8);
      do {
        while( true ) {
          uVar75 = (ulong)puVar71[-1];
          lVar73 = uVar75 + *(ushort *)
                             ((long)puVar71 +
                             (uVar75 - (long)*(int *)((long)puVar71 + (uVar75 - 4))));
          lVar73 = lVar73 + (ulong)*(uint *)((long)puVar71 + lVar73 + -4);
          lVar77 = lVar73 - *(int *)((long)puVar71 + lVar73 + -4);
          uVar5 = *(ushort *)((long)puVar71 + lVar77 + -4);
          if (6 < uVar5) break;
          if (*(long *)(param_1 + 0x140) != 0) goto LAB_00ef48d8;
LAB_00ef48ac:
          if (uVar5 < 0xd) {
            uVar103 = 0;
          }
          else {
            uVar74 = (ulong)*(ushort *)((long)puVar71 + lVar77 + 8);
            uVar103 = 0;
            if (uVar74 != 0) {
              uVar103 = *(undefined4 *)((long)puVar71 + lVar73 + uVar74 + -4);
            }
          }
          *(undefined4 *)(param_1 + 0x194) = uVar103;
          uVar74 = (ulong)*puVar1;
          bVar63 = puVar71 == puVar1 + uVar74 + 1;
          puVar71 = puVar71 + 1;
          if (bVar63) goto LAB_00ef4908;
        }
        uVar75 = (ulong)*(ushort *)((long)puVar71 + lVar77 + 2);
        lVar78 = 0;
        if (uVar75 != 0) {
          lVar78 = *(long *)((long)puVar71 + lVar73 + uVar75 + -4);
        }
        if (lVar78 == *(long *)(param_1 + 0x140)) goto LAB_00ef48ac;
LAB_00ef48d8:
        bVar63 = puVar71 != puVar1 + uVar74 + 1;
        puVar71 = puVar71 + 1;
      } while (bVar63);
    }
  }
LAB_00ef4908:
  fVar62 = DAT_01d4c284;
  fVar61 = DAT_01d4bb38;
  uVar60 = _UNK_01d4ae98;
  uVar59 = _DAT_01d4ae90;
  uVar58 = _UNK_01d4ae88;
  uVar57 = _DAT_01d4ae80;
  uVar56 = DAT_01d4ab58;
  uVar55 = DAT_01d4ab50;
  uVar54 = DAT_01cd5418;
  uVar53 = DAT_01cd5270;
  uVar52 = DAT_01cd5120;
  uVar51 = DAT_01cd50f8;
  uVar50 = DAT_01cd50b0;
  uVar49 = DAT_01cd4f90;
  piVar72 = *(int **)(param_1 + 0x1a0);
  if (piVar72 != (int *)0x0) {
    puVar1 = (uint *)((long)piVar72 + (ulong)*(ushort *)((long)piVar72 + (4 - (long)*piVar72)));
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    if (*puVar1 != 0) {
      uVar82 = (undefined1)_UNK_01d49dc8;
      uVar83 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
      uVar84 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
      uVar85 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
      uVar86 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
      uVar87 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
      uVar88 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
      uVar89 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
      auVar6[8] = uVar82;
      auVar6._0_8_ = _DAT_01d49dc0;
      auVar6[9] = uVar83;
      auVar6[10] = uVar84;
      auVar6[0xb] = uVar85;
      auVar6[0xc] = uVar86;
      auVar6[0xd] = uVar87;
      auVar6[0xe] = uVar88;
      auVar6[0xf] = uVar89;
      uVar91 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
      auVar7[8] = uVar82;
      auVar7._0_8_ = _DAT_01d49dc0;
      auVar7[9] = uVar83;
      auVar7[10] = uVar84;
      auVar7[0xb] = uVar85;
      auVar7[0xc] = uVar86;
      auVar7[0xd] = uVar87;
      auVar7[0xe] = uVar88;
      auVar7[0xf] = uVar89;
      uVar92 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
      auVar8[8] = uVar82;
      auVar8._0_8_ = _DAT_01d49dc0;
      auVar8[9] = uVar83;
      auVar8[10] = uVar84;
      auVar8[0xb] = uVar85;
      auVar8[0xc] = uVar86;
      auVar8[0xd] = uVar87;
      auVar8[0xe] = uVar88;
      auVar8[0xf] = uVar89;
      uVar12 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
      puVar71 = puVar1 + 1;
      do {
        piVar72 = (int *)((long)puVar71 + (ulong)*puVar71);
        puVar2 = (uint *)((long)piVar72 + (ulong)*(ushort *)((long)piVar72 + (4 - (long)*piVar72)));
        piVar72 = (int *)((long)puVar2 + (ulong)*puVar2);
        puVar68 = (ushort *)((long)piVar72 - (long)*piVar72);
        if (*puVar68 < 7) {
          if (lVar66 == 0) goto LAB_00ef4a40;
        }
        else {
          lVar73 = 0;
          if ((ulong)puVar68[3] != 0) {
            lVar73 = *(long *)((long)piVar72 + (ulong)puVar68[3]);
          }
          if (lVar73 == lVar66) {
LAB_00ef4a40:
            if ((*puVar68 < 0xd) || ((ulong)puVar68[6] == 0)) {
              uVar103 = 0;
            }
            else {
              uVar103 = *(undefined4 *)((long)piVar72 + (ulong)puVar68[6]);
            }
            *(undefined4 *)(param_1 + 0x198) = uVar103;
            piVar72 = (int *)((long)puVar71 + (ulong)*puVar71);
            lVar73 = (long)piVar72 - (long)*piVar72;
            puVar2 = (uint *)((long)piVar72 + (ulong)*(ushort *)(lVar73 + 4));
            piVar80 = (int *)((long)puVar2 + (ulong)*puVar2);
            if (((0x22 < *(ushort *)((long)piVar80 - (long)*piVar80)) &&
                (uVar74 = (ulong)((ushort *)((long)piVar80 - (long)*piVar80))[0x11], uVar74 != 0))
               && (iVar4 = *(int *)((long)piVar80 + uVar74), iVar4 != 0)) {
              *(int *)(param_1 + 0x1cc) = iVar4;
              piVar72 = (int *)((long)puVar71 + (ulong)*puVar71);
              lVar73 = (long)piVar72 - (long)*piVar72;
            }
            puVar2 = (uint *)((long)piVar72 + (ulong)*(ushort *)(lVar73 + 10));
            puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
            if (*puVar2 != 0) {
              puVar81 = puVar2 + 1;
              do {
                piVar72 = (int *)((long)puVar81 + (ulong)*puVar81);
                if ((*(ushort *)((long)piVar72 - (long)*piVar72) < 5) ||
                   (uVar74 = (ulong)((ushort *)((long)piVar72 - (long)*piVar72))[2], uVar74 == 0)) {
                  piVar72 = (int *)0x0;
                }
                else {
                  puVar3 = (uint *)((long)piVar72 + uVar74);
                  piVar72 = (int *)((long)puVar3 + (ulong)*puVar3);
                }
                puVar68 = (ushort *)((long)piVar72 - (long)*piVar72);
                if ((*puVar68 < 5) || ((ulong)puVar68[2] == 0)) {
                  piVar80 = (int *)0x0;
                }
                else {
                  puVar3 = (uint *)((long)piVar72 + (ulong)puVar68[2]);
                  piVar80 = (int *)((long)puVar3 + (ulong)*puVar3);
                }
                puVar69 = (ushort *)((long)piVar80 - (long)*piVar80);
                if (*puVar69 < 0x17) {
                  if (lVar67 == 0) goto LAB_00ef4b88;
                }
                else {
                  lVar73 = 0;
                  if ((ulong)puVar69[0xb] != 0) {
                    lVar73 = *(long *)((long)piVar80 + (ulong)puVar69[0xb]);
                  }
                  if (lVar73 == lVar67) {
LAB_00ef4b88:
                    if ((*puVar68 < 0x17) || ((ulong)puVar68[0xb] == 0)) {
                      piVar79 = (int *)0x0;
                    }
                    else {
                      puVar3 = (uint *)((long)piVar72 + (ulong)puVar68[0xb]);
                      piVar79 = (int *)((long)puVar3 + (ulong)*puVar3);
                    }
                    uVar85 = 0;
                    uVar84 = 0;
                    uVar83 = 0;
                    uVar82 = 0;
                    if (0xc < *puVar69) {
                      uVar82 = 0;
                      uVar83 = 0;
                      uVar84 = 0;
                      uVar85 = 0;
                      if ((ulong)puVar69[6] != 0) {
                        uVar103 = *(undefined4 *)((long)piVar80 + (ulong)puVar69[6]);
                        uVar82 = (undefined1)uVar103;
                        uVar83 = (undefined1)((uint)uVar103 >> 8);
                        uVar84 = (undefined1)((uint)uVar103 >> 0x10);
                        uVar85 = (undefined1)((uint)uVar103 >> 0x18);
                      }
                    }
                    fVar90 = 0.0;
                    if (0x10 < *(ushort *)((long)piVar79 - (long)*piVar79)) {
                      uVar74 = (ulong)((ushort *)((long)piVar79 - (long)*piVar79))[8];
                      fVar90 = 0.0;
                      if (uVar74 != 0) {
                        fVar90 = *(float *)((long)piVar79 + uVar74);
                      }
                    }
                    FUN_00a92cd0(SUB41((((float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,
                                                  uVar82))) + fVar90) * fVar61) / fVar62,0),0,0);
                    *(ulong *)(param_1 + 0xd8) =
                         CONCAT17(extraout_var_13,
                                  CONCAT16(extraout_var_12,
                                           CONCAT15(extraout_var_11,
                                                    CONCAT14(extraout_var_10,
                                                             CONCAT13(extraout_var_09,
                                                                      CONCAT12(extraout_var_08,
                                                                               CONCAT11(
                                                  extraout_var_07,extraout_var_06)))))));
                    *(ulong *)(param_1 + 0xd0) =
                         CONCAT17(extraout_var_05,
                                  CONCAT16(extraout_var_04,
                                           CONCAT15(extraout_var_03,
                                                    CONCAT14(extraout_var_02,
                                                             CONCAT13(extraout_var_01,
                                                                      CONCAT12(extraout_var_00,
                                                                               CONCAT11(extraout_var
                                                                                        ,extraout_b0
                                                                                       )))))));
                    puVar68 = (ushort *)((long)piVar80 - (long)*piVar80);
                    uVar5 = *puVar68;
                    fVar93 = 0.0;
                    fVar102 = 0.0;
                    fVar90 = 0.0;
                    if (4 < uVar5) {
                      fVar102 = 0.0;
                      if ((ulong)puVar68[2] != 0) {
                        fVar102 = *(float *)((long)piVar80 + (ulong)puVar68[2]);
                      }
                      if (uVar5 < 7) {
                        fVar93 = 0.0;
                      }
                      else {
                        fVar93 = 0.0;
                        if ((ulong)puVar68[3] != 0) {
                          fVar93 = *(float *)((long)piVar80 + (ulong)puVar68[3]);
                        }
                        if ((8 < uVar5) && ((ulong)puVar68[4] != 0)) {
                          fVar90 = *(float *)((long)piVar80 + (ulong)puVar68[4]);
                          goto LAB_00ef4ca0;
                        }
                      }
                      fVar90 = 0.0;
                    }
LAB_00ef4ca0:
                    fVar108 = 0.0;
                    fVar117 = 0.0;
                    uVar103 = 0;
                    puVar68 = (ushort *)((long)piVar79 - (long)*piVar79);
                    uVar5 = *puVar68;
                    if (6 < uVar5) {
                      fVar117 = 0.0;
                      if ((ulong)puVar68[3] != 0) {
                        fVar117 = *(float *)((long)piVar79 + (ulong)puVar68[3]);
                      }
                      if (uVar5 < 9) {
                        fVar108 = 0.0;
                      }
                      else {
                        fVar108 = 0.0;
                        if ((ulong)puVar68[4] != 0) {
                          fVar108 = *(float *)((long)piVar79 + (ulong)puVar68[4]);
                        }
                        if ((10 < uVar5) && ((ulong)puVar68[5] != 0)) {
                          uVar103 = *(undefined4 *)((long)piVar79 + (ulong)puVar68[5]);
                          goto LAB_00ef4d14;
                        }
                      }
                      uVar103 = 0;
                    }
LAB_00ef4d14:
                    auVar9[1] = extraout_var;
                    auVar9[0] = extraout_b0;
                    auVar9[2] = extraout_var_00;
                    auVar9[3] = extraout_var_01;
                    auVar9[4] = extraout_var_02;
                    auVar9[5] = extraout_var_03;
                    auVar9[6] = extraout_var_04;
                    auVar9[7] = extraout_var_05;
                    auVar9[8] = extraout_var_06;
                    auVar9[9] = extraout_var_07;
                    auVar9[10] = extraout_var_08;
                    auVar9[0xb] = extraout_var_09;
                    auVar9[0xc] = extraout_var_10;
                    auVar9[0xd] = extraout_var_11;
                    auVar9[0xe] = extraout_var_12;
                    auVar9[0xf] = extraout_var_13;
                    uVar133 = a64_TBL(ZEXT816(0),auVar9,uVar51);
                    fVar94 = (float)CONCAT13(extraout_var_01,
                                             CONCAT12(extraout_var_00,
                                                      CONCAT11(extraout_var,extraout_b0))) *
                             (float)uVar57;
                    fVar97 = (float)CONCAT13(extraout_var_05,
                                             CONCAT12(extraout_var_04,
                                                      CONCAT11(extraout_var_03,extraout_var_02))) *
                             (float)((ulong)uVar57 >> 0x20);
                    fVar99 = (float)CONCAT13(extraout_var_09,
                                             CONCAT12(extraout_var_08,
                                                      CONCAT11(extraout_var_07,extraout_var_06))) *
                             (float)uVar58;
                    fVar100 = (float)CONCAT13(extraout_var_13,
                                              CONCAT12(extraout_var_12,
                                                       CONCAT11(extraout_var_11,extraout_var_10))) *
                              (float)((ulong)uVar58 >> 0x20);
                    auVar16._4_4_ = fVar97;
                    auVar16._0_4_ = fVar94;
                    auVar16._8_4_ = fVar99;
                    auVar16._12_4_ = fVar100;
                    uVar123 = a64_TBL(ZEXT816(0),auVar16,uVar49);
                    auVar17._4_4_ = fVar97;
                    auVar17._0_4_ = fVar94;
                    auVar17._8_4_ = fVar99;
                    auVar17._12_4_ = fVar100;
                    uVar111 = a64_TBL(ZEXT816(0),auVar17,uVar52);
                    uVar82 = SUB41(fVar108,0);
                    uVar83 = (undefined1)((uint)fVar108 >> 8);
                    uVar84 = (undefined1)((uint)fVar108 >> 0x10);
                    uVar85 = (undefined1)((uint)fVar108 >> 0x18);
                    fVar104 = (float)((ulong)uVar91 >> 0x20);
                    fVar14 = (float)CONCAT13(extraout_var_01,
                                             CONCAT12(extraout_var_00,
                                                      CONCAT11(extraout_var,extraout_b0)));
                    uVar86 = (undefined1)uVar103;
                    uVar87 = (undefined1)((uint)uVar103 >> 8);
                    uVar88 = (undefined1)((uint)uVar103 >> 0x10);
                    uVar89 = (undefined1)((uint)uVar103 >> 0x18);
                    auVar10[1] = extraout_var;
                    auVar10[0] = extraout_b0;
                    auVar10[2] = extraout_var_00;
                    auVar10[3] = extraout_var_01;
                    auVar10[4] = extraout_var_02;
                    auVar10[5] = extraout_var_03;
                    auVar10[6] = extraout_var_04;
                    auVar10[7] = extraout_var_05;
                    auVar10[8] = extraout_var_06;
                    auVar10[9] = extraout_var_07;
                    auVar10[10] = extraout_var_08;
                    auVar10[0xb] = extraout_var_09;
                    auVar10[0xc] = extraout_var_10;
                    auVar10[0xd] = extraout_var_11;
                    auVar10[0xe] = extraout_var_12;
                    auVar10[0xf] = extraout_var_13;
                    uVar105 = a64_TBL(ZEXT816(0),auVar10,uVar54);
                    auVar11[1] = extraout_var;
                    auVar11[0] = extraout_b0;
                    auVar11[2] = extraout_var_00;
                    auVar11[3] = extraout_var_01;
                    auVar11[4] = extraout_var_02;
                    auVar11[5] = extraout_var_03;
                    auVar11[6] = extraout_var_04;
                    auVar11[7] = extraout_var_05;
                    auVar11[8] = extraout_var_06;
                    auVar11[9] = extraout_var_07;
                    auVar11[10] = extraout_var_08;
                    auVar11[0xb] = extraout_var_09;
                    auVar11[0xc] = extraout_var_10;
                    auVar11[0xd] = extraout_var_11;
                    auVar11[0xe] = extraout_var_12;
                    auVar11[0xf] = extraout_var_13;
                    uVar110 = a64_TBL(ZEXT816(0),auVar11,uVar49);
                    auVar18._4_4_ = fVar97;
                    auVar18._0_4_ = fVar94;
                    auVar18._8_4_ = fVar99;
                    auVar18._12_4_ = fVar100;
                    uVar128 = a64_TBL(ZEXT816(0),auVar18,uVar54);
                    fVar15 = (float)CONCAT13(extraout_var_01,
                                             CONCAT12(extraout_var_00,
                                                      CONCAT11(extraout_var,extraout_b0)));
                    auVar19._4_4_ = fVar97;
                    auVar19._0_4_ = fVar94;
                    auVar19._8_4_ = fVar99;
                    auVar19._12_4_ = fVar100;
                    uVar13 = a64_TBL(ZEXT816(0),auVar19,uVar51);
                    auVar20._4_4_ = fVar97;
                    auVar20._0_4_ = fVar94;
                    auVar20._8_4_ = fVar99;
                    auVar20._12_4_ = fVar100;
                    uVar34 = a64_TBL(ZEXT816(0),auVar20,uVar53);
                    auVar48._4_4_ = fVar97;
                    auVar48._0_4_ = fVar94;
                    auVar48._8_4_ = fVar94;
                    auVar48._12_4_ = fVar97;
                    uVar163 = a64_TBL(ZEXT816(0),auVar48,uVar50);
                    auVar36[4] = uVar82;
                    auVar36._0_4_ = fVar117;
                    auVar36[5] = uVar83;
                    auVar36[6] = uVar84;
                    auVar36[7] = uVar85;
                    auVar36[8] = uVar86;
                    auVar36[9] = uVar87;
                    auVar36[10] = uVar88;
                    auVar36[0xb] = uVar89;
                    auVar36._12_4_ = 0;
                    uVar164 = a64_TBL(ZEXT816(0),auVar36,uVar49);
                    auVar37[4] = uVar82;
                    auVar37._0_4_ = fVar117;
                    auVar37[5] = uVar83;
                    auVar37[6] = uVar84;
                    auVar37[7] = uVar85;
                    auVar37[8] = uVar86;
                    auVar37[9] = uVar87;
                    auVar37[10] = uVar88;
                    auVar37[0xb] = uVar89;
                    auVar37._12_4_ = 0;
                    uVar129 = a64_TBL(ZEXT816(0),auVar37,uVar51);
                    fVar106 = (float)((ulong)uVar129 >> 0x20);
                    auVar38[4] = uVar82;
                    auVar38._0_4_ = fVar117;
                    auVar38[5] = uVar83;
                    auVar38[6] = uVar84;
                    auVar38[7] = uVar85;
                    auVar38[8] = uVar86;
                    auVar38[9] = uVar87;
                    auVar38[10] = uVar88;
                    auVar38[0xb] = uVar89;
                    auVar38._12_4_ = 0;
                    uVar113 = a64_TBL(ZEXT816(0),auVar38,uVar54);
                    fVar107 = (float)((ulong)uVar113 >> 0x20);
                    fVar122 = (float)uVar123;
                    fVar124 = (float)((ulong)uVar123 >> 0x20);
                    fVar125 = (float)uVar111;
                    fVar126 = (float)((ulong)uVar111 >> 0x20);
                    fVar109 = (float)((ulong)uVar164 >> 0x20);
                    fVar165 = (float)uVar59;
                    fVar166 = (float)((ulong)uVar59 >> 0x20);
                    fVar167 = (float)uVar60;
                    fVar168 = (float)((ulong)uVar60 >> 0x20);
                    fVar95 = (float)uVar13;
                    fVar98 = (float)((ulong)uVar13 >> 0x20);
                    fVar96 = (float)uVar163;
                    fVar101 = (float)((ulong)uVar163 >> 0x20);
                    fVar118 = (float)((ulong)uVar92 >> 0x20);
                    fVar127 = (float)uVar128;
                    fVar130 = (float)((ulong)uVar128 >> 0x20);
                    fVar131 = (float)uVar34;
                    fVar132 = (float)((ulong)uVar34 >> 0x20);
                    fVar33 = (fVar94 * (float)uVar164 + fVar165 * fVar117 * fVar122 +
                             fVar165 * (float)uVar113 * fVar95) - (float)uVar129 * fVar127;
                    fVar35 = (fVar97 * fVar109 + fVar166 * fVar108 * fVar124 +
                             fVar166 * fVar107 * fVar98) - fVar106 * fVar130;
                    uVar82 = SUB41(fVar35,0);
                    uVar83 = (undefined1)((uint)fVar35 >> 8);
                    uVar84 = (undefined1)((uint)fVar35 >> 0x10);
                    uVar85 = (undefined1)((uint)fVar35 >> 0x18);
                    fVar117 = (fVar99 * (float)uVar164 + fVar167 * (float)uVar129 * fVar125 +
                              fVar167 * fVar117 * fVar96) - (float)uVar113 * fVar131;
                    uVar86 = SUB41(fVar117,0);
                    uVar87 = (undefined1)((uint)fVar117 >> 8);
                    uVar88 = (undefined1)((uint)fVar117 >> 0x10);
                    uVar89 = (undefined1)((uint)fVar117 >> 0x18);
                    fVar108 = (fVar100 * fVar109 + fVar168 * fVar106 * fVar126 +
                              fVar168 * fVar108 * fVar101) - fVar107 * fVar132;
                    uVar134 = SUB41(fVar108,0);
                    uVar135 = (undefined1)((uint)fVar108 >> 8);
                    uVar136 = (undefined1)((uint)fVar108 >> 0x10);
                    uVar137 = (undefined1)((uint)fVar108 >> 0x18);
                    auVar27[4] = uVar82;
                    auVar27._0_4_ = fVar33;
                    auVar27[5] = uVar83;
                    auVar27[6] = uVar84;
                    auVar27[7] = uVar85;
                    auVar27[8] = uVar86;
                    auVar27[9] = uVar87;
                    auVar27[10] = uVar88;
                    auVar27[0xb] = uVar89;
                    auVar27[0xc] = uVar134;
                    auVar27[0xd] = uVar135;
                    auVar27[0xe] = uVar136;
                    auVar27[0xf] = uVar137;
                    uVar34 = a64_TBL(ZEXT816(0),auVar27,uVar49);
                    auVar28[4] = uVar82;
                    auVar28._0_4_ = fVar33;
                    auVar28[5] = uVar83;
                    auVar28[6] = uVar84;
                    auVar28[7] = uVar85;
                    auVar28[8] = uVar86;
                    auVar28[9] = uVar87;
                    auVar28[10] = uVar88;
                    auVar28[0xb] = uVar89;
                    auVar28[0xc] = uVar134;
                    auVar28[0xd] = uVar135;
                    auVar28[0xe] = uVar136;
                    auVar28[0xf] = uVar137;
                    uVar113 = a64_TBL(ZEXT816(0),auVar28,uVar52);
                    auVar29[4] = uVar82;
                    auVar29._0_4_ = fVar33;
                    auVar29[5] = uVar83;
                    auVar29[6] = uVar84;
                    auVar29[7] = uVar85;
                    auVar29[8] = uVar86;
                    auVar29[9] = uVar87;
                    auVar29[10] = uVar88;
                    auVar29[0xb] = uVar89;
                    auVar29[0xc] = uVar134;
                    auVar29[0xd] = uVar135;
                    auVar29[0xe] = uVar136;
                    auVar29[0xf] = uVar137;
                    uVar123 = a64_TBL(ZEXT816(0),auVar29,uVar54);
                    auVar30[4] = uVar82;
                    auVar30._0_4_ = fVar33;
                    auVar30[5] = uVar83;
                    auVar30[6] = uVar84;
                    auVar30[7] = uVar85;
                    auVar30[8] = uVar86;
                    auVar30[9] = uVar87;
                    auVar30[10] = uVar88;
                    auVar30[0xb] = uVar89;
                    auVar30[0xc] = uVar134;
                    auVar30[0xd] = uVar135;
                    auVar30[0xe] = uVar136;
                    auVar30[0xf] = uVar137;
                    uVar163 = a64_TBL(ZEXT816(0),auVar30,uVar53);
                    fVar109 = (float)uVar110;
                    fVar112 = (float)((ulong)uVar110 >> 0x20);
                    auVar31[4] = uVar82;
                    auVar31._0_4_ = fVar33;
                    auVar31[5] = uVar83;
                    auVar31[6] = uVar84;
                    auVar31[7] = uVar85;
                    auVar31[8] = uVar86;
                    auVar31[9] = uVar87;
                    auVar31[10] = uVar88;
                    auVar31[0xb] = uVar89;
                    auVar31[0xc] = uVar134;
                    auVar31[0xd] = uVar135;
                    auVar31[0xe] = uVar136;
                    auVar31[0xf] = uVar137;
                    uVar129 = a64_TBL(ZEXT816(0),auVar31,uVar51);
                    fVar106 = (float)((ulong)uVar12 >> 0x20);
                    fVar114 = (float)(CONCAT17(extraout_var_05,
                                               CONCAT16(extraout_var_04,
                                                        CONCAT15(extraout_var_03,
                                                                 CONCAT14(extraout_var_02,fVar14))))
                                     >> 0x20);
                    fVar115 = (float)uVar133;
                    fVar116 = (float)((ulong)uVar133 >> 0x20);
                    auVar32[4] = uVar82;
                    auVar32._0_4_ = fVar33;
                    auVar32[5] = uVar83;
                    auVar32[6] = uVar84;
                    auVar32[7] = uVar85;
                    auVar32[8] = SUB41(fVar33,0);
                    auVar32[9] = (char)((uint)fVar33 >> 8);
                    auVar32[10] = (char)((uint)fVar33 >> 0x10);
                    auVar32[0xb] = (char)((uint)fVar33 >> 0x18);
                    auVar32[0xc] = uVar82;
                    auVar32[0xd] = uVar83;
                    auVar32[0xe] = uVar84;
                    auVar32[0xf] = uVar85;
                    uVar13 = a64_TBL(ZEXT816(0),auVar32,uVar50);
                    fVar158 = (fVar94 * (float)uVar91 + fVar165 * fVar122 * 0.0 +
                              fVar165 * fVar95 * (float)uVar12) - (float)uVar92 * fVar127;
                    fVar159 = (fVar97 * fVar104 + fVar166 * fVar124 * 0.0 +
                              fVar166 * fVar98 * fVar106) - fVar118 * fVar130;
                    fVar160 = (fVar99 * (float)uVar91 + fVar167 * fVar125 * (float)uVar92 +
                              fVar167 * fVar96 * 0.0) - (float)uVar12 * fVar131;
                    fVar161 = (fVar100 * fVar104 + fVar168 * fVar126 * fVar118 +
                              fVar168 * fVar101 * 0.0) - fVar106 * fVar132;
                    auVar42._4_4_ = fVar159;
                    auVar42._0_4_ = fVar158;
                    auVar42._8_4_ = fVar160;
                    auVar42._12_4_ = fVar161;
                    uVar111 = a64_TBL(ZEXT816(0),auVar42,uVar49);
                    fVar104 = (float)uVar105;
                    fVar106 = (float)((ulong)uVar105 >> 0x20);
                    fVar107 = (float)(CONCAT17(extraout_var_05,
                                               CONCAT16(extraout_var_04,
                                                        CONCAT15(extraout_var_03,
                                                                 CONCAT14(extraout_var_02,fVar15))))
                                     >> 0x20);
                    auVar43._4_4_ = fVar159;
                    auVar43._0_4_ = fVar158;
                    auVar43._8_4_ = fVar160;
                    auVar43._12_4_ = fVar161;
                    uVar105 = a64_TBL(ZEXT816(0),auVar43,uVar52);
                    fVar118 = (fVar109 * fVar33 + fVar165 * fVar14 * (float)uVar34 +
                              fVar165 * fVar104 * (float)uVar129) - fVar115 * (float)uVar123;
                    fVar119 = (fVar112 * fVar35 + fVar166 * fVar114 * (float)((ulong)uVar34 >> 0x20)
                              + fVar166 * fVar106 * (float)((ulong)uVar129 >> 0x20)) -
                              fVar116 * (float)((ulong)uVar123 >> 0x20);
                    fVar120 = (fVar109 * fVar117 + fVar167 * fVar115 * (float)uVar113 +
                              fVar167 * fVar15 * (float)uVar13) - fVar104 * (float)uVar163;
                    fVar121 = (fVar112 * fVar108 +
                               fVar168 * fVar116 * (float)((ulong)uVar113 >> 0x20) +
                              fVar168 * fVar107 * (float)((ulong)uVar13 >> 0x20)) -
                              fVar106 * (float)((ulong)uVar163 >> 0x20);
                    auVar44._4_4_ = fVar159;
                    auVar44._0_4_ = fVar158;
                    auVar44._8_4_ = fVar160;
                    auVar44._12_4_ = fVar161;
                    uVar13 = a64_TBL(ZEXT816(0),auVar44,uVar51);
                    auVar45._4_4_ = fVar159;
                    auVar45._0_4_ = fVar158;
                    auVar45._8_4_ = fVar160;
                    auVar45._12_4_ = fVar161;
                    uVar113 = a64_TBL(ZEXT816(0),auVar45,uVar54);
                    auVar46._4_4_ = fVar159;
                    auVar46._0_4_ = fVar158;
                    auVar46._8_4_ = fVar160;
                    auVar46._12_4_ = fVar161;
                    uVar163 = a64_TBL(ZEXT816(0),auVar46,uVar53);
                    auVar47._4_4_ = fVar159;
                    auVar47._0_4_ = fVar158;
                    auVar47._8_4_ = fVar158;
                    auVar47._12_4_ = fVar159;
                    uVar34 = a64_TBL(ZEXT816(0),auVar47,uVar50);
                    bVar150 = (byte)uVar56;
                    bVar151 = (byte)((ulong)uVar56 >> 8);
                    bVar152 = (byte)((ulong)uVar56 >> 0x10);
                    bVar153 = (byte)((ulong)uVar56 >> 0x18);
                    bVar154 = (byte)((ulong)uVar56 >> 0x20);
                    bVar155 = (byte)((ulong)uVar56 >> 0x28);
                    bVar156 = (byte)((ulong)uVar56 >> 0x30);
                    bVar157 = (byte)((ulong)uVar56 >> 0x38);
                    bVar142 = (byte)uVar55;
                    bVar143 = (byte)((ulong)uVar55 >> 8);
                    bVar144 = (byte)((ulong)uVar55 >> 0x10);
                    bVar145 = (byte)((ulong)uVar55 >> 0x18);
                    bVar146 = (byte)((ulong)uVar55 >> 0x20);
                    bVar147 = (byte)((ulong)uVar55 >> 0x28);
                    bVar148 = (byte)((ulong)uVar55 >> 0x30);
                    bVar149 = (byte)((ulong)uVar55 >> 0x38);
                    fVar108 = (fVar109 * fVar158 + fVar165 * fVar14 * (float)uVar111 +
                              fVar165 * fVar104 * (float)uVar13) - fVar115 * (float)uVar113;
                    fVar117 = (fVar112 * fVar159 +
                               fVar166 * fVar114 * (float)((ulong)uVar111 >> 0x20) +
                              fVar166 * fVar106 * (float)((ulong)uVar13 >> 0x20)) -
                              fVar116 * (float)((ulong)uVar113 >> 0x20);
                    fVar33 = (fVar109 * fVar160 + fVar167 * fVar115 * (float)uVar105 +
                             fVar167 * fVar15 * (float)uVar34) - fVar104 * (float)uVar163;
                    fVar35 = (fVar112 * fVar161 +
                              fVar168 * fVar116 * (float)((ulong)uVar105 >> 0x20) +
                             fVar168 * fVar107 * (float)((ulong)uVar34 >> 0x20)) -
                             fVar106 * (float)((ulong)uVar163 >> 0x20);
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    if (0x10 < *(ushort *)((long)piVar72 - (long)*piVar72)) {
                      uVar74 = (ulong)((ushort *)((long)piVar72 - (long)*piVar72))[8];
                      uVar82 = 0;
                      uVar83 = 0;
                      uVar84 = 0;
                      uVar85 = 0;
                      if (uVar74 != 0) {
                        uVar103 = *(undefined4 *)((long)piVar72 + uVar74);
                        uVar82 = (undefined1)uVar103;
                        uVar83 = (undefined1)((uint)uVar103 >> 8);
                        uVar84 = (undefined1)((uint)uVar103 >> 0x10);
                        uVar85 = (undefined1)((uint)uVar103 >> 0x18);
                      }
                    }
                    fVar158 = (float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82)));
                    fVar118 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & bVar145,
                                              CONCAT12((byte)((uint)fVar118 >> 0x10) & bVar144,
                                                       CONCAT11((byte)((uint)fVar118 >> 8) & bVar143
                                                                ,SUB41(fVar118,0) & bVar142)));
                    fVar120 = (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & bVar153,
                                              CONCAT12((byte)((uint)fVar120 >> 0x10) & bVar152,
                                                       CONCAT11((byte)((uint)fVar120 >> 8) & bVar151
                                                                ,SUB41(fVar120,0) & bVar150)));
                    uVar134 = 0;
                    uVar135 = 0;
                    uVar136 = 0;
                    uVar137 = 0;
                    uVar138 = 0;
                    uVar139 = 0;
                    uVar140 = 0;
                    uVar141 = 0;
                    uVar82 = 0;
                    uVar83 = 0;
                    uVar84 = 0;
                    uVar85 = 0;
                    uVar86 = 0;
                    uVar87 = 0;
                    uVar88 = 0;
                    uVar89 = 0;
                    if (4 < uVar5) {
                      uVar134 = 0;
                      uVar135 = 0;
                      uVar136 = 0;
                      uVar137 = 0;
                      uVar138 = 0;
                      uVar139 = 0;
                      uVar140 = 0;
                      uVar141 = 0;
                      uVar82 = 0;
                      uVar83 = 0;
                      uVar84 = 0;
                      uVar85 = 0;
                      uVar86 = 0;
                      uVar87 = 0;
                      uVar88 = 0;
                      uVar89 = 0;
                      if ((ulong)puVar68[2] != 0) {
                        uVar134 = 0;
                        uVar135 = 0;
                        uVar136 = 0;
                        uVar137 = 0;
                        uVar138 = 0;
                        uVar139 = 0;
                        uVar140 = 0;
                        uVar141 = 0;
                        uVar82 = 0;
                        uVar83 = 0;
                        uVar84 = 0;
                        uVar85 = 0;
                        uVar86 = 0;
                        uVar87 = 0;
                        uVar88 = 0;
                        uVar89 = 0;
                        if (*(int *)((long)piVar79 + (ulong)puVar68[2]) == 2) {
                          uVar82 = 0;
                          uVar83 = 0;
                          uVar84 = 0;
                          uVar85 = 0;
                          if (0x14 < uVar5) {
                            uVar82 = 0;
                            uVar83 = 0;
                            uVar84 = 0;
                            uVar85 = 0;
                            if ((ulong)puVar68[10] != 0) {
                              uVar103 = *(undefined4 *)((long)piVar79 + (ulong)puVar68[10]);
                              uVar82 = (undefined1)uVar103;
                              uVar83 = (undefined1)((uint)uVar103 >> 8);
                              uVar84 = (undefined1)((uint)uVar103 >> 0x10);
                              uVar85 = (undefined1)((uint)uVar103 >> 0x18);
                            }
                          }
                          uVar86 = (undefined1)_UNK_01d4ae58;
                          uVar87 = (undefined1)((ulong)_UNK_01d4ae58 >> 8);
                          uVar88 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x10);
                          uVar89 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x18);
                          uVar134 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x20);
                          uVar135 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x28);
                          uVar136 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x30);
                          uVar137 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x38);
                          fVar162 = (float)((ulong)DAT_01cd5070 >> 0x20);
                          auVar39[8] = uVar86;
                          auVar39._0_8_ = _DAT_01d4ae50;
                          auVar39[9] = uVar87;
                          auVar39[10] = uVar88;
                          auVar39[0xb] = uVar89;
                          auVar39[0xc] = uVar134;
                          auVar39[0xd] = uVar135;
                          auVar39[0xe] = uVar136;
                          auVar39[0xf] = uVar137;
                          uVar34 = a64_TBL(ZEXT816(0),auVar39,uVar49);
                          fVar159 = (float)((ulong)uVar34 >> 0x20);
                          auVar40[8] = uVar86;
                          auVar40._0_8_ = _DAT_01d4ae50;
                          auVar40[9] = uVar87;
                          auVar40[10] = uVar88;
                          auVar40[0xb] = uVar89;
                          auVar40[0xc] = uVar134;
                          auVar40[0xd] = uVar135;
                          auVar40[0xe] = uVar136;
                          auVar40[0xf] = uVar137;
                          uVar111 = a64_TBL(ZEXT816(0),auVar40,uVar51);
                          fVar160 = (float)((ulong)uVar111 >> 0x20);
                          auVar41[8] = uVar86;
                          auVar41._0_8_ = _DAT_01d4ae50;
                          auVar41[9] = uVar87;
                          auVar41[10] = uVar88;
                          auVar41[0xb] = uVar89;
                          auVar41[0xc] = uVar134;
                          auVar41[0xd] = uVar135;
                          auVar41[0xe] = uVar136;
                          auVar41[0xf] = uVar137;
                          uVar13 = a64_TBL(ZEXT816(0),auVar41,uVar54);
                          fVar161 = (float)((ulong)uVar13 >> 0x20);
                          fVar95 = (fVar94 * (float)uVar34 + fVar165 * fVar122 * (float)DAT_01cd5070
                                   + fVar165 * fVar95 * (float)uVar13) - (float)uVar111 * fVar127;
                          fVar98 = (fVar97 * fVar159 + fVar166 * fVar124 * fVar162 +
                                   fVar166 * fVar98 * fVar161) - fVar160 * fVar130;
                          fVar94 = (fVar99 * (float)uVar34 + fVar167 * fVar125 * (float)uVar111 +
                                   fVar167 * fVar96 * (float)DAT_01cd5070) - (float)uVar13 * fVar131
                          ;
                          fVar101 = (fVar100 * fVar159 + fVar168 * fVar126 * fVar160 +
                                    fVar168 * fVar101 * fVar162) - fVar161 * fVar132;
                          auVar21._4_4_ = fVar98;
                          auVar21._0_4_ = fVar95;
                          auVar21._8_4_ = fVar94;
                          auVar21._12_4_ = fVar101;
                          uVar111 = a64_TBL(ZEXT816(0),auVar21,uVar49);
                          auVar22._4_4_ = fVar98;
                          auVar22._0_4_ = fVar95;
                          auVar22._8_4_ = fVar94;
                          auVar22._12_4_ = fVar101;
                          uVar163 = a64_TBL(ZEXT816(0),auVar22,uVar52);
                          auVar23._4_4_ = fVar98;
                          auVar23._0_4_ = fVar95;
                          auVar23._8_4_ = fVar94;
                          auVar23._12_4_ = fVar101;
                          uVar129 = a64_TBL(ZEXT816(0),auVar23,uVar54);
                          auVar24._4_4_ = fVar98;
                          auVar24._0_4_ = fVar95;
                          auVar24._8_4_ = fVar94;
                          auVar24._12_4_ = fVar101;
                          uVar34 = a64_TBL(ZEXT816(0),auVar24,uVar53);
                          auVar25._4_4_ = fVar98;
                          auVar25._0_4_ = fVar95;
                          auVar25._8_4_ = fVar94;
                          auVar25._12_4_ = fVar101;
                          uVar113 = a64_TBL(ZEXT816(0),auVar25,uVar51);
                          auVar26._4_4_ = fVar98;
                          auVar26._0_4_ = fVar95;
                          auVar26._8_4_ = fVar95;
                          auVar26._12_4_ = fVar98;
                          uVar13 = a64_TBL(ZEXT816(0),auVar26,uVar50);
                          fVar96 = ((float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82)))
                                   * *(float *)(param_1 + 0x120)) / *(float *)(param_1 + 0x124);
                          fVar95 = fVar109 * fVar95 + fVar165 * fVar14 * (float)uVar111 +
                                   fVar165 * fVar104 * (float)uVar113 + (float)uVar129 * -fVar115;
                          fVar14 = fVar112 * fVar98 +
                                   fVar166 * fVar114 * (float)((ulong)uVar111 >> 0x20) +
                                   fVar166 * fVar106 * (float)((ulong)uVar113 >> 0x20) +
                                   (float)((ulong)uVar129 >> 0x20) * -fVar116;
                          fVar15 = fVar109 * fVar94 + fVar167 * fVar115 * (float)uVar163 +
                                   fVar167 * fVar15 * (float)uVar13 + (float)uVar34 * -fVar104;
                          fVar98 = fVar112 * fVar101 +
                                   fVar168 * fVar116 * (float)((ulong)uVar163 >> 0x20) +
                                   fVar168 * fVar107 * (float)((ulong)uVar13 >> 0x20) +
                                   (float)((ulong)uVar34 >> 0x20) * -fVar106;
                          fVar95 = -((float)CONCAT13((byte)((uint)fVar95 >> 0x18) & bVar145,
                                                     CONCAT12((byte)((uint)fVar95 >> 0x10) & bVar144
                                                              ,CONCAT11((byte)((uint)fVar95 >> 8) &
                                                                        bVar143,SUB41(fVar95,0) &
                                                                                bVar142))) * fVar96)
                          ;
                          uVar82 = SUB41(fVar95,0);
                          uVar83 = (undefined1)((uint)fVar95 >> 8);
                          uVar84 = (undefined1)((uint)fVar95 >> 0x10);
                          uVar85 = (undefined1)((uint)fVar95 >> 0x18);
                          fVar95 = -((float)CONCAT13((byte)((uint)fVar14 >> 0x18) & bVar149,
                                                     CONCAT12((byte)((uint)fVar14 >> 0x10) & bVar148
                                                              ,CONCAT11((byte)((uint)fVar14 >> 8) &
                                                                        bVar147,SUB41(fVar14,0) &
                                                                                bVar146))) * fVar96)
                          ;
                          uVar86 = SUB41(fVar95,0);
                          uVar87 = (undefined1)((uint)fVar95 >> 8);
                          uVar88 = (undefined1)((uint)fVar95 >> 0x10);
                          uVar89 = (undefined1)((uint)fVar95 >> 0x18);
                          fVar95 = -((float)CONCAT13((byte)((uint)fVar15 >> 0x18) & bVar153,
                                                     CONCAT12((byte)((uint)fVar15 >> 0x10) & bVar152
                                                              ,CONCAT11((byte)((uint)fVar15 >> 8) &
                                                                        bVar151,SUB41(fVar15,0) &
                                                                                bVar150))) * fVar96)
                          ;
                          uVar134 = SUB41(fVar95,0);
                          uVar135 = (undefined1)((uint)fVar95 >> 8);
                          uVar136 = (undefined1)((uint)fVar95 >> 0x10);
                          uVar137 = (undefined1)((uint)fVar95 >> 0x18);
                          fVar95 = -((float)CONCAT13((byte)((uint)fVar98 >> 0x18) & bVar157,
                                                     CONCAT12((byte)((uint)fVar98 >> 0x10) & bVar156
                                                              ,CONCAT11((byte)((uint)fVar98 >> 8) &
                                                                        bVar155,SUB41(fVar98,0) &
                                                                                bVar154))) * fVar96)
                          ;
                          uVar138 = SUB41(fVar95,0);
                          uVar139 = (undefined1)((uint)fVar95 >> 8);
                          uVar140 = (undefined1)((uint)fVar95 >> 0x10);
                          uVar141 = (undefined1)((uint)fVar95 >> 0x18);
                        }
                      }
                    }
                    fVar93 = fVar93 + (float)(CONCAT17((byte)((uint)fVar119 >> 0x18) & bVar149,
                                                       CONCAT16((byte)((uint)fVar119 >> 0x10) &
                                                                bVar148,CONCAT15((byte)((uint)
                                                  fVar119 >> 8) & bVar147,
                                                  CONCAT14(SUB41(fVar119,0) & bVar146,fVar118)))) >>
                                             0x20) +
                             (float)CONCAT13((byte)((uint)fVar117 >> 0x18) & bVar149,
                                             CONCAT12((byte)((uint)fVar117 >> 0x10) & bVar148,
                                                      CONCAT11((byte)((uint)fVar117 >> 8) & bVar147,
                                                               SUB41(fVar117,0) & bVar146))) *
                             fVar158 + (float)CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86
                                                                                      )));
                    fVar117 = (float)(CONCAT17((byte)((uint)fVar121 >> 0x18) & bVar157,
                                               CONCAT16((byte)((uint)fVar121 >> 0x10) & bVar156,
                                                        CONCAT15((byte)((uint)fVar121 >> 8) &
                                                                 bVar155,CONCAT14(SUB41(fVar121,0) &
                                                                                  bVar154,fVar120)))
                                              ) >> 0x20) + 0.0 +
                              (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & bVar157,
                                              CONCAT12((byte)((uint)fVar35 >> 0x10) & bVar156,
                                                       CONCAT11((byte)((uint)fVar35 >> 8) & bVar155,
                                                                SUB41(fVar35,0) & bVar154))) *
                              fVar158 + (float)CONCAT13(uVar141,CONCAT12(uVar140,CONCAT11(uVar139,
                                                  uVar138)));
                    *(ulong *)(param_1 + 200) =
                         CONCAT17((char)((uint)fVar117 >> 0x18),
                                  CONCAT16((char)((uint)fVar117 >> 0x10),
                                           CONCAT15((char)((uint)fVar117 >> 8),
                                                    CONCAT14(SUB41(fVar117,0),
                                                             fVar90 + fVar120 +
                                                             (float)CONCAT13((byte)((uint)fVar33 >>
                                                                                   0x18) & bVar153,
                                                                             CONCAT12((byte)((uint)
                                                  fVar33 >> 0x10) & bVar152,
                                                  CONCAT11((byte)((uint)fVar33 >> 8) & bVar151,
                                                           SUB41(fVar33,0) & bVar150))) * fVar158 +
                                                  (float)CONCAT13(uVar137,CONCAT12(uVar136,CONCAT11(
                                                  uVar135,uVar134)))))));
                    *(ulong *)(param_1 + 0xc0) =
                         CONCAT17((char)((uint)fVar93 >> 0x18),
                                  CONCAT16((char)((uint)fVar93 >> 0x10),
                                           CONCAT15((char)((uint)fVar93 >> 8),
                                                    CONCAT14(SUB41(fVar93,0),
                                                             fVar102 + fVar118 +
                                                             (float)CONCAT13((byte)((uint)fVar108 >>
                                                                                   0x18) & bVar145,
                                                                             CONCAT12((byte)((uint)
                                                  fVar108 >> 0x10) & bVar144,
                                                  CONCAT11((byte)((uint)fVar108 >> 8) & bVar143,
                                                           SUB41(fVar108,0) & bVar142))) * fVar158 +
                                                  (float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(
                                                  uVar83,uVar82)))))));
                    if ((*(int *)(param_1 + 0x138) != -1) && (*(int *)(param_1 + 0x138) != 8)) {
                      if (*(ushort *)((long)piVar72 - (long)*piVar72) < 0xf) {
                        uVar103 = 0;
                      }
                      else {
                        uVar74 = (ulong)((ushort *)((long)piVar72 - (long)*piVar72))[7];
                        uVar103 = 0;
                        if (uVar74 != 0) {
                          uVar103 = *(undefined4 *)((long)piVar72 + uVar74);
                        }
                      }
                      *(undefined4 *)(param_1 + 0x19c) = uVar103;
                    }
                    if ((0x1a < *(ushort *)((long)piVar72 - (long)*piVar72)) &&
                       (uVar74 = (ulong)((ushort *)((long)piVar72 - (long)*piVar72))[0xd],
                       uVar74 != 0)) {
                      uVar75 = (ulong)*(uint *)((long)piVar72 + uVar74);
                      lVar73 = (long)((long)piVar72 + uVar74) + uVar75;
                      if (lVar73 != 0) {
                        __s = (char *)(lVar73 + 4);
                        sVar64 = strlen(__s);
                        if (1 < sVar64) {
                          sVar64 = strlen(__s);
                          bVar142 = *(byte *)(lVar73 + 4);
                          uVar76 = 0xcbf29ce484222645;
                          if (bVar142 != 0) {
                            uVar76 = 0xcbf29ce484222645;
                            pbVar70 = (byte *)((long)piVar72 + uVar75 + uVar74 + 5);
                            do {
                              uVar76 = (uVar76 ^ bVar142) * 0x100000001b3;
                              bVar142 = *pbVar70;
                              pbVar70 = pbVar70 + 1;
                            } while (bVar142 != 0);
                          }
                          *(ulong *)(param_1 + 0x1a8) = uVar76;
                          *(char **)(param_1 + 0x1b0) = __s;
                          *(size_t *)(param_1 + 0x1b8) = sVar64;
                          if (*(long *)(param_1 + 0x1c0) != 0) {
                            plVar65 = (long *)(*(long *)(param_1 + 0x1c0) + 0x48);
                            (**(code **)(*plVar65 + 0x18))(plVar65);
                            *(undefined8 *)(param_1 + 0x1c0) = 0;
                          }
                          *(undefined8 *)(param_1 + 0x1c0) = 0;
                        }
                      }
                    }
                  }
                }
                puVar81 = puVar81 + 1;
              } while (puVar81 != puVar2 + 1 + *puVar2);
            }
          }
        }
        puVar71 = puVar71 + 1;
      } while (puVar71 != puVar1 + 1 + *puVar1);
    }
  }
  return;
}


