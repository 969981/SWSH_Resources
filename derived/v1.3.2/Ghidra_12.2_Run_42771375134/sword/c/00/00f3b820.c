/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3b820; name: FUN_00f3b820
 */


void FUN_00f3b820(long *param_1,long *param_2,undefined8 *param_3)

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
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  undefined8 uVar66;
  undefined8 uVar67;
  bool bVar68;
  int iVar69;
  ulong uVar70;
  ulong uVar71;
  long *plVar72;
  long *plVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long *plVar77;
  long *plVar78;
  long *plVar79;
  long *plVar80;
  uint uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar101;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar102;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  
LAB_00f3b868:
  plVar77 = param_2 + -1;
LAB_00f3b88c:
  plVar78 = param_1;
  lVar74 = (long)param_2 - (long)plVar78;
  uVar71 = lVar74 >> 3;
  switch(uVar71) {
  case 0:
  case 1:
    goto switchD_00f3bfe4_caseD_0;
  case 2:
    lVar74 = param_2[-1];
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar88 = (float)uVar30;
    fVar89 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar86 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    lVar75 = *plVar78;
    fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
    fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
    fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
    fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
    fVar82 = fVar82 * fVar82;
    fVar83 = fVar83 * fVar83;
    fVar84 = fVar84 * fVar84;
    fVar85 = fVar85 * fVar85;
    auVar28._4_4_ = fVar83;
    auVar28._0_4_ = fVar82;
    auVar28._8_4_ = fVar84;
    auVar28._12_4_ = fVar85;
    auVar29._4_4_ = fVar83;
    auVar29._0_4_ = fVar82;
    auVar29._8_4_ = fVar84;
    auVar29._12_4_ = fVar85;
    auVar90 = NEON_ext(auVar28,auVar29,8,1);
    fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
    fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
    fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
    fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar64._4_4_ = fVar87;
    auVar64._0_4_ = fVar86;
    auVar64._8_4_ = fVar88;
    auVar64._12_4_ = fVar89;
    auVar65._4_4_ = fVar87;
    auVar65._0_4_ = fVar86;
    auVar65._8_4_ = fVar88;
    auVar65._12_4_ = fVar89;
    auVar91 = NEON_ext(auVar64,auVar65,8,1);
    if (SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87) <
        SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83)) {
      *plVar78 = lVar74;
      param_2[-1] = lVar75;
      return;
    }
    return;
  case 3:
    lVar75 = plVar78[1];
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar88 = (float)uVar30;
    fVar89 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar86 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    lVar74 = *plVar78;
    fVar82 = (float)*(undefined8 *)(lVar75 + 0x10) - fVar86;
    fVar83 = (float)((ulong)*(undefined8 *)(lVar75 + 0x10) >> 0x20) - fVar87;
    fVar84 = (float)*(undefined8 *)(lVar75 + 0x18) - fVar88;
    fVar85 = (float)((ulong)*(undefined8 *)(lVar75 + 0x18) >> 0x20) - fVar89;
    lVar76 = param_2[-1];
    fVar82 = fVar82 * fVar82;
    fVar83 = fVar83 * fVar83;
    fVar84 = fVar84 * fVar84;
    fVar85 = fVar85 * fVar85;
    auVar24._4_4_ = fVar83;
    auVar24._0_4_ = fVar82;
    auVar24._8_4_ = fVar84;
    auVar24._12_4_ = fVar85;
    auVar25._4_4_ = fVar83;
    auVar25._0_4_ = fVar82;
    auVar25._8_4_ = fVar84;
    auVar25._12_4_ = fVar85;
    auVar90 = NEON_ext(auVar24,auVar25,8,1);
    fVar84 = *(float *)(lVar74 + 0x10) - fVar86;
    fVar85 = *(float *)(lVar74 + 0x14) - fVar87;
    fVar101 = *(float *)(lVar74 + 0x18) - fVar88;
    fVar102 = *(float *)(lVar74 + 0x1c) - fVar89;
    auVar100._0_4_ = fVar84 * fVar84;
    auVar100._4_4_ = fVar85 * fVar85;
    auVar100._8_4_ = fVar101 * fVar101;
    auVar100._12_4_ = fVar102 * fVar102;
    auVar91 = NEON_ext(auVar100,auVar100,8,1);
    fVar86 = *(float *)(lVar76 + 0x10) - fVar86;
    fVar87 = *(float *)(lVar76 + 0x14) - fVar87;
    fVar88 = *(float *)(lVar76 + 0x18) - fVar88;
    fVar89 = *(float *)(lVar76 + 0x1c) - fVar89;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar60._4_4_ = fVar87;
    auVar60._0_4_ = fVar86;
    auVar60._8_4_ = fVar88;
    auVar60._12_4_ = fVar89;
    auVar61._4_4_ = fVar87;
    auVar61._0_4_ = fVar86;
    auVar61._8_4_ = fVar88;
    auVar61._12_4_ = fVar89;
    auVar103 = NEON_ext(auVar60,auVar61,8,1);
    fVar82 = SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83);
    fVar83 = SQRT(auVar103._0_4_ + fVar86 + auVar103._4_4_ + fVar87);
    if (SQRT(auVar91._0_4_ + auVar100._0_4_ + auVar91._4_4_ + auVar100._4_4_) < fVar82) {
      if (fVar83 <= fVar82) {
        *plVar78 = lVar75;
        plVar78[1] = lVar74;
        lVar75 = param_2[-1];
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar88 = (float)uVar30;
        fVar89 = (float)((ulong)uVar30 >> 0x20);
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar86 = (float)uVar30;
        fVar87 = (float)((ulong)uVar30 >> 0x20);
        fVar82 = (float)*(undefined8 *)(lVar75 + 0x10) - fVar86;
        fVar83 = (float)((ulong)*(undefined8 *)(lVar75 + 0x10) >> 0x20) - fVar87;
        fVar84 = (float)*(undefined8 *)(lVar75 + 0x18) - fVar88;
        fVar85 = (float)((ulong)*(undefined8 *)(lVar75 + 0x18) >> 0x20) - fVar89;
        fVar82 = fVar82 * fVar82;
        fVar83 = fVar83 * fVar83;
        fVar84 = fVar84 * fVar84;
        fVar85 = fVar85 * fVar85;
        auVar26._4_4_ = fVar83;
        auVar26._0_4_ = fVar82;
        auVar26._8_4_ = fVar84;
        auVar26._12_4_ = fVar85;
        auVar27._4_4_ = fVar83;
        auVar27._0_4_ = fVar82;
        auVar27._8_4_ = fVar84;
        auVar27._12_4_ = fVar85;
        auVar90 = NEON_ext(auVar26,auVar27,8,1);
        fVar86 = *(float *)(lVar74 + 0x10) - fVar86;
        fVar87 = *(float *)(lVar74 + 0x14) - fVar87;
        fVar88 = *(float *)(lVar74 + 0x18) - fVar88;
        fVar89 = *(float *)(lVar74 + 0x1c) - fVar89;
        fVar86 = fVar86 * fVar86;
        fVar87 = fVar87 * fVar87;
        fVar88 = fVar88 * fVar88;
        fVar89 = fVar89 * fVar89;
        auVar62._4_4_ = fVar87;
        auVar62._0_4_ = fVar86;
        auVar62._8_4_ = fVar88;
        auVar62._12_4_ = fVar89;
        auVar63._4_4_ = fVar87;
        auVar63._0_4_ = fVar86;
        auVar63._8_4_ = fVar88;
        auVar63._12_4_ = fVar89;
        auVar91 = NEON_ext(auVar62,auVar63,8,1);
        if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
            SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
          return;
        }
        plVar78[1] = lVar75;
      }
      else {
        *plVar78 = lVar76;
      }
      param_2[-1] = lVar74;
      return;
    }
    if (fVar83 <= fVar82) {
      return;
    }
    plVar78[1] = lVar76;
    param_2[-1] = lVar75;
    lVar74 = plVar78[1];
    break;
  case 4:
    FUN_00f3c380(plVar78,plVar78 + 1,plVar78 + 2,plVar77,param_3);
    return;
  case 5:
    plVar77 = plVar78 + 2;
    plVar73 = plVar78 + 3;
    FUN_00f3c380(plVar78,plVar78 + 1,plVar77,plVar73,param_3);
    lVar74 = param_2[-1];
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar88 = (float)uVar30;
    fVar89 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar86 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    lVar75 = plVar78[3];
    fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
    fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
    fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
    fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
    fVar82 = fVar82 * fVar82;
    fVar83 = fVar83 * fVar83;
    fVar84 = fVar84 * fVar84;
    fVar85 = fVar85 * fVar85;
    auVar16._4_4_ = fVar83;
    auVar16._0_4_ = fVar82;
    auVar16._8_4_ = fVar84;
    auVar16._12_4_ = fVar85;
    auVar17._4_4_ = fVar83;
    auVar17._0_4_ = fVar82;
    auVar17._8_4_ = fVar84;
    auVar17._12_4_ = fVar85;
    auVar90 = NEON_ext(auVar16,auVar17,8,1);
    fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
    fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
    fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
    fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar52._4_4_ = fVar87;
    auVar52._0_4_ = fVar86;
    auVar52._8_4_ = fVar88;
    auVar52._12_4_ = fVar89;
    auVar53._4_4_ = fVar87;
    auVar53._0_4_ = fVar86;
    auVar53._8_4_ = fVar88;
    auVar53._12_4_ = fVar89;
    auVar91 = NEON_ext(auVar52,auVar53,8,1);
    if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
        SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
      return;
    }
    *plVar73 = lVar74;
    param_2[-1] = lVar75;
    lVar74 = *plVar73;
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar88 = (float)uVar30;
    fVar89 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar86 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    lVar75 = *plVar77;
    fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
    fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
    fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
    fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
    fVar82 = fVar82 * fVar82;
    fVar83 = fVar83 * fVar83;
    fVar84 = fVar84 * fVar84;
    fVar85 = fVar85 * fVar85;
    auVar18._4_4_ = fVar83;
    auVar18._0_4_ = fVar82;
    auVar18._8_4_ = fVar84;
    auVar18._12_4_ = fVar85;
    auVar19._4_4_ = fVar83;
    auVar19._0_4_ = fVar82;
    auVar19._8_4_ = fVar84;
    auVar19._12_4_ = fVar85;
    auVar90 = NEON_ext(auVar18,auVar19,8,1);
    fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
    fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
    fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
    fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar54._4_4_ = fVar87;
    auVar54._0_4_ = fVar86;
    auVar54._8_4_ = fVar88;
    auVar54._12_4_ = fVar89;
    auVar55._4_4_ = fVar87;
    auVar55._0_4_ = fVar86;
    auVar55._8_4_ = fVar88;
    auVar55._12_4_ = fVar89;
    auVar91 = NEON_ext(auVar54,auVar55,8,1);
    if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
        SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
      return;
    }
    *plVar77 = lVar74;
    *plVar73 = lVar75;
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar88 = (float)uVar30;
    fVar89 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar86 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    lVar75 = plVar78[1];
    fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
    fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
    fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
    fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
    fVar82 = fVar82 * fVar82;
    fVar83 = fVar83 * fVar83;
    fVar84 = fVar84 * fVar84;
    fVar85 = fVar85 * fVar85;
    auVar20._4_4_ = fVar83;
    auVar20._0_4_ = fVar82;
    auVar20._8_4_ = fVar84;
    auVar20._12_4_ = fVar85;
    auVar21._4_4_ = fVar83;
    auVar21._0_4_ = fVar82;
    auVar21._8_4_ = fVar84;
    auVar21._12_4_ = fVar85;
    auVar90 = NEON_ext(auVar20,auVar21,8,1);
    fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
    fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
    fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
    fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar56._4_4_ = fVar87;
    auVar56._0_4_ = fVar86;
    auVar56._8_4_ = fVar88;
    auVar56._12_4_ = fVar89;
    auVar57._4_4_ = fVar87;
    auVar57._0_4_ = fVar86;
    auVar57._8_4_ = fVar88;
    auVar57._12_4_ = fVar89;
    auVar91 = NEON_ext(auVar56,auVar57,8,1);
    if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
        SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
      return;
    }
    plVar78[1] = lVar74;
    plVar78[2] = lVar75;
    break;
  default:
    if (lVar74 < 0xf8) {
      FUN_00f3c690(plVar78,param_2,param_3);
      return;
    }
    uVar70 = uVar71;
    if ((long)uVar71 < 0) {
      uVar70 = uVar71 + 1;
    }
    plVar73 = (long *)((long)plVar78 + (uVar70 & 0x3ffffffffffffffe) * 4);
    if (lVar74 < 0x1f39) {
      lVar75 = *plVar73;
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
      fVar88 = (float)uVar30;
      fVar89 = (float)((ulong)uVar30 >> 0x20);
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
      fVar86 = (float)uVar30;
      fVar87 = (float)((ulong)uVar30 >> 0x20);
      lVar74 = *plVar78;
      fVar82 = (float)*(undefined8 *)(lVar75 + 0x10) - fVar86;
      fVar83 = (float)((ulong)*(undefined8 *)(lVar75 + 0x10) >> 0x20) - fVar87;
      fVar84 = (float)*(undefined8 *)(lVar75 + 0x18) - fVar88;
      fVar85 = (float)((ulong)*(undefined8 *)(lVar75 + 0x18) >> 0x20) - fVar89;
      lVar76 = *plVar77;
      fVar82 = fVar82 * fVar82;
      fVar83 = fVar83 * fVar83;
      fVar84 = fVar84 * fVar84;
      fVar85 = fVar85 * fVar85;
      auVar90._4_4_ = fVar83;
      auVar90._0_4_ = fVar82;
      auVar90._8_4_ = fVar84;
      auVar90._12_4_ = fVar85;
      auVar91._4_4_ = fVar83;
      auVar91._0_4_ = fVar82;
      auVar91._8_4_ = fVar84;
      auVar91._12_4_ = fVar85;
      auVar90 = NEON_ext(auVar90,auVar91,8,1);
      fVar84 = *(float *)(lVar74 + 0x10) - fVar86;
      fVar85 = *(float *)(lVar74 + 0x14) - fVar87;
      fVar101 = *(float *)(lVar74 + 0x18) - fVar88;
      fVar102 = *(float *)(lVar74 + 0x1c) - fVar89;
      auVar92._0_4_ = fVar84 * fVar84;
      auVar92._4_4_ = fVar85 * fVar85;
      auVar92._8_4_ = fVar101 * fVar101;
      auVar92._12_4_ = fVar102 * fVar102;
      auVar91 = NEON_ext(auVar92,auVar92,8,1);
      fVar86 = *(float *)(lVar76 + 0x10) - fVar86;
      fVar87 = *(float *)(lVar76 + 0x14) - fVar87;
      fVar88 = *(float *)(lVar76 + 0x18) - fVar88;
      fVar89 = *(float *)(lVar76 + 0x1c) - fVar89;
      fVar86 = fVar86 * fVar86;
      fVar87 = fVar87 * fVar87;
      fVar88 = fVar88 * fVar88;
      fVar89 = fVar89 * fVar89;
      auVar103._4_4_ = fVar87;
      auVar103._0_4_ = fVar86;
      auVar103._8_4_ = fVar88;
      auVar103._12_4_ = fVar89;
      auVar47._4_4_ = fVar87;
      auVar47._0_4_ = fVar86;
      auVar47._8_4_ = fVar88;
      auVar47._12_4_ = fVar89;
      auVar103 = NEON_ext(auVar103,auVar47,8,1);
      fVar82 = SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83);
      fVar83 = SQRT(auVar103._0_4_ + fVar86 + auVar103._4_4_ + fVar87);
      if (fVar82 <= SQRT(auVar91._0_4_ + auVar92._0_4_ + auVar91._4_4_ + auVar92._4_4_)) {
        if (fVar83 <= fVar82) {
          iVar69 = 0;
        }
        else {
          *plVar73 = lVar76;
          *plVar77 = lVar75;
          lVar74 = *plVar73;
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
          fVar88 = (float)uVar30;
          fVar89 = (float)((ulong)uVar30 >> 0x20);
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
          fVar86 = (float)uVar30;
          fVar87 = (float)((ulong)uVar30 >> 0x20);
          lVar75 = *plVar78;
          fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
          fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
          fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
          fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
          fVar82 = fVar82 * fVar82;
          fVar83 = fVar83 * fVar83;
          fVar84 = fVar84 * fVar84;
          fVar85 = fVar85 * fVar85;
          auVar14._4_4_ = fVar83;
          auVar14._0_4_ = fVar82;
          auVar14._8_4_ = fVar84;
          auVar14._12_4_ = fVar85;
          auVar15._4_4_ = fVar83;
          auVar15._0_4_ = fVar82;
          auVar15._8_4_ = fVar84;
          auVar15._12_4_ = fVar85;
          auVar90 = NEON_ext(auVar14,auVar15,8,1);
          fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
          fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
          fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
          fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
          fVar86 = fVar86 * fVar86;
          fVar87 = fVar87 * fVar87;
          fVar88 = fVar88 * fVar88;
          fVar89 = fVar89 * fVar89;
          auVar50._4_4_ = fVar87;
          auVar50._0_4_ = fVar86;
          auVar50._8_4_ = fVar88;
          auVar50._12_4_ = fVar89;
          auVar51._4_4_ = fVar87;
          auVar51._0_4_ = fVar86;
          auVar51._8_4_ = fVar88;
          auVar51._12_4_ = fVar89;
          auVar91 = NEON_ext(auVar50,auVar51,8,1);
          if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
              SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) goto LAB_00f3bc20;
          *plVar78 = lVar74;
          iVar69 = 2;
          *plVar73 = lVar75;
        }
      }
      else {
        if (fVar83 <= fVar82) {
          *plVar78 = lVar75;
          *plVar73 = lVar74;
          lVar75 = *plVar77;
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
          fVar88 = (float)uVar30;
          fVar89 = (float)((ulong)uVar30 >> 0x20);
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
          fVar86 = (float)uVar30;
          fVar87 = (float)((ulong)uVar30 >> 0x20);
          fVar82 = (float)*(undefined8 *)(lVar75 + 0x10) - fVar86;
          fVar83 = (float)((ulong)*(undefined8 *)(lVar75 + 0x10) >> 0x20) - fVar87;
          fVar84 = (float)*(undefined8 *)(lVar75 + 0x18) - fVar88;
          fVar85 = (float)((ulong)*(undefined8 *)(lVar75 + 0x18) >> 0x20) - fVar89;
          fVar82 = fVar82 * fVar82;
          fVar83 = fVar83 * fVar83;
          fVar84 = fVar84 * fVar84;
          fVar85 = fVar85 * fVar85;
          auVar12._4_4_ = fVar83;
          auVar12._0_4_ = fVar82;
          auVar12._8_4_ = fVar84;
          auVar12._12_4_ = fVar85;
          auVar13._4_4_ = fVar83;
          auVar13._0_4_ = fVar82;
          auVar13._8_4_ = fVar84;
          auVar13._12_4_ = fVar85;
          auVar90 = NEON_ext(auVar12,auVar13,8,1);
          fVar86 = *(float *)(lVar74 + 0x10) - fVar86;
          fVar87 = *(float *)(lVar74 + 0x14) - fVar87;
          fVar88 = *(float *)(lVar74 + 0x18) - fVar88;
          fVar89 = *(float *)(lVar74 + 0x1c) - fVar89;
          fVar86 = fVar86 * fVar86;
          fVar87 = fVar87 * fVar87;
          fVar88 = fVar88 * fVar88;
          fVar89 = fVar89 * fVar89;
          auVar48._4_4_ = fVar87;
          auVar48._0_4_ = fVar86;
          auVar48._8_4_ = fVar88;
          auVar48._12_4_ = fVar89;
          auVar49._4_4_ = fVar87;
          auVar49._0_4_ = fVar86;
          auVar49._8_4_ = fVar88;
          auVar49._12_4_ = fVar89;
          auVar91 = NEON_ext(auVar48,auVar49,8,1);
          if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
              SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
LAB_00f3bc20:
            iVar69 = 1;
            goto LAB_00f3bc34;
          }
          iVar69 = 2;
          *plVar73 = lVar75;
        }
        else {
          *plVar78 = lVar76;
          iVar69 = 1;
        }
        *plVar77 = lVar74;
      }
    }
    else {
      uVar70 = uVar71 + 3;
      if (-1 < (long)uVar71) {
        uVar70 = uVar71;
      }
      lVar74 = (uVar70 & 0x7ffffffffffffffc) * 2;
      plVar79 = (long *)((long)plVar78 + lVar74);
      plVar72 = (long *)((long)plVar73 + lVar74);
      iVar69 = FUN_00f3c380(plVar78,plVar79,plVar73,plVar72,param_3);
      lVar74 = *plVar77;
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
      fVar88 = (float)uVar30;
      fVar89 = (float)((ulong)uVar30 >> 0x20);
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
      fVar86 = (float)uVar30;
      fVar87 = (float)((ulong)uVar30 >> 0x20);
      lVar75 = *plVar72;
      fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
      fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
      fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
      fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
      fVar82 = fVar82 * fVar82;
      fVar83 = fVar83 * fVar83;
      fVar84 = fVar84 * fVar84;
      fVar85 = fVar85 * fVar85;
      auVar2._4_4_ = fVar83;
      auVar2._0_4_ = fVar82;
      auVar2._8_4_ = fVar84;
      auVar2._12_4_ = fVar85;
      auVar3._4_4_ = fVar83;
      auVar3._0_4_ = fVar82;
      auVar3._8_4_ = fVar84;
      auVar3._12_4_ = fVar85;
      auVar90 = NEON_ext(auVar2,auVar3,8,1);
      fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
      fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
      fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
      fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
      fVar86 = fVar86 * fVar86;
      fVar87 = fVar87 * fVar87;
      fVar88 = fVar88 * fVar88;
      fVar89 = fVar89 * fVar89;
      auVar31._4_4_ = fVar87;
      auVar31._0_4_ = fVar86;
      auVar31._8_4_ = fVar88;
      auVar31._12_4_ = fVar89;
      auVar32._4_4_ = fVar87;
      auVar32._0_4_ = fVar86;
      auVar32._8_4_ = fVar88;
      auVar32._12_4_ = fVar89;
      auVar91 = NEON_ext(auVar31,auVar32,8,1);
      if (SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87) <
          SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83)) {
        *plVar72 = lVar74;
        *plVar77 = lVar75;
        lVar74 = *plVar72;
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar88 = (float)uVar30;
        fVar89 = (float)((ulong)uVar30 >> 0x20);
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar86 = (float)uVar30;
        fVar87 = (float)((ulong)uVar30 >> 0x20);
        lVar75 = *plVar73;
        fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
        fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
        fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
        fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
        fVar82 = fVar82 * fVar82;
        fVar83 = fVar83 * fVar83;
        fVar84 = fVar84 * fVar84;
        fVar85 = fVar85 * fVar85;
        auVar4._4_4_ = fVar83;
        auVar4._0_4_ = fVar82;
        auVar4._8_4_ = fVar84;
        auVar4._12_4_ = fVar85;
        auVar5._4_4_ = fVar83;
        auVar5._0_4_ = fVar82;
        auVar5._8_4_ = fVar84;
        auVar5._12_4_ = fVar85;
        auVar90 = NEON_ext(auVar4,auVar5,8,1);
        fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
        fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
        fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
        fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
        fVar86 = fVar86 * fVar86;
        fVar87 = fVar87 * fVar87;
        fVar88 = fVar88 * fVar88;
        fVar89 = fVar89 * fVar89;
        auVar33._4_4_ = fVar87;
        auVar33._0_4_ = fVar86;
        auVar33._8_4_ = fVar88;
        auVar33._12_4_ = fVar89;
        auVar34._4_4_ = fVar87;
        auVar34._0_4_ = fVar86;
        auVar34._8_4_ = fVar88;
        auVar34._12_4_ = fVar89;
        auVar91 = NEON_ext(auVar33,auVar34,8,1);
        if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
            SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
          iVar69 = iVar69 + 1;
        }
        else {
          *plVar73 = lVar74;
          *plVar72 = lVar75;
          lVar74 = *plVar73;
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
          fVar88 = (float)uVar30;
          fVar89 = (float)((ulong)uVar30 >> 0x20);
          uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
          fVar86 = (float)uVar30;
          fVar87 = (float)((ulong)uVar30 >> 0x20);
          lVar75 = *plVar79;
          fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
          fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
          fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
          fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
          fVar82 = fVar82 * fVar82;
          fVar83 = fVar83 * fVar83;
          fVar84 = fVar84 * fVar84;
          fVar85 = fVar85 * fVar85;
          auVar6._4_4_ = fVar83;
          auVar6._0_4_ = fVar82;
          auVar6._8_4_ = fVar84;
          auVar6._12_4_ = fVar85;
          auVar7._4_4_ = fVar83;
          auVar7._0_4_ = fVar82;
          auVar7._8_4_ = fVar84;
          auVar7._12_4_ = fVar85;
          auVar90 = NEON_ext(auVar6,auVar7,8,1);
          fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
          fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
          fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
          fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
          fVar86 = fVar86 * fVar86;
          fVar87 = fVar87 * fVar87;
          fVar88 = fVar88 * fVar88;
          fVar89 = fVar89 * fVar89;
          auVar35._4_4_ = fVar87;
          auVar35._0_4_ = fVar86;
          auVar35._8_4_ = fVar88;
          auVar35._12_4_ = fVar89;
          auVar36._4_4_ = fVar87;
          auVar36._0_4_ = fVar86;
          auVar36._8_4_ = fVar88;
          auVar36._12_4_ = fVar89;
          auVar91 = NEON_ext(auVar35,auVar36,8,1);
          if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
              SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
            iVar69 = iVar69 + 2;
          }
          else {
            *plVar79 = lVar74;
            *plVar73 = lVar75;
            lVar74 = *plVar79;
            uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
            fVar88 = (float)uVar30;
            fVar89 = (float)((ulong)uVar30 >> 0x20);
            uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
            fVar86 = (float)uVar30;
            fVar87 = (float)((ulong)uVar30 >> 0x20);
            lVar75 = *plVar78;
            fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
            fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
            fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
            fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
            fVar82 = fVar82 * fVar82;
            fVar83 = fVar83 * fVar83;
            fVar84 = fVar84 * fVar84;
            fVar85 = fVar85 * fVar85;
            auVar8._4_4_ = fVar83;
            auVar8._0_4_ = fVar82;
            auVar8._8_4_ = fVar84;
            auVar8._12_4_ = fVar85;
            auVar9._4_4_ = fVar83;
            auVar9._0_4_ = fVar82;
            auVar9._8_4_ = fVar84;
            auVar9._12_4_ = fVar85;
            auVar90 = NEON_ext(auVar8,auVar9,8,1);
            fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
            fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
            fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
            fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
            fVar86 = fVar86 * fVar86;
            fVar87 = fVar87 * fVar87;
            fVar88 = fVar88 * fVar88;
            fVar89 = fVar89 * fVar89;
            auVar37._4_4_ = fVar87;
            auVar37._0_4_ = fVar86;
            auVar37._8_4_ = fVar88;
            auVar37._12_4_ = fVar89;
            auVar38._4_4_ = fVar87;
            auVar38._0_4_ = fVar86;
            auVar38._8_4_ = fVar88;
            auVar38._12_4_ = fVar89;
            auVar91 = NEON_ext(auVar37,auVar38,8,1);
            if (SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83) <=
                SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87)) {
              iVar69 = iVar69 + 3;
            }
            else {
              *plVar78 = lVar74;
              iVar69 = iVar69 + 4;
              *plVar79 = lVar75;
            }
          }
        }
      }
    }
