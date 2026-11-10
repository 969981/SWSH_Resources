/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec0920; name: FUN_00ec0920
 */


void FUN_00ec0920(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  bool bVar88;
  int iVar89;
  ulong uVar90;
  ulong uVar91;
  long *plVar92;
  long *plVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long *plVar97;
  long lVar98;
  long *plVar99;
  long *plVar100;
  long *plVar101;
  uint uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar123;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar124;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar125 [16];
  
LAB_00ec0968:
  plVar97 = param_2 + -1;
LAB_00ec098c:
  plVar99 = param_1;
  lVar94 = (long)param_2 - (long)plVar99;
  uVar91 = lVar94 >> 3;
  switch(uVar91) {
  case 0:
  case 1:
    goto switchD_00ec0fd8_caseD_0;
  case 2:
    lVar94 = param_2[-1];
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar105 = (float)uVar40;
    fVar106 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar103 = (float)uVar40;
    fVar104 = (float)((ulong)uVar40 >> 0x20);
    fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
    fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
    fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
    fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    lVar95 = *plVar99;
    auVar85._4_4_ = fVar108;
    auVar85._0_4_ = fVar107;
    auVar85._8_4_ = fVar109;
    auVar85._12_4_ = fVar110;
    auVar86._4_4_ = fVar108;
    auVar86._0_4_ = fVar107;
    auVar86._8_4_ = fVar109;
    auVar86._12_4_ = fVar110;
    auVar111 = NEON_ext(auVar85,auVar86,8,1);
    fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
    fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
    fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
    fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    auVar38._4_4_ = fVar104;
    auVar38._0_4_ = fVar103;
    auVar38._8_4_ = fVar105;
    auVar38._12_4_ = fVar106;
    auVar39._4_4_ = fVar104;
    auVar39._0_4_ = fVar103;
    auVar39._8_4_ = fVar105;
    auVar39._12_4_ = fVar106;
    auVar112 = NEON_ext(auVar38,auVar39,8,1);
    if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
        auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
      *plVar99 = lVar94;
      param_2[-1] = lVar95;
      return;
    }
    return;
  case 3:
    lVar95 = plVar99[1];
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar109 = (float)uVar40;
    fVar110 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar107 = (float)uVar40;
    fVar108 = (float)((ulong)uVar40 >> 0x20);
    fVar103 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar107;
    fVar104 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar108;
    fVar105 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar109;
    fVar106 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar110;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    lVar94 = *plVar99;
    auVar34._4_4_ = fVar104;
    auVar34._0_4_ = fVar103;
    auVar34._8_4_ = fVar105;
    auVar34._12_4_ = fVar106;
    auVar35._4_4_ = fVar104;
    auVar35._0_4_ = fVar103;
    auVar35._8_4_ = fVar105;
    auVar35._12_4_ = fVar106;
    auVar111 = NEON_ext(auVar34,auVar35,8,1);
    fVar105 = *(float *)(lVar94 + 0xb0) - fVar107;
    fVar106 = *(float *)(lVar94 + 0xb4) - fVar108;
    fVar123 = *(float *)(lVar94 + 0xb8) - fVar109;
    fVar124 = *(float *)(lVar94 + 0xbc) - fVar110;
    lVar98 = param_2[-1];
    auVar122._0_4_ = fVar105 * fVar105;
    auVar122._4_4_ = fVar106 * fVar106;
    auVar122._8_4_ = fVar123 * fVar123;
    auVar122._12_4_ = fVar124 * fVar124;
    auVar112 = NEON_ext(auVar122,auVar122,8,1);
    fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar104;
    fVar107 = *(float *)(lVar98 + 0xb0) - fVar107;
    fVar108 = *(float *)(lVar98 + 0xb4) - fVar108;
    fVar109 = *(float *)(lVar98 + 0xb8) - fVar109;
    fVar110 = *(float *)(lVar98 + 0xbc) - fVar110;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    auVar81._4_4_ = fVar108;
    auVar81._0_4_ = fVar107;
    auVar81._8_4_ = fVar109;
    auVar81._12_4_ = fVar110;
    auVar82._4_4_ = fVar108;
    auVar82._0_4_ = fVar107;
    auVar82._8_4_ = fVar109;
    auVar82._12_4_ = fVar110;
    auVar111 = NEON_ext(auVar81,auVar82,8,1);
    fVar104 = auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108;
    if (fVar103 < auVar112._0_4_ + auVar122._0_4_ + auVar112._4_4_ + auVar122._4_4_) {
      if (fVar104 < fVar103) {
        *plVar99 = lVar98;
        param_2[-1] = lVar94;
        return;
      }
      *plVar99 = lVar95;
      plVar99[1] = lVar94;
      lVar95 = param_2[-1];
      uVar40 = ((undefined8 *)*param_3)[1];
      fVar105 = (float)uVar40;
      fVar106 = (float)((ulong)uVar40 >> 0x20);
      uVar40 = *(undefined8 *)*param_3;
      fVar103 = (float)uVar40;
      fVar104 = (float)((ulong)uVar40 >> 0x20);
      fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
      fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
      fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
      fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
      fVar107 = fVar107 * fVar107;
      fVar108 = fVar108 * fVar108;
      fVar109 = fVar109 * fVar109;
      fVar110 = fVar110 * fVar110;
      auVar83._4_4_ = fVar108;
      auVar83._0_4_ = fVar107;
      auVar83._8_4_ = fVar109;
      auVar83._12_4_ = fVar110;
      auVar84._4_4_ = fVar108;
      auVar84._0_4_ = fVar107;
      auVar84._8_4_ = fVar109;
      auVar84._12_4_ = fVar110;
      auVar111 = NEON_ext(auVar83,auVar84,8,1);
      fVar103 = *(float *)(lVar94 + 0xb0) - fVar103;
      fVar104 = *(float *)(lVar94 + 0xb4) - fVar104;
      fVar105 = *(float *)(lVar94 + 0xb8) - fVar105;
      fVar106 = *(float *)(lVar94 + 0xbc) - fVar106;
      fVar103 = fVar103 * fVar103;
      fVar104 = fVar104 * fVar104;
      fVar105 = fVar105 * fVar105;
      fVar106 = fVar106 * fVar106;
      auVar36._4_4_ = fVar104;
      auVar36._0_4_ = fVar103;
      auVar36._8_4_ = fVar105;
      auVar36._12_4_ = fVar106;
      auVar37._4_4_ = fVar104;
      auVar37._0_4_ = fVar103;
      auVar37._8_4_ = fVar105;
      auVar37._12_4_ = fVar106;
      auVar112 = NEON_ext(auVar36,auVar37,8,1);
      if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
          auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
        plVar99[1] = lVar95;
        param_2[-1] = lVar94;
        return;
      }
      return;
    }
    if (fVar103 <= fVar104) {
      return;
    }
    plVar99[1] = lVar98;
    param_2[-1] = lVar95;
    lVar94 = plVar99[1];
    break;
  case 4:
    FUN_00ec14e0(plVar99,plVar99 + 1,plVar99 + 2,plVar97,param_3);
    return;
  case 5:
    plVar97 = plVar99 + 2;
    plVar93 = plVar99 + 3;
    FUN_00ec14e0(plVar99,plVar99 + 1,plVar97,plVar93,param_3);
    lVar94 = param_2[-1];
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar105 = (float)uVar40;
    fVar106 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar103 = (float)uVar40;
    fVar104 = (float)((ulong)uVar40 >> 0x20);
    fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
    fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
    fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
    fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    lVar95 = plVar99[3];
    auVar73._4_4_ = fVar108;
    auVar73._0_4_ = fVar107;
    auVar73._8_4_ = fVar109;
    auVar73._12_4_ = fVar110;
    auVar74._4_4_ = fVar108;
    auVar74._0_4_ = fVar107;
    auVar74._8_4_ = fVar109;
    auVar74._12_4_ = fVar110;
    auVar111 = NEON_ext(auVar73,auVar74,8,1);
    fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
    fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
    fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
    fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    auVar26._4_4_ = fVar104;
    auVar26._0_4_ = fVar103;
    auVar26._8_4_ = fVar105;
    auVar26._12_4_ = fVar106;
    auVar27._4_4_ = fVar104;
    auVar27._0_4_ = fVar103;
    auVar27._8_4_ = fVar105;
    auVar27._12_4_ = fVar106;
    auVar112 = NEON_ext(auVar26,auVar27,8,1);
    if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
        auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
      return;
    }
    *plVar93 = lVar94;
    param_2[-1] = lVar95;
    lVar94 = *plVar93;
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar105 = (float)uVar40;
    fVar106 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar103 = (float)uVar40;
    fVar104 = (float)((ulong)uVar40 >> 0x20);
    fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
    fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
    fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
    fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
    lVar95 = *plVar97;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    auVar75._4_4_ = fVar108;
    auVar75._0_4_ = fVar107;
    auVar75._8_4_ = fVar109;
    auVar75._12_4_ = fVar110;
    auVar76._4_4_ = fVar108;
    auVar76._0_4_ = fVar107;
    auVar76._8_4_ = fVar109;
    auVar76._12_4_ = fVar110;
    auVar111 = NEON_ext(auVar75,auVar76,8,1);
    fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
    fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
    fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
    fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    auVar28._4_4_ = fVar104;
    auVar28._0_4_ = fVar103;
    auVar28._8_4_ = fVar105;
    auVar28._12_4_ = fVar106;
    auVar29._4_4_ = fVar104;
    auVar29._0_4_ = fVar103;
    auVar29._8_4_ = fVar105;
    auVar29._12_4_ = fVar106;
    auVar112 = NEON_ext(auVar28,auVar29,8,1);
    if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
        auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
      return;
    }
    *plVar97 = lVar94;
    *plVar93 = lVar95;
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar105 = (float)uVar40;
    fVar106 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar103 = (float)uVar40;
    fVar104 = (float)((ulong)uVar40 >> 0x20);
    lVar95 = plVar99[1];
    fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
    fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
    fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
    fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    auVar77._4_4_ = fVar108;
    auVar77._0_4_ = fVar107;
    auVar77._8_4_ = fVar109;
    auVar77._12_4_ = fVar110;
    auVar78._4_4_ = fVar108;
    auVar78._0_4_ = fVar107;
    auVar78._8_4_ = fVar109;
    auVar78._12_4_ = fVar110;
    auVar111 = NEON_ext(auVar77,auVar78,8,1);
    fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
    fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
    fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
    fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    auVar30._4_4_ = fVar104;
    auVar30._0_4_ = fVar103;
    auVar30._8_4_ = fVar105;
    auVar30._12_4_ = fVar106;
    auVar31._4_4_ = fVar104;
    auVar31._0_4_ = fVar103;
    auVar31._8_4_ = fVar105;
    auVar31._12_4_ = fVar106;
    auVar112 = NEON_ext(auVar30,auVar31,8,1);
    if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
        auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
      return;
    }
    plVar99[1] = lVar94;
    plVar99[2] = lVar95;
    break;
  default:
    if (0xf7 < lVar94) {
      uVar90 = uVar91;
      if ((long)uVar91 < 0) {
        uVar90 = uVar91 + 1;
      }
      plVar93 = (long *)((long)plVar99 + (uVar90 & 0x3ffffffffffffffe) * 4);
      if (lVar94 < 0x1f39) {
        lVar95 = *plVar93;
        uVar40 = ((undefined8 *)*param_3)[1];
        fVar109 = (float)uVar40;
        fVar110 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = *(undefined8 *)*param_3;
        fVar107 = (float)uVar40;
        fVar108 = (float)((ulong)uVar40 >> 0x20);
        fVar103 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar107;
        fVar104 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar108;
        fVar105 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar109;
        fVar106 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar110;
        fVar103 = fVar103 * fVar103;
        fVar104 = fVar104 * fVar104;
        fVar105 = fVar105 * fVar105;
        fVar106 = fVar106 * fVar106;
        lVar94 = *plVar99;
        auVar111._4_4_ = fVar104;
        auVar111._0_4_ = fVar103;
        auVar111._8_4_ = fVar105;
        auVar111._12_4_ = fVar106;
        auVar112._4_4_ = fVar104;
        auVar112._0_4_ = fVar103;
        auVar112._8_4_ = fVar105;
        auVar112._12_4_ = fVar106;
        auVar111 = NEON_ext(auVar111,auVar112,8,1);
        fVar105 = *(float *)(lVar94 + 0xb0) - fVar107;
        fVar106 = *(float *)(lVar94 + 0xb4) - fVar108;
        fVar123 = *(float *)(lVar94 + 0xb8) - fVar109;
        fVar124 = *(float *)(lVar94 + 0xbc) - fVar110;
        lVar98 = *plVar97;
        auVar113._0_4_ = fVar105 * fVar105;
        auVar113._4_4_ = fVar106 * fVar106;
        auVar113._8_4_ = fVar123 * fVar123;
        auVar113._12_4_ = fVar124 * fVar124;
        auVar112 = NEON_ext(auVar113,auVar113,8,1);
        fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar104;
        fVar107 = *(float *)(lVar98 + 0xb0) - fVar107;
        fVar108 = *(float *)(lVar98 + 0xb4) - fVar108;
        fVar109 = *(float *)(lVar98 + 0xb8) - fVar109;
        fVar110 = *(float *)(lVar98 + 0xbc) - fVar110;
        fVar107 = fVar107 * fVar107;
        fVar108 = fVar108 * fVar108;
        fVar109 = fVar109 * fVar109;
        fVar110 = fVar110 * fVar110;
        auVar57._4_4_ = fVar108;
        auVar57._0_4_ = fVar107;
        auVar57._8_4_ = fVar109;
        auVar57._12_4_ = fVar110;
        auVar58._4_4_ = fVar108;
        auVar58._0_4_ = fVar107;
        auVar58._8_4_ = fVar109;
        auVar58._12_4_ = fVar110;
        auVar111 = NEON_ext(auVar57,auVar58,8,1);
        fVar104 = auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108;
        if (auVar112._0_4_ + auVar113._0_4_ + auVar112._4_4_ + auVar113._4_4_ <= fVar103) {
          if (fVar103 <= fVar104) {
            iVar89 = 0;
          }
          else {
            *plVar93 = lVar98;
            *plVar97 = lVar95;
            lVar94 = *plVar93;
            uVar40 = ((undefined8 *)*param_3)[1];
            fVar105 = (float)uVar40;
            fVar106 = (float)((ulong)uVar40 >> 0x20);
            uVar40 = *(undefined8 *)*param_3;
            fVar103 = (float)uVar40;
            fVar104 = (float)((ulong)uVar40 >> 0x20);
            fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
            fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
            fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
            fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
            lVar95 = *plVar99;
            fVar107 = fVar107 * fVar107;
            fVar108 = fVar108 * fVar108;
            fVar109 = fVar109 * fVar109;
            fVar110 = fVar110 * fVar110;
            auVar61._4_4_ = fVar108;
            auVar61._0_4_ = fVar107;
            auVar61._8_4_ = fVar109;
            auVar61._12_4_ = fVar110;
            auVar62._4_4_ = fVar108;
            auVar62._0_4_ = fVar107;
            auVar62._8_4_ = fVar109;
            auVar62._12_4_ = fVar110;
            auVar111 = NEON_ext(auVar61,auVar62,8,1);
            fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
            fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
            fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
            fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
            fVar103 = fVar103 * fVar103;
            fVar104 = fVar104 * fVar104;
            fVar105 = fVar105 * fVar105;
            fVar106 = fVar106 * fVar106;
            auVar14._4_4_ = fVar104;
            auVar14._0_4_ = fVar103;
            auVar14._8_4_ = fVar105;
            auVar14._12_4_ = fVar106;
            auVar15._4_4_ = fVar104;
            auVar15._0_4_ = fVar103;
            auVar15._8_4_ = fVar105;
            auVar15._12_4_ = fVar106;
            auVar112 = NEON_ext(auVar14,auVar15,8,1);
            if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
                auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) goto LAB_00ec0c8c;
            *plVar99 = lVar94;
            iVar89 = 2;
            *plVar93 = lVar95;
          }
        }
        else {
          if (fVar103 <= fVar104) {
            *plVar99 = lVar95;
            *plVar93 = lVar94;
            lVar95 = *plVar97;
            uVar40 = ((undefined8 *)*param_3)[1];
            fVar105 = (float)uVar40;
            fVar106 = (float)((ulong)uVar40 >> 0x20);
            uVar40 = *(undefined8 *)*param_3;
            fVar103 = (float)uVar40;
            fVar104 = (float)((ulong)uVar40 >> 0x20);
            fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
            fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
            fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
            fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
            fVar107 = fVar107 * fVar107;
            fVar108 = fVar108 * fVar108;
            fVar109 = fVar109 * fVar109;
            fVar110 = fVar110 * fVar110;
            auVar59._4_4_ = fVar108;
            auVar59._0_4_ = fVar107;
            auVar59._8_4_ = fVar109;
            auVar59._12_4_ = fVar110;
            auVar60._4_4_ = fVar108;
            auVar60._0_4_ = fVar107;
            auVar60._8_4_ = fVar109;
            auVar60._12_4_ = fVar110;
            auVar111 = NEON_ext(auVar59,auVar60,8,1);
            fVar103 = *(float *)(lVar94 + 0xb0) - fVar103;
            fVar104 = *(float *)(lVar94 + 0xb4) - fVar104;
            fVar105 = *(float *)(lVar94 + 0xb8) - fVar105;
            fVar106 = *(float *)(lVar94 + 0xbc) - fVar106;
            fVar103 = fVar103 * fVar103;
            fVar104 = fVar104 * fVar104;
            fVar105 = fVar105 * fVar105;
            fVar106 = fVar106 * fVar106;
            auVar12._4_4_ = fVar104;
            auVar12._0_4_ = fVar103;
            auVar12._8_4_ = fVar105;
            auVar12._12_4_ = fVar106;
            auVar13._4_4_ = fVar104;
            auVar13._0_4_ = fVar103;
            auVar13._8_4_ = fVar105;
            auVar13._12_4_ = fVar106;
            auVar112 = NEON_ext(auVar12,auVar13,8,1);
            if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
                auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
LAB_00ec0c8c:
              iVar89 = 1;
              goto LAB_00ec0ca0;
            }
            iVar89 = 2;
            *plVar93 = lVar95;
          }
          else {
            *plVar99 = lVar98;
            iVar89 = 1;
          }
          *plVar97 = lVar94;
        }
      }
      else {
        uVar90 = uVar91 + 3;
        if (-1 < (long)uVar91) {
          uVar90 = uVar91;
        }
        lVar94 = (uVar90 & 0x7ffffffffffffffc) * 2;
        plVar100 = (long *)((long)plVar99 + lVar94);
        plVar92 = (long *)((long)plVar93 + lVar94);
        iVar89 = FUN_00ec14e0(plVar99,plVar100,plVar93,plVar92,param_3);
        lVar94 = *plVar97;
        uVar40 = ((undefined8 *)*param_3)[1];
        fVar105 = (float)uVar40;
        fVar106 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = *(undefined8 *)*param_3;
        fVar103 = (float)uVar40;
        fVar104 = (float)((ulong)uVar40 >> 0x20);
        fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
        fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
        fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
        fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
        fVar107 = fVar107 * fVar107;
        fVar108 = fVar108 * fVar108;
        fVar109 = fVar109 * fVar109;
        fVar110 = fVar110 * fVar110;
        lVar95 = *plVar92;
        auVar41._4_4_ = fVar108;
        auVar41._0_4_ = fVar107;
        auVar41._8_4_ = fVar109;
        auVar41._12_4_ = fVar110;
        auVar42._4_4_ = fVar108;
        auVar42._0_4_ = fVar107;
        auVar42._8_4_ = fVar109;
        auVar42._12_4_ = fVar110;
        auVar111 = NEON_ext(auVar41,auVar42,8,1);
        fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
        fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
        fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
        fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
        fVar103 = fVar103 * fVar103;
        fVar104 = fVar104 * fVar104;
        fVar105 = fVar105 * fVar105;
        fVar106 = fVar106 * fVar106;
        auVar2._4_4_ = fVar104;
        auVar2._0_4_ = fVar103;
        auVar2._8_4_ = fVar105;
        auVar2._12_4_ = fVar106;
        auVar3._4_4_ = fVar104;
        auVar3._0_4_ = fVar103;
        auVar3._8_4_ = fVar105;
        auVar3._12_4_ = fVar106;
        auVar112 = NEON_ext(auVar2,auVar3,8,1);
        if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
            auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
          *plVar92 = lVar94;
          *plVar97 = lVar95;
          lVar94 = *plVar92;
          uVar40 = ((undefined8 *)*param_3)[1];
          fVar105 = (float)uVar40;
          fVar106 = (float)((ulong)uVar40 >> 0x20);
          uVar40 = *(undefined8 *)*param_3;
          fVar103 = (float)uVar40;
          fVar104 = (float)((ulong)uVar40 >> 0x20);
          fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
          fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
          fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
          fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
          lVar95 = *plVar93;
          fVar107 = fVar107 * fVar107;
          fVar108 = fVar108 * fVar108;
          fVar109 = fVar109 * fVar109;
          fVar110 = fVar110 * fVar110;
          auVar43._4_4_ = fVar108;
          auVar43._0_4_ = fVar107;
          auVar43._8_4_ = fVar109;
          auVar43._12_4_ = fVar110;
          auVar44._4_4_ = fVar108;
          auVar44._0_4_ = fVar107;
          auVar44._8_4_ = fVar109;
          auVar44._12_4_ = fVar110;
          auVar111 = NEON_ext(auVar43,auVar44,8,1);
          fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
          fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
          fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
          fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
          fVar103 = fVar103 * fVar103;
          fVar104 = fVar104 * fVar104;
          fVar105 = fVar105 * fVar105;
          fVar106 = fVar106 * fVar106;
          auVar4._4_4_ = fVar104;
          auVar4._0_4_ = fVar103;
          auVar4._8_4_ = fVar105;
          auVar4._12_4_ = fVar106;
          auVar5._4_4_ = fVar104;
          auVar5._0_4_ = fVar103;
          auVar5._8_4_ = fVar105;
          auVar5._12_4_ = fVar106;
          auVar112 = NEON_ext(auVar4,auVar5,8,1);
          if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
              auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
            iVar89 = iVar89 + 1;
          }
          else {
            *plVar93 = lVar94;
            *plVar92 = lVar95;
            lVar94 = *plVar93;
            uVar40 = ((undefined8 *)*param_3)[1];
            fVar105 = (float)uVar40;
            fVar106 = (float)((ulong)uVar40 >> 0x20);
            uVar40 = *(undefined8 *)*param_3;
            fVar103 = (float)uVar40;
            fVar104 = (float)((ulong)uVar40 >> 0x20);
            fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
            fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
            fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
            fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
            lVar95 = *plVar100;
            fVar107 = fVar107 * fVar107;
            fVar108 = fVar108 * fVar108;
            fVar109 = fVar109 * fVar109;
            fVar110 = fVar110 * fVar110;
            auVar45._4_4_ = fVar108;
            auVar45._0_4_ = fVar107;
            auVar45._8_4_ = fVar109;
            auVar45._12_4_ = fVar110;
            auVar46._4_4_ = fVar108;
            auVar46._0_4_ = fVar107;
            auVar46._8_4_ = fVar109;
            auVar46._12_4_ = fVar110;
            auVar111 = NEON_ext(auVar45,auVar46,8,1);
            fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
            fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
            fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
            fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
            fVar103 = fVar103 * fVar103;
            fVar104 = fVar104 * fVar104;
            fVar105 = fVar105 * fVar105;
            fVar106 = fVar106 * fVar106;
            auVar6._4_4_ = fVar104;
            auVar6._0_4_ = fVar103;
            auVar6._8_4_ = fVar105;
            auVar6._12_4_ = fVar106;
            auVar7._4_4_ = fVar104;
            auVar7._0_4_ = fVar103;
            auVar7._8_4_ = fVar105;
            auVar7._12_4_ = fVar106;
            auVar112 = NEON_ext(auVar6,auVar7,8,1);
            if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
                auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
              iVar89 = iVar89 + 2;
            }
            else {
              *plVar100 = lVar94;
              *plVar93 = lVar95;
              lVar94 = *plVar100;
              uVar40 = ((undefined8 *)*param_3)[1];
              fVar105 = (float)uVar40;
              fVar106 = (float)((ulong)uVar40 >> 0x20);
              uVar40 = *(undefined8 *)*param_3;
              fVar103 = (float)uVar40;
              fVar104 = (float)((ulong)uVar40 >> 0x20);
              fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
              fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
              fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
              fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
              lVar95 = *plVar99;
              fVar107 = fVar107 * fVar107;
              fVar108 = fVar108 * fVar108;
              fVar109 = fVar109 * fVar109;
              fVar110 = fVar110 * fVar110;
              auVar47._4_4_ = fVar108;
              auVar47._0_4_ = fVar107;
              auVar47._8_4_ = fVar109;
              auVar47._12_4_ = fVar110;
              auVar48._4_4_ = fVar108;
              auVar48._0_4_ = fVar107;
              auVar48._8_4_ = fVar109;
              auVar48._12_4_ = fVar110;
              auVar111 = NEON_ext(auVar47,auVar48,8,1);
              fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
              fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
              fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
              fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
              fVar103 = fVar103 * fVar103;
              fVar104 = fVar104 * fVar104;
              fVar105 = fVar105 * fVar105;
              fVar106 = fVar106 * fVar106;
              auVar8._4_4_ = fVar104;
              auVar8._0_4_ = fVar103;
              auVar8._8_4_ = fVar105;
              auVar8._12_4_ = fVar106;
              auVar9._4_4_ = fVar104;
              auVar9._0_4_ = fVar103;
              auVar9._8_4_ = fVar105;
              auVar9._12_4_ = fVar106;
              auVar112 = NEON_ext(auVar8,auVar9,8,1);
              if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
                  auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) {
                iVar89 = iVar89 + 3;
              }
              else {
                *plVar99 = lVar94;
                iVar89 = iVar89 + 4;
                *plVar100 = lVar95;
              }
            }
          }
        }
      }
