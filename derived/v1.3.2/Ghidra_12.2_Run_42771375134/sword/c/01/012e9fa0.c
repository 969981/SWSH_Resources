/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e9fa0; name: FUN_012e9fa0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e9fa0(long param_1,long param_2)

{
  undefined1 auVar1 [16];
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
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 uVar34;
  int iVar35;
  long *plVar36;
  undefined8 uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  float *pfVar40;
  float *pfVar41;
  undefined8 *puVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar65;
  int iVar66;
  uint extraout_var;
  float fVar67;
  int iVar68;
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  float fVar70;
  int iVar71;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar69;
  float fVar72;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar53 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar60 [16];
  undefined8 extraout_d0;
  undefined8 extraout_var_01;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined1 auVar76 [16];
  float fVar86;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar87;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar88;
  undefined1 auVar93 [16];
  float fVar97;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  byte bVar112;
  byte bVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  byte bVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  byte bVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined8 uVar124;
  float fVar128;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined1 auVar127 [16];
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  undefined8 uVar145;
  undefined8 uVar146;
  undefined8 uVar147;
  undefined8 uVar148;
  undefined8 uVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  undefined8 uVar154;
  undefined8 uVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_a8;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x30d) != '\0') {
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (puVar45 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar45 != (undefined8 *)0x0))
    {
      plVar36 = (long *)(**(code **)*puVar45)(puVar45);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_02715078), iVar35 != 0)) {
        uVar37 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar37;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
        if (plVar36 == (long *)PTR_DAT_02715080) {
          puVar45 = puVar45 + -10;
          goto LAB_012ea028;
        }
      }
    }
    puVar45 = (undefined8 *)0x0;
LAB_012ea028:
    uVar37 = FUN_00d3fd50(puVar45,&local_80);
    *(undefined8 *)(param_1 + 0x340) = uVar37;
    return;
  }
  uVar38 = FUN_0131cae0(param_1 + 0x370);
  if ((uVar38 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x308) == 1) {
    return;
  }
  if (*(int *)(param_1 + 0x308) == 4) {
    return;
  }
  if ((*(long *)(param_1 + 0x838) != 0) && (uVar38 = FUN_01314dd0(), (uVar38 & 1) != 0)) {
    return;
  }
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar38 = FUN_0130e360(), (uVar38 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    return;
  }
  uVar38 = FUN_012e4910(param_1);
  if ((uVar38 & 1) != 0) {
    return;
  }
  pauVar39 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
  auVar127 = *pauVar39;
  fStack_98 = auVar127._8_4_;
  fStack_94 = auVar127._12_4_;
  pfVar40 = (float *)FUN_012dcaa0(param_2);
  pfVar41 = (float *)FUN_012dcaa0(param_1);
  fVar47 = *pfVar40 - *pfVar41;
  fVar65 = pfVar40[1] - pfVar41[1];
  fVar67 = pfVar40[2] - pfVar41[2];
  fVar70 = pfVar40[3] - pfVar41[3];
  auVar76._0_4_ = fVar47 * fVar47;
  auVar76._4_4_ = fVar65 * fVar65;
  auVar76._8_4_ = fVar67 * fVar67;
  auVar76._12_4_ = fVar70 * fVar70;
  auVar90 = NEON_ext(auVar76,auVar76,8,1);
  fVar73 = auVar90._0_4_ + auVar76._0_4_;
  fVar86 = auVar90._4_4_ + auVar76._4_4_;
  fVar46 = fVar73 + fVar86;
  fVar73 = fVar73 + fVar86;
  auVar77._8_8_ = CONCAT44(fVar73,fVar46);
  auVar77._0_8_ = CONCAT44(fVar73,fVar46);
  auVar90 = NEON_frsqrte(auVar77,4);
  auVar99._0_4_ = auVar90._0_4_ * fVar46;
  auVar99._4_4_ = auVar90._4_4_ * fVar73;
  auVar99._8_4_ = auVar90._8_4_ * fVar46;
  auVar99._12_4_ = auVar90._12_4_ * fVar73;
  auVar100 = NEON_frsqrts(auVar90,auVar99,4);
  auVar91._0_4_ = auVar90._0_4_ * auVar100._0_4_;
  auVar91._4_4_ = auVar90._4_4_ * auVar100._4_4_;
  auVar91._8_4_ = auVar90._8_4_ * auVar100._8_4_;
  auVar91._12_4_ = auVar90._12_4_ * auVar100._12_4_;
  auVar101._0_4_ = fVar46 * auVar91._0_4_;
  auVar101._4_4_ = fVar73 * auVar91._4_4_;
  auVar101._8_4_ = fVar46 * auVar91._8_4_;
  auVar101._12_4_ = fVar73 * auVar91._12_4_;
  auVar90 = NEON_frsqrts(auVar91,auVar101,4);
  auVar100._0_4_ = fVar47 * auVar91._0_4_ * auVar90._0_4_;
  auVar100._4_4_ = fVar65 * auVar91._4_4_ * auVar90._4_4_;
  auVar100._8_4_ = fVar67 * auVar91._8_4_ * auVar90._8_4_;
  auVar100._12_4_ = fVar70 * auVar91._12_4_ * auVar90._12_4_;
  iVar35 = -(uint)(fVar46 == 0.0);
  iVar66 = -(uint)(fVar73 == 0.0);
  iVar68 = -(uint)(fVar46 == 0.0);
  iVar71 = -(uint)(fVar73 == 0.0);
  auVar51._0_8_ =
       CONCAT17(~(byte)((uint)iVar66 >> 0x18),
                CONCAT16(~(byte)((uint)iVar66 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar66 >> 8),
                                  CONCAT14(~(byte)iVar66,
                                           CONCAT13(~(byte)((uint)iVar35 >> 0x18),
                                                    CONCAT12(~(byte)((uint)iVar35 >> 0x10),
                                                             CONCAT11(~(byte)((uint)iVar35 >> 8),
                                                                      ~(byte)iVar35)))))));
  auVar51[8] = ~(byte)iVar68;
  auVar51[9] = ~(byte)((uint)iVar68 >> 8);
  auVar51[10] = ~(byte)((uint)iVar68 >> 0x10);
  auVar51[0xb] = ~(byte)((uint)iVar68 >> 0x18);
  auVar90[0xc] = ~(byte)iVar71;
  auVar90._0_12_ = auVar51;
  auVar90[0xd] = ~(byte)((uint)iVar71 >> 8);
  auVar90[0xe] = ~(byte)((uint)iVar71 >> 0x10);
  auVar90[0xf] = ~(byte)((uint)iVar71 >> 0x18);
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar45 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar45 == (undefined8 *)0x0)) {
    puVar44 = (undefined8 *)0x0;
  }
  else {
    fStack_a8 = auVar51._8_4_;
    fStack_a4 = auVar90._12_4_;
    puVar42 = (undefined8 *)(**(code **)*puVar45)(puVar45);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar35 = __cxa_guard_acquire(PTR_DAT_02715078), iVar35 != 0)) {
      uVar37 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar37;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    auVar90._8_4_ = fStack_a8;
    auVar90._0_8_ = auVar51._0_8_;
    auVar90._12_4_ = fStack_a4;
    puVar44 = (undefined8 *)0x0;
    if (puVar42 != (undefined8 *)0x0) {
      do {
        if (puVar42 == (undefined8 *)PTR_DAT_02715080) {
          puVar44 = puVar45 + -10;
          goto LAB_012ea17c;
        }
        puVar42 = (undefined8 *)*puVar42;
      } while (puVar42 != (undefined8 *)0x0);
      puVar44 = (undefined8 *)0x0;
    }
  }