LAB_00f3bc34:
    lVar75 = *plVar78;
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar84 = (float)uVar30;
    fVar85 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar82 = (float)uVar30;
    fVar83 = (float)((ulong)uVar30 >> 0x20);
    lVar74 = *plVar73;
    fVar86 = (float)*(undefined8 *)(lVar75 + 0x10) - fVar82;
    fVar87 = (float)((ulong)*(undefined8 *)(lVar75 + 0x10) >> 0x20) - fVar83;
    fVar88 = (float)*(undefined8 *)(lVar75 + 0x18) - fVar84;
    fVar89 = (float)((ulong)*(undefined8 *)(lVar75 + 0x18) >> 0x20) - fVar85;
    fVar86 = fVar86 * fVar86;
    fVar87 = fVar87 * fVar87;
    fVar88 = fVar88 * fVar88;
    fVar89 = fVar89 * fVar89;
    auVar39._4_4_ = fVar87;
    auVar39._0_4_ = fVar86;
    auVar39._8_4_ = fVar88;
    auVar39._12_4_ = fVar89;
    auVar40._4_4_ = fVar87;
    auVar40._0_4_ = fVar86;
    auVar40._8_4_ = fVar88;
    auVar40._12_4_ = fVar89;
    auVar90 = NEON_ext(auVar39,auVar40,8,1);
    fVar88 = *(float *)(lVar74 + 0x10) - fVar82;
    fVar89 = *(float *)(lVar74 + 0x14) - fVar83;
    fVar101 = *(float *)(lVar74 + 0x18) - fVar84;
    fVar102 = *(float *)(lVar74 + 0x1c) - fVar85;
    auVar93._0_4_ = fVar88 * fVar88;
    auVar93._4_4_ = fVar89 * fVar89;
    auVar93._8_4_ = fVar101 * fVar101;
    auVar93._12_4_ = fVar102 * fVar102;
    auVar91 = NEON_ext(auVar93,auVar93,8,1);
    fVar86 = SQRT(auVar90._0_4_ + fVar86 + auVar90._4_4_ + fVar87);
    fVar87 = SQRT(auVar91._0_4_ + auVar93._0_4_ + auVar91._4_4_ + auVar93._4_4_);
    if (fVar86 <= fVar87) {
      plVar79 = param_2 + -2;
LAB_00f3bcb0:
      plVar72 = plVar79;
      if (plVar78 != plVar72) goto code_r0x00f3bcb8;
      lVar74 = *plVar77;
      plVar73 = plVar78 + 1;
      fVar87 = *(float *)(lVar74 + 0x10) - fVar82;
      fVar88 = *(float *)(lVar74 + 0x14) - fVar83;
      fVar89 = *(float *)(lVar74 + 0x18) - fVar84;
      fVar101 = *(float *)(lVar74 + 0x1c) - fVar85;
      auVar96._0_4_ = fVar87 * fVar87;
      auVar96._4_4_ = fVar88 * fVar88;
      auVar96._8_4_ = fVar89 * fVar89;
      auVar96._12_4_ = fVar101 * fVar101;
      auVar90 = NEON_ext(auVar96,auVar96,8,1);
      if (fVar86 <= SQRT(auVar90._0_4_ + auVar96._0_4_ + auVar90._4_4_ + auVar96._4_4_)) {
        if (plVar73 == plVar77) {
          return;
        }
        plVar73 = plVar78 + 2;
        while( true ) {
          lVar75 = plVar73[-1];
          fVar87 = *(float *)(lVar75 + 0x10) - fVar82;
          fVar88 = *(float *)(lVar75 + 0x14) - fVar83;
          fVar89 = *(float *)(lVar75 + 0x18) - fVar84;
          fVar101 = *(float *)(lVar75 + 0x1c) - fVar85;
          auVar97._0_4_ = fVar87 * fVar87;
          auVar97._4_4_ = fVar88 * fVar88;
          auVar97._8_4_ = fVar89 * fVar89;
          auVar97._12_4_ = fVar101 * fVar101;
          auVar90 = NEON_ext(auVar97,auVar97,8,1);
          if (SQRT(auVar90._0_4_ + auVar97._0_4_ + auVar90._4_4_ + auVar97._4_4_) < fVar86) break;
          plVar73 = plVar73 + 1;
          if (param_2 == plVar73) {
            return;
          }
        }
        plVar73[-1] = lVar74;
        *plVar77 = lVar75;
      }
      if (plVar73 == plVar77) {
        return;
      }
      while( true ) {
        uVar67 = *(undefined8 *)(*plVar78 + 0x18);
        uVar66 = *(undefined8 *)(*plVar78 + 0x10);
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar84 = (float)uVar30;
        fVar85 = (float)((ulong)uVar30 >> 0x20);
        uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar82 = (float)uVar30;
        fVar83 = (float)((ulong)uVar30 >> 0x20);
        fVar86 = (float)uVar66 - fVar82;
        fVar87 = (float)((ulong)uVar66 >> 0x20) - fVar83;
        fVar88 = (float)uVar67 - fVar84;
        fVar89 = (float)((ulong)uVar67 >> 0x20) - fVar85;
        fVar86 = fVar86 * fVar86;
        fVar87 = fVar87 * fVar87;
        fVar88 = fVar88 * fVar88;
        fVar89 = fVar89 * fVar89;
        auVar45._4_4_ = fVar87;
        auVar45._0_4_ = fVar86;
        auVar45._8_4_ = fVar88;
        auVar45._12_4_ = fVar89;
        auVar46._4_4_ = fVar87;
        auVar46._0_4_ = fVar86;
        auVar46._8_4_ = fVar88;
        auVar46._12_4_ = fVar89;
        auVar90 = NEON_ext(auVar45,auVar46,8,1);
        fVar86 = SQRT(auVar90._0_4_ + fVar86 + auVar90._4_4_ + fVar87);
        do {
          param_1 = plVar73;
          plVar73 = param_1 + 1;
          lVar74 = *param_1;
          fVar87 = *(float *)(lVar74 + 0x10) - fVar82;
          fVar88 = *(float *)(lVar74 + 0x14) - fVar83;
          fVar89 = *(float *)(lVar74 + 0x18) - fVar84;
          fVar101 = *(float *)(lVar74 + 0x1c) - fVar85;
          auVar98._0_4_ = fVar87 * fVar87;
          auVar98._4_4_ = fVar88 * fVar88;
          auVar98._8_4_ = fVar89 * fVar89;
          auVar98._12_4_ = fVar101 * fVar101;
          auVar90 = NEON_ext(auVar98,auVar98,8,1);
        } while (fVar86 <= SQRT(auVar90._0_4_ + auVar98._0_4_ + auVar90._4_4_ + auVar98._4_4_));
        do {
          plVar77 = plVar77 + -1;
          lVar75 = *plVar77;
          fVar87 = *(float *)(lVar75 + 0x10) - fVar82;
          fVar88 = *(float *)(lVar75 + 0x14) - fVar83;
          fVar89 = *(float *)(lVar75 + 0x18) - fVar84;
          fVar101 = *(float *)(lVar75 + 0x1c) - fVar85;
          auVar99._0_4_ = fVar87 * fVar87;
          auVar99._4_4_ = fVar88 * fVar88;
          auVar99._8_4_ = fVar89 * fVar89;
          auVar99._12_4_ = fVar101 * fVar101;
          auVar90 = NEON_ext(auVar99,auVar99,8,1);
        } while (SQRT(auVar90._0_4_ + auVar99._0_4_ + auVar90._4_4_ + auVar99._4_4_) < fVar86);
        if (plVar77 <= param_1) break;
        *param_1 = lVar75;
        *plVar77 = lVar74;
      }
      uVar81 = 4;
      goto LAB_00f3bfa4;
    }
    plVar79 = plVar78 + 1;
    plVar72 = plVar77;
    if (plVar79 < plVar77) goto LAB_00f3bd14;
    goto LAB_00f3bca0;
  }
  uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
  fVar88 = (float)uVar30;
  fVar89 = (float)((ulong)uVar30 >> 0x20);
  uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
  fVar86 = (float)uVar30;
  fVar87 = (float)((ulong)uVar30 >> 0x20);
  lVar75 = *plVar78;
  fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
  fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
  fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
  fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
  fVar82 = fVar82 * fVar82;
  fVar83 = fVar83 * fVar83;
  fVar84 = fVar84 * fVar84;
  fVar85 = fVar85 * fVar85;
  auVar22._4_4_ = fVar83;
  auVar22._0_4_ = fVar82;
  auVar22._8_4_ = fVar84;
  auVar22._12_4_ = fVar85;
  auVar23._4_4_ = fVar83;
  auVar23._0_4_ = fVar82;
  auVar23._8_4_ = fVar84;
  auVar23._12_4_ = fVar85;
  auVar90 = NEON_ext(auVar22,auVar23,8,1);
  fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
  fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
  fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
  fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
  fVar86 = fVar86 * fVar86;
  fVar87 = fVar87 * fVar87;
  fVar88 = fVar88 * fVar88;
  fVar89 = fVar89 * fVar89;
  auVar58._4_4_ = fVar87;
  auVar58._0_4_ = fVar86;
  auVar58._8_4_ = fVar88;
  auVar58._12_4_ = fVar89;
  auVar59._4_4_ = fVar87;
  auVar59._0_4_ = fVar86;
  auVar59._8_4_ = fVar88;
  auVar59._12_4_ = fVar89;
  auVar91 = NEON_ext(auVar58,auVar59,8,1);
  if (SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87) <
      SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83)) {
    *plVar78 = lVar74;
    plVar78[1] = lVar75;
    return;
  }
  return;