LAB_00ec0ca0:
      lVar95 = *plVar99;
      uVar40 = ((undefined8 *)*param_3)[1];
      fVar107 = (float)uVar40;
      fVar108 = (float)((ulong)uVar40 >> 0x20);
      uVar40 = *(undefined8 *)*param_3;
      fVar105 = (float)uVar40;
      fVar106 = (float)((ulong)uVar40 >> 0x20);
      fVar103 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar105;
      fVar104 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar106;
      fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar107;
      fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar108;
      fVar103 = fVar103 * fVar103;
      fVar104 = fVar104 * fVar104;
      fVar109 = fVar109 * fVar109;
      fVar110 = fVar110 * fVar110;
      lVar94 = *plVar93;
      auVar49._4_4_ = fVar104;
      auVar49._0_4_ = fVar103;
      auVar49._8_4_ = fVar109;
      auVar49._12_4_ = fVar110;
      auVar50._4_4_ = fVar104;
      auVar50._0_4_ = fVar103;
      auVar50._8_4_ = fVar109;
      auVar50._12_4_ = fVar110;
      auVar111 = NEON_ext(auVar49,auVar50,8,1);
      fVar109 = *(float *)(lVar94 + 0xb0) - fVar105;
      fVar110 = *(float *)(lVar94 + 0xb4) - fVar106;
      fVar123 = *(float *)(lVar94 + 0xb8) - fVar107;
      fVar124 = *(float *)(lVar94 + 0xbc) - fVar108;
      fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar104;
      auVar114._0_4_ = fVar109 * fVar109;
      auVar114._4_4_ = fVar110 * fVar110;
      auVar114._8_4_ = fVar123 * fVar123;
      auVar114._12_4_ = fVar124 * fVar124;
      auVar111 = NEON_ext(auVar114,auVar114,8,1);
      fVar104 = auVar111._0_4_ + auVar114._0_4_ + auVar111._4_4_ + auVar114._4_4_;
      if (fVar104 <= fVar103) {
        plVar100 = param_2 + -2;
LAB_00ec0d08:
        plVar92 = plVar100;
        if (plVar99 != plVar92) goto code_r0x00ec0d10;
        lVar94 = *plVar97;
        plVar93 = plVar99 + 1;
        fVar104 = *(float *)(lVar94 + 0xb0) - fVar105;
        fVar109 = *(float *)(lVar94 + 0xb4) - fVar106;
        fVar110 = *(float *)(lVar94 + 0xb8) - fVar107;
        fVar123 = *(float *)(lVar94 + 0xbc) - fVar108;
        auVar117._0_4_ = fVar104 * fVar104;
        auVar117._4_4_ = fVar109 * fVar109;
        auVar117._8_4_ = fVar110 * fVar110;
        auVar117._12_4_ = fVar123 * fVar123;
        auVar111 = NEON_ext(auVar117,auVar117,8,1);
        if (auVar111._0_4_ + auVar117._0_4_ + auVar111._4_4_ + auVar117._4_4_ <= fVar103) {
          if (plVar93 == plVar97) {
            return;
          }
          plVar93 = plVar99 + 2;
          while( true ) {
            lVar95 = plVar93[-1];
            fVar104 = *(float *)(lVar95 + 0xb0) - fVar105;
            fVar109 = *(float *)(lVar95 + 0xb4) - fVar106;
            fVar110 = *(float *)(lVar95 + 0xb8) - fVar107;
            fVar123 = *(float *)(lVar95 + 0xbc) - fVar108;
            auVar118._0_4_ = fVar104 * fVar104;
            auVar118._4_4_ = fVar109 * fVar109;
            auVar118._8_4_ = fVar110 * fVar110;
            auVar118._12_4_ = fVar123 * fVar123;
            auVar111 = NEON_ext(auVar118,auVar118,8,1);
            if (fVar103 < auVar111._0_4_ + auVar118._0_4_ + auVar111._4_4_ + auVar118._4_4_) break;
            plVar93 = plVar93 + 1;
            if (param_2 == plVar93) {
              return;
            }
          }
          plVar93[-1] = lVar94;
          *plVar97 = lVar95;
        }
        if (plVar93 == plVar97) {
          return;
        }
        while( true ) {
          uVar40 = ((undefined8 *)*param_3)[1];
          fVar106 = (float)uVar40;
          fVar107 = (float)((ulong)uVar40 >> 0x20);
          uVar40 = *(undefined8 *)*param_3;
          fVar104 = (float)uVar40;
          fVar105 = (float)((ulong)uVar40 >> 0x20);
          uVar87 = *(undefined8 *)(*plVar99 + 0xb8);
          uVar40 = *(undefined8 *)(*plVar99 + 0xb0);
          fVar103 = (float)uVar40 - fVar104;
          fVar108 = (float)((ulong)uVar40 >> 0x20) - fVar105;
          fVar109 = (float)uVar87 - fVar106;
          fVar110 = (float)((ulong)uVar87 >> 0x20) - fVar107;
          fVar103 = fVar103 * fVar103;
          fVar108 = fVar108 * fVar108;
          fVar109 = fVar109 * fVar109;
          fVar110 = fVar110 * fVar110;
          auVar55._4_4_ = fVar108;
          auVar55._0_4_ = fVar103;
          auVar55._8_4_ = fVar109;
          auVar55._12_4_ = fVar110;
          auVar56._4_4_ = fVar108;
          auVar56._0_4_ = fVar103;
          auVar56._8_4_ = fVar109;
          auVar56._12_4_ = fVar110;
          auVar111 = NEON_ext(auVar55,auVar56,8,1);
          fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar108;
          do {
            param_1 = plVar93;
            plVar93 = param_1 + 1;
            lVar94 = *param_1;
            fVar108 = *(float *)(lVar94 + 0xb0) - fVar104;
            fVar109 = *(float *)(lVar94 + 0xb4) - fVar105;
            fVar110 = *(float *)(lVar94 + 0xb8) - fVar106;
            fVar123 = *(float *)(lVar94 + 0xbc) - fVar107;
            auVar119._0_4_ = fVar108 * fVar108;
            auVar119._4_4_ = fVar109 * fVar109;
            auVar119._8_4_ = fVar110 * fVar110;
            auVar119._12_4_ = fVar123 * fVar123;
            auVar111 = NEON_ext(auVar119,auVar119,8,1);
          } while (auVar111._0_4_ + auVar119._0_4_ + auVar111._4_4_ + auVar119._4_4_ <= fVar103);
          do {
            plVar97 = plVar97 + -1;
            lVar95 = *plVar97;
            fVar108 = *(float *)(lVar95 + 0xb0) - fVar104;
            fVar109 = *(float *)(lVar95 + 0xb4) - fVar105;
            fVar110 = *(float *)(lVar95 + 0xb8) - fVar106;
            fVar123 = *(float *)(lVar95 + 0xbc) - fVar107;
            auVar120._0_4_ = fVar108 * fVar108;
            auVar120._4_4_ = fVar109 * fVar109;
            auVar120._8_4_ = fVar110 * fVar110;
            auVar120._12_4_ = fVar123 * fVar123;
            auVar111 = NEON_ext(auVar120,auVar120,8,1);
          } while (fVar103 < auVar111._0_4_ + auVar120._0_4_ + auVar111._4_4_ + auVar120._4_4_);
          if (plVar97 <= param_1) break;
          *param_1 = lVar95;
          *plVar97 = lVar94;
        }
        uVar102 = 4;
        goto LAB_00ec0f98;
      }
      plVar100 = plVar99 + 1;
      plVar92 = plVar97;
      if (plVar100 < plVar97) goto LAB_00ec0d64;
      goto LAB_00ec0cf8;
    }
    lVar94 = plVar99[1];
    lVar95 = plVar99[2];
    uVar40 = ((undefined8 *)*param_3)[1];
    fVar109 = (float)uVar40;
    fVar110 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = *(undefined8 *)*param_3;
    fVar107 = (float)uVar40;
    fVar108 = (float)((ulong)uVar40 >> 0x20);
    lVar96 = *plVar99;
    fVar103 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar107;
    fVar104 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar108;
    fVar105 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar109;
    fVar106 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar110;
    fVar103 = fVar103 * fVar103;
    fVar104 = fVar104 * fVar104;
    fVar105 = fVar105 * fVar105;
    fVar106 = fVar106 * fVar106;
    auVar16._4_4_ = fVar104;
    auVar16._0_4_ = fVar103;
    auVar16._8_4_ = fVar105;
    auVar16._12_4_ = fVar106;
    auVar17._4_4_ = fVar104;
    auVar17._0_4_ = fVar103;
    auVar17._8_4_ = fVar105;
    auVar17._12_4_ = fVar106;
    auVar111 = NEON_ext(auVar16,auVar17,8,1);
    fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar104;
    fVar104 = *(float *)(lVar96 + 0xb0) - fVar107;
    fVar105 = *(float *)(lVar96 + 0xb4) - fVar108;
    fVar106 = *(float *)(lVar96 + 0xb8) - fVar109;
    fVar123 = *(float *)(lVar96 + 0xbc) - fVar110;
    auVar121._0_4_ = fVar104 * fVar104;
    auVar121._4_4_ = fVar105 * fVar105;
    auVar121._8_4_ = fVar106 * fVar106;
    auVar121._12_4_ = fVar123 * fVar123;
    auVar111 = NEON_ext(auVar121,auVar121,8,1);
    fVar107 = *(float *)(lVar95 + 0xb0) - fVar107;
    fVar108 = *(float *)(lVar95 + 0xb4) - fVar108;
    fVar109 = *(float *)(lVar95 + 0xb8) - fVar109;
    fVar110 = *(float *)(lVar95 + 0xbc) - fVar110;
    fVar107 = fVar107 * fVar107;
    fVar108 = fVar108 * fVar108;
    fVar109 = fVar109 * fVar109;
    fVar110 = fVar110 * fVar110;
    auVar63._4_4_ = fVar108;
    auVar63._0_4_ = fVar107;
    auVar63._8_4_ = fVar109;
    auVar63._12_4_ = fVar110;
    auVar64._4_4_ = fVar108;
    auVar64._0_4_ = fVar107;
    auVar64._8_4_ = fVar109;
    auVar64._12_4_ = fVar110;
    auVar112 = NEON_ext(auVar63,auVar64,8,1);
    fVar104 = auVar112._0_4_ + fVar107 + auVar112._4_4_ + fVar108;
    lVar98 = lVar95;
    if (auVar111._0_4_ + auVar121._0_4_ + auVar111._4_4_ + auVar121._4_4_ <= fVar103) {
      if (fVar104 < fVar103) {
        plVar99[1] = lVar95;
        plVar99[2] = lVar94;
        uVar40 = ((undefined8 *)*param_3)[1];
        fVar105 = (float)uVar40;
        fVar106 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = *(undefined8 *)*param_3;
        fVar103 = (float)uVar40;
        fVar104 = (float)((ulong)uVar40 >> 0x20);
        fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
        fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
        fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
        fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
        fVar107 = fVar107 * fVar107;
        fVar108 = fVar108 * fVar108;
        fVar109 = fVar109 * fVar109;
        fVar110 = fVar110 * fVar110;
        auVar71._4_4_ = fVar108;
        auVar71._0_4_ = fVar107;
        auVar71._8_4_ = fVar109;
        auVar71._12_4_ = fVar110;
        auVar72._4_4_ = fVar108;
        auVar72._0_4_ = fVar107;
        auVar72._8_4_ = fVar109;
        auVar72._12_4_ = fVar110;
        auVar111 = NEON_ext(auVar71,auVar72,8,1);
        fVar103 = *(float *)(lVar96 + 0xb0) - fVar103;
        fVar104 = *(float *)(lVar96 + 0xb4) - fVar104;
        fVar105 = *(float *)(lVar96 + 0xb8) - fVar105;
        fVar106 = *(float *)(lVar96 + 0xbc) - fVar106;
        fVar103 = fVar103 * fVar103;
        fVar104 = fVar104 * fVar104;
        fVar105 = fVar105 * fVar105;
        fVar106 = fVar106 * fVar106;
        auVar24._4_4_ = fVar104;
        auVar24._0_4_ = fVar103;
        auVar24._8_4_ = fVar105;
        auVar24._12_4_ = fVar106;
        auVar25._4_4_ = fVar104;
        auVar25._0_4_ = fVar103;
        auVar25._8_4_ = fVar105;
        auVar25._12_4_ = fVar106;
        auVar112 = NEON_ext(auVar24,auVar25,8,1);
        lVar98 = lVar94;
        if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
            auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
          *plVar99 = lVar95;
          plVar99[1] = lVar96;
        }
      }
    }
    else {
      if (fVar103 <= fVar104) {
        *plVar99 = lVar94;
        plVar99[1] = lVar96;
        uVar40 = ((undefined8 *)*param_3)[1];
        fVar105 = (float)uVar40;
        fVar106 = (float)((ulong)uVar40 >> 0x20);
        uVar40 = *(undefined8 *)*param_3;
        fVar103 = (float)uVar40;
        fVar104 = (float)((ulong)uVar40 >> 0x20);
        fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
        fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
        fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
        fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
        fVar107 = fVar107 * fVar107;
        fVar108 = fVar108 * fVar108;
        fVar109 = fVar109 * fVar109;
        fVar110 = fVar110 * fVar110;
        auVar69._4_4_ = fVar108;
        auVar69._0_4_ = fVar107;
        auVar69._8_4_ = fVar109;
        auVar69._12_4_ = fVar110;
        auVar70._4_4_ = fVar108;
        auVar70._0_4_ = fVar107;
        auVar70._8_4_ = fVar109;
        auVar70._12_4_ = fVar110;
        auVar111 = NEON_ext(auVar69,auVar70,8,1);
        fVar103 = *(float *)(lVar96 + 0xb0) - fVar103;
        fVar104 = *(float *)(lVar96 + 0xb4) - fVar104;
        fVar105 = *(float *)(lVar96 + 0xb8) - fVar105;
        fVar106 = *(float *)(lVar96 + 0xbc) - fVar106;
        fVar103 = fVar103 * fVar103;
        fVar104 = fVar104 * fVar104;
        fVar105 = fVar105 * fVar105;
        fVar106 = fVar106 * fVar106;
        auVar22._4_4_ = fVar104;
        auVar22._0_4_ = fVar103;
        auVar22._8_4_ = fVar105;
        auVar22._12_4_ = fVar106;
        auVar23._4_4_ = fVar104;
        auVar23._0_4_ = fVar103;
        auVar23._8_4_ = fVar105;
        auVar23._12_4_ = fVar106;
        auVar112 = NEON_ext(auVar22,auVar23,8,1);
        if (auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104 <=
            auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108) goto joined_r0x00ec1170;
        plVar99[1] = lVar95;
      }
      else {
        *plVar99 = lVar95;
      }
      plVar99[2] = lVar96;
      lVar98 = lVar96;
    }