LAB_012ea17c:
  fVar46 = (float)CONCAT13(auVar100[3] & auVar90[3],
                           CONCAT12(auVar100[2] & auVar90[2],
                                    CONCAT11(auVar100[1] & auVar90[1],auVar100[0] & auVar90[0])));
  auVar52._0_8_ =
       CONCAT17(auVar100[7] & auVar90[7],
                CONCAT16(auVar100[6] & auVar90[6],
                         CONCAT15(auVar100[5] & auVar90[5],CONCAT14(auVar100[4] & auVar90[4],fVar46)
                                 )));
  auVar52[8] = auVar100[8] & auVar90[8];
  auVar52[9] = auVar100[9] & auVar90[9];
  auVar52[10] = auVar100[10] & auVar90[10];
  auVar52[0xb] = auVar100[0xb] & auVar90[0xb];
  auVar54[0xc] = auVar100[0xc] & auVar90[0xc];
  auVar54._0_12_ = auVar52;
  auVar54[0xd] = auVar100[0xd] & auVar90[0xd];
  auVar54[0xe] = auVar100[0xe] & auVar90[0xe];
  auVar54[0xf] = auVar100[0xf] & auVar90[0xf];
  fStack_88 = auVar52._8_4_;
  fStack_84 = auVar54._12_4_;
  fStack_8c = (float)((ulong)auVar52._0_8_ >> 0x20);
  lVar43 = FUN_00d3fd50(puVar44,&local_80);
  if ((lVar43 == 0) || (uVar38 = FUN_0131cae0(lVar43 + 0x370), (uVar38 & 1) == 0)) {
    bVar31 = true;
  }
  else {
    bVar31 = *(int *)(lVar43 + 0x308) == 4 || *(int *)(lVar43 + 0x308) == 1;
  }
  pauVar39 = (undefined1 (*) [16])FUN_012dc8d0(param_2);
  auVar90 = *pauVar39;
  fStack_a8 = auVar90._8_4_;
  fStack_a4 = auVar90._12_4_;
  puVar45 = (undefined8 *)FUN_012dcaa0(param_1);
  puVar44 = (undefined8 *)FUN_012dcaa0(param_2);
  uVar34 = DAT_01cd5418;
  uVar14 = DAT_01cd5270;
  uVar13 = DAT_01cd5120;
  uVar50 = DAT_01cd50f8;
  uVar89 = DAT_01cd50b0;
  uVar37 = DAT_01cd4f90;
  auVar29._4_4_ = fStack_8c;
  auVar29._0_4_ = fVar46;
  auVar29._8_4_ = fStack_88;
  auVar28._4_4_ = fStack_8c;
  auVar28._0_4_ = fVar46;
  auVar28._8_4_ = fStack_88;
  auVar27._4_4_ = fStack_8c;
  auVar27._0_4_ = fVar46;
  auVar27._8_4_ = fStack_88;
  auVar26._4_4_ = fStack_8c;
  auVar26._0_4_ = fVar46;
  auVar26._8_4_ = fStack_88;
  auVar55._0_4_ = fVar46 * fVar46;
  auVar55._4_4_ = fStack_8c * fStack_8c;
  auVar55._8_4_ = fStack_88 * fStack_88;
  auVar55._12_4_ = fStack_84 * fStack_84;
  auVar100 = NEON_ext(auVar55,auVar55,8,1);
  if (auVar100._0_4_ + auVar55._0_4_ + auVar100._4_4_ + auVar55._4_4_ == 0.0) {
    return;
  }
  fVar153 = auVar127._0_4_;
  fVar156 = auVar127._4_4_;
  fVar162 = (float)_DAT_01d4ae80;
  fVar73 = fVar153 * fVar162;
  fVar163 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar47 = fVar156 * fVar163;
  auVar92._0_8_ = CONCAT44(fVar47,fVar73);
  fVar164 = (float)_UNK_01d4ae88;
  auVar92._8_4_ = fStack_98 * fVar164;
  fVar165 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar92._12_4_ = fStack_94 * fVar165;
  uVar108 = (undefined1)_UNK_01d49dc8;
  uVar109 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar110 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar111 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar114 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar117 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar115 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar118 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  auVar1[8] = uVar108;
  auVar1._0_8_ = _DAT_01d49dc0;
  auVar1[9] = uVar109;
  auVar1[10] = uVar110;
  auVar1[0xb] = uVar111;
  auVar1[0xc] = uVar114;
  auVar1[0xd] = uVar117;
  auVar1[0xe] = uVar115;
  auVar1[0xf] = uVar118;
  uVar75 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
  auVar2[8] = uVar108;
  auVar2._0_8_ = _DAT_01d49dc0;
  auVar2[9] = uVar109;
  auVar2[10] = uVar110;
  auVar2[0xb] = uVar111;
  auVar2[0xc] = uVar114;
  auVar2[0xd] = uVar117;
  auVar2[0xe] = uVar115;
  auVar2[0xf] = uVar118;
  uVar49 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  uVar125 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd4f90);
  uVar126 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5120);
  uVar145 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd50f8);
  uVar24 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5418);
  fVar70 = (float)uVar75;
  fVar86 = (float)((ulong)uVar75 >> 0x20);
  uVar154 = a64_TBL(ZEXT816(0),auVar92,DAT_01cd5270);
  auVar3[8] = uVar108;
  auVar3._0_8_ = _DAT_01d49dc0;
  auVar3[9] = uVar109;
  auVar3[10] = uVar110;
  auVar3[0xb] = uVar111;
  auVar3[0xc] = uVar114;
  auVar3[0xd] = uVar117;
  auVar3[0xe] = uVar115;
  auVar3[0xf] = uVar118;
  uVar87 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  auVar25._8_4_ = fVar73;
  auVar25._0_8_ = auVar92._0_8_;
  auVar25._12_4_ = fVar47;
  uVar75 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
  fVar72 = (float)uVar49;
  fVar74 = (float)((ulong)uVar49 >> 0x20);
  fVar97 = (float)uVar87;
  fVar69 = (float)((ulong)uVar87 >> 0x20);
  fVar158 = (float)_DAT_01d4ae90;
  fVar159 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar160 = (float)_UNK_01d4ae98;
  fVar161 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar49 = a64_TBL(ZEXT816(0),auVar127,DAT_01cd4f90);
  fVar65 = (fVar73 * fVar70 + fVar158 * (float)uVar125 * 0.0 + fVar158 * fVar97 * (float)uVar145) -
           fVar72 * (float)uVar24;
  fVar67 = (fVar47 * fVar86 + fVar159 * (float)((ulong)uVar125 >> 0x20) * 0.0 +
           fVar159 * fVar69 * (float)((ulong)uVar145 >> 0x20)) -
           fVar74 * (float)((ulong)uVar24 >> 0x20);
  fVar151 = (auVar92._8_4_ * fVar70 + fVar160 * fVar72 * (float)uVar126 +
            fVar160 * (float)uVar75 * 0.0) - fVar97 * (float)uVar154;
  fVar152 = (auVar92._12_4_ * fVar86 + fVar161 * fVar74 * (float)((ulong)uVar126 >> 0x20) +
            fVar161 * (float)((ulong)uVar75 >> 0x20) * 0.0) -
            fVar69 * (float)((ulong)uVar154 >> 0x20);
  fVar73 = (float)((ulong)uVar49 >> 0x20);
  uVar154 = a64_TBL(ZEXT816(0),auVar127,DAT_01cd50f8);
  auVar17._4_4_ = fVar67;
  auVar17._0_4_ = fVar65;
  auVar17._8_4_ = fVar151;
  auVar17._12_4_ = fVar152;
  uVar75 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
  auVar18._4_4_ = fVar67;
  auVar18._0_4_ = fVar65;
  auVar18._8_4_ = fVar151;
  auVar18._12_4_ = fVar152;
  uVar125 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5120);
  auVar19._4_4_ = fVar67;
  auVar19._0_4_ = fVar65;
  auVar19._8_4_ = fVar151;
  auVar19._12_4_ = fVar152;
  uVar146 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
  auVar20._4_4_ = fVar67;
  auVar20._0_4_ = fVar65;
  auVar20._8_4_ = fVar151;
  auVar20._12_4_ = fVar152;
  uVar145 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  auVar21._4_4_ = fVar67;
  auVar21._0_4_ = fVar65;
  auVar21._8_4_ = fVar151;
  auVar21._12_4_ = fVar152;
  uVar126 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
  uVar24 = a64_TBL(ZEXT816(0),auVar127,DAT_01cd5418);
  fVar150 = (float)((ulong)uVar24 >> 0x20);
  fVar128 = (float)((ulong)uVar154 >> 0x20);
  auVar22._4_4_ = fVar67;
  auVar22._0_4_ = fVar65;
  auVar22._8_4_ = fVar65;
  auVar22._12_4_ = fVar67;
  uVar87 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
  fVar47 = ((float)uVar49 * fVar65 + fVar158 * fVar153 * (float)uVar75 +
           fVar158 * (float)uVar24 * (float)uVar146) - (float)uVar154 * (float)uVar145;
  fVar65 = (fVar73 * fVar67 + fVar159 * fVar156 * (float)((ulong)uVar75 >> 0x20) +
           fVar159 * fVar150 * (float)((ulong)uVar146 >> 0x20)) -
           fVar128 * (float)((ulong)uVar145 >> 0x20);
  fVar67 = ((float)uVar49 * fVar151 + fVar160 * (float)uVar154 * (float)uVar125 +
           fVar160 * fVar153 * (float)uVar87) - (float)uVar24 * (float)uVar126;
  fVar73 = (fVar73 * fVar152 + fVar161 * fVar128 * (float)((ulong)uVar125 >> 0x20) +
           fVar161 * fVar156 * (float)((ulong)uVar87 >> 0x20)) -
           fVar150 * (float)((ulong)uVar126 >> 0x20);
  bVar104 = (byte)DAT_01d4ab50;
  bVar129 = SUB41(fVar47,0) & bVar104;
  bVar105 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar130 = (byte)((uint)fVar47 >> 8) & bVar105;
  bVar106 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar131 = (byte)((uint)fVar47 >> 0x10) & bVar106;
  bVar107 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar132 = (byte)((uint)fVar47 >> 0x18) & bVar107;
  bVar166 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar133 = SUB41(fVar65,0) & bVar166;
  bVar167 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar134 = (byte)((uint)fVar65 >> 8) & bVar167;
  bVar168 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar135 = (byte)((uint)fVar65 >> 0x10) & bVar168;
  bVar169 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  bVar136 = (byte)((uint)fVar65 >> 0x18) & bVar169;
  bVar112 = (byte)DAT_01d4ab58;
  bVar137 = SUB41(fVar67,0) & bVar112;
  bVar113 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar138 = (byte)((uint)fVar67 >> 8) & bVar113;
  bVar116 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar139 = (byte)((uint)fVar67 >> 0x10) & bVar116;
  bVar119 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar140 = (byte)((uint)fVar67 >> 0x18) & bVar119;
  bVar170 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar141 = SUB41(fVar73,0) & bVar170;
  bVar171 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar142 = (byte)((uint)fVar73 >> 8) & bVar171;
  bVar172 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar143 = (byte)((uint)fVar73 >> 0x10) & bVar172;
  bVar173 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar144 = (byte)((uint)fVar73 >> 0x18) & bVar173;
  fVar73 = fVar46 * (float)CONCAT13(bVar132,CONCAT12(bVar131,CONCAT11(bVar130,bVar129)));
  fVar47 = fStack_8c * (float)CONCAT13(bVar136,CONCAT12(bVar135,CONCAT11(bVar134,bVar133)));
  uVar108 = (undefined1)((uint)fVar47 >> 8);
  uVar109 = (undefined1)((uint)fVar47 >> 0x10);
  uVar110 = (undefined1)((uint)fVar47 >> 0x18);
  fStack_88 = fStack_88 * (float)CONCAT13(bVar140,CONCAT12(bVar139,CONCAT11(bVar138,bVar137)));
  uVar111 = (undefined1)((uint)fStack_88 >> 8);
  uVar114 = (undefined1)((uint)fStack_88 >> 0x10);
  uVar117 = (undefined1)((uint)fStack_88 >> 0x18);
  fVar65 = fStack_84 * (float)CONCAT13(bVar144,CONCAT12(bVar143,CONCAT11(bVar142,bVar141)));
  uVar115 = (undefined1)((uint)fVar65 >> 8);
  uVar118 = (undefined1)((uint)fVar65 >> 0x10);
  uVar122 = (undefined1)((uint)fVar65 >> 0x18);
  auVar127[4] = SUB41(fVar47,0);
  auVar127._0_4_ = fVar73;
  auVar127[5] = uVar108;
  auVar127[6] = uVar109;
  auVar127[7] = uVar110;
  auVar127[8] = SUB41(fStack_88,0);
  auVar127[9] = uVar111;
  auVar127[10] = uVar114;
  auVar127[0xb] = uVar117;
  auVar127[0xc] = SUB41(fVar65,0);
  auVar127[0xd] = uVar115;
  auVar127[0xe] = uVar118;
  auVar127[0xf] = uVar122;
  auVar4[4] = SUB41(fVar47,0);
  auVar4._0_4_ = fVar73;
  auVar4[5] = uVar108;
  auVar4[6] = uVar109;
  auVar4[7] = uVar110;
  auVar4[8] = SUB41(fStack_88,0);
  auVar4[9] = uVar111;
  auVar4[10] = uVar114;
  auVar4[0xb] = uVar117;
  auVar4[0xc] = SUB41(fVar65,0);
  auVar4[0xd] = uVar115;
  auVar4[0xe] = uVar118;
  auVar4[0xf] = uVar122;
  auVar127 = NEON_ext(auVar127,auVar4,8,1);
  fVar73 = auVar127._0_4_ + fVar73 + auVar127._4_4_ + fVar47;
  if (fVar73 < 0.0) {
    return;
  }
  fVar156 = auVar90._0_4_;
  fVar157 = auVar90._4_4_;
  fVar47 = fVar156 * fVar162;
  fVar65 = fVar157 * fVar163;
  uVar108 = SUB41(fVar65,0);
  uVar109 = (undefined1)((uint)fVar65 >> 8);
  uVar110 = (undefined1)((uint)fVar65 >> 0x10);
  uVar111 = (undefined1)((uint)fVar65 >> 0x18);
  fStack_a8 = fStack_a8 * fVar164;
  uVar114 = SUB41(fStack_a8,0);
  uVar117 = (undefined1)((uint)fStack_a8 >> 8);
  uVar115 = (undefined1)((uint)fStack_a8 >> 0x10);
  uVar118 = (undefined1)((uint)fStack_a8 >> 0x18);
  fStack_a4 = fStack_a4 * fVar165;
  uVar122 = SUB41(fStack_a4,0);
  uVar120 = (undefined1)((uint)fStack_a4 >> 8);
  uVar121 = (undefined1)((uint)fStack_a4 >> 0x10);
  uVar123 = (undefined1)((uint)fStack_a4 >> 0x18);
  auVar5[4] = uVar108;
  auVar5._0_4_ = fVar47;
  auVar5[5] = uVar109;
  auVar5[6] = uVar110;
  auVar5[7] = uVar111;
  auVar5[8] = uVar114;
  auVar5[9] = uVar117;
  auVar5[10] = uVar115;
  auVar5[0xb] = uVar118;
  auVar5[0xc] = uVar122;
  auVar5[0xd] = uVar120;
  auVar5[0xe] = uVar121;
  auVar5[0xf] = uVar123;
  uVar24 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
  auVar6[4] = uVar108;
  auVar6._0_4_ = fVar47;
  auVar6[5] = uVar109;
  auVar6[6] = uVar110;
  auVar6[7] = uVar111;
  auVar6[8] = uVar114;
  auVar6[9] = uVar117;
  auVar6[10] = uVar115;
  auVar6[0xb] = uVar118;
  auVar6[0xc] = uVar122;
  auVar6[0xd] = uVar120;
  auVar6[0xe] = uVar121;
  auVar6[0xf] = uVar123;
  uVar145 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5120);
  fVar150 = (float)CONCAT13(bVar140,CONCAT12(bVar139,CONCAT11(bVar138,bVar137)));
  fStack_94 = (float)(CONCAT17(bVar144,CONCAT16(bVar143,CONCAT15(bVar142,CONCAT14(bVar141,fVar150)))
                              ) >> 0x20);
  fVar67 = (float)CONCAT13(bVar132,CONCAT12(bVar131,CONCAT11(bVar130,bVar129)));
  uVar126 = CONCAT17(bVar136,CONCAT16(bVar135,CONCAT15(bVar134,CONCAT14(bVar133,fVar67))));
  auVar15[8] = bVar137;
  auVar15._0_8_ = uVar126;
  auVar15[9] = bVar138;
  auVar15[10] = bVar139;
  auVar15[0xb] = bVar140;
  auVar15[0xc] = bVar141;
  auVar15[0xd] = bVar142;
  auVar15[0xe] = bVar143;
  auVar15[0xf] = bVar144;
  uVar125 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  auVar7[4] = uVar108;
  auVar7._0_4_ = fVar47;
  auVar7[5] = uVar109;
  auVar7[6] = uVar110;
  auVar7[7] = uVar111;
  auVar7[8] = uVar114;
  auVar7[9] = uVar117;
  auVar7[10] = uVar115;
  auVar7[0xb] = uVar118;
  auVar7[0xc] = uVar122;
  auVar7[0xd] = uVar120;
  auVar7[0xe] = uVar121;
  auVar7[0xf] = uVar123;
  uVar155 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar8[4] = uVar108;
  auVar8._0_4_ = fVar47;
  auVar8[5] = uVar109;
  auVar8[6] = uVar110;
  auVar8[7] = uVar111;
  auVar8[8] = uVar114;
  auVar8[9] = uVar117;
  auVar8[10] = uVar115;
  auVar8[0xb] = uVar118;
  auVar8[0xc] = uVar122;
  auVar8[0xd] = uVar120;
  auVar8[0xe] = uVar121;
  auVar8[0xf] = uVar123;
  uVar154 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
  auVar9[4] = uVar108;
  auVar9._0_4_ = fVar47;
  auVar9[5] = uVar109;
  auVar9[6] = uVar110;
  auVar9[7] = uVar111;
  auVar9[8] = uVar114;
  auVar9[9] = uVar117;
  auVar9[10] = uVar115;
  auVar9[0xb] = uVar118;
  auVar9[0xc] = uVar122;
  auVar9[0xd] = uVar120;
  auVar9[0xe] = uVar121;
  auVar9[0xf] = uVar123;
  uVar87 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  auVar26._12_4_ = fStack_84;
  a64_TBL(ZEXT816(0),auVar26,DAT_01cd5188);
  uVar98 = a64_TBL(ZEXT816(0),auVar90,DAT_01cd5418);
  auVar10[4] = uVar108;
  auVar10._0_4_ = fVar47;
  auVar10[5] = uVar109;
  auVar10[6] = uVar110;
  auVar10[7] = uVar111;
  auVar10[8] = SUB41(fVar47,0);
  auVar10[9] = (char)((uint)fVar47 >> 8);
  auVar10[10] = (char)((uint)fVar47 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar47 >> 0x18);
  auVar10[0xc] = uVar108;
  auVar10[0xd] = uVar109;
  auVar10[0xe] = uVar110;
  auVar10[0xf] = uVar111;
  uVar75 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50b0);
  auVar27._12_4_ = fStack_84;
  uVar147 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
  auVar23._8_4_ = fVar150;
  auVar23._0_8_ = uVar126;
  auVar23._12_4_ = fStack_94;
  a64_TBL(ZEXT816(0),auVar23,DAT_01cd5158);
  auVar28._12_4_ = fStack_84;
  uVar146 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50f8);
  fVar153 = (float)((ulong)uVar146 >> 0x20);
  auVar29._12_4_ = fStack_84;
  a64_TBL(ZEXT816(0),auVar29,DAT_01cd5158);
  fVar128 = (float)((ulong)uVar147 >> 0x20);
  uVar88 = a64_TBL(ZEXT816(0),auVar90,DAT_01cd4f90);
  auVar30._8_4_ = fVar150;
  auVar30._0_8_ = uVar126;
  auVar30._12_4_ = fStack_94;
  a64_TBL(ZEXT816(0),auVar30,DAT_01cd5188);
  auVar12._8_4_ = fVar150;
  auVar12._0_8_ = uVar126;
  auVar12._12_4_ = fStack_94;
  uVar49 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  uVar124 = a64_TBL(ZEXT816(0),auVar90,DAT_01cd50f8);
  fVar151 = fVar70 * fVar47 + fVar158 * (float)uVar24 * 0.0 + fVar158 * fVar97 * (float)uVar87 +
            (float)uVar155 * -fVar72;
  fVar152 = fVar86 * fVar65 + fVar159 * (float)((ulong)uVar24 >> 0x20) * 0.0 +
            fVar159 * fVar69 * (float)((ulong)uVar87 >> 0x20) +
            (float)((ulong)uVar155 >> 0x20) * -fVar74;
  auVar78._0_8_ = CONCAT44(fVar152,fVar151);
  auVar78._8_4_ =
       fVar70 * fStack_a8 + fVar160 * fVar72 * (float)uVar145 + fVar160 * (float)uVar75 * 0.0 +
       (float)uVar154 * -fVar97;
  auVar78._12_4_ =
       fVar86 * fStack_a4 + fVar161 * fVar74 * (float)((ulong)uVar145 >> 0x20) +
       fVar161 * (float)((ulong)uVar75 >> 0x20) * 0.0 + (float)((ulong)uVar154 >> 0x20) * -fVar69;
  uVar155 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5120);
  fVar70 = (float)((ulong)uVar88 >> 0x20);
  uVar154 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd4f90);
  uVar75 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5418);
  uVar148 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5270);
  uVar149 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd50f8);
  auVar79._8_8_ = auVar78._0_8_;
  auVar79._0_8_ = auVar78._0_8_;
  uVar145 = a64_TBL(ZEXT816(0),auVar79,DAT_01cd50b0);
  fVar47 = (float)((ulong)uVar124 >> 0x20);
  fVar97 = (float)((ulong)uVar98 >> 0x20);
  uVar24 = *puVar45;
  uVar87 = puVar45[1];
  fVar65 = ((float)uVar88 * fVar151 + fVar158 * fVar156 * (float)uVar154 +
           fVar158 * (float)uVar98 * (float)uVar149) - (float)uVar124 * (float)uVar75;
  fVar86 = (fVar70 * fVar152 + fVar159 * fVar157 * (float)((ulong)uVar154 >> 0x20) +
           fVar159 * fVar97 * (float)((ulong)uVar149 >> 0x20)) -
           fVar47 * (float)((ulong)uVar75 >> 0x20);
  fVar69 = ((float)uVar88 * auVar78._8_4_ + fVar160 * (float)uVar124 * (float)uVar155 +
           fVar160 * fVar156 * (float)uVar145) - (float)uVar98 * (float)uVar148;
  fVar72 = (fVar70 * auVar78._12_4_ + fVar161 * fVar47 * (float)((ulong)uVar155 >> 0x20) +
           fVar161 * fVar157 * (float)((ulong)uVar145 >> 0x20)) -
           fVar97 * (float)((ulong)uVar148 >> 0x20);
  uVar145 = *puVar44;
  uVar154 = puVar44[1];
  auVar127 = FUN_00a92cd0(DAT_01d4bb38 ^
                          (DAT_01d4bb38 ^
                          (uint)(fVar128 * (float)((ulong)uVar125 >> 0x20) -
                                fVar153 * (float)((ulong)uVar49 >> 0x20))) & 0x80000000,ZEXT816(0),
                          ZEXT816(0));
  auVar11._4_4_ = fStack_8c;
  auVar11._0_4_ = fVar46;
  auVar11[8] = auVar52[8];
  fVar70 = auVar127._0_4_;
  auVar93._0_4_ = fVar70 * fVar162;
  fVar97 = auVar127._4_4_;
  auVar93._4_4_ = fVar97 * fVar163;
  auVar93._8_4_ = auVar127._8_4_ * fVar164;
  auVar93._12_4_ = auVar127._12_4_ * fVar165;
  auVar11[9] = auVar52[9];
  auVar11[10] = auVar52[10];
  auVar11[0xb] = auVar52[0xb];
  auVar11[0xc] = auVar54[0xc];
  auVar11[0xd] = auVar54[0xd];
  auVar11[0xe] = auVar54[0xe];
  auVar11[0xf] = auVar54[0xf];
  uVar88 = a64_TBL(ZEXT816(0),auVar11,uVar37);
  uVar108 = (undefined1)((uint)auVar93._4_4_ >> 8);
  uVar109 = (undefined1)((uint)auVar93._4_4_ >> 0x10);
  uVar110 = (undefined1)((uint)auVar93._4_4_ >> 0x18);
  uVar75 = a64_TBL(ZEXT816(0),auVar93,uVar37);
  uVar148 = a64_TBL(ZEXT816(0),auVar93,uVar13);
  fVar47 = (float)((ulong)uVar88 >> 0x20);
  auVar16[4] = SUB41(auVar93._4_4_,0);
  auVar16._0_4_ = auVar93._0_4_;
  auVar16[5] = uVar108;
  auVar16[6] = uVar109;
  auVar16[7] = uVar110;
  auVar16[8] = SUB41(auVar93._0_4_,0);
  auVar16[9] = (char)((uint)auVar93._0_4_ >> 8);
  auVar16[10] = (char)((uint)auVar93._0_4_ >> 0x10);
  auVar16[0xb] = (char)((uint)auVar93._0_4_ >> 0x18);
  auVar16[0xc] = SUB41(auVar93._4_4_,0);
  auVar16[0xd] = uVar108;
  auVar16[0xe] = uVar109;
  auVar16[0xf] = uVar110;
  uVar125 = a64_TBL(ZEXT816(0),auVar16,uVar89);
  uVar149 = a64_TBL(ZEXT816(0),auVar93,uVar50);
  uVar49 = a64_TBL(ZEXT816(0),auVar93,uVar34);
  uVar98 = a64_TBL(ZEXT816(0),auVar93,uVar14);
  uVar124 = a64_TBL(ZEXT816(0),auVar127,uVar37);
  uVar155 = a64_TBL(ZEXT816(0),auVar127,uVar50);
  fVar74 = (auVar93._0_4_ * (float)uVar88 + fVar158 * fVar46 * (float)uVar75 +
           fVar158 * (float)uVar147 * (float)uVar149) - (float)uVar146 * (float)uVar49;
  fVar151 = (auVar93._4_4_ * fVar47 + fVar159 * fStack_8c * (float)((ulong)uVar75 >> 0x20) +
            fVar159 * fVar128 * (float)((ulong)uVar149 >> 0x20)) -
            fVar153 * (float)((ulong)uVar49 >> 0x20);
  auVar80._0_8_ = CONCAT44(fVar151,fVar74);
  auVar80._8_4_ =
       (auVar93._8_4_ * (float)uVar88 + fVar160 * (float)uVar146 * (float)uVar148 +
       fVar160 * fVar46 * (float)uVar125) - (float)uVar147 * (float)uVar98;
  auVar80._12_4_ =
       (auVar93._12_4_ * fVar47 + fVar161 * fVar153 * (float)((ulong)uVar148 >> 0x20) +
       fVar161 * fStack_8c * (float)((ulong)uVar125 >> 0x20)) -
       fVar128 * (float)((ulong)uVar98 >> 0x20);
  uVar148 = a64_TBL(ZEXT816(0),auVar80,uVar37);
  uVar49 = a64_TBL(ZEXT816(0),auVar80,uVar13);
  fVar152 = (float)((ulong)uVar124 >> 0x20);
  uVar125 = a64_TBL(ZEXT816(0),auVar80,uVar14);
  fVar46 = (float)((ulong)uVar155 >> 0x20);
  uVar149 = a64_TBL(ZEXT816(0),auVar127,uVar34);
  uVar88 = a64_TBL(ZEXT816(0),auVar80,uVar50);
  uVar75 = a64_TBL(ZEXT816(0),auVar80,uVar34);
  auVar81._8_8_ = auVar80._0_8_;
  auVar81._0_8_ = auVar80._0_8_;
  uVar98 = a64_TBL(ZEXT816(0),auVar81,uVar89);
  fVar128 = (float)((ulong)uVar149 >> 0x20);
  fVar47 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & bVar107,
                           CONCAT12((byte)((uint)fVar65 >> 0x10) & bVar106,
                                    CONCAT11((byte)((uint)fVar65 >> 8) & bVar105,
                                             SUB41(fVar65,0) & bVar104)));
  uVar146 = CONCAT17((byte)((uint)fVar86 >> 0x18) & bVar169,
                     CONCAT16((byte)((uint)fVar86 >> 0x10) & bVar168,
                              CONCAT15((byte)((uint)fVar86 >> 8) & bVar167,
                                       CONCAT14(SUB41(fVar86,0) & bVar166,fVar47))));
  auVar33[8] = SUB41(fVar69,0) & bVar112;
  auVar33._0_8_ = uVar146;
  auVar33[9] = (byte)((uint)fVar69 >> 8) & bVar113;
  auVar33[10] = (byte)((uint)fVar69 >> 0x10) & bVar116;
  auVar33[0xb] = (byte)((uint)fVar69 >> 0x18) & bVar119;
  auVar32[0xc] = SUB41(fVar72,0) & bVar170;
  auVar32._0_12_ = auVar33;
  auVar32[0xd] = (byte)((uint)fVar72 >> 8) & bVar171;
  auVar32[0xe] = (byte)((uint)fVar72 >> 0x10) & bVar172;
  auVar32[0xf] = (byte)((uint)fVar72 >> 0x18) & bVar173;
  fVar65 = ((float)uVar124 * fVar74 + fVar158 * fVar70 * (float)uVar148 +
           fVar158 * (float)uVar149 * (float)uVar88) - (float)uVar155 * (float)uVar75;
  fVar86 = (fVar152 * fVar151 + fVar159 * fVar97 * (float)((ulong)uVar148 >> 0x20) +
           fVar159 * fVar128 * (float)((ulong)uVar88 >> 0x20)) -
           fVar46 * (float)((ulong)uVar75 >> 0x20);
  fVar70 = ((float)uVar124 * auVar80._8_4_ + fVar160 * (float)uVar155 * (float)uVar49 +
           fVar160 * fVar70 * (float)uVar98) - (float)uVar149 * (float)uVar125;
  fVar97 = (fVar152 * auVar80._12_4_ + fVar161 * fVar46 * (float)((ulong)uVar49 >> 0x20) +
           fVar161 * fVar97 * (float)((ulong)uVar98 >> 0x20)) -
           fVar128 * (float)((ulong)uVar125 >> 0x20);
  bVar104 = SUB41(fVar65,0) & bVar104;
  bVar105 = (byte)((uint)fVar65 >> 8) & bVar105;
  bVar106 = (byte)((uint)fVar65 >> 0x10) & bVar106;
  bVar107 = (byte)((uint)fVar65 >> 0x18) & bVar107;
  bVar112 = SUB41(fVar70,0) & bVar112;
  bVar113 = (byte)((uint)fVar70 >> 8) & bVar113;
  bVar116 = (byte)((uint)fVar70 >> 0x10) & bVar116;
  bVar119 = (byte)((uint)fVar70 >> 0x18) & bVar119;
  auVar56._0_4_ = fVar67 * fVar47;
  fVar65 = (float)((ulong)uVar146 >> 0x20);
  fVar46 = (float)((ulong)uVar126 >> 0x20);
  auVar56._4_4_ = fVar46 * fVar65;
  auVar56._8_4_ = fVar150 * auVar33._8_4_;
  auVar56._12_4_ = fStack_94 * auVar32._12_4_;
  auVar127 = NEON_ext(auVar56,auVar56,8,1);
  if ((!bVar31 && 0.0 < auVar127._0_4_ + auVar56._0_4_ + auVar127._4_4_ + auVar56._4_4_) &&
     (auVar57._0_4_ = fVar67 * (float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104))),
     auVar57._4_4_ =
          fVar46 * (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & bVar169,
                                   CONCAT12((byte)((uint)fVar86 >> 0x10) & bVar168,
                                            CONCAT11((byte)((uint)fVar86 >> 8) & bVar167,
                                                     SUB41(fVar86,0) & bVar166))),
     auVar57._8_4_ = fVar150 * (float)CONCAT13(bVar119,CONCAT12(bVar116,CONCAT11(bVar113,bVar112))),
     auVar57._12_4_ =
          fStack_94 *
          (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & bVar173,
                          CONCAT12((byte)((uint)fVar97 >> 0x10) & bVar172,
                                   CONCAT11((byte)((uint)fVar97 >> 8) & bVar171,
                                            SUB41(fVar97,0) & bVar170))),
     auVar127 = NEON_ext(auVar57,auVar57,8,1),
     0.0 < auVar127._0_4_ + auVar57._0_4_ + auVar127._4_4_ + auVar57._4_4_)) {
    local_130 = (float)uVar145;
    fStack_12c = (float)((ulong)uVar145 >> 0x20);
    fStack_128 = (float)uVar154;
    fStack_124 = (float)((ulong)uVar154 >> 0x20);
    local_120 = (float)uVar24;
    fStack_11c = (float)((ulong)uVar24 >> 0x20);
    fStack_118 = (float)uVar87;
    fStack_114 = (float)((ulong)uVar87 >> 0x20);
    local_120 = local_120 - local_130;
    fStack_11c = fStack_11c - fStack_12c;
    fStack_118 = fStack_118 - fStack_128;
    fStack_114 = fStack_114 - fStack_124;
    auVar82._0_4_ = local_120 * local_120;
    auVar82._4_4_ = fStack_11c * fStack_11c;
    auVar82._8_4_ = fStack_118 * fStack_118;
    auVar82._12_4_ = fStack_114 * fStack_114;
    auVar127 = NEON_ext(auVar82,auVar82,8,1);
    fVar67 = auVar127._0_4_ + auVar82._0_4_;
    fVar70 = auVar127._4_4_ + auVar82._4_4_;
    fVar46 = fVar67 + fVar70;
    fVar67 = fVar67 + fVar70;
    auVar83._8_8_ = CONCAT44(fVar67,fVar46);
    auVar83._0_8_ = CONCAT44(fVar67,fVar46);
    auVar127 = NEON_frsqrte(auVar83,4);
    auVar102._0_4_ = auVar127._0_4_ * fVar46;
    auVar102._4_4_ = auVar127._4_4_ * fVar67;
    auVar102._8_4_ = auVar127._8_4_ * fVar46;
    auVar102._12_4_ = auVar127._12_4_ * fVar67;
    auVar90 = NEON_frsqrts(auVar127,auVar102,4);
    auVar94._0_4_ = auVar127._0_4_ * auVar90._0_4_;
    auVar94._4_4_ = auVar127._4_4_ * auVar90._4_4_;
    auVar94._8_4_ = auVar127._8_4_ * auVar90._8_4_;
    auVar94._12_4_ = auVar127._12_4_ * auVar90._12_4_;
    auVar103._0_4_ = fVar46 * auVar94._0_4_;
    auVar103._4_4_ = fVar67 * auVar94._4_4_;
    auVar103._8_4_ = fVar46 * auVar94._8_4_;
    auVar103._12_4_ = fVar67 * auVar94._12_4_;
    iVar35 = -(uint)(fVar46 == 0.0);
    iVar66 = -(uint)(fVar67 == 0.0);
    iVar68 = -(uint)(fVar46 == 0.0);
    iVar71 = -(uint)(fVar67 == 0.0);
    auVar127 = NEON_frsqrts(auVar94,auVar103,4);
    local_120 = local_120 * auVar94._0_4_ * auVar127._0_4_;
    fStack_11c = fStack_11c * auVar94._4_4_ * auVar127._4_4_;
    fStack_118 = fStack_118 * auVar94._8_4_ * auVar127._8_4_;
    fStack_114 = fStack_114 * auVar94._12_4_ * auVar127._12_4_;
    fVar46 = (float)CONCAT13((byte)((uint)local_120 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                             CONCAT12((byte)((uint)local_120 >> 0x10) &
                                      ~(byte)((uint)iVar35 >> 0x10),
                                      CONCAT11((byte)((uint)local_120 >> 8) &
                                               ~(byte)((uint)iVar35 >> 8),
                                               SUB41(local_120,0) & ~(byte)iVar35)));
    auVar53._0_8_ =
         CONCAT17((byte)((uint)fStack_11c >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                  CONCAT16((byte)((uint)fStack_11c >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                           CONCAT15((byte)((uint)fStack_11c >> 8) & ~(byte)((uint)iVar66 >> 8),
                                    CONCAT14(SUB41(fStack_11c,0) & ~(byte)iVar66,fVar46))));
    auVar53[8] = SUB41(fStack_118,0) & ~(byte)iVar68;
    auVar53[9] = (byte)((uint)fStack_118 >> 8) & ~(byte)((uint)iVar68 >> 8);
    auVar53[10] = (byte)((uint)fStack_118 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
    auVar53[0xb] = (byte)((uint)fStack_118 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
    auVar58[0xc] = SUB41(fStack_114,0) & ~(byte)iVar71;
    auVar58._0_12_ = auVar53;
    auVar58[0xd] = (byte)((uint)fStack_114 >> 8) & ~(byte)((uint)iVar71 >> 8);
    auVar58[0xe] = (byte)((uint)fStack_114 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    auVar58[0xf] = (byte)((uint)fStack_114 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    auVar59._0_4_ = fVar46 * fVar47;
    auVar59._4_4_ = (float)((ulong)auVar53._0_8_ >> 0x20) * fVar65;
    auVar59._8_4_ = auVar53._8_4_ * auVar33._8_4_;
    auVar59._12_4_ = auVar58._12_4_ * auVar32._12_4_;
    auVar127 = NEON_ext(auVar59,auVar59,8,1);
    fVar46 = auVar127._0_4_ + auVar59._0_4_ + auVar127._4_4_ + auVar59._4_4_;
    if (fVar73 <= fVar46) {
      fStack_88 = (float)CONCAT13(bVar119,CONCAT12(bVar116,CONCAT11(bVar113,bVar112)));
      local_90 = (float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104)));
      if (fVar73 != fVar46) goto LAB_012ea6d0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar45 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar45 != (undefined8 *)0x0
         )) {
        plVar36 = (long *)(**(code **)*puVar45)(puVar45);
        if (((*PTR_DAT_02715078 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_02715078), iVar35 != 0)) {
          uVar75 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar75;
          __cxa_guard_release(PTR_DAT_02715078);
        }
        for (; plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
          if (plVar36 == (long *)PTR_DAT_02715080) {
            puVar45 = puVar45 + -10;
            lVar43 = *(long *)(param_2 + 0x68);
            goto joined_r0x012ea828;
          }
        }
      }
      puVar45 = (undefined8 *)0x0;
      lVar43 = *(long *)(param_2 + 0x68);
joined_r0x012ea828:
      if ((lVar43 != 0) && (puVar44 = *(undefined8 **)(lVar43 + 0x60), puVar44 != (undefined8 *)0x0)
         ) {
        plVar36 = (long *)(**(code **)*puVar44)(puVar44);
        if (((*PTR_DAT_02715078 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_02715078), iVar35 != 0)) {
          uVar75 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar75;
          __cxa_guard_release(PTR_DAT_02715078);
        }
        for (; plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
          if (plVar36 == (long *)PTR_DAT_02715080) {
            if ((long)puVar45 <= (long)(puVar44 + -10)) goto LAB_012ea6d0;
            goto LAB_012ea6c8;
          }
        }
      }
      if ((long)puVar45 < 1) goto LAB_012ea6d0;
    }
LAB_012ea6c8:
    fVar46 = -(float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104)));
    bVar104 = SUB41(fVar46,0);
    bVar105 = (byte)((uint)fVar46 >> 8);
    bVar106 = (byte)((uint)fVar46 >> 0x10);
    bVar107 = (byte)((uint)fVar46 >> 0x18);
    fVar46 = -(float)CONCAT13(bVar119,CONCAT12(bVar116,CONCAT11(bVar113,bVar112)));
    bVar112 = SUB41(fVar46,0);
    bVar113 = (byte)((uint)fVar46 >> 8);
    bVar116 = (byte)((uint)fVar46 >> 0x10);
    bVar119 = (byte)((uint)fVar46 >> 0x18);
  }
  fStack_88 = (float)CONCAT13(bVar119,CONCAT12(bVar116,CONCAT11(bVar113,bVar112)));
  local_90 = (float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104)));
