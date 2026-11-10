/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002599a0; name: FUN_002599a0
 */


/* WARNING: Removing unreachable block (ram,0x0025a048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002599a0(uint *param_1,long *param_2,long *param_3,undefined8 param_4,undefined1 (*param_5) [16]
            ,undefined1 (*param_6) [16],undefined4 param_7,float *param_8,float *param_9,
            float *param_10,undefined8 *param_11,byte param_12)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  uint *puVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  uint *puVar37;
  uint uVar38;
  long lVar39;
  float *pfVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar45;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 uVar46;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar47;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar48;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar49;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar50;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar51;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar52;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 uVar53;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 uVar54;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 uVar55;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 uVar56;
  undefined1 extraout_var_61;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 extraout_var_64;
  undefined1 extraout_var_65;
  undefined1 extraout_var_66;
  undefined1 uVar57;
  undefined1 extraout_var_67;
  undefined1 extraout_var_68;
  undefined1 extraout_var_69;
  undefined1 extraout_var_70;
  undefined1 extraout_var_71;
  undefined1 extraout_var_72;
  undefined1 uVar58;
  undefined1 extraout_var_73;
  undefined1 extraout_var_74;
  undefined1 extraout_var_75;
  undefined1 extraout_var_76;
  undefined1 extraout_var_77;
  undefined1 extraout_var_78;
  undefined1 uVar59;
  undefined1 extraout_var_79;
  undefined1 extraout_var_80;
  undefined1 extraout_var_81;
  undefined1 extraout_var_82;
  undefined1 extraout_var_83;
  undefined1 extraout_var_84;
  undefined1 uVar60;
  undefined1 extraout_var_85;
  undefined1 extraout_var_86;
  undefined1 extraout_var_87;
  undefined1 extraout_var_88;
  float fVar61;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  ulong uVar77;
  float fVar78;
  float fVar83;
  float fVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  float fVar86;
  float fVar92;
  float fVar93;
  undefined1 auVar87 [16];
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  undefined8 uVar96;
  float fVar103;
  undefined1 auVar97 [16];
  float fVar102;
  float fVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar105;
  float fVar106;
  float fVar108;
  undefined8 uVar107;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined8 uVar123;
  undefined8 uVar124;
  float fStack_dc;
  float fStack_d4;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  
  uVar105 = 0x7f7fffff7f7fffff;
  Hint_Prefetch(param_1 + 0x284,0,0,0);
  Hint_Prefetch(param_1 + 0x2a4,0,0,0);
  local_78 = 0x7f7fffff7f7fffff;
  auVar70 = *param_5;
  uVar123 = *(undefined8 *)(param_5[1] + 8);
  uVar107 = *(undefined8 *)param_5[1];
  *(long *)(param_1 + 0x86) = auVar70._8_8_;
  *(long *)(param_1 + 0x84) = auVar70._0_8_;
  *(undefined8 *)(param_1 + 0x8a) = uVar123;
  *(undefined8 *)(param_1 + 0x88) = uVar107;
  auVar122 = param_5[2];
  auVar79 = param_5[3];
  *(long *)(param_1 + 0x8e) = auVar122._8_8_;
  *(long *)(param_1 + 0x8c) = auVar122._0_8_;
  *(long *)(param_1 + 0x92) = auVar79._8_8_;
  *(long *)(param_1 + 0x90) = auVar79._0_8_;
  auVar87 = *param_6;
  auVar63 = param_6[1];
  *(long *)(param_1 + 0x18a) = auVar63._8_8_;
  *(long *)(param_1 + 0x188) = auVar63._0_8_;
  *(long *)(param_1 + 0x186) = auVar87._8_8_;
  *(long *)(param_1 + 0x184) = auVar87._0_8_;
  auVar69 = param_6[2];
  auVar76 = param_6[3];
  *param_1 = 0;
  *(long *)(param_1 + 0x192) = auVar76._8_8_;
  *(long *)(param_1 + 400) = auVar76._0_8_;
  *(long *)(param_1 + 0x18e) = auVar69._8_8_;
  *(long *)(param_1 + 0x18c) = auVar69._0_8_;
  uVar34 = _UNK_01d4ae58;
  uVar124 = _DAT_01d4ae50;
  fVar67 = auVar70._0_4_;
  fVar66 = auVar70._4_4_;
  fVar95 = auVar70._8_4_;
  fVar65 = auVar70._12_4_;
  fVar85 = auVar87._0_4_;
  fVar92 = auVar87._4_4_;
  fVar42 = auVar87._8_4_;
  fVar44 = auVar87._12_4_;
  fVar86 = (float)((ulong)uVar107 >> 0x20);
  fVar61 = (float)((ulong)uVar123 >> 0x20);
  switch(param_7) {
  case 1:
    uStack_a8 = _UNK_01d4ae58;
    local_b0 = _DAT_01d4ae50;
    fVar66 = fVar66 - fVar92;
    fVar65 = fVar65 - fVar44;
    uStack_88 = _UNK_01d4a548;
    local_90 = _DAT_01d4a540;
    (**(code **)(*param_2 + 8))(param_2,&local_90);
    fVar61 = (float)CONCAT13(extraout_var_59,
                             CONCAT12(extraout_var_53,CONCAT11(extraout_var_47,extraout_var_41)));
    fVar86 = (float)CONCAT13(extraout_var_11,
                             CONCAT12(extraout_var_05,CONCAT11(extraout_var,extraout_b0)));
    (**(code **)(*param_3 + 8))(param_3,&local_b0);
    fStack_dc = (float)(CONCAT17(extraout_var_35,
                                 CONCAT16(extraout_var_29,
                                          CONCAT15(extraout_var_23,CONCAT14(extraout_var_17,fVar86))
                                         )) >> 0x20);
    fStack_d4 = (float)(CONCAT17(extraout_var_83,
                                 CONCAT16(extraout_var_77,
                                          CONCAT15(extraout_var_71,CONCAT14(extraout_var_65,fVar61))
                                         )) >> 0x20);
    fVar92 = fVar86 - (float)CONCAT13(extraout_var_12,
                                      CONCAT12(extraout_var_06,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
    fVar44 = fStack_dc -
             (float)CONCAT13(extraout_var_36,
                             CONCAT12(extraout_var_30,CONCAT11(extraout_var_24,extraout_var_18)));
    fVar43 = fVar61 - (float)CONCAT13(extraout_var_60,
                                      CONCAT12(extraout_var_54,
                                               CONCAT11(extraout_var_48,extraout_var_42)));
    fVar78 = fStack_d4 -
             (float)CONCAT13(extraout_var_84,
                             CONCAT12(extraout_var_78,CONCAT11(extraout_var_72,extraout_var_66)));
    *(ulong *)(param_1 + 0x18a) =
         CONCAT17(extraout_var_84,
                  CONCAT16(extraout_var_78,
                           CONCAT15(extraout_var_72,
                                    CONCAT14(extraout_var_66,
                                             CONCAT13(extraout_var_60,
                                                      CONCAT12(extraout_var_54,
                                                               CONCAT11(extraout_var_48,
                                                                        extraout_var_42)))))));
    *(ulong *)(param_1 + 0x188) =
         CONCAT17(extraout_var_36,
                  CONCAT16(extraout_var_30,
                           CONCAT15(extraout_var_24,
                                    CONCAT14(extraout_var_18,
                                             CONCAT13(extraout_var_12,
                                                      CONCAT12(extraout_var_06,
                                                               CONCAT11(extraout_var_00,
                                                                        extraout_b0_00)))))));
    iVar41 = -(uint)(fVar67 - fVar85 == fVar92);
    iVar5 = -(uint)((float)(CONCAT17((char)((uint)fVar66 >> 0x18),
                                     CONCAT16((char)((uint)fVar66 >> 0x10),
                                              CONCAT15((char)((uint)fVar66 >> 8),
                                                       CONCAT14(SUB41(fVar66,0),fVar67 - fVar85))))
                           >> 0x20) == fVar44);
    uVar45 = (undefined1)iVar5;
    uVar47 = (undefined1)((uint)iVar5 >> 8);
    uVar49 = (undefined1)((uint)iVar5 >> 0x10);
    uVar51 = (undefined1)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(fVar95 - fVar42 == fVar43);
    uVar46 = (undefined1)iVar5;
    uVar48 = (undefined1)((uint)iVar5 >> 8);
    uVar50 = (undefined1)((uint)iVar5 >> 0x10);
    uVar52 = (undefined1)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)((float)(CONCAT17((char)((uint)fVar65 >> 0x18),
                                     CONCAT16((char)((uint)fVar65 >> 0x10),
                                              CONCAT15((char)((uint)fVar65 >> 8),
                                                       CONCAT14(SUB41(fVar65,0),fVar95 - fVar42))))
                           >> 0x20) == fVar78);
    uVar53 = (undefined1)((uint)iVar5 >> 8);
    uVar54 = (undefined1)((uint)iVar5 >> 0x10);
    uVar55 = (undefined1)((uint)iVar5 >> 0x18);
    param_1[0x8a] = (uint)fVar61;
    param_1[0x8b] = (uint)fStack_d4;
    param_1[0x88] = (uint)fVar86;
    param_1[0x89] = (uint)fStack_dc;
    auVar17[4] = uVar45;
    auVar17._0_4_ = iVar41;
    auVar17[5] = uVar47;
    auVar17[6] = uVar49;
    auVar17[7] = uVar51;
    auVar17[8] = uVar46;
    auVar17[9] = uVar48;
    auVar17[10] = uVar50;
    auVar17[0xb] = uVar52;
    auVar17[0xc] = (char)iVar5;
    auVar17[0xd] = uVar53;
    auVar17[0xe] = uVar54;
    auVar17[0xf] = uVar55;
    auVar18[4] = uVar45;
    auVar18._0_4_ = iVar41;
    auVar18[5] = uVar47;
    auVar18[6] = uVar49;
    auVar18[7] = uVar51;
    auVar18[8] = uVar46;
    auVar18[9] = uVar48;
    auVar18[10] = uVar50;
    auVar18[0xb] = uVar52;
    auVar18[0xc] = (char)iVar5;
    auVar18[0xd] = uVar53;
    auVar18[0xe] = uVar54;
    auVar18[0xf] = uVar55;
    NEON_ext(auVar17,auVar18,8,1);
    if (CONCAT12(uVar46,CONCAT11(uVar45,(char)iVar41)) != -1) {
      uVar107 = *(undefined8 *)(param_1 + 0x84);
      fVar92 = fVar92 - ((float)uVar107 - (float)param_1[0x184]);
      uVar45 = SUB41(fVar92,0);
      uVar47 = (undefined1)((uint)fVar92 >> 8);
      uVar49 = (undefined1)((uint)fVar92 >> 0x10);
      uVar51 = (undefined1)((uint)fVar92 >> 0x18);
      fVar44 = fVar44 - ((float)((ulong)uVar107 >> 0x20) - (float)param_1[0x185]);
      uVar46 = SUB41(fVar44,0);
      uVar48 = (undefined1)((uint)fVar44 >> 8);
      uVar50 = (undefined1)((uint)fVar44 >> 0x10);
      uVar52 = (undefined1)((uint)fVar44 >> 0x18);
      fVar43 = fVar43 - ((float)*(undefined8 *)(param_1 + 0x86) - (float)param_1[0x186]);
      uVar53 = SUB41(fVar43,0);
      uVar54 = (undefined1)((uint)fVar43 >> 8);
      uVar55 = (undefined1)((uint)fVar43 >> 0x10);
      uVar56 = (undefined1)((uint)fVar43 >> 0x18);
      fVar78 = fVar78 - ((float)((ulong)*(undefined8 *)(param_1 + 0x86) >> 0x20) -
                        (float)param_1[0x187]);
      uVar57 = SUB41(fVar78,0);
      uVar58 = (undefined1)((uint)fVar78 >> 8);
      uVar59 = (undefined1)((uint)fVar78 >> 0x10);
      uVar60 = (undefined1)((uint)fVar78 >> 0x18);
      bVar6 = ABS(fVar44) < ABS(fVar92) && ABS(fVar44) < ABS(fVar43);
      auVar75._0_4_ = -(uint)bVar6;
      auVar75._4_4_ = -(uint)bVar6;
      auVar75._8_4_ = -(uint)bVar6;
      auVar75._12_4_ = -(uint)bVar6;
      NEON_ext(auVar75,auVar75,8,1);
      if (CONCAT13((char)auVar75._12_4_,
                   CONCAT12((char)auVar75._8_4_,CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_)))
          == -1) goto LAB_00259de8;
      iVar41 = -(uint)(ABS(fVar43) < ABS(fVar92));
      auVar62._4_4_ = iVar41;
      auVar62._0_4_ = iVar41;
      auVar62._8_4_ = iVar41;
      auVar62._12_4_ = iVar41;
      auVar68._8_8_ = _UNK_01d49dc8;
      auVar68._0_8_ = _DAT_01d49dc0;
      auVar27._8_8_ = uVar34;
      auVar27._0_8_ = uVar124;
      auVar63 = auVar27 ^ (auVar27 ^ auVar68) & auVar62;
      goto LAB_00259df0;
    }
    goto LAB_0025a5a8;
  case 2:
    fVar67 = ((float)uVar107 - auVar63._0_4_) - (fVar67 - fVar85);
    uVar45 = SUB41(fVar67,0);
    uVar47 = (undefined1)((uint)fVar67 >> 8);
    uVar49 = (undefined1)((uint)fVar67 >> 0x10);
    uVar51 = (undefined1)((uint)fVar67 >> 0x18);
    fVar86 = (fVar86 - auVar63._4_4_) - (fVar66 - fVar92);
    uVar46 = SUB41(fVar86,0);
    uVar48 = (undefined1)((uint)fVar86 >> 8);
    uVar50 = (undefined1)((uint)fVar86 >> 0x10);
    uVar52 = (undefined1)((uint)fVar86 >> 0x18);
    fVar66 = ((float)uVar123 - auVar63._8_4_) - (fVar95 - fVar42);
    uVar53 = SUB41(fVar66,0);
    uVar54 = (undefined1)((uint)fVar66 >> 8);
    uVar55 = (undefined1)((uint)fVar66 >> 0x10);
    uVar56 = (undefined1)((uint)fVar66 >> 0x18);
    fVar61 = (fVar61 - auVar63._12_4_) - (fVar65 - fVar44);
    uVar57 = SUB41(fVar61,0);
    uVar58 = (undefined1)((uint)fVar61 >> 8);
    uVar59 = (undefined1)((uint)fVar61 >> 0x10);
    uVar60 = (undefined1)((uint)fVar61 >> 0x18);
    bVar6 = ABS(fVar86) < ABS(fVar67) && ABS(fVar86) < ABS(fVar66);
    auVar122._0_4_ = -(uint)bVar6;
    auVar122._4_4_ = -(uint)bVar6;
    auVar122._8_4_ = -(uint)bVar6;
    auVar122._12_4_ = -(uint)bVar6;
    NEON_ext(auVar122,auVar122,8,1);
    if (CONCAT13((char)auVar122._12_4_,
                 CONCAT12((char)auVar122._8_4_,CONCAT11((char)auVar122._4_4_,(char)auVar122._0_4_)))
        == -1) {
LAB_00259de8:
      auVar63._8_8_ = _UNK_01d4b588;
      auVar63._0_8_ = _DAT_01d4b580;
    }
    else {
      iVar41 = -(uint)(ABS(fVar66) < ABS(fVar67));
      auVar79._4_4_ = iVar41;
      auVar79._0_4_ = iVar41;
      auVar79._8_4_ = iVar41;
      auVar79._12_4_ = iVar41;
      auVar69._8_8_ = _UNK_01d4ae58;
      auVar69._0_8_ = _DAT_01d4ae50;
      auVar76._8_8_ = _UNK_01d49dc8;
      auVar76._0_8_ = _DAT_01d49dc0;
      auVar63 = auVar69 ^ (auVar69 ^ auVar76) & auVar79;
    }
LAB_00259df0:
    fVar66 = auVar63._4_4_;
    auVar70 = NEON_ext(auVar63,auVar63,8,1);
    auVar13[1] = uVar47;
    auVar13[0] = uVar45;
    auVar13[2] = uVar49;
    auVar13[3] = uVar51;
    auVar13[4] = uVar46;
    auVar13[5] = uVar48;
    auVar13[6] = uVar50;
    auVar13[7] = uVar52;
    auVar13[8] = uVar53;
    auVar13[9] = uVar54;
    auVar13[10] = uVar55;
    auVar13[0xb] = uVar56;
    auVar13[0xc] = uVar57;
    auVar13[0xd] = uVar58;
    auVar13[0xe] = uVar59;
    auVar13[0xf] = uVar60;
    auVar14[1] = uVar47;
    auVar14[0] = uVar45;
    auVar14[2] = uVar49;
    auVar14[3] = uVar51;
    auVar14[4] = uVar46;
    auVar14[5] = uVar48;
    auVar14[6] = uVar50;
    auVar14[7] = uVar52;
    auVar14[8] = uVar53;
    auVar14[9] = uVar54;
    auVar14[10] = uVar55;
    auVar14[0xb] = uVar56;
    auVar14[0xc] = uVar57;
    auVar14[0xd] = uVar58;
    auVar14[0xe] = uVar59;
    auVar14[0xf] = uVar60;
    auVar122 = NEON_ext(auVar13,auVar14,8,1);
    fVar86 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) * auVar63._0_4_ -
             (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) * fVar66;
    fVar61 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) * fVar66 -
             (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) * auVar63._8_4_;
    uVar107 = NEON_ext(CONCAT17((char)((uint)fVar61 >> 0x18),
                                CONCAT16((char)((uint)fVar61 >> 0x10),
                                         CONCAT15((char)((uint)fVar61 >> 8),
                                                  CONCAT14(SUB41(fVar61,0),fVar86)))),
                       CONCAT44((float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) *
                                auVar70._4_4_ - auVar122._4_4_ * fVar66,
                                (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) *
                                auVar70._0_4_ - auVar122._0_4_ * auVar63._0_4_),4,1);
    fVar85 = (float)uVar107;
    fVar61 = fVar85 * fVar85;
    fVar65 = (float)((ulong)uVar107 >> 0x20);
    fVar66 = fVar65 * fVar65;
    uVar45 = (undefined1)((uint)fVar66 >> 8);
    uVar47 = (undefined1)((uint)fVar66 >> 0x10);
    uVar49 = (undefined1)((uint)fVar66 >> 0x18);
    fVar67 = fVar86 * fVar86;
    uVar51 = (undefined1)((uint)fVar67 >> 8);
    uVar46 = (undefined1)((uint)fVar67 >> 0x10);
    uVar48 = (undefined1)((uint)fVar67 >> 0x18);
    auVar15[4] = SUB41(fVar66,0);
    auVar15._0_4_ = fVar61;
    auVar15[5] = uVar45;
    auVar15[6] = uVar47;
    auVar15[7] = uVar49;
    auVar15[8] = SUB41(fVar67,0);
    auVar15[9] = uVar51;
    auVar15[10] = uVar46;
    auVar15[0xb] = uVar48;
    auVar15._12_4_ = 0;
    auVar16[4] = SUB41(fVar66,0);
    auVar16._0_4_ = fVar61;
    auVar16[5] = uVar45;
    auVar16[6] = uVar47;
    auVar16[7] = uVar49;
    auVar16[8] = SUB41(fVar67,0);
    auVar16[9] = uVar51;
    auVar16[10] = uVar46;
    auVar16[0xb] = uVar48;
    auVar16._12_4_ = 0;
    auVar70 = NEON_ext(auVar15,auVar16,8,1);
    fVar95 = auVar70._0_4_ + auVar70._4_4_;
    fVar67 = fVar61 + fVar66 + fVar95;
    fVar95 = fVar61 + fVar66 + fVar95;
    uVar45 = SUB41(fVar95,0);
    uVar47 = (undefined1)((uint)fVar95 >> 8);
    uVar49 = (undefined1)((uint)fVar95 >> 0x10);
    uVar51 = (undefined1)((uint)fVar95 >> 0x18);
    uVar107 = NEON_frsqrte(CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,fVar67)))
                                   ),4);
    fVar61 = (float)uVar107;
    fVar66 = (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar61 * fVar61),
                           CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,fVar67)))
                                   ),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar61 * fVar61),
                           CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,fVar67)))
                                   ),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar61 * fVar61),
                           CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,fVar67)))
                                   ),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar61 * fVar61),
                           CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,fVar67)))
                                   ),4);
    uVar34 = CONCAT44(fVar95 * fVar66 * (float)((ulong)uVar107 >> 0x20),
                      fVar67 * fVar61 * (float)uVar107);
    uVar34 = uVar34 ^ (uVar34 ^ CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,
                                                  fVar67))))) &
                      CONCAT44(-(uint)(fVar67 == 0.0),-(uint)(fVar67 == 0.0));
    uVar107 = NEON_frecpe(uVar34,4);
    uVar123 = NEON_frecps(uVar34,uVar107,4);
    fVar61 = (float)uVar107 * (float)uVar123;
    fVar66 = (float)((ulong)uVar107 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
    uVar107 = NEON_frecps(uVar34,CONCAT17((char)((uint)fVar66 >> 0x18),
                                          CONCAT16((char)((uint)fVar66 >> 0x10),
                                                   CONCAT15((char)((uint)fVar66 >> 8),
                                                            CONCAT14(SUB41(fVar66,0),fVar61)))),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frecps(uVar34,CONCAT17((char)((uint)fVar66 >> 0x18),
                                          CONCAT16((char)((uint)fVar66 >> 0x10),
                                                   CONCAT15((char)((uint)fVar66 >> 8),
                                                            CONCAT14(SUB41(fVar66,0),fVar61)))),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frecps(uVar34,CONCAT17((char)((uint)fVar66 >> 0x18),
                                          CONCAT16((char)((uint)fVar66 >> 0x10),
                                                   CONCAT15((char)((uint)fVar66 >> 8),
                                                            CONCAT14(SUB41(fVar66,0),fVar61)))),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar66 = fVar66 * (float)((ulong)uVar107 >> 0x20);
    uVar107 = NEON_frecps(uVar34,CONCAT17((char)((uint)fVar66 >> 0x18),
                                          CONCAT16((char)((uint)fVar66 >> 0x10),
                                                   CONCAT15((char)((uint)fVar66 >> 8),
                                                            CONCAT14(SUB41(fVar66,0),fVar61)))),4);
    fVar61 = fVar61 * (float)uVar107;
    fVar65 = fVar65 * fVar61;
    uStack_98 = (ulong)(uint)(fVar86 * fVar61);
    local_a0 = CONCAT17((char)((uint)fVar65 >> 0x18),
                        CONCAT16((char)((uint)fVar65 >> 0x10),
                                 CONCAT15((char)((uint)fVar65 >> 8),
                                          CONCAT14(SUB41(fVar65,0),fVar85 * fVar61))));
    fVar65 = -fVar65;
    uStack_88 = (ulong)(uint)-(fVar86 * fVar61);
    local_90 = CONCAT17((char)((uint)fVar65 >> 0x18),
                        CONCAT16((char)((uint)fVar65 >> 0x10),
                                 CONCAT15((char)((uint)fVar65 >> 8),
                                          CONCAT14(SUB41(fVar65,0),-(fVar85 * fVar61)))));
    (**(code **)(*param_2 + 8))(param_2,&local_90);
    (**(code **)(*param_3 + 8))(param_3,&local_a0);
    *(ulong *)(param_1 + 0x8e) =
         CONCAT17(extraout_var_85,
                  CONCAT16(extraout_var_79,
                           CONCAT15(extraout_var_73,
                                    CONCAT14(extraout_var_67,
                                             CONCAT13(extraout_var_61,
                                                      CONCAT12(extraout_var_55,
                                                               CONCAT11(extraout_var_49,
                                                                        extraout_var_43)))))));
    *(ulong *)(param_1 + 0x8c) =
         CONCAT17(extraout_var_37,
                  CONCAT16(extraout_var_31,
                           CONCAT15(extraout_var_25,
                                    CONCAT14(extraout_var_19,
                                             CONCAT13(extraout_var_13,
                                                      CONCAT12(extraout_var_07,
                                                               CONCAT11(extraout_var_01,
                                                                        extraout_b0_01)))))));
    *(ulong *)(param_1 + 0x18e) =
         CONCAT17(extraout_var_86,
                  CONCAT16(extraout_var_80,
                           CONCAT15(extraout_var_74,
                                    CONCAT14(extraout_var_68,
                                             CONCAT13(extraout_var_62,
                                                      CONCAT12(extraout_var_56,
                                                               CONCAT11(extraout_var_50,
                                                                        extraout_var_44)))))));
    *(ulong *)(param_1 + 0x18c) =
         CONCAT17(extraout_var_38,
                  CONCAT16(extraout_var_32,
                           CONCAT15(extraout_var_26,
                                    CONCAT14(extraout_var_20,
                                             CONCAT13(extraout_var_14,
                                                      CONCAT12(extraout_var_08,
                                                               CONCAT11(extraout_var_02,
                                                                        extraout_b0_02)))))));
    break;
  case 3:
    break;
  case 4:
    fVar67 = fVar67 - fVar85;
    fVar66 = fVar66 - fVar92;
    fVar95 = fVar95 - fVar42;
    fVar65 = fVar65 - fVar44;
    auVar87._0_4_ = ((float)uVar107 - auVar63._0_4_) - fVar67;
    auVar87._4_4_ = (fVar86 - auVar63._4_4_) - fVar66;
    auVar87._8_4_ = ((float)uVar123 - auVar63._8_4_) - fVar95;
    auVar87._12_4_ = (fVar61 - auVar63._12_4_) - fVar65;
    auVar97._0_4_ = (auVar122._0_4_ - auVar69._0_4_) - fVar67;
    auVar97._4_4_ = (auVar122._4_4_ - auVar69._4_4_) - fVar66;
    auVar97._8_4_ = (auVar122._8_4_ - auVar69._8_4_) - fVar95;
    auVar97._12_4_ = (auVar122._12_4_ - auVar69._12_4_) - fVar65;
    auVar70 = NEON_ext(auVar87,auVar87,8,1);
    auVar117 = NEON_ext(auVar97,auVar97,8,1);
    fVar42 = auVar87._0_4_ * auVar97._4_4_ - auVar87._4_4_ * auVar97._0_4_;
    uVar124 = NEON_ext(CONCAT44(auVar87._4_4_ * auVar97._8_4_ - auVar87._8_4_ * auVar97._4_4_,fVar42
                               ),
                       CONCAT44(auVar70._4_4_ * auVar97._4_4_ - auVar87._4_4_ * auVar117._4_4_,
                                auVar70._0_4_ * auVar97._0_4_ - auVar87._0_4_ * auVar117._0_4_),4,1)
    ;
    fVar85 = (float)uVar124;
    auVar117._0_4_ = fVar85 * fVar85;
    fVar92 = (float)((ulong)uVar124 >> 0x20);
    auVar117._4_4_ = fVar92 * fVar92;
    auVar117._8_4_ = fVar42 * fVar42;
    auVar117._12_4_ = 0;
    auVar70 = NEON_ext(auVar117,auVar117,8,1);
    fVar61 = auVar70._0_4_ + auVar70._4_4_;
    fVar86 = auVar117._0_4_ + auVar117._4_4_ + fVar61;
    fVar61 = auVar117._0_4_ + auVar117._4_4_ + fVar61;
    uVar34 = CONCAT44(fVar61,fVar86);
    uVar124 = NEON_frsqrte(uVar34,4);
    fVar44 = (float)uVar124;
    fVar43 = (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frsqrts(CONCAT44(fVar43 * fVar43,fVar44 * fVar44),uVar34,4);
    fVar44 = fVar44 * (float)uVar124;
    fVar43 = fVar43 * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frsqrts(CONCAT44(fVar43 * fVar43,fVar44 * fVar44),uVar34,4);
    fVar44 = fVar44 * (float)uVar124;
    fVar43 = fVar43 * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frsqrts(CONCAT44(fVar43 * fVar43,fVar44 * fVar44),uVar34,4);
    fVar44 = fVar44 * (float)uVar124;
    fVar43 = fVar43 * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frsqrts(CONCAT44(fVar43 * fVar43,fVar44 * fVar44),uVar34,4);
    fVar44 = fVar86 * fVar44 * (float)uVar124;
    fVar61 = fVar61 * fVar43 * (float)((ulong)uVar124 >> 0x20);
    uVar34 = CONCAT44(fVar61,fVar44) ^
             (CONCAT44(fVar61,fVar44) ^ uVar34) &
             CONCAT44(-(uint)(fVar86 == 0.0),-(uint)(fVar86 == 0.0));
    uVar96 = NEON_frecpe(uVar34,4);
    uVar124 = NEON_frecps(uVar34,uVar96,4);
    fVar86 = (float)uVar96 * (float)uVar124;
    fVar61 = (float)((ulong)uVar96 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frecps(uVar34,CONCAT44(fVar61,fVar86),4);
    fVar86 = fVar86 * (float)uVar124;
    fVar61 = fVar61 * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frecps(uVar34,CONCAT44(fVar61,fVar86),4);
    fVar86 = fVar86 * (float)uVar124;
    fVar61 = fVar61 * (float)((ulong)uVar124 >> 0x20);
    uVar124 = NEON_frecps(uVar34,CONCAT44(fVar61,fVar86),4);
    fVar86 = fVar86 * (float)uVar124;
    uVar124 = NEON_frecps(uVar34,CONCAT44(fVar61 * (float)((ulong)uVar124 >> 0x20),fVar86),4);
    fVar86 = fVar86 * (float)uVar124;
    auVar70._0_4_ = ((auVar79._0_4_ - auVar76._0_4_) - fVar67) * fVar85 * fVar86;
    auVar70._4_4_ = ((auVar79._4_4_ - auVar76._4_4_) - fVar66) * fVar92 * fVar86;
    auVar70._8_4_ = ((auVar79._8_4_ - auVar76._8_4_) - fVar95) * fVar42 * fVar86;
    auVar70._12_4_ = ((auVar79._12_4_ - auVar76._12_4_) - fVar65) * 0.0;
    auVar79 = NEON_ext(auVar70,auVar70,8,1);
    if (0.0 < auVar70._0_4_ + auVar70._4_4_ + auVar79._0_4_ + auVar79._4_4_) {
      *(long *)(param_1 + 0x8a) = auVar122._8_8_;
      *(long *)(param_1 + 0x88) = auVar122._0_8_;
      *(undefined8 *)(param_1 + 0x8e) = uVar123;
      *(undefined8 *)(param_1 + 0x8c) = uVar107;
      *(long *)(param_1 + 0x18e) = auVar63._8_8_;
      *(long *)(param_1 + 0x18c) = auVar63._0_8_;
      *(long *)(param_1 + 0x18a) = auVar69._8_8_;
      *(long *)(param_1 + 0x188) = auVar69._0_8_;
    }
    uVar45 = 1;
    lVar31 = FUN_0025ac20(param_1,0,1,2,&local_78);
    lVar36 = FUN_0025ac20(param_1,0,3,1,&local_78);
    lVar39 = FUN_0025ac20(param_1,0,2,3,&local_78);
    lVar28 = FUN_0025ac20(param_1,1,3,2,&local_78);
    if (*param_1 == 0) goto LAB_0025a5a8;
    *(long *)(lVar31 + 0x18) = lVar36;
    *(undefined1 *)(lVar31 + 0x30) = 2;
    *(long *)(lVar36 + 0x28) = lVar31;
    *(undefined1 *)(lVar36 + 0x32) = 0;
    *(long *)(lVar31 + 0x20) = lVar28;
    *(undefined1 *)(lVar31 + 0x31) = 2;
    *(long *)(lVar28 + 0x28) = lVar31;
    *(undefined1 *)(lVar28 + 0x32) = 1;
    *(long *)(lVar31 + 0x28) = lVar39;
    *(undefined1 *)(lVar31 + 0x32) = 0;
    *(long *)(lVar39 + 0x18) = lVar31;
    *(undefined1 *)(lVar39 + 0x30) = 2;
    *(long *)(lVar36 + 0x18) = lVar39;
    *(undefined1 *)(lVar36 + 0x30) = 2;
    *(long *)(lVar39 + 0x28) = lVar36;
    *(undefined1 *)(lVar39 + 0x32) = 0;
    *(long *)(lVar36 + 0x20) = lVar28;
    *(undefined1 *)(lVar36 + 0x31) = 0;
    *(long *)(lVar28 + 0x18) = lVar36;
    iVar41 = 4;
    *(undefined1 *)(lVar28 + 0x30) = 1;
    *(long *)(lVar39 + 0x20) = lVar28;
    *(undefined1 *)(lVar39 + 0x31) = 1;
    *(long *)(lVar28 + 0x20) = lVar39;
    goto LAB_00259f7c;
  default:
    iVar41 = 0;
    goto LAB_00259f80;
  }
  uVar45 = 2;
  lVar31 = FUN_0025ac20(param_1,0,1,2,&local_78);
  lVar28 = FUN_0025ac20(param_1,1,0,2,&local_78);
  if (*param_1 == 0) {
LAB_0025a5a8:
    uVar107 = 7;
  }
  else {
    *(long *)(lVar31 + 0x18) = lVar28;
    iVar41 = 3;
    *(undefined1 *)(lVar31 + 0x30) = 0;
    *(long *)(lVar28 + 0x18) = lVar31;
    *(undefined1 *)(lVar28 + 0x30) = 0;
    *(long *)(lVar31 + 0x20) = lVar28;
    *(undefined1 *)(lVar31 + 0x31) = 2;
    *(long *)(lVar28 + 0x28) = lVar31;
    *(undefined1 *)(lVar28 + 0x32) = 1;
    *(long *)(lVar31 + 0x28) = lVar28;
    *(undefined1 *)(lVar31 + 0x32) = 1;
    *(long *)(lVar28 + 0x20) = lVar31;
LAB_00259f7c:
    *(undefined1 *)(lVar28 + 0x31) = uVar45;
LAB_00259f80:
    uVar11 = *(undefined4 *)(param_2[1] + 0x14);
    puVar1 = param_1 + 0x706;
    uVar107 = NEON_fmin(CONCAT17((char)((uint)uVar11 >> 0x18),
                                 CONCAT16((char)((uint)uVar11 >> 0x10),
                                          CONCAT15((char)((uint)uVar11 >> 8),
                                                   CONCAT14((char)uVar11,uVar11)))),
                        CONCAT44(*(undefined4 *)(param_3[1] + 0x14),
                                 *(undefined4 *)(param_3[1] + 0x14)),4);
    do {
      uVar38 = 1;
      uVar2 = param_1[0x788];
      if (uVar2 != 0) {
        uVar33 = *puVar1;
        if (uVar2 == 1) {
          lVar31 = 0;
        }
        else {
          lVar31 = 0;
          puVar32 = param_1 + 0x749;
          do {
            uVar3 = puVar32[-1];
            puVar37 = puVar1;
            uVar35 = uVar3;
            if (uVar33 - 1 != uVar3) {
              uVar35 = param_1[0x747];
              param_1[0x747] = uVar35 + 1;
              puVar37 = param_1 + (ulong)uVar35 + 0x707;
              uVar35 = uVar33;
            }
            *puVar37 = uVar3;
            uVar3 = *puVar32;
            puVar37 = puVar1;
            uVar33 = uVar3;
            if (uVar35 - 1 != uVar3) {
              uVar33 = param_1[0x747];
              param_1[0x747] = uVar33 + 1;
              puVar37 = param_1 + (ulong)uVar33 + 0x707;
              uVar33 = uVar35;
            }
            lVar31 = lVar31 + 2;
            puVar32 = puVar32 + 2;
            *puVar37 = uVar3;
          } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar31);
          if ((uVar2 & 1) == 0) goto LAB_0025a104;
        }
        uVar2 = param_1[lVar31 + 0x748];
        puVar32 = puVar1;
        if (uVar33 - 1 != uVar2) {
          uVar33 = param_1[0x747];
          param_1[0x747] = uVar33 + 1;
          puVar32 = param_1 + (ulong)uVar33 + 0x707;
        }
        *puVar32 = uVar2;
      }
LAB_0025a104:
      uVar2 = *param_1 - 1;
      puVar29 = *(undefined8 **)(param_1 + 2);
      param_1[0x788] = 0;
      *param_1 = uVar2;
      pfVar40 = (float *)*puVar29;
      lVar31 = puVar29[uVar2];
      uVar34 = 0;
      if (1 < uVar2) {
        uVar34 = 0;
        fVar86 = *(float *)(lVar31 + 0x10);
        if (*(float *)(puVar29[2] + 0x10) < *(float *)(puVar29[1] + 0x10) && uVar2 != 2) {
          uVar38 = 2;
        }
        lVar36 = puVar29[uVar38];
        fVar61 = *(float *)(lVar36 + 0x10);
        while (fVar61 <= fVar86) {
          puVar29[uVar34] = lVar36;
          uVar34 = (ulong)uVar38;
          puVar29 = *(undefined8 **)(param_1 + 2);
          uVar38 = uVar38 << 1 | 1;
          if (uVar2 <= uVar38) break;
          uVar38 = uVar38 + (uVar38 + 1 < uVar2 &&
                            *(float *)(puVar29[uVar38 + 1] + 0x10) <
                            *(float *)(puVar29[uVar38] + 0x10));
          lVar36 = puVar29[uVar38];
          fVar61 = *(float *)(lVar36 + 0x10);
        }
      }
      puVar29[uVar34] = lVar31;
      *(undefined1 *)((long)pfVar40 + 0x37) = 0;
      if (*(char *)((long)pfVar40 + 0x36) == '\0') {
        Hint_Prefetch(param_1 + 0x684,0,0,0);
        Hint_Prefetch(param_1 + 0x6a4,0,0,0);
        Hint_Prefetch(param_1 + 0x6c4,0,0,0);
        uStack_98 = *(ulong *)(pfVar40 + 2);
        local_a0 = *(undefined8 *)pfVar40;
        fVar86 = pfVar40[4];
        (**(code **)(*param_2 + 8))(param_2,&local_a0);
        fVar66 = (float)CONCAT13(extraout_var_63,
                                 CONCAT12(extraout_var_57,CONCAT11(extraout_var_51,extraout_var_45))
                                );
        uVar124 = CONCAT17(extraout_var_87,
                           CONCAT16(extraout_var_81,
                                    CONCAT15(extraout_var_75,CONCAT14(extraout_var_69,fVar66))));
        fVar61 = (float)CONCAT13(extraout_var_15,
                                 CONCAT12(extraout_var_09,CONCAT11(extraout_var_03,extraout_b0_03)))
        ;
        uVar123 = CONCAT17(extraout_var_39,
                           CONCAT16(extraout_var_33,
                                    CONCAT15(extraout_var_27,CONCAT14(extraout_var_21,fVar61))));
        fVar65 = -(float)((ulong)local_a0 >> 0x20);
        uStack_a8 = (ulong)(uint)-(float)uStack_98;
        local_b0 = CONCAT17((char)((uint)fVar65 >> 0x18),
                            CONCAT16((char)((uint)fVar65 >> 0x10),
                                     CONCAT15((char)((uint)fVar65 >> 8),
                                              CONCAT14(SUB41(fVar65,0),-(float)local_a0))));
        (**(code **)(*param_3 + 8))(param_3,&local_b0);
        fVar61 = fVar61 - (float)CONCAT13(extraout_var_16,
                                          CONCAT12(extraout_var_10,
                                                   CONCAT11(extraout_var_04,extraout_b0_04)));
        fVar65 = (float)((ulong)uVar123 >> 0x20) -
                 (float)CONCAT13(extraout_var_40,
                                 CONCAT12(extraout_var_34,CONCAT11(extraout_var_28,extraout_var_22))
                                );
        fVar66 = fVar66 - (float)CONCAT13(extraout_var_64,
                                          CONCAT12(extraout_var_58,
                                                   CONCAT11(extraout_var_52,extraout_var_46)));
        fVar67 = (float)((ulong)uVar124 >> 0x20) -
                 (float)CONCAT13(extraout_var_88,
                                 CONCAT12(extraout_var_82,CONCAT11(extraout_var_76,extraout_var_70))
                                );
        uStack_88 = CONCAT44(fVar67,fVar66);
        local_90 = CONCAT44(fVar65,fVar61);
        Hint_Prefetch(param_1 + (long)iVar41 * 4 + 0xa4,0,0,0);
        Hint_Prefetch(param_1 + (long)iVar41 * 4 + 0x1a4,0,0,0);
        auVar64._0_4_ = fVar61 * (float)local_a0;
        auVar64._4_4_ = fVar65 * local_a0._4_4_;
        auVar64._8_4_ = fVar66 * (float)uStack_98;
        auVar64._12_4_ = fVar67 * uStack_98._4_4_;
        auVar70 = NEON_ext(auVar64,auVar64,8,1);
        fVar66 = auVar70._0_4_ + auVar70._4_4_;
        fVar61 = auVar64._0_4_ + auVar64._4_4_ + fVar66;
        bVar6 = ABS(fVar61 - fVar86) <= (float)uVar107 * 0.1;
        auVar71._0_4_ = -(uint)bVar6;
        auVar71._4_4_ = -(uint)bVar6;
        auVar71._8_4_ = -(uint)bVar6;
        auVar71._12_4_ = -(uint)bVar6;
        NEON_ext(auVar71,auVar71,8,1);
        if (CONCAT13((char)auVar71._12_4_,
                     CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_))
                    ) == -1) {
          uVar123 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84 + 2);
          uVar107 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84);
          pfVar7 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x84);
          pfVar8 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x84);
          pfVar9 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x184);
          fVar86 = (float)uVar107;
          fVar95 = fVar86 - *pfVar9;
          fVar61 = (float)((ulong)uVar107 >> 0x20);
          fVar85 = fVar61 - pfVar9[1];
          fVar66 = (float)uVar123;
          fVar93 = fVar66 - pfVar9[2];
          fVar65 = (float)((ulong)uVar123 >> 0x20);
          fVar94 = fVar65 - pfVar9[3];
          pfVar9 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x184);
          pfVar10 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x184);
          fVar67 = (*pfVar7 - *pfVar9) - fVar95;
          fVar102 = (pfVar7[1] - pfVar9[1]) - fVar85;
          fVar103 = (pfVar7[2] - pfVar9[2]) - fVar93;
          fVar104 = (pfVar7[3] - pfVar9[3]) - fVar94;
          fVar111 = fVar67 * fVar67;
          fVar112 = fVar102 * fVar102;
          auVar25._4_4_ = fVar112;
          auVar25._0_4_ = fVar111;
          auVar25._8_4_ = fVar103 * fVar103;
          auVar25._12_4_ = fVar104 * fVar104;
          auVar26._4_4_ = fVar112;
          auVar26._0_4_ = fVar111;
          auVar26._8_4_ = fVar103 * fVar103;
          auVar26._12_4_ = fVar104 * fVar104;
          auVar70 = NEON_ext(auVar25,auVar26,8,1);
          fVar106 = (*pfVar8 - *pfVar10) - fVar95;
          fVar108 = (pfVar8[1] - pfVar10[1]) - fVar85;
          fVar109 = (pfVar8[2] - pfVar10[2]) - fVar93;
          fVar110 = (pfVar8[3] - pfVar10[3]) - fVar94;
          fVar84 = pfVar40[4];
          fVar43 = *pfVar40 * fVar84;
          fVar78 = pfVar40[1] * fVar84;
          fVar83 = pfVar40[2] * fVar84;
          fVar92 = auVar70._0_4_ + auVar70._4_4_;
          auVar114._0_4_ = fVar67 * fVar106;
          auVar114._4_4_ = fVar102 * fVar108;
          auVar114._8_4_ = fVar103 * fVar109;
          auVar114._12_4_ = fVar104 * fVar110;
          auVar70 = NEON_ext(auVar114,auVar114,8,1);
          fVar44 = auVar70._0_4_ + auVar70._4_4_;
          auVar119._0_4_ = fVar106 * fVar106;
          auVar119._4_4_ = fVar108 * fVar108;
          auVar119._8_4_ = fVar109 * fVar109;
          auVar119._12_4_ = fVar110 * fVar110;
          auVar70 = NEON_ext(auVar119,auVar119,8,1);
          fVar95 = fVar43 - fVar95;
          fVar85 = fVar78 - fVar85;
          fVar93 = fVar83 - fVar93;
          fVar42 = auVar70._0_4_ + auVar70._4_4_;
          auVar99._0_4_ = fVar67 * fVar95;
          auVar99._4_4_ = fVar102 * fVar85;
          auVar99._8_4_ = fVar103 * fVar93;
          auVar99._12_4_ = fVar104 * (0.0 - fVar94);
          fVar67 = fVar111 + fVar112 + fVar92;
          auVar89._0_4_ = fVar106 * fVar95;
          auVar89._4_4_ = fVar108 * fVar85;
          auVar89._8_4_ = fVar109 * fVar93;
          auVar89._12_4_ = fVar110 * (0.0 - fVar94);
          fVar95 = auVar114._0_4_ + auVar114._4_4_ + fVar44;
          fVar44 = auVar114._0_4_ + auVar114._4_4_ + fVar44;
          fVar85 = auVar119._0_4_ + auVar119._4_4_ + fVar42;
          auVar122 = NEON_ext(auVar99,auVar99,8,1);
          auVar70 = NEON_ext(auVar89,auVar89,8,1);
          fVar93 = fVar67 * fVar85 - fVar95 * fVar95;
          uVar107 = CONCAT44((fVar111 + fVar112 + fVar92) *
                             (auVar119._0_4_ + auVar119._4_4_ + fVar42) - fVar44 * fVar44,fVar93);
          uVar123 = NEON_frecpe(uVar107,4);
          uVar124 = NEON_frecps(uVar107,uVar123,4);
          fVar44 = (float)uVar123 * (float)uVar124;
          fVar92 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          fVar92 = fVar92 * (float)((ulong)uVar123 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          fVar92 = fVar92 * (float)((ulong)uVar123 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          uVar107 = NEON_frecps(uVar107,CONCAT44(fVar92 * (float)((ulong)uVar123 >> 0x20),fVar44),4)
          ;
          fVar92 = auVar99._0_4_ + auVar99._4_4_ + auVar122._0_4_ + auVar122._4_4_;
          fVar42 = auVar89._0_4_ + auVar89._4_4_ + auVar70._0_4_ + auVar70._4_4_;
          fVar44 = (float)(-(uint)(1.1920929e-07 < fVar93) & (uint)(fVar44 * (float)uVar107));
          fVar85 = (fVar85 * fVar92 - fVar95 * fVar42) * fVar44;
          fVar44 = (fVar67 * fVar42 - fVar95 * fVar92) * fVar44;
          fVar86 = fVar86 + (*pfVar7 - fVar86) * fVar85 + (*pfVar8 - fVar86) * fVar44;
          fVar61 = fVar61 + (pfVar7[1] - fVar61) * fVar85 + (pfVar8[1] - fVar61) * fVar44;
          fVar66 = fVar66 + (pfVar7[2] - fVar66) * fVar85 + (pfVar8[2] - fVar66) * fVar44;
          fVar65 = fVar65 + 0.0;
          fVar67 = -*pfVar40;
          fVar95 = -pfVar40[1];
          fVar85 = -pfVar40[2];
          uVar45 = SUB41(fVar84,0);
          uVar47 = (undefined1)((uint)fVar84 >> 8);
          uVar49 = (undefined1)((uint)fVar84 >> 0x10);
          uVar51 = (undefined1)((uint)fVar84 >> 0x18);
          fVar43 = fVar86 - fVar43;
          fVar78 = fVar61 - fVar78;
          fVar83 = fVar66 - fVar83;
          fVar92 = fVar65 - 0.0;
          if ((param_12 & 1) == 0) {
            uVar11 = *(undefined4 *)(param_2[1] + 0x10);
            uVar2 = *(uint *)(param_3[1] + 0x10);
            iVar41 = -(*(byte *)(param_2[1] + 0x24) & 1);
            uVar38 = -(*(byte *)(param_3[1] + 0x24) & 1);
            uVar34 = CONCAT44(iVar41,iVar41) & CONCAT44(uVar11,uVar11);
            fVar42 = (float)(uVar38 & uVar2);
            fVar44 = (float)(uVar38 & uVar2);
            uVar107 = 5;
LAB_0025ab1c:
            fVar84 = (float)uVar34;
            auVar81._0_8_ = CONCAT44(fVar61 - fVar95 * fVar84,fVar86 - fVar67 * fVar84);
            auVar81._8_4_ = fVar66 - fVar85 * fVar84;
            auVar81._12_4_ = fVar65 - fVar84 * 0.0;
            auVar70 = NEON_ext(auVar81,auVar81,8,1);
            auVar73._0_8_ = CONCAT44(fVar78 + fVar95 * fVar42,fVar43 + fVar67 * fVar42);
            auVar73._8_4_ = fVar83 + fVar85 * fVar42;
            auVar73._12_4_ = fVar92 + fVar42 * 0.0;
            auVar122 = NEON_ext(auVar73,auVar73,8,1);
            *(ulong *)(param_8 + 2) = (ulong)auVar70._0_4_;
            *(undefined8 *)param_8 = auVar81._0_8_;
            *(ulong *)(param_9 + 2) = (ulong)auVar122._0_4_;
            *(undefined8 *)param_9 = auVar73._0_8_;
            param_10[2] = fVar85;
            param_10[3] = 0.0;
            *param_10 = fVar67;
            param_10[1] = fVar95;
            fVar86 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) +
                     fVar84 + fVar42;
            uVar46 = SUB41(fVar86,0);
            uVar48 = (undefined1)((uint)fVar86 >> 8);
            uVar50 = (undefined1)((uint)fVar86 >> 0x10);
            uVar52 = (undefined1)((uint)fVar86 >> 0x18);
            fVar86 = (float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) +
                     (float)(uVar34 >> 0x20) + fVar44;
            uVar45 = SUB41(fVar86,0);
            uVar47 = (undefined1)((uint)fVar86 >> 8);
            uVar49 = (undefined1)((uint)fVar86 >> 0x10);
            uVar51 = (undefined1)((uint)fVar86 >> 0x18);
            goto LAB_0025abe4;
          }
          uVar107 = 5;
          uVar46 = uVar45;
          uVar48 = uVar47;
          uVar50 = uVar49;
          uVar52 = uVar51;
        }
        else {
          uVar105 = NEON_fmin(uVar105,CONCAT44(auVar64._0_4_ + auVar64._4_4_ + fVar66,fVar61),4);
          *(undefined8 *)(param_1 + (long)iVar41 * 4 + 0x86) = uVar124;
          *(undefined8 *)(param_1 + (long)iVar41 * 4 + 0x84) = uVar123;
          *(ulong *)(param_1 + (long)iVar41 * 4 + 0x186) =
               CONCAT17(extraout_var_88,
                        CONCAT16(extraout_var_82,
                                 CONCAT15(extraout_var_76,
                                          CONCAT14(extraout_var_70,
                                                   CONCAT13(extraout_var_64,
                                                            CONCAT12(extraout_var_58,
                                                                     CONCAT11(extraout_var_52,
                                                                              extraout_var_46)))))))
          ;
          *(ulong *)(param_1 + (long)iVar41 * 4 + 0x184) =
               CONCAT17(extraout_var_40,
                        CONCAT16(extraout_var_34,
                                 CONCAT15(extraout_var_28,
                                          CONCAT14(extraout_var_22,
                                                   CONCAT13(extraout_var_16,
                                                            CONCAT12(extraout_var_10,
                                                                     CONCAT11(extraout_var_04,
                                                                              extraout_b0_04)))))));
          param_1[0x704] = 0;
          local_78 = uVar105;
          FUN_0025ae40(pfVar40,&local_90,param_1 + 0x84,param_1 + 0x184,param_1 + 0x684,puVar1);
          uVar38 = param_1[0x704];
          if (uVar38 != 0) {
            if ((0x40 - param_1[0x706]) + param_1[0x747] < uVar38) {
              uVar123 = *(undefined8 *)
                         (param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84 + 2);
              uVar107 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84);
              pfVar7 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x84);
              pfVar8 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x84);
              pfVar9 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x184);
              fVar86 = (float)uVar107;
              fVar85 = fVar86 - *pfVar9;
              fVar61 = (float)((ulong)uVar107 >> 0x20);
              fVar92 = fVar61 - pfVar9[1];
              fVar66 = (float)uVar123;
              fVar93 = fVar66 - pfVar9[2];
              fVar65 = (float)((ulong)uVar123 >> 0x20);
              fVar94 = fVar65 - pfVar9[3];
              pfVar9 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x184);
              pfVar10 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x184);
              fVar95 = (*pfVar7 - *pfVar9) - fVar85;
              fVar102 = (pfVar7[1] - pfVar9[1]) - fVar92;
              fVar103 = (pfVar7[2] - pfVar9[2]) - fVar93;
              fVar104 = (pfVar7[3] - pfVar9[3]) - fVar94;
              fVar111 = fVar95 * fVar95;
              fVar112 = fVar102 * fVar102;
              auVar21._4_4_ = fVar112;
              auVar21._0_4_ = fVar111;
              auVar21._8_4_ = fVar103 * fVar103;
              auVar21._12_4_ = fVar104 * fVar104;
              auVar22._4_4_ = fVar112;
              auVar22._0_4_ = fVar111;
              auVar22._8_4_ = fVar103 * fVar103;
              auVar22._12_4_ = fVar104 * fVar104;
              auVar70 = NEON_ext(auVar21,auVar22,8,1);
              fVar106 = (*pfVar8 - *pfVar10) - fVar85;
              fVar108 = (pfVar8[1] - pfVar10[1]) - fVar92;
              fVar109 = (pfVar8[2] - pfVar10[2]) - fVar93;
              fVar110 = (pfVar8[3] - pfVar10[3]) - fVar94;
              fVar67 = pfVar40[4];
              fVar78 = *pfVar40 * fVar67;
              fVar83 = pfVar40[1] * fVar67;
              fVar84 = pfVar40[2] * fVar67;
              fVar42 = auVar70._0_4_ + auVar70._4_4_;
              auVar116._0_4_ = fVar95 * fVar106;
              auVar116._4_4_ = fVar102 * fVar108;
              auVar116._8_4_ = fVar103 * fVar109;
              auVar116._12_4_ = fVar104 * fVar110;
              auVar70 = NEON_ext(auVar116,auVar116,8,1);
              fVar43 = auVar70._0_4_ + auVar70._4_4_;
              auVar121._0_4_ = fVar106 * fVar106;
              auVar121._4_4_ = fVar108 * fVar108;
              auVar121._8_4_ = fVar109 * fVar109;
              auVar121._12_4_ = fVar110 * fVar110;
              auVar70 = NEON_ext(auVar121,auVar121,8,1);
              fVar85 = fVar78 - fVar85;
              fVar92 = fVar83 - fVar92;
              fVar93 = fVar84 - fVar93;
              fVar44 = auVar70._0_4_ + auVar70._4_4_;
              auVar101._0_4_ = fVar95 * fVar85;
              auVar101._4_4_ = fVar102 * fVar92;
              auVar101._8_4_ = fVar103 * fVar93;
              auVar101._12_4_ = fVar104 * (0.0 - fVar94);
              fVar95 = fVar111 + fVar112 + fVar42;
              auVar91._0_4_ = fVar106 * fVar85;
              auVar91._4_4_ = fVar108 * fVar92;
              auVar91._8_4_ = fVar109 * fVar93;
              auVar91._12_4_ = fVar110 * (0.0 - fVar94);
              fVar85 = auVar116._0_4_ + auVar116._4_4_ + fVar43;
              fVar43 = auVar116._0_4_ + auVar116._4_4_ + fVar43;
              fVar92 = auVar121._0_4_ + auVar121._4_4_ + fVar44;
              auVar122 = NEON_ext(auVar101,auVar101,8,1);
              auVar70 = NEON_ext(auVar91,auVar91,8,1);
              fVar93 = fVar95 * fVar92 - fVar85 * fVar85;
              uVar107 = CONCAT44((fVar111 + fVar112 + fVar42) *
                                 (auVar121._0_4_ + auVar121._4_4_ + fVar44) - fVar43 * fVar43,fVar93
                                );
              uVar123 = NEON_frecpe(uVar107,4);
              uVar124 = NEON_frecps(uVar107,uVar123,4);
              fVar43 = (float)uVar123 * (float)uVar124;
              fVar42 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
              uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
              fVar43 = fVar43 * (float)uVar123;
              fVar42 = fVar42 * (float)((ulong)uVar123 >> 0x20);
              uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
              fVar43 = fVar43 * (float)uVar123;
              fVar42 = fVar42 * (float)((ulong)uVar123 >> 0x20);
              uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
              fVar43 = fVar43 * (float)uVar123;
              uVar107 = NEON_frecps(uVar107,CONCAT44(fVar42 * (float)((ulong)uVar123 >> 0x20),fVar43
                                                    ),4);
              fVar42 = auVar101._0_4_ + auVar101._4_4_ + auVar122._0_4_ + auVar122._4_4_;
              fVar44 = auVar91._0_4_ + auVar91._4_4_ + auVar70._0_4_ + auVar70._4_4_;
              fVar43 = (float)(-(uint)(1.1920929e-07 < fVar93) & (uint)(fVar43 * (float)uVar107));
              fVar92 = (fVar92 * fVar42 - fVar85 * fVar44) * fVar43;
              fVar43 = (fVar95 * fVar44 - fVar85 * fVar42) * fVar43;
              fVar86 = fVar86 + (*pfVar7 - fVar86) * fVar92 + (*pfVar8 - fVar86) * fVar43;
              fVar61 = fVar61 + (pfVar7[1] - fVar61) * fVar92 + (pfVar8[1] - fVar61) * fVar43;
              fVar66 = fVar66 + (pfVar7[2] - fVar66) * fVar92 + (pfVar8[2] - fVar66) * fVar43;
              fVar65 = fVar65 + 0.0;
              fVar95 = -*pfVar40;
              fVar85 = -pfVar40[1];
              fVar92 = -pfVar40[2];
              uVar46 = SUB41(fVar67,0);
              uVar48 = (undefined1)((uint)fVar67 >> 8);
              uVar50 = (undefined1)((uint)fVar67 >> 0x10);
              uVar52 = (undefined1)((uint)fVar67 >> 0x18);
              fVar78 = fVar86 - fVar78;
              fVar83 = fVar61 - fVar83;
              fVar84 = fVar66 - fVar84;
              if ((param_12 & 1) == 0) {
                uVar11 = *(undefined4 *)(param_2[1] + 0x10);
                uVar12 = *(undefined4 *)(param_3[1] + 0x10);
                iVar41 = -(*(byte *)(param_2[1] + 0x24) & 1);
                iVar5 = -(*(byte *)(param_3[1] + 0x24) & 1);
                uVar34 = CONCAT44(iVar41,iVar41) & CONCAT44(uVar11,uVar11);
                uVar77 = CONCAT44(iVar5,iVar5) & CONCAT44(uVar12,uVar12);
                fVar42 = (float)uVar34;
                fVar44 = (float)uVar77;
                uVar107 = 6;
                auVar82._0_8_ = CONCAT44(fVar61 - fVar85 * fVar42,fVar86 - fVar95 * fVar42);
                auVar82._8_4_ = fVar66 - fVar92 * fVar42;
                auVar82._12_4_ = fVar65 - fVar42 * 0.0;
                auVar70 = NEON_ext(auVar82,auVar82,8,1);
                auVar74._0_8_ = CONCAT44(fVar83 + fVar85 * fVar44,fVar78 + fVar95 * fVar44);
                auVar74._8_4_ = fVar84 + fVar92 * fVar44;
                auVar74._12_4_ = (fVar65 - 0.0) + fVar44 * 0.0;
                auVar122 = NEON_ext(auVar74,auVar74,8,1);
                *(ulong *)(param_8 + 2) = (ulong)auVar70._0_4_;
                *(undefined8 *)param_8 = auVar82._0_8_;
                *(ulong *)(param_9 + 2) = (ulong)auVar122._0_4_;
                *(undefined8 *)param_9 = auVar74._0_8_;
                *(ulong *)(param_10 + 2) = (ulong)(uint)fVar92;
                *(ulong *)param_10 = CONCAT44(fVar85,fVar95);
                fVar86 = fVar67 + fVar42 + fVar44;
                uVar46 = SUB41(fVar86,0);
                uVar48 = (undefined1)((uint)fVar86 >> 8);
                uVar50 = (undefined1)((uint)fVar86 >> 0x10);
                uVar52 = (undefined1)((uint)fVar86 >> 0x18);
                fVar67 = fVar67 + (float)(uVar34 >> 0x20) + (float)(uVar77 >> 0x20);
                uVar45 = SUB41(fVar67,0);
                uVar47 = (char)((uint)fVar67 >> 8);
                uVar49 = (char)((uint)fVar67 >> 0x10);
                uVar51 = (char)((uint)fVar67 >> 0x18);
              }
              else {
                param_8[2] = fVar66;
                param_8[3] = fVar65;
                *param_8 = fVar86;
                param_8[1] = fVar61;
                param_9[2] = fVar84;
                param_9[3] = fVar65 - 0.0;
                *param_9 = fVar78;
                param_9[1] = fVar83;
                uVar107 = 6;
                *(ulong *)(param_10 + 2) = (ulong)(uint)fVar92;
                *(ulong *)param_10 = CONCAT44(fVar85,fVar95);
                uVar45 = uVar46;
                uVar47 = uVar48;
                uVar49 = uVar50;
                uVar51 = uVar52;
              }
              goto LAB_0025abe4;
            }
            lVar36 = FUN_0025ac20(param_1,(long)*(char *)(*(long *)(param_1 + 0x684) + 0x33 +
                                                         (ulong)*(uint *)(&DAT_01d4d2d0 +
                                                                         (ulong)param_1[0x686] * 4))
                                  ,(long)*(char *)(*(long *)(param_1 + 0x684) + 0x33 +
                                                  (ulong)param_1[0x686]),iVar41,&local_78);
            lVar31 = *(long *)(param_1 + 0x684);
            uVar2 = param_1[0x686];
            *(long *)(lVar36 + 0x18) = lVar31;
            *(char *)(lVar36 + 0x30) = (char)uVar2;
            *(long *)(lVar31 + (ulong)uVar2 * 8 + 0x18) = lVar36;
            *(undefined1 *)(lVar31 + (ulong)uVar2 + 0x30) = 0;
            lVar31 = lVar36;
            if (1 < uVar38) {
              lVar39 = (ulong)uVar38 - 1;
              puVar32 = param_1 + 0x68a;
              lVar28 = lVar36;
              do {
                lVar31 = FUN_0025ac20(param_1,(long)*(char *)(*(long *)(puVar32 + -2) + 0x33 +
                                                             (ulong)*(uint *)(&DAT_01d4d2d0 +
                                                                             (ulong)*puVar32 * 4)),
                                      (long)*(char *)(*(long *)(puVar32 + -2) + 0x33 +
                                                     (ulong)*puVar32),iVar41,&local_78);
                lVar30 = *(long *)(puVar32 + -2);
                uVar38 = *puVar32;
                *(long *)(lVar31 + 0x18) = lVar30;
                *(char *)(lVar31 + 0x30) = (char)uVar38;
                *(long *)(lVar30 + (ulong)uVar38 * 8 + 0x18) = lVar31;
                *(undefined1 *)(lVar30 + (ulong)uVar38 + 0x30) = 0;
                *(long *)(lVar31 + 0x28) = lVar28;
                *(undefined1 *)(lVar31 + 0x32) = 1;
                *(long *)(lVar28 + 0x20) = lVar31;
                lVar39 = lVar39 + -1;
                *(undefined1 *)(lVar28 + 0x31) = 2;
                puVar32 = puVar32 + 4;
                lVar28 = lVar31;
              } while (lVar39 != 0);
            }
            *(long *)(lVar36 + 0x28) = lVar31;
            *(undefined1 *)(lVar36 + 0x32) = 1;
            *(long *)(lVar31 + 0x20) = lVar36;
            *(undefined1 *)(lVar31 + 0x31) = 2;
            iVar41 = iVar41 + 1;
            goto LAB_0025a3dc;
          }
          uVar123 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84 + 2);
          uVar107 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84);
          pfVar7 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x84);
          pfVar8 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x84);
          pfVar9 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x184);
          fVar86 = (float)uVar107;
          fVar95 = fVar86 - *pfVar9;
          fVar61 = (float)((ulong)uVar107 >> 0x20);
          fVar85 = fVar61 - pfVar9[1];
          fVar66 = (float)uVar123;
          fVar93 = fVar66 - pfVar9[2];
          fVar65 = (float)((ulong)uVar123 >> 0x20);
          fVar94 = fVar65 - pfVar9[3];
          pfVar9 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x184);
          pfVar10 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x184);
          fVar67 = (*pfVar7 - *pfVar9) - fVar95;
          fVar102 = (pfVar7[1] - pfVar9[1]) - fVar85;
          fVar103 = (pfVar7[2] - pfVar9[2]) - fVar93;
          fVar104 = (pfVar7[3] - pfVar9[3]) - fVar94;
          fVar111 = fVar67 * fVar67;
          fVar112 = fVar102 * fVar102;
          auVar23._4_4_ = fVar112;
          auVar23._0_4_ = fVar111;
          auVar23._8_4_ = fVar103 * fVar103;
          auVar23._12_4_ = fVar104 * fVar104;
          auVar24._4_4_ = fVar112;
          auVar24._0_4_ = fVar111;
          auVar24._8_4_ = fVar103 * fVar103;
          auVar24._12_4_ = fVar104 * fVar104;
          auVar70 = NEON_ext(auVar23,auVar24,8,1);
          fVar106 = (*pfVar8 - *pfVar10) - fVar95;
          fVar108 = (pfVar8[1] - pfVar10[1]) - fVar85;
          fVar109 = (pfVar8[2] - pfVar10[2]) - fVar93;
          fVar110 = (pfVar8[3] - pfVar10[3]) - fVar94;
          fVar84 = pfVar40[4];
          fVar43 = *pfVar40 * fVar84;
          fVar78 = pfVar40[1] * fVar84;
          fVar83 = pfVar40[2] * fVar84;
          fVar92 = auVar70._0_4_ + auVar70._4_4_;
          auVar115._0_4_ = fVar67 * fVar106;
          auVar115._4_4_ = fVar102 * fVar108;
          auVar115._8_4_ = fVar103 * fVar109;
          auVar115._12_4_ = fVar104 * fVar110;
          auVar70 = NEON_ext(auVar115,auVar115,8,1);
          fVar44 = auVar70._0_4_ + auVar70._4_4_;
          auVar120._0_4_ = fVar106 * fVar106;
          auVar120._4_4_ = fVar108 * fVar108;
          auVar120._8_4_ = fVar109 * fVar109;
          auVar120._12_4_ = fVar110 * fVar110;
          auVar70 = NEON_ext(auVar120,auVar120,8,1);
          fVar95 = fVar43 - fVar95;
          fVar85 = fVar78 - fVar85;
          fVar93 = fVar83 - fVar93;
          fVar42 = auVar70._0_4_ + auVar70._4_4_;
          auVar100._0_4_ = fVar67 * fVar95;
          auVar100._4_4_ = fVar102 * fVar85;
          auVar100._8_4_ = fVar103 * fVar93;
          auVar100._12_4_ = fVar104 * (0.0 - fVar94);
          fVar67 = fVar111 + fVar112 + fVar92;
          auVar90._0_4_ = fVar106 * fVar95;
          auVar90._4_4_ = fVar108 * fVar85;
          auVar90._8_4_ = fVar109 * fVar93;
          auVar90._12_4_ = fVar110 * (0.0 - fVar94);
          fVar95 = auVar115._0_4_ + auVar115._4_4_ + fVar44;
          fVar44 = auVar115._0_4_ + auVar115._4_4_ + fVar44;
          fVar85 = auVar120._0_4_ + auVar120._4_4_ + fVar42;
          auVar122 = NEON_ext(auVar100,auVar100,8,1);
          auVar70 = NEON_ext(auVar90,auVar90,8,1);
          fVar93 = fVar67 * fVar85 - fVar95 * fVar95;
          uVar107 = CONCAT44((fVar111 + fVar112 + fVar92) *
                             (auVar120._0_4_ + auVar120._4_4_ + fVar42) - fVar44 * fVar44,fVar93);
          uVar123 = NEON_frecpe(uVar107,4);
          uVar124 = NEON_frecps(uVar107,uVar123,4);
          fVar44 = (float)uVar123 * (float)uVar124;
          fVar92 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          fVar92 = fVar92 * (float)((ulong)uVar123 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          fVar92 = fVar92 * (float)((ulong)uVar123 >> 0x20);
          uVar123 = NEON_frecps(uVar107,CONCAT44(fVar92,fVar44),4);
          fVar44 = fVar44 * (float)uVar123;
          uVar107 = NEON_frecps(uVar107,CONCAT44(fVar92 * (float)((ulong)uVar123 >> 0x20),fVar44),4)
          ;
          fVar92 = auVar100._0_4_ + auVar100._4_4_ + auVar122._0_4_ + auVar122._4_4_;
          fVar42 = auVar90._0_4_ + auVar90._4_4_ + auVar70._0_4_ + auVar70._4_4_;
          fVar44 = (float)(-(uint)(1.1920929e-07 < fVar93) & (uint)(fVar44 * (float)uVar107));
          fVar85 = (fVar85 * fVar92 - fVar95 * fVar42) * fVar44;
          fVar44 = (fVar67 * fVar42 - fVar95 * fVar92) * fVar44;
          fVar86 = fVar86 + (*pfVar7 - fVar86) * fVar85 + (*pfVar8 - fVar86) * fVar44;
          fVar61 = fVar61 + (pfVar7[1] - fVar61) * fVar85 + (pfVar8[1] - fVar61) * fVar44;
          fVar66 = fVar66 + (pfVar7[2] - fVar66) * fVar85 + (pfVar8[2] - fVar66) * fVar44;
          fVar65 = fVar65 + 0.0;
          fVar67 = -*pfVar40;
          fVar95 = -pfVar40[1];
          fVar85 = -pfVar40[2];
          uVar45 = SUB41(fVar84,0);
          uVar47 = (undefined1)((uint)fVar84 >> 8);
          uVar49 = (undefined1)((uint)fVar84 >> 0x10);
          uVar51 = (undefined1)((uint)fVar84 >> 0x18);
          fVar43 = fVar86 - fVar43;
          fVar78 = fVar61 - fVar78;
          fVar83 = fVar66 - fVar83;
          fVar92 = fVar65 - 0.0;
          if ((param_12 & 1) == 0) {
            uVar11 = *(undefined4 *)(param_2[1] + 0x10);
            uVar2 = *(uint *)(param_3[1] + 0x10);
            iVar41 = -(*(byte *)(param_2[1] + 0x24) & 1);
            uVar38 = -(*(byte *)(param_3[1] + 0x24) & 1);
            uVar34 = CONCAT44(iVar41,iVar41) & CONCAT44(uVar11,uVar11);
            fVar42 = (float)(uVar38 & uVar2);
            fVar44 = (float)(uVar38 & uVar2);
            uVar107 = 6;
            goto LAB_0025ab1c;
          }
          uVar107 = 6;
          uVar46 = uVar45;
          uVar48 = uVar47;
          uVar50 = uVar49;
          uVar52 = uVar51;
        }
        param_8[2] = fVar66;
        param_8[3] = fVar65;
        *param_8 = fVar86;
        param_8[1] = fVar61;
        param_9[2] = fVar83;
        param_9[3] = fVar92;
        *param_9 = fVar43;
        param_9[1] = fVar78;
        param_10[2] = fVar85;
        param_10[3] = 0.0;
        *param_10 = fVar67;
        param_10[1] = fVar95;
        uVar45 = uVar46;
        uVar47 = uVar48;
        uVar49 = uVar50;
        uVar51 = uVar52;
LAB_0025abe4:
        fVar86 = -(float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)));
        *param_11 = CONCAT17((char)((uint)fVar86 >> 0x18),
                             CONCAT16((char)((uint)fVar86 >> 0x10),
                                      CONCAT15((char)((uint)fVar86 >> 8),
                                               CONCAT14(SUB41(fVar86,0),
                                                        -(float)CONCAT13(uVar52,CONCAT12(uVar50,
                                                  CONCAT11(uVar48,uVar46)))))));
        return uVar107;
      }
LAB_0025a3dc:
      bVar4 = *(byte *)(pfVar40 + 0xe);
      puVar32 = puVar1;
      if (*puVar1 - 1 != (uint)bVar4) {
        uVar38 = param_1[0x747];
        param_1[0x747] = uVar38 + 1;
        puVar32 = param_1 + (ulong)uVar38 + 0x707;
      }
      *puVar32 = (uint)bVar4;
    } while (((*param_1 != 0) && (iVar41 != 0x40)) &&
            (*(float *)(**(long **)(param_1 + 2) + 0x10) < (float)uVar105));
    uVar123 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84 + 2);
    uVar107 = *(undefined8 *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x84);
    pfVar7 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x84);
    pfVar8 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x84);
    pfVar9 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x33) * 4 + 0x184);
    fVar86 = (float)uVar107;
    fVar85 = fVar86 - *pfVar9;
    fVar61 = (float)((ulong)uVar107 >> 0x20);
    fVar92 = fVar61 - pfVar9[1];
    fVar66 = (float)uVar123;
    fVar93 = fVar66 - pfVar9[2];
    fVar65 = (float)((ulong)uVar123 >> 0x20);
    fVar94 = fVar65 - pfVar9[3];
    pfVar9 = (float *)(param_1 + (long)*(char *)(pfVar40 + 0xd) * 4 + 0x184);
    pfVar10 = (float *)(param_1 + (long)*(char *)((long)pfVar40 + 0x35) * 4 + 0x184);
    fVar95 = (*pfVar7 - *pfVar9) - fVar85;
    fVar102 = (pfVar7[1] - pfVar9[1]) - fVar92;
    fVar103 = (pfVar7[2] - pfVar9[2]) - fVar93;
    fVar104 = (pfVar7[3] - pfVar9[3]) - fVar94;
    fVar111 = fVar95 * fVar95;
    fVar112 = fVar102 * fVar102;
    auVar19._4_4_ = fVar112;
    auVar19._0_4_ = fVar111;
    auVar19._8_4_ = fVar103 * fVar103;
    auVar19._12_4_ = fVar104 * fVar104;
    auVar20._4_4_ = fVar112;
    auVar20._0_4_ = fVar111;
    auVar20._8_4_ = fVar103 * fVar103;
    auVar20._12_4_ = fVar104 * fVar104;
    auVar70 = NEON_ext(auVar19,auVar20,8,1);
    fVar106 = (*pfVar8 - *pfVar10) - fVar85;
    fVar108 = (pfVar8[1] - pfVar10[1]) - fVar92;
    fVar109 = (pfVar8[2] - pfVar10[2]) - fVar93;
    fVar110 = (pfVar8[3] - pfVar10[3]) - fVar94;
    fVar67 = pfVar40[4];
    fVar78 = *pfVar40 * fVar67;
    fVar83 = pfVar40[1] * fVar67;
    fVar84 = pfVar40[2] * fVar67;
    fVar42 = auVar70._0_4_ + auVar70._4_4_;
    auVar113._0_4_ = fVar95 * fVar106;
    auVar113._4_4_ = fVar102 * fVar108;
    auVar113._8_4_ = fVar103 * fVar109;
    auVar113._12_4_ = fVar104 * fVar110;
    auVar70 = NEON_ext(auVar113,auVar113,8,1);
    fVar43 = auVar70._0_4_ + auVar70._4_4_;
    auVar118._0_4_ = fVar106 * fVar106;
    auVar118._4_4_ = fVar108 * fVar108;
    auVar118._8_4_ = fVar109 * fVar109;
    auVar118._12_4_ = fVar110 * fVar110;
    auVar70 = NEON_ext(auVar118,auVar118,8,1);
    fVar85 = fVar78 - fVar85;
    fVar92 = fVar83 - fVar92;
    fVar93 = fVar84 - fVar93;
    fVar44 = auVar70._0_4_ + auVar70._4_4_;
    auVar98._0_4_ = fVar95 * fVar85;
    auVar98._4_4_ = fVar102 * fVar92;
    auVar98._8_4_ = fVar103 * fVar93;
    auVar98._12_4_ = fVar104 * (0.0 - fVar94);
    fVar95 = fVar111 + fVar112 + fVar42;
    auVar88._0_4_ = fVar106 * fVar85;
    auVar88._4_4_ = fVar108 * fVar92;
    auVar88._8_4_ = fVar109 * fVar93;
    auVar88._12_4_ = fVar110 * (0.0 - fVar94);
    fVar85 = auVar113._0_4_ + auVar113._4_4_ + fVar43;
    fVar43 = auVar113._0_4_ + auVar113._4_4_ + fVar43;
    fVar92 = auVar118._0_4_ + auVar118._4_4_ + fVar44;
    auVar122 = NEON_ext(auVar98,auVar98,8,1);
    auVar70 = NEON_ext(auVar88,auVar88,8,1);
    fVar93 = fVar95 * fVar92 - fVar85 * fVar85;
    uVar107 = CONCAT44((fVar111 + fVar112 + fVar42) * (auVar118._0_4_ + auVar118._4_4_ + fVar44) -
                       fVar43 * fVar43,fVar93);
    uVar123 = NEON_frecpe(uVar107,4);
    uVar124 = NEON_frecps(uVar107,uVar123,4);
    fVar43 = (float)uVar123 * (float)uVar124;
    fVar42 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
    uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
    fVar43 = fVar43 * (float)uVar123;
    fVar42 = fVar42 * (float)((ulong)uVar123 >> 0x20);
    uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
    fVar43 = fVar43 * (float)uVar123;
    fVar42 = fVar42 * (float)((ulong)uVar123 >> 0x20);
    uVar123 = NEON_frecps(uVar107,CONCAT44(fVar42,fVar43),4);
    fVar43 = fVar43 * (float)uVar123;
    uVar107 = NEON_frecps(uVar107,CONCAT44(fVar42 * (float)((ulong)uVar123 >> 0x20),fVar43),4);
    fVar42 = auVar98._0_4_ + auVar98._4_4_ + auVar122._0_4_ + auVar122._4_4_;
    fVar44 = auVar88._0_4_ + auVar88._4_4_ + auVar70._0_4_ + auVar70._4_4_;
    fVar43 = (float)(-(uint)(1.1920929e-07 < fVar93) & (uint)(fVar43 * (float)uVar107));
    fVar92 = (fVar92 * fVar42 - fVar85 * fVar44) * fVar43;
    fVar43 = (fVar95 * fVar44 - fVar85 * fVar42) * fVar43;
    fVar86 = fVar86 + (*pfVar7 - fVar86) * fVar92 + (*pfVar8 - fVar86) * fVar43;
    fVar61 = fVar61 + (pfVar7[1] - fVar61) * fVar92 + (pfVar8[1] - fVar61) * fVar43;
    fVar66 = fVar66 + (pfVar7[2] - fVar66) * fVar92 + (pfVar8[2] - fVar66) * fVar43;
    fVar65 = fVar65 + 0.0;
    fVar95 = -*pfVar40;
    fVar85 = -pfVar40[1];
    fVar92 = -pfVar40[2];
    uVar45 = SUB41(fVar67,0);
    uVar47 = (undefined1)((uint)fVar67 >> 8);
    uVar49 = (undefined1)((uint)fVar67 >> 0x10);
    uVar51 = (undefined1)((uint)fVar67 >> 0x18);
    fVar78 = fVar86 - fVar78;
    fVar83 = fVar61 - fVar83;
    fVar84 = fVar66 - fVar84;
    if ((param_12 & 1) == 0) {
      uVar11 = *(undefined4 *)(param_2[1] + 0x10);
      uVar12 = *(undefined4 *)(param_3[1] + 0x10);
      iVar41 = -(*(byte *)(param_2[1] + 0x24) & 1);
      iVar5 = -(*(byte *)(param_3[1] + 0x24) & 1);
      uVar34 = CONCAT44(iVar41,iVar41) & CONCAT44(uVar11,uVar11);
      uVar77 = CONCAT44(iVar5,iVar5) & CONCAT44(uVar12,uVar12);
      fVar42 = (float)uVar34;
      fVar44 = (float)uVar77;
      auVar80._0_8_ = CONCAT44(fVar61 - fVar85 * fVar42,fVar86 - fVar95 * fVar42);
      auVar80._8_4_ = fVar66 - fVar92 * fVar42;
      auVar80._12_4_ = fVar65 - fVar42 * 0.0;
      auVar70 = NEON_ext(auVar80,auVar80,8,1);
      auVar72._0_8_ = CONCAT44(fVar83 + fVar85 * fVar44,fVar78 + fVar95 * fVar44);
      auVar72._8_4_ = fVar84 + fVar92 * fVar44;
      auVar72._12_4_ = (fVar65 - 0.0) + fVar44 * 0.0;
      auVar122 = NEON_ext(auVar72,auVar72,8,1);
      *(ulong *)(param_8 + 2) = (ulong)auVar70._0_4_;
      *(undefined8 *)param_8 = auVar80._0_8_;
      *(ulong *)(param_9 + 2) = (ulong)auVar122._0_4_;
      *(undefined8 *)param_9 = auVar72._0_8_;
      *(ulong *)(param_10 + 2) = (ulong)(uint)fVar92;
      *(ulong *)param_10 = CONCAT44(fVar85,fVar95);
      fVar86 = fVar67 + fVar42 + fVar44;
      uVar45 = SUB41(fVar86,0);
      uVar47 = (undefined1)((uint)fVar86 >> 8);
      uVar49 = (undefined1)((uint)fVar86 >> 0x10);
      uVar51 = (undefined1)((uint)fVar86 >> 0x18);
      fVar67 = fVar67 + (float)(uVar34 >> 0x20) + (float)(uVar77 >> 0x20);
      uVar46 = SUB41(fVar67,0);
      uVar48 = (undefined1)((uint)fVar67 >> 8);
      uVar50 = (undefined1)((uint)fVar67 >> 0x10);
      uVar52 = (undefined1)((uint)fVar67 >> 0x18);
    }
    else {
      param_8[2] = fVar66;
      param_8[3] = fVar65;
      *param_8 = fVar86;
      param_8[1] = fVar61;
      param_9[2] = fVar84;
      param_9[3] = fVar65 - 0.0;
      *param_9 = fVar78;
      param_9[1] = fVar83;
      *(ulong *)(param_10 + 2) = (ulong)(uint)fVar92;
      *(ulong *)param_10 = CONCAT44(fVar85,fVar95);
      uVar46 = uVar45;
      uVar48 = uVar47;
      uVar50 = uVar49;
      uVar52 = uVar51;
    }
    fVar86 = -(float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
    uVar107 = 6;
    *param_11 = CONCAT17((char)((uint)fVar86 >> 0x18),
                         CONCAT16((char)((uint)fVar86 >> 0x10),
                                  CONCAT15((char)((uint)fVar86 >> 8),
                                           CONCAT14(SUB41(fVar86,0),
                                                    -(float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11
                                                  (uVar47,uVar45)))))));
  }
  return uVar107;
}