joined_r0x00ec1170:
    if (plVar99 + 3 == param_2) {
      return;
    }
    lVar94 = 0;
    plVar97 = plVar99 + 3;
    goto LAB_00ec1188;
  }
  uVar40 = ((undefined8 *)*param_3)[1];
  fVar105 = (float)uVar40;
  fVar106 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = *(undefined8 *)*param_3;
  fVar103 = (float)uVar40;
  fVar104 = (float)((ulong)uVar40 >> 0x20);
  fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
  fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
  fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
  fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
  lVar95 = *plVar99;
  fVar107 = fVar107 * fVar107;
  fVar108 = fVar108 * fVar108;
  fVar109 = fVar109 * fVar109;
  fVar110 = fVar110 * fVar110;
  auVar79._4_4_ = fVar108;
  auVar79._0_4_ = fVar107;
  auVar79._8_4_ = fVar109;
  auVar79._12_4_ = fVar110;
  auVar80._4_4_ = fVar108;
  auVar80._0_4_ = fVar107;
  auVar80._8_4_ = fVar109;
  auVar80._12_4_ = fVar110;
  auVar111 = NEON_ext(auVar79,auVar80,8,1);
  fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
  fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
  fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
  fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
  fVar103 = fVar103 * fVar103;
  fVar104 = fVar104 * fVar104;
  fVar105 = fVar105 * fVar105;
  fVar106 = fVar106 * fVar106;
  auVar32._4_4_ = fVar104;
  auVar32._0_4_ = fVar103;
  auVar32._8_4_ = fVar105;
  auVar32._12_4_ = fVar106;
  auVar33._4_4_ = fVar104;
  auVar33._0_4_ = fVar103;
  auVar33._8_4_ = fVar105;
  auVar33._12_4_ = fVar106;
  auVar112 = NEON_ext(auVar32,auVar33,8,1);
  if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
      auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
    *plVar99 = lVar94;
    plVar99[1] = lVar95;
    return;
  }
  return;
