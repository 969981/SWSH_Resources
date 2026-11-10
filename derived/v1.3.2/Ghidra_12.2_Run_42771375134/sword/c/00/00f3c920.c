/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3c920; name: FUN_00f3c920
 */


bool FUN_00f3c920(long *param_1,long *param_2,undefined8 *param_3)

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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  long lVar48;
  long lVar49;
  long *plVar50;
  long lVar51;
  int iVar52;
  long lVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar53 = param_2[-1];
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar48 = *param_1;
    fVar54 = (float)*(undefined8 *)(lVar53 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar53 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar53 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar53 + 0x18) >> 0x20) - fVar61;
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar22._4_4_ = fVar55;
    auVar22._0_4_ = fVar54;
    auVar22._8_4_ = fVar56;
    auVar22._12_4_ = fVar57;
    auVar23._4_4_ = fVar55;
    auVar23._0_4_ = fVar54;
    auVar23._8_4_ = fVar56;
    auVar23._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar22,auVar23,8,1);
    fVar58 = *(float *)(lVar48 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar48 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar48 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar48 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar45._4_4_ = fVar59;
    auVar45._0_4_ = fVar58;
    auVar45._8_4_ = fVar60;
    auVar45._12_4_ = fVar61;
    auVar46._4_4_ = fVar59;
    auVar46._0_4_ = fVar58;
    auVar46._8_4_ = fVar60;
    auVar46._12_4_ = fVar61;
    auVar67 = NEON_ext(auVar45,auVar46,8,1);
    if (SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59) <
        SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55)) {
      *param_1 = lVar53;
      param_2[-1] = lVar48;
      return true;
    }
    break;
  case 3:
    lVar48 = param_1[1];
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar53 = *param_1;
    fVar54 = (float)*(undefined8 *)(lVar48 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar48 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar48 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar48 + 0x18) >> 0x20) - fVar61;
    lVar49 = param_2[-1];
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar18._4_4_ = fVar55;
    auVar18._0_4_ = fVar54;
    auVar18._8_4_ = fVar56;
    auVar18._12_4_ = fVar57;
    auVar19._4_4_ = fVar55;
    auVar19._0_4_ = fVar54;
    auVar19._8_4_ = fVar56;
    auVar19._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar18,auVar19,8,1);
    fVar56 = *(float *)(lVar53 + 0x10) - fVar58;
    fVar57 = *(float *)(lVar53 + 0x14) - fVar59;
    fVar65 = *(float *)(lVar53 + 0x18) - fVar60;
    fVar66 = *(float *)(lVar53 + 0x1c) - fVar61;
    auVar62._0_4_ = fVar56 * fVar56;
    auVar62._4_4_ = fVar57 * fVar57;
    auVar62._8_4_ = fVar65 * fVar65;
    auVar62._12_4_ = fVar66 * fVar66;
    auVar67 = NEON_ext(auVar62,auVar62,8,1);
    fVar58 = *(float *)(lVar49 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar49 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar49 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar49 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar41._4_4_ = fVar59;
    auVar41._0_4_ = fVar58;
    auVar41._8_4_ = fVar60;
    auVar41._12_4_ = fVar61;
    auVar42._4_4_ = fVar59;
    auVar42._0_4_ = fVar58;
    auVar42._8_4_ = fVar60;
    auVar42._12_4_ = fVar61;
    auVar68 = NEON_ext(auVar41,auVar42,8,1);
    fVar54 = SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55);
    fVar55 = SQRT(auVar68._0_4_ + fVar58 + auVar68._4_4_ + fVar59);
    if (SQRT(auVar67._0_4_ + auVar62._0_4_ + auVar67._4_4_ + auVar62._4_4_) < fVar54) {
      if (fVar54 < fVar55) {
        *param_1 = lVar49;
      }
      else {
        *param_1 = lVar48;
        param_1[1] = lVar53;
        lVar48 = param_2[-1];
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar60 = (float)uVar47;
        fVar61 = (float)((ulong)uVar47 >> 0x20);
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar58 = (float)uVar47;
        fVar59 = (float)((ulong)uVar47 >> 0x20);
        fVar54 = (float)*(undefined8 *)(lVar48 + 0x10) - fVar58;
        fVar55 = (float)((ulong)*(undefined8 *)(lVar48 + 0x10) >> 0x20) - fVar59;
        fVar56 = (float)*(undefined8 *)(lVar48 + 0x18) - fVar60;
        fVar57 = (float)((ulong)*(undefined8 *)(lVar48 + 0x18) >> 0x20) - fVar61;
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar57 = fVar57 * fVar57;
        auVar20._4_4_ = fVar55;
        auVar20._0_4_ = fVar54;
        auVar20._8_4_ = fVar56;
        auVar20._12_4_ = fVar57;
        auVar21._4_4_ = fVar55;
        auVar21._0_4_ = fVar54;
        auVar21._8_4_ = fVar56;
        auVar21._12_4_ = fVar57;
        auVar63 = NEON_ext(auVar20,auVar21,8,1);
        fVar58 = *(float *)(lVar53 + 0x10) - fVar58;
        fVar59 = *(float *)(lVar53 + 0x14) - fVar59;
        fVar60 = *(float *)(lVar53 + 0x18) - fVar60;
        fVar61 = *(float *)(lVar53 + 0x1c) - fVar61;
        fVar58 = fVar58 * fVar58;
        fVar59 = fVar59 * fVar59;
        fVar60 = fVar60 * fVar60;
        fVar61 = fVar61 * fVar61;
        auVar43._4_4_ = fVar59;
        auVar43._0_4_ = fVar58;
        auVar43._8_4_ = fVar60;
        auVar43._12_4_ = fVar61;
        auVar44._4_4_ = fVar59;
        auVar44._0_4_ = fVar58;
        auVar44._8_4_ = fVar60;
        auVar44._12_4_ = fVar61;
        auVar67 = NEON_ext(auVar43,auVar44,8,1);
        if (SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55) <=
            SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59)) {
          return true;
        }
        param_1[1] = lVar48;
      }
      param_2[-1] = lVar53;
      return true;
    }
    if (fVar55 <= fVar54) {
      return true;
    }
    param_1[1] = lVar49;
    param_2[-1] = lVar48;
    plVar50 = (long *)*param_3;
    lVar53 = param_1[1];
    goto LAB_00f3cc7c;
  case 4:
    FUN_00f3c380(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    plVar50 = param_1 + 2;
    plVar1 = param_1 + 3;
    FUN_00f3c380(param_1,param_1 + 1,plVar50,plVar1,param_3);
    lVar53 = param_2[-1];
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar48 = param_1[3];
    fVar54 = (float)*(undefined8 *)(lVar53 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar53 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar53 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar53 + 0x18) >> 0x20) - fVar61;
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar10._4_4_ = fVar55;
    auVar10._0_4_ = fVar54;
    auVar10._8_4_ = fVar56;
    auVar10._12_4_ = fVar57;
    auVar11._4_4_ = fVar55;
    auVar11._0_4_ = fVar54;
    auVar11._8_4_ = fVar56;
    auVar11._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar10,auVar11,8,1);
    fVar58 = *(float *)(lVar48 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar48 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar48 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar48 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar33._4_4_ = fVar59;
    auVar33._0_4_ = fVar58;
    auVar33._8_4_ = fVar60;
    auVar33._12_4_ = fVar61;
    auVar34._4_4_ = fVar59;
    auVar34._0_4_ = fVar58;
    auVar34._8_4_ = fVar60;
    auVar34._12_4_ = fVar61;
    auVar67 = NEON_ext(auVar33,auVar34,8,1);
    if (SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55) <=
        SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59)) {
      return true;
    }
    *plVar1 = lVar53;
    param_2[-1] = lVar48;
    lVar53 = *plVar1;
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar48 = *plVar50;
    fVar54 = (float)*(undefined8 *)(lVar53 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar53 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar53 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar53 + 0x18) >> 0x20) - fVar61;
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar12._4_4_ = fVar55;
    auVar12._0_4_ = fVar54;
    auVar12._8_4_ = fVar56;
    auVar12._12_4_ = fVar57;
    auVar13._4_4_ = fVar55;
    auVar13._0_4_ = fVar54;
    auVar13._8_4_ = fVar56;
    auVar13._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar12,auVar13,8,1);
    fVar58 = *(float *)(lVar48 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar48 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar48 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar48 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar35._4_4_ = fVar59;
    auVar35._0_4_ = fVar58;
    auVar35._8_4_ = fVar60;
    auVar35._12_4_ = fVar61;
    auVar36._4_4_ = fVar59;
    auVar36._0_4_ = fVar58;
    auVar36._8_4_ = fVar60;
    auVar36._12_4_ = fVar61;
    auVar67 = NEON_ext(auVar35,auVar36,8,1);
    if (SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55) <=
        SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59)) {
      return true;
    }
    *plVar50 = lVar53;
    *plVar1 = lVar48;
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar48 = param_1[1];
    fVar54 = (float)*(undefined8 *)(lVar53 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar53 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar53 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar53 + 0x18) >> 0x20) - fVar61;
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar14._4_4_ = fVar55;
    auVar14._0_4_ = fVar54;
    auVar14._8_4_ = fVar56;
    auVar14._12_4_ = fVar57;
    auVar15._4_4_ = fVar55;
    auVar15._0_4_ = fVar54;
    auVar15._8_4_ = fVar56;
    auVar15._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar14,auVar15,8,1);
    fVar58 = *(float *)(lVar48 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar48 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar48 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar48 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar37._4_4_ = fVar59;
    auVar37._0_4_ = fVar58;
    auVar37._8_4_ = fVar60;
    auVar37._12_4_ = fVar61;
    auVar38._4_4_ = fVar59;
    auVar38._0_4_ = fVar58;
    auVar38._8_4_ = fVar60;
    auVar38._12_4_ = fVar61;
    auVar67 = NEON_ext(auVar37,auVar38,8,1);
    if (SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55) <=
        SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59)) {
      return true;
    }
    param_1[1] = lVar53;
    param_1[2] = lVar48;
    plVar50 = (long *)*param_3;