LAB_012ea6d0:
  uVar75 = FUN_012dc8d0(param_1);
  auVar60._0_4_ = atan2f(local_90,fStack_88);
  auVar60._4_12_ = extraout_var_00;
  FUN_00a92cd0(auVar60,ZEXT816(0),ZEXT816(0));
  local_80 = extraout_d0;
  uStack_78 = extraout_var_01;
  auVar127 = FUN_0075e7d0(uVar75,&local_80);
  *(undefined1 *)(param_1 + 0x30d) = 1;
  *(long *)(param_1 + 0x328) = auVar127._8_8_;
  *(long *)(param_1 + 800) = auVar127._0_8_;
  pauVar39 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
  fVar46 = *(float *)(param_1 + 800);
  fVar73 = *(float *)(param_1 + 0x324);
  fVar47 = *(float *)(param_1 + 0x328);
  fVar65 = *(float *)(param_1 + 0x32c);
  auVar84._0_4_ = fVar46 * fVar162;
  auVar84._4_4_ = fVar73 * fVar163;
  auVar84._8_4_ = fVar47 * fVar164;
  auVar84._12_4_ = fVar65 * fVar165;
  auVar61._0_4_ = fVar46 * fVar46;
  auVar61._4_4_ = fVar73 * fVar73;
  auVar61._8_4_ = fVar47 * fVar47;
  auVar61._12_4_ = fVar65 * fVar65;
  auVar127 = NEON_ext(auVar61,auVar61,8,1);
  fVar73 = auVar127._0_4_ + auVar61._0_4_;
  fVar47 = auVar127._4_4_ + auVar61._4_4_;
  fVar46 = fVar73 + fVar47;
  fVar73 = fVar73 + fVar47;
  auVar62._8_8_ = CONCAT44(fVar73,fVar46);
  auVar62._0_8_ = CONCAT44(fVar73,fVar46);
  auVar127 = NEON_frecpe(auVar62,4);
  auVar90 = NEON_frecps(auVar127,auVar62,4);
  auVar95._0_4_ = auVar127._0_4_ * auVar90._0_4_;
  auVar95._4_4_ = auVar127._4_4_ * auVar90._4_4_;
  auVar95._8_4_ = auVar127._8_4_ * auVar90._8_4_;
  auVar95._12_4_ = auVar127._12_4_ * auVar90._12_4_;
  auVar127 = NEON_frecps(auVar95,auVar62,4);
  auVar63._0_4_ = -(uint)(fVar46 == 0.0);
  auVar63._4_4_ = -(uint)(fVar73 == 0.0);
  auVar63._8_4_ = -(uint)(fVar46 == 0.0);
  auVar63._12_4_ = -(uint)(fVar73 == 0.0);
  auVar64._0_4_ = auVar84._0_4_ * auVar95._0_4_ * auVar127._0_4_;
  auVar64._4_4_ = auVar84._4_4_ * auVar95._4_4_ * auVar127._4_4_;
  auVar64._8_4_ = auVar84._8_4_ * auVar95._8_4_ * auVar127._8_4_;
  auVar64._12_4_ = auVar84._12_4_ * auVar95._12_4_ * auVar127._12_4_;
  auVar64 = auVar64 ^ (auVar64 ^ auVar84) & auVar63;
  auVar127 = *pauVar39;
  uVar75 = a64_TBL(ZEXT816(0),auVar64,uVar37);
  uVar49 = a64_TBL(ZEXT816(0),auVar64,uVar50);
  uVar125 = a64_TBL(ZEXT816(0),auVar127,uVar37);
  uVar13 = a64_TBL(ZEXT816(0),auVar127,uVar13);
  uVar14 = a64_TBL(ZEXT816(0),auVar127,uVar14);
  fVar73 = (float)((ulong)uVar75 >> 0x20);
  fVar46 = (float)((ulong)uVar49 >> 0x20);
  uVar126 = a64_TBL(ZEXT816(0),auVar64,uVar34);
  uVar50 = a64_TBL(ZEXT816(0),auVar127,uVar50);
  uVar37 = a64_TBL(ZEXT816(0),auVar127,uVar34);
  auVar96._0_8_ = auVar127._0_8_;
  auVar96._8_8_ = auVar96._0_8_;
  uVar89 = a64_TBL(ZEXT816(0),auVar96,uVar89);
  fVar47 = (float)((ulong)uVar126 >> 0x20);
  auVar85._0_8_ =
       CONCAT44((auVar127._4_4_ * fVar73 + fVar159 * auVar64._4_4_ * (float)((ulong)uVar125 >> 0x20)
                + fVar159 * fVar47 * (float)((ulong)uVar50 >> 0x20)) -
                fVar46 * (float)((ulong)uVar37 >> 0x20),
                (auVar127._0_4_ * (float)uVar75 + fVar158 * auVar64._0_4_ * (float)uVar125 +
                fVar158 * (float)uVar126 * (float)uVar50) - (float)uVar49 * (float)uVar37);
  auVar85._8_4_ =
       (auVar127._8_4_ * (float)uVar75 + fVar160 * (float)uVar49 * (float)uVar13 +
       fVar160 * auVar64._0_4_ * (float)uVar89) - (float)uVar126 * (float)uVar14;
  auVar85._12_4_ =
       (auVar127._12_4_ * fVar73 + fVar161 * fVar46 * (float)((ulong)uVar13 >> 0x20) +
       fVar161 * auVar64._4_4_ * (float)((ulong)uVar89 >> 0x20)) -
       fVar47 * (float)((ulong)uVar14 >> 0x20);
  uStack_78 = auVar85._8_8_;
  local_80 = auVar85._0_8_;
  FUN_007101c0(&local_80);
  uVar48 = FUN_012e4a50(param_1);
  *(uint *)(param_1 + 0x334) = uVar48 ^ (uVar48 ^ extraout_var) & 0x80000000;
  return;
}