code_r0x00ec0d10:
  lVar94 = *plVar92;
  fVar109 = *(float *)(lVar94 + 0xb0) - fVar105;
  fVar110 = *(float *)(lVar94 + 0xb4) - fVar106;
  fVar123 = *(float *)(lVar94 + 0xb8) - fVar107;
  fVar124 = *(float *)(lVar94 + 0xbc) - fVar108;
  auVar125._0_4_ = fVar109 * fVar109;
  auVar125._4_4_ = fVar110 * fVar110;
  auVar125._8_4_ = fVar123 * fVar123;
  auVar125._12_4_ = fVar124 * fVar124;
  auVar111 = NEON_ext(auVar125,auVar125,8,1);
  plVar100 = plVar92 + -1;
  if (auVar111._0_4_ + auVar125._0_4_ + auVar111._4_4_ + auVar125._4_4_ < fVar104)
  goto code_r0x00ec0d34;
  goto LAB_00ec0d08;
code_r0x00ec0d34:
  *plVar99 = lVar94;
  iVar89 = iVar89 + 1;
  *plVar92 = lVar95;
  plVar100 = plVar99 + 1;
  if (plVar100 < plVar92) {
LAB_00ec0d64:
    while( true ) {
      uVar40 = ((undefined8 *)*param_3)[1];
      fVar106 = (float)uVar40;
      fVar107 = (float)((ulong)uVar40 >> 0x20);
      uVar40 = *(undefined8 *)*param_3;
      fVar104 = (float)uVar40;
      fVar105 = (float)((ulong)uVar40 >> 0x20);
      uVar87 = *(undefined8 *)(*plVar93 + 0xb8);
      uVar40 = *(undefined8 *)(*plVar93 + 0xb0);
      fVar103 = (float)uVar40 - fVar104;
      fVar108 = (float)((ulong)uVar40 >> 0x20) - fVar105;
      fVar109 = (float)uVar87 - fVar106;
      fVar110 = (float)((ulong)uVar87 >> 0x20) - fVar107;
      fVar103 = fVar103 * fVar103;
      fVar108 = fVar108 * fVar108;
      fVar109 = fVar109 * fVar109;
      fVar110 = fVar110 * fVar110;
      auVar53._4_4_ = fVar108;
      auVar53._0_4_ = fVar103;
      auVar53._8_4_ = fVar109;
      auVar53._12_4_ = fVar110;
      auVar54._4_4_ = fVar108;
      auVar54._0_4_ = fVar103;
      auVar54._8_4_ = fVar109;
      auVar54._12_4_ = fVar110;
      auVar111 = NEON_ext(auVar53,auVar54,8,1);
      fVar103 = auVar111._0_4_ + fVar103 + auVar111._4_4_ + fVar108;
      plVar101 = plVar100 + -1;
      do {
        plVar100 = plVar101;
        plVar101 = plVar100 + 1;
        lVar94 = *plVar101;
        fVar108 = *(float *)(lVar94 + 0xb0) - fVar104;
        fVar109 = *(float *)(lVar94 + 0xb4) - fVar105;
        fVar110 = *(float *)(lVar94 + 0xb8) - fVar106;
        fVar123 = *(float *)(lVar94 + 0xbc) - fVar107;
        auVar115._0_4_ = fVar108 * fVar108;
        auVar115._4_4_ = fVar109 * fVar109;
        auVar115._8_4_ = fVar110 * fVar110;
        auVar115._12_4_ = fVar123 * fVar123;
        auVar111 = NEON_ext(auVar115,auVar115,8,1);
      } while (auVar111._0_4_ + auVar115._0_4_ + auVar111._4_4_ + auVar115._4_4_ < fVar103);
      plVar100 = plVar100 + 2;
      do {
        plVar92 = plVar92 + -1;
        lVar95 = *plVar92;
        fVar108 = *(float *)(lVar95 + 0xb0) - fVar104;
        fVar109 = *(float *)(lVar95 + 0xb4) - fVar105;
        fVar110 = *(float *)(lVar95 + 0xb8) - fVar106;
        fVar123 = *(float *)(lVar95 + 0xbc) - fVar107;
        auVar116._0_4_ = fVar108 * fVar108;
        auVar116._4_4_ = fVar109 * fVar109;
        auVar116._8_4_ = fVar110 * fVar110;
        auVar116._12_4_ = fVar123 * fVar123;
        auVar111 = NEON_ext(auVar116,auVar116,8,1);
      } while (fVar103 <= auVar111._0_4_ + auVar116._0_4_ + auVar111._4_4_ + auVar116._4_4_);
      if (plVar92 < plVar101) break;
      *plVar101 = lVar95;
      *plVar92 = lVar94;
      iVar89 = iVar89 + 1;
      plVar1 = plVar92;
      if (plVar93 != plVar101) {
        plVar1 = plVar93;
      }
      plVar93 = plVar1;
    }
    if (plVar101 == plVar93) goto LAB_00ec0e40;
  }
  else {
LAB_00ec0cf8:
    plVar101 = plVar99 + 1;
    if (plVar101 == plVar93) goto LAB_00ec0e40;
  }
  lVar94 = *plVar93;
  uVar40 = ((undefined8 *)*param_3)[1];
  fVar105 = (float)uVar40;
  fVar106 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = *(undefined8 *)*param_3;
  fVar103 = (float)uVar40;
  fVar104 = (float)((ulong)uVar40 >> 0x20);
  fVar107 = (float)*(undefined8 *)(lVar94 + 0xb0) - fVar103;
  fVar108 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb0) >> 0x20) - fVar104;
  fVar109 = (float)*(undefined8 *)(lVar94 + 0xb8) - fVar105;
  fVar110 = (float)((ulong)*(undefined8 *)(lVar94 + 0xb8) >> 0x20) - fVar106;
  fVar107 = fVar107 * fVar107;
  fVar108 = fVar108 * fVar108;
  fVar109 = fVar109 * fVar109;
  fVar110 = fVar110 * fVar110;
  lVar95 = *plVar101;
  auVar51._4_4_ = fVar108;
  auVar51._0_4_ = fVar107;
  auVar51._8_4_ = fVar109;
  auVar51._12_4_ = fVar110;
  auVar52._4_4_ = fVar108;
  auVar52._0_4_ = fVar107;
  auVar52._8_4_ = fVar109;
  auVar52._12_4_ = fVar110;
  auVar111 = NEON_ext(auVar51,auVar52,8,1);
  fVar103 = *(float *)(lVar95 + 0xb0) - fVar103;
  fVar104 = *(float *)(lVar95 + 0xb4) - fVar104;
  fVar105 = *(float *)(lVar95 + 0xb8) - fVar105;
  fVar106 = *(float *)(lVar95 + 0xbc) - fVar106;
  fVar103 = fVar103 * fVar103;
  fVar104 = fVar104 * fVar104;
  fVar105 = fVar105 * fVar105;
  fVar106 = fVar106 * fVar106;
  auVar10._4_4_ = fVar104;
  auVar10._0_4_ = fVar103;
  auVar10._8_4_ = fVar105;
  auVar10._12_4_ = fVar106;
  auVar11._4_4_ = fVar104;
  auVar11._0_4_ = fVar103;
  auVar11._8_4_ = fVar105;
  auVar11._12_4_ = fVar106;
  auVar112 = NEON_ext(auVar10,auVar11,8,1);
  if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
      auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
    iVar89 = iVar89 + 1;
    *plVar101 = lVar94;
    *plVar93 = lVar95;
  }