LAB_00f3cc7c:
    uVar47 = *(undefined8 *)(*plVar50 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*plVar50 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar48 = *param_1;
    fVar54 = (float)*(undefined8 *)(lVar53 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar53 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar53 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar53 + 0x18) >> 0x20) - fVar61;
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar16._4_4_ = fVar55;
    auVar16._0_4_ = fVar54;
    auVar16._8_4_ = fVar56;
    auVar16._12_4_ = fVar57;
    auVar17._4_4_ = fVar55;
    auVar17._0_4_ = fVar54;
    auVar17._8_4_ = fVar56;
    auVar17._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar16,auVar17,8,1);
    fVar58 = *(float *)(lVar48 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar48 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar48 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar48 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar39._4_4_ = fVar59;
    auVar39._0_4_ = fVar58;
    auVar39._8_4_ = fVar60;
    auVar39._12_4_ = fVar61;
    auVar40._4_4_ = fVar59;
    auVar40._0_4_ = fVar58;
    auVar40._8_4_ = fVar60;
    auVar40._12_4_ = fVar61;
    auVar67 = NEON_ext(auVar39,auVar40,8,1);
    if (SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59) <
        SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55)) {
      *param_1 = lVar53;
      param_1[1] = lVar48;
      return true;
    }
    break;
  default:
    lVar48 = param_1[1];
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar60 = (float)uVar47;
    fVar61 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar58 = (float)uVar47;
    fVar59 = (float)((ulong)uVar47 >> 0x20);
    lVar49 = *param_1;
    fVar54 = (float)*(undefined8 *)(lVar48 + 0x10) - fVar58;
    fVar55 = (float)((ulong)*(undefined8 *)(lVar48 + 0x10) >> 0x20) - fVar59;
    fVar56 = (float)*(undefined8 *)(lVar48 + 0x18) - fVar60;
    fVar57 = (float)((ulong)*(undefined8 *)(lVar48 + 0x18) >> 0x20) - fVar61;
    lVar51 = param_1[2];
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    auVar63._4_4_ = fVar55;
    auVar63._0_4_ = fVar54;
    auVar63._8_4_ = fVar56;
    auVar63._12_4_ = fVar57;
    auVar67._4_4_ = fVar55;
    auVar67._0_4_ = fVar54;
    auVar67._8_4_ = fVar56;
    auVar67._12_4_ = fVar57;
    auVar63 = NEON_ext(auVar63,auVar67,8,1);
    fVar56 = *(float *)(lVar49 + 0x10) - fVar58;
    fVar57 = *(float *)(lVar49 + 0x14) - fVar59;
    fVar65 = *(float *)(lVar49 + 0x18) - fVar60;
    fVar66 = *(float *)(lVar49 + 0x1c) - fVar61;
    auVar64._0_4_ = fVar56 * fVar56;
    auVar64._4_4_ = fVar57 * fVar57;
    auVar64._8_4_ = fVar65 * fVar65;
    auVar64._12_4_ = fVar66 * fVar66;
    auVar67 = NEON_ext(auVar64,auVar64,8,1);
    fVar58 = *(float *)(lVar51 + 0x10) - fVar58;
    fVar59 = *(float *)(lVar51 + 0x14) - fVar59;
    fVar60 = *(float *)(lVar51 + 0x18) - fVar60;
    fVar61 = *(float *)(lVar51 + 0x1c) - fVar61;
    fVar58 = fVar58 * fVar58;
    fVar59 = fVar59 * fVar59;
    fVar60 = fVar60 * fVar60;
    fVar61 = fVar61 * fVar61;
    auVar68._4_4_ = fVar59;
    auVar68._0_4_ = fVar58;
    auVar68._8_4_ = fVar60;
    auVar68._12_4_ = fVar61;
    auVar24._4_4_ = fVar59;
    auVar24._0_4_ = fVar58;
    auVar24._8_4_ = fVar60;
    auVar24._12_4_ = fVar61;
    auVar68 = NEON_ext(auVar68,auVar24,8,1);
    fVar54 = SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55);
    fVar55 = SQRT(auVar68._0_4_ + fVar58 + auVar68._4_4_ + fVar59);
    lVar53 = lVar51;
    if (fVar54 <= SQRT(auVar67._0_4_ + auVar64._0_4_ + auVar67._4_4_ + auVar64._4_4_)) {
      if (fVar54 < fVar55) {
        param_1[1] = lVar51;
        param_1[2] = lVar48;
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar60 = (float)uVar47;
        fVar61 = (float)((ulong)uVar47 >> 0x20);
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar58 = (float)uVar47;
        fVar59 = (float)((ulong)uVar47 >> 0x20);
        fVar54 = (float)*(undefined8 *)(lVar51 + 0x10) - fVar58;
        fVar55 = (float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20) - fVar59;
        fVar56 = (float)*(undefined8 *)(lVar51 + 0x18) - fVar60;
        fVar57 = (float)((ulong)*(undefined8 *)(lVar51 + 0x18) >> 0x20) - fVar61;
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar57 = fVar57 * fVar57;
        auVar8._4_4_ = fVar55;
        auVar8._0_4_ = fVar54;
        auVar8._8_4_ = fVar56;
        auVar8._12_4_ = fVar57;
        auVar9._4_4_ = fVar55;
        auVar9._0_4_ = fVar54;
        auVar9._8_4_ = fVar56;
        auVar9._12_4_ = fVar57;
        auVar63 = NEON_ext(auVar8,auVar9,8,1);
        fVar58 = *(float *)(lVar49 + 0x10) - fVar58;
        fVar59 = *(float *)(lVar49 + 0x14) - fVar59;
        fVar60 = *(float *)(lVar49 + 0x18) - fVar60;
        fVar61 = *(float *)(lVar49 + 0x1c) - fVar61;
        fVar58 = fVar58 * fVar58;
        fVar59 = fVar59 * fVar59;
        fVar60 = fVar60 * fVar60;
        fVar61 = fVar61 * fVar61;
        auVar31._4_4_ = fVar59;
        auVar31._0_4_ = fVar58;
        auVar31._8_4_ = fVar60;
        auVar31._12_4_ = fVar61;
        auVar32._4_4_ = fVar59;
        auVar32._0_4_ = fVar58;
        auVar32._8_4_ = fVar60;
        auVar32._12_4_ = fVar61;
        auVar67 = NEON_ext(auVar31,auVar32,8,1);
        lVar53 = lVar48;
        if (SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59) <
            SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55)) {
          *param_1 = lVar51;
          param_1[1] = lVar49;
        }
      }
    }
    else {
      if (fVar55 <= fVar54) {
        *param_1 = lVar48;
        param_1[1] = lVar49;
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar60 = (float)uVar47;
        fVar61 = (float)((ulong)uVar47 >> 0x20);
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar58 = (float)uVar47;
        fVar59 = (float)((ulong)uVar47 >> 0x20);
        fVar54 = (float)*(undefined8 *)(lVar51 + 0x10) - fVar58;
        fVar55 = (float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20) - fVar59;
        fVar56 = (float)*(undefined8 *)(lVar51 + 0x18) - fVar60;
        fVar57 = (float)((ulong)*(undefined8 *)(lVar51 + 0x18) >> 0x20) - fVar61;
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar57 = fVar57 * fVar57;
        auVar6._4_4_ = fVar55;
        auVar6._0_4_ = fVar54;
        auVar6._8_4_ = fVar56;
        auVar6._12_4_ = fVar57;
        auVar7._4_4_ = fVar55;
        auVar7._0_4_ = fVar54;
        auVar7._8_4_ = fVar56;
        auVar7._12_4_ = fVar57;
        auVar63 = NEON_ext(auVar6,auVar7,8,1);
        fVar58 = *(float *)(lVar49 + 0x10) - fVar58;
        fVar59 = *(float *)(lVar49 + 0x14) - fVar59;
        fVar60 = *(float *)(lVar49 + 0x18) - fVar60;
        fVar61 = *(float *)(lVar49 + 0x1c) - fVar61;
        fVar58 = fVar58 * fVar58;
        fVar59 = fVar59 * fVar59;
        fVar60 = fVar60 * fVar60;
        fVar61 = fVar61 * fVar61;
        auVar29._4_4_ = fVar59;
        auVar29._0_4_ = fVar58;
        auVar29._8_4_ = fVar60;
        auVar29._12_4_ = fVar61;
        auVar30._4_4_ = fVar59;
        auVar30._0_4_ = fVar58;
        auVar30._8_4_ = fVar60;
        auVar30._12_4_ = fVar61;
        auVar67 = NEON_ext(auVar29,auVar30,8,1);
        if (SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55) <=
            SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59)) goto joined_r0x00f3ce3c;
        param_1[1] = lVar51;
      }
      else {
        *param_1 = lVar51;
      }
      param_1[2] = lVar49;
      lVar53 = lVar49;
    }