code_r0x00f3bcb8:
  lVar74 = *plVar72;
  fVar88 = *(float *)(lVar74 + 0x10) - fVar82;
  fVar89 = *(float *)(lVar74 + 0x14) - fVar83;
  fVar101 = *(float *)(lVar74 + 0x18) - fVar84;
  fVar102 = *(float *)(lVar74 + 0x1c) - fVar85;
  auVar104._0_4_ = fVar88 * fVar88;
  auVar104._4_4_ = fVar89 * fVar89;
  auVar104._8_4_ = fVar101 * fVar101;
  auVar104._12_4_ = fVar102 * fVar102;
  auVar90 = NEON_ext(auVar104,auVar104,8,1);
  plVar79 = plVar72 + -1;
  if (fVar87 < SQRT(auVar90._0_4_ + auVar104._0_4_ + auVar90._4_4_ + auVar104._4_4_))
  goto code_r0x00f3bce4;
  goto LAB_00f3bcb0;
code_r0x00f3bce4:
  *plVar78 = lVar74;
  iVar69 = iVar69 + 1;
  *plVar72 = lVar75;
  plVar79 = plVar78 + 1;
  if (plVar79 < plVar72) {
LAB_00f3bd14:
    while( true ) {
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
      fVar84 = (float)uVar30;
      fVar85 = (float)((ulong)uVar30 >> 0x20);
      uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
      fVar82 = (float)uVar30;
      fVar83 = (float)((ulong)uVar30 >> 0x20);
      uVar66 = *(undefined8 *)(*plVar73 + 0x18);
      uVar30 = *(undefined8 *)(*plVar73 + 0x10);
      fVar86 = (float)uVar30 - fVar82;
      fVar87 = (float)((ulong)uVar30 >> 0x20) - fVar83;
      fVar88 = (float)uVar66 - fVar84;
      fVar89 = (float)((ulong)uVar66 >> 0x20) - fVar85;
      fVar86 = fVar86 * fVar86;
      fVar87 = fVar87 * fVar87;
      fVar88 = fVar88 * fVar88;
      fVar89 = fVar89 * fVar89;
      auVar43._4_4_ = fVar87;
      auVar43._0_4_ = fVar86;
      auVar43._8_4_ = fVar88;
      auVar43._12_4_ = fVar89;
      auVar44._4_4_ = fVar87;
      auVar44._0_4_ = fVar86;
      auVar44._8_4_ = fVar88;
      auVar44._12_4_ = fVar89;
      auVar90 = NEON_ext(auVar43,auVar44,8,1);
      fVar86 = SQRT(auVar90._0_4_ + fVar86 + auVar90._4_4_ + fVar87);
      plVar80 = plVar79 + -1;
      do {
        plVar79 = plVar80;
        plVar80 = plVar79 + 1;
        lVar74 = *plVar80;
        fVar87 = *(float *)(lVar74 + 0x10) - fVar82;
        fVar88 = *(float *)(lVar74 + 0x14) - fVar83;
        fVar89 = *(float *)(lVar74 + 0x18) - fVar84;
        fVar101 = *(float *)(lVar74 + 0x1c) - fVar85;
        auVar94._0_4_ = fVar87 * fVar87;
        auVar94._4_4_ = fVar88 * fVar88;
        auVar94._8_4_ = fVar89 * fVar89;
        auVar94._12_4_ = fVar101 * fVar101;
        auVar90 = NEON_ext(auVar94,auVar94,8,1);
      } while (fVar86 < SQRT(auVar90._0_4_ + auVar94._0_4_ + auVar90._4_4_ + auVar94._4_4_));
      plVar79 = plVar79 + 2;
      do {
        plVar72 = plVar72 + -1;
        lVar75 = *plVar72;
        fVar87 = *(float *)(lVar75 + 0x10) - fVar82;
        fVar88 = *(float *)(lVar75 + 0x14) - fVar83;
        fVar89 = *(float *)(lVar75 + 0x18) - fVar84;
        fVar101 = *(float *)(lVar75 + 0x1c) - fVar85;
        auVar95._0_4_ = fVar87 * fVar87;
        auVar95._4_4_ = fVar88 * fVar88;
        auVar95._8_4_ = fVar89 * fVar89;
        auVar95._12_4_ = fVar101 * fVar101;
        auVar90 = NEON_ext(auVar95,auVar95,8,1);
      } while (SQRT(auVar90._0_4_ + auVar95._0_4_ + auVar90._4_4_ + auVar95._4_4_) <= fVar86);
      if (plVar72 < plVar80) break;
      *plVar80 = lVar75;
      *plVar72 = lVar74;
      iVar69 = iVar69 + 1;
      plVar1 = plVar72;
      if (plVar73 != plVar80) {
        plVar1 = plVar73;
      }
      plVar73 = plVar1;
    }
    if (plVar80 == plVar73) goto LAB_00f3be20;
  }
  else {
LAB_00f3bca0:
    plVar80 = plVar78 + 1;
    if (plVar80 == plVar73) goto LAB_00f3be20;
  }
  lVar74 = *plVar73;
  uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x18);
  fVar88 = (float)uVar30;
  fVar89 = (float)((ulong)uVar30 >> 0x20);
  uVar30 = *(undefined8 *)(*(long *)*param_3 + 0x10);
  fVar86 = (float)uVar30;
  fVar87 = (float)((ulong)uVar30 >> 0x20);
  lVar75 = *plVar80;
  fVar82 = (float)*(undefined8 *)(lVar74 + 0x10) - fVar86;
  fVar83 = (float)((ulong)*(undefined8 *)(lVar74 + 0x10) >> 0x20) - fVar87;
  fVar84 = (float)*(undefined8 *)(lVar74 + 0x18) - fVar88;
  fVar85 = (float)((ulong)*(undefined8 *)(lVar74 + 0x18) >> 0x20) - fVar89;
  fVar82 = fVar82 * fVar82;
  fVar83 = fVar83 * fVar83;
  fVar84 = fVar84 * fVar84;
  fVar85 = fVar85 * fVar85;
  auVar10._4_4_ = fVar83;
  auVar10._0_4_ = fVar82;
  auVar10._8_4_ = fVar84;
  auVar10._12_4_ = fVar85;
  auVar11._4_4_ = fVar83;
  auVar11._0_4_ = fVar82;
  auVar11._8_4_ = fVar84;
  auVar11._12_4_ = fVar85;
  auVar90 = NEON_ext(auVar10,auVar11,8,1);
  fVar86 = *(float *)(lVar75 + 0x10) - fVar86;
  fVar87 = *(float *)(lVar75 + 0x14) - fVar87;
  fVar88 = *(float *)(lVar75 + 0x18) - fVar88;
  fVar89 = *(float *)(lVar75 + 0x1c) - fVar89;
  fVar86 = fVar86 * fVar86;
  fVar87 = fVar87 * fVar87;
  fVar88 = fVar88 * fVar88;
  fVar89 = fVar89 * fVar89;
  auVar41._4_4_ = fVar87;
  auVar41._0_4_ = fVar86;
  auVar41._8_4_ = fVar88;
  auVar41._12_4_ = fVar89;
  auVar42._4_4_ = fVar87;
  auVar42._0_4_ = fVar86;
  auVar42._8_4_ = fVar88;
  auVar42._12_4_ = fVar89;
  auVar91 = NEON_ext(auVar41,auVar42,8,1);
  if (SQRT(auVar91._0_4_ + fVar86 + auVar91._4_4_ + fVar87) <
      SQRT(auVar90._0_4_ + fVar82 + auVar90._4_4_ + fVar83)) {
    iVar69 = iVar69 + 1;
    *plVar80 = lVar74;
    *plVar73 = lVar75;
  }