LAB_00ec0e40:
  if (iVar89 == 0) {
    uVar91 = FUN_00ec1770(plVar99,plVar101,param_3);
    uVar90 = FUN_00ec1770(plVar101 + 1,param_2,param_3);
    if ((uVar90 & 1) != 0) goto LAB_00ec0fac;
    param_1 = plVar101 + 1;
    if ((uVar91 & 1) != 0) goto LAB_00ec098c;
  }
  if ((long)param_2 - (long)plVar101 <= (long)plVar101 - (long)plVar99) {
    FUN_00ec0920(plVar101 + 1,param_2,param_3);
    param_1 = plVar99;
    param_2 = plVar101;
    goto LAB_00ec0968;
  }
  FUN_00ec0920(plVar99,plVar101,param_3);
  param_1 = plVar101 + 1;
  goto LAB_00ec098c;
LAB_00ec0fac:
  bVar88 = (uVar91 & 1) == 0;
  if (bVar88) {
    param_2 = plVar101;
  }
  uVar102 = 1;
  if (bVar88) {
    uVar102 = 2;
  }
  param_1 = plVar99;
  if (4 < uVar102) {
    return;
  }
LAB_00ec0f98:
  if ((1 << (ulong)uVar102 & 0x15U) == 0) {
    return;
  }
  goto LAB_00ec0968;