joined_r0x00f3ce3c:
    if (param_1 + 3 != param_2) {
      lVar48 = 0;
      iVar52 = 0;
      plVar50 = param_1 + 3;
      do {
        lVar49 = *plVar50;
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar60 = (float)uVar47;
        fVar61 = (float)((ulong)uVar47 >> 0x20);
        uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar58 = (float)uVar47;
        fVar59 = (float)((ulong)uVar47 >> 0x20);
        fVar54 = (float)*(undefined8 *)(lVar49 + 0x10) - fVar58;
        fVar55 = (float)((ulong)*(undefined8 *)(lVar49 + 0x10) >> 0x20) - fVar59;
        fVar56 = (float)*(undefined8 *)(lVar49 + 0x18) - fVar60;
        fVar57 = (float)((ulong)*(undefined8 *)(lVar49 + 0x18) >> 0x20) - fVar61;
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar57 = fVar57 * fVar57;
        auVar2._4_4_ = fVar55;
        auVar2._0_4_ = fVar54;
        auVar2._8_4_ = fVar56;
        auVar2._12_4_ = fVar57;
        auVar3._4_4_ = fVar55;
        auVar3._0_4_ = fVar54;
        auVar3._8_4_ = fVar56;
        auVar3._12_4_ = fVar57;
        auVar63 = NEON_ext(auVar2,auVar3,8,1);
        fVar58 = *(float *)(lVar53 + 0x10) - fVar58;
        fVar59 = *(float *)(lVar53 + 0x14) - fVar59;
        fVar60 = *(float *)(lVar53 + 0x18) - fVar60;
        fVar61 = *(float *)(lVar53 + 0x1c) - fVar61;
        fVar58 = fVar58 * fVar58;
        fVar59 = fVar59 * fVar59;
        fVar60 = fVar60 * fVar60;
        fVar61 = fVar61 * fVar61;
        auVar25._4_4_ = fVar59;
        auVar25._0_4_ = fVar58;
        auVar25._8_4_ = fVar60;
        auVar25._12_4_ = fVar61;
        auVar26._4_4_ = fVar59;
        auVar26._0_4_ = fVar58;
        auVar26._8_4_ = fVar60;
        auVar26._12_4_ = fVar61;
        auVar67 = NEON_ext(auVar25,auVar26,8,1);
        if (SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59) <
            SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55)) {
          lVar53 = lVar48;
          do {
            lVar51 = lVar53;
            *(undefined8 *)((long)param_1 + lVar51 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar51 + 0x10);
            if (lVar51 == -0x10) {
              *param_1 = lVar49;
              goto joined_r0x00f3cf5c;
            }
            lVar53 = *(long *)((long)param_1 + lVar51 + 8);
            uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x18);
            fVar60 = (float)uVar47;
            fVar61 = (float)((ulong)uVar47 >> 0x20);
            uVar47 = *(undefined8 *)(*(long *)*param_3 + 0x10);
            fVar58 = (float)uVar47;
            fVar59 = (float)((ulong)uVar47 >> 0x20);
            fVar54 = (float)*(undefined8 *)(lVar49 + 0x10) - fVar58;
            fVar55 = (float)((ulong)*(undefined8 *)(lVar49 + 0x10) >> 0x20) - fVar59;
            fVar56 = (float)*(undefined8 *)(lVar49 + 0x18) - fVar60;
            fVar57 = (float)((ulong)*(undefined8 *)(lVar49 + 0x18) >> 0x20) - fVar61;
            fVar54 = fVar54 * fVar54;
            fVar55 = fVar55 * fVar55;
            fVar56 = fVar56 * fVar56;
            fVar57 = fVar57 * fVar57;
            auVar4._4_4_ = fVar55;
            auVar4._0_4_ = fVar54;
            auVar4._8_4_ = fVar56;
            auVar4._12_4_ = fVar57;
            auVar5._4_4_ = fVar55;
            auVar5._0_4_ = fVar54;
            auVar5._8_4_ = fVar56;
            auVar5._12_4_ = fVar57;
            auVar63 = NEON_ext(auVar4,auVar5,8,1);
            fVar58 = *(float *)(lVar53 + 0x10) - fVar58;
            fVar59 = *(float *)(lVar53 + 0x14) - fVar59;
            fVar60 = *(float *)(lVar53 + 0x18) - fVar60;
            fVar61 = *(float *)(lVar53 + 0x1c) - fVar61;
            fVar58 = fVar58 * fVar58;
            fVar59 = fVar59 * fVar59;
            fVar60 = fVar60 * fVar60;
            fVar61 = fVar61 * fVar61;
            auVar27._4_4_ = fVar59;
            auVar27._0_4_ = fVar58;
            auVar27._8_4_ = fVar60;
            auVar27._12_4_ = fVar61;
            auVar28._4_4_ = fVar59;
            auVar28._0_4_ = fVar58;
            auVar28._8_4_ = fVar60;
            auVar28._12_4_ = fVar61;
            auVar67 = NEON_ext(auVar27,auVar28,8,1);
            lVar53 = lVar51 + -8;
          } while (SQRT(auVar67._0_4_ + fVar58 + auVar67._4_4_ + fVar59) <
                   SQRT(auVar63._0_4_ + fVar54 + auVar63._4_4_ + fVar55));
          *(long *)((long)param_1 + lVar51 + 0x10) = lVar49;
joined_r0x00f3cf5c:
          iVar52 = iVar52 + 1;
          if (iVar52 == 8) {
            return plVar50 + 1 == param_2;
          }
        }
        if (plVar50 + 1 == param_2) {
          return true;
        }
        lVar53 = *plVar50;
        lVar48 = lVar48 + 8;
        plVar50 = plVar50 + 1;
      } while( true );
    }
  }
  return true;
}