LAB_00f3be20:
  if (iVar69 == 0) {
    uVar71 = FUN_00f3c920(plVar78,plVar80,param_3);
    uVar70 = FUN_00f3c920(plVar80 + 1,param_2,param_3);
    if ((uVar70 & 1) != 0) goto LAB_00f3bfb8;
    param_1 = plVar80 + 1;
    if ((uVar71 & 1) != 0) goto LAB_00f3b88c;
  }
  if ((long)param_2 - (long)plVar80 <= (long)plVar80 - (long)plVar78) {
    FUN_00f3b820(plVar80 + 1,param_2,param_3);
    param_1 = plVar78;
    param_2 = plVar80;
    goto LAB_00f3b868;
  }
  FUN_00f3b820(plVar78,plVar80,param_3);
  param_1 = plVar80 + 1;
  goto LAB_00f3b88c;
LAB_00f3bfb8:
  bVar68 = (uVar71 & 1) == 0;
  if (bVar68) {
    param_2 = plVar80;
  }
  uVar81 = 1;
  if (bVar68) {
    uVar81 = 2;
  }
  param_1 = plVar78;
  if (4 < uVar81) {
    return;
  }
LAB_00f3bfa4:
  if ((1 << (ulong)uVar81 & 0x15U) == 0) {
switchD_00f3bfe4_caseD_0:
    return;
  }
  goto LAB_00f3b868;
}