LAB_00ec1188:
  lVar95 = *plVar97;
  uVar40 = ((undefined8 *)*param_3)[1];
  fVar105 = (float)uVar40;
  fVar106 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = *(undefined8 *)*param_3;
  fVar103 = (float)uVar40;
  fVar104 = (float)((ulong)uVar40 >> 0x20);
  fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
  fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
  fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
  fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
  fVar107 = fVar107 * fVar107;
  fVar108 = fVar108 * fVar108;
  fVar109 = fVar109 * fVar109;
  fVar110 = fVar110 * fVar110;
  auVar65._4_4_ = fVar108;
  auVar65._0_4_ = fVar107;
  auVar65._8_4_ = fVar109;
  auVar65._12_4_ = fVar110;
  auVar66._4_4_ = fVar108;
  auVar66._0_4_ = fVar107;
  auVar66._8_4_ = fVar109;
  auVar66._12_4_ = fVar110;
  auVar111 = NEON_ext(auVar65,auVar66,8,1);
  fVar103 = *(float *)(lVar98 + 0xb0) - fVar103;
  fVar104 = *(float *)(lVar98 + 0xb4) - fVar104;
  fVar105 = *(float *)(lVar98 + 0xb8) - fVar105;
  fVar106 = *(float *)(lVar98 + 0xbc) - fVar106;
  fVar103 = fVar103 * fVar103;
  fVar104 = fVar104 * fVar104;
  fVar105 = fVar105 * fVar105;
  fVar106 = fVar106 * fVar106;
  auVar18._4_4_ = fVar104;
  auVar18._0_4_ = fVar103;
  auVar18._8_4_ = fVar105;
  auVar18._12_4_ = fVar106;
  auVar19._4_4_ = fVar104;
  auVar19._0_4_ = fVar103;
  auVar19._8_4_ = fVar105;
  auVar19._12_4_ = fVar106;
  auVar112 = NEON_ext(auVar18,auVar19,8,1);
  if (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
      auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104) {
    lVar98 = lVar94;
    do {
      lVar96 = lVar98;
      *(undefined8 *)((long)plVar99 + lVar96 + 0x18) =
           *(undefined8 *)((long)plVar99 + lVar96 + 0x10);
      if (lVar96 == -0x10) {
        plVar93 = plVar99;
        goto LAB_00ec123c;
      }
      lVar98 = *(long *)((long)plVar99 + lVar96 + 8);
      uVar40 = ((undefined8 *)*param_3)[1];
      fVar105 = (float)uVar40;
      fVar106 = (float)((ulong)uVar40 >> 0x20);
      uVar40 = *(undefined8 *)*param_3;
      fVar103 = (float)uVar40;
      fVar104 = (float)((ulong)uVar40 >> 0x20);
      fVar107 = (float)*(undefined8 *)(lVar95 + 0xb0) - fVar103;
      fVar108 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb0) >> 0x20) - fVar104;
      fVar109 = (float)*(undefined8 *)(lVar95 + 0xb8) - fVar105;
      fVar110 = (float)((ulong)*(undefined8 *)(lVar95 + 0xb8) >> 0x20) - fVar106;
      fVar103 = *(float *)(lVar98 + 0xb0) - fVar103;
      fVar104 = *(float *)(lVar98 + 0xb4) - fVar104;
      fVar105 = *(float *)(lVar98 + 0xb8) - fVar105;
      fVar106 = *(float *)(lVar98 + 0xbc) - fVar106;
      fVar107 = fVar107 * fVar107;
      fVar108 = fVar108 * fVar108;
      fVar109 = fVar109 * fVar109;
      fVar110 = fVar110 * fVar110;
      auVar67._4_4_ = fVar108;
      auVar67._0_4_ = fVar107;
      auVar67._8_4_ = fVar109;
      auVar67._12_4_ = fVar110;
      auVar68._4_4_ = fVar108;
      auVar68._0_4_ = fVar107;
      auVar68._8_4_ = fVar109;
      auVar68._12_4_ = fVar110;
      auVar111 = NEON_ext(auVar67,auVar68,8,1);
      fVar103 = fVar103 * fVar103;
      fVar104 = fVar104 * fVar104;
      fVar105 = fVar105 * fVar105;
      fVar106 = fVar106 * fVar106;
      auVar20._4_4_ = fVar104;
      auVar20._0_4_ = fVar103;
      auVar20._8_4_ = fVar105;
      auVar20._12_4_ = fVar106;
      auVar21._4_4_ = fVar104;
      auVar21._0_4_ = fVar103;
      auVar21._8_4_ = fVar105;
      auVar21._12_4_ = fVar106;
      auVar112 = NEON_ext(auVar20,auVar21,8,1);
      lVar98 = lVar96 + -8;
    } while (auVar111._0_4_ + fVar107 + auVar111._4_4_ + fVar108 <
             auVar112._0_4_ + fVar103 + auVar112._4_4_ + fVar104);
    plVar93 = (long *)((long)plVar99 + lVar96 + 0x10);
LAB_00ec123c:
    *plVar93 = lVar95;
  }
  if (plVar97 + 1 == param_2) {
switchD_00ec0fd8_caseD_0:
    return;
  }
  lVar98 = *plVar97;
  lVar94 = lVar94 + 8;
  plVar97 = plVar97 + 1;
  goto LAB_00ec1188;
}


