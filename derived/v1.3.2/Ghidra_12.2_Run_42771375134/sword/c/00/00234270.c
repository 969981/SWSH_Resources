/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00234270; name: FUN_00234270
 */


void FUN_00234270(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6,
                 long param_7,float *param_8,float *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_10 [4];
  
  uVar4 = (ulong)param_2;
  lVar2 = uVar4 * 4;
  fVar11 = *(float *)(param_6 + lVar2);
  uVar5 = (ulong)param_3;
  lVar1 = uVar5 * 4;
  afStack_10[uVar4] = *(float *)(param_4 + lVar2) + fVar11;
  fVar12 = *(float *)(param_6 + lVar1);
  fVar7 = *(float *)(param_4 + lVar1) + fVar12;
  lVar3 = (ulong)param_1 * 4;
  afStack_10[uVar5] = fVar7;
  fVar13 = *(float *)(param_5 + lVar3);
  fVar8 = afStack_10[uVar4];
  fVar10 = *(float *)(param_5 + lVar2);
  fVar6 = *(float *)(param_7 + lVar3);
  fVar9 = *(float *)(param_5 + lVar1);
  if (fVar10 * fVar6 <= fVar13 * fVar8) {
    if (fVar6 * fVar9 <= fVar7 * fVar13) {
      if (param_8 == (float *)0x0) {
        return;
      }
      *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
      fVar6 = 1.0 / *(float *)(param_5 + lVar3);
      *(float *)(param_4 + lVar2) =
           *(float *)(param_4 + lVar2) -
           fVar6 * *(float *)(param_5 + lVar2) * *(float *)(param_7 + lVar3);
      *(float *)(param_4 + lVar1) =
           *(float *)(param_4 + lVar1) -
           fVar6 * *(float *)(param_5 + lVar1) * *(float *)(param_7 + lVar3);
      *param_8 = -(fVar6 * *(float *)(param_7 + lVar3));
      return;
    }
    fVar16 = fVar13 * fVar13 + fVar9 * fVar9;
    fVar13 = fVar13 * fVar6;
    fVar9 = fVar7 * fVar9;
    fVar18 = fVar8 * fVar16 - fVar10 * (fVar13 + fVar9);
    if (fVar11 * (fVar16 + fVar16) < fVar18) {
      fVar8 = *(float *)(param_7 + uVar4 * 4);
      fVar16 = fVar10 * fVar10 + fVar16;
      fVar14 = fVar9 + fVar13 + fVar10 * fVar8;
LAB_0023453c:
      *param_9 = *param_9 +
                 fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 + fVar14 * (-fVar14 / fVar16);
      if (param_8 == (float *)0x0) {
        return;
      }
      *param_8 = -fVar14 / fVar16;
      *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
      *(undefined4 *)(param_4 + lVar2) = *(undefined4 *)(param_6 + lVar2);
    }
    else {
      fVar18 = fVar18 / fVar16;
      fVar8 = fVar8 - fVar18;
      fVar14 = fVar9 + fVar13 + fVar10 * fVar8;
      fVar9 = -fVar14 / (fVar10 * fVar10 + fVar16);
      fVar8 = fVar8 * fVar8;
LAB_00234660:
      *param_9 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 + fVar14 * fVar9 + *param_9;
      if (param_8 == (float *)0x0) {
        return;
      }
      *param_8 = fVar9;
      *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
      fVar18 = fVar18 - *(float *)(param_6 + lVar2);
LAB_00234698:
      *(float *)(param_4 + lVar2) = fVar18;
    }
    fVar10 = -*(float *)(param_6 + lVar1);
  }
  else {
    fVar17 = fVar13 * fVar13;
    if (fVar7 * fVar13 < fVar6 * fVar9) {
      fVar15 = fVar9 * fVar9;
      fVar13 = fVar13 * fVar6;
      fVar14 = fVar7 * fVar9;
      fVar16 = fVar17 + fVar15;
      fVar18 = fVar8 * fVar16 - fVar10 * (fVar13 + fVar14);
      if (0.0 <= fVar18) {
        if (fVar18 <= fVar11 * (fVar16 + fVar16)) {
          fVar18 = fVar18 / fVar16;
          fVar8 = fVar8 - fVar18;
          fVar14 = fVar14 + fVar13 + fVar10 * fVar8;
          fVar9 = -fVar14 / (fVar10 * fVar10 + fVar16);
          fVar8 = fVar8 * fVar8;
          goto LAB_00234660;
        }
        fVar8 = *(float *)(param_7 + uVar4 * 4);
        fVar16 = fVar10 * fVar10 + fVar16;
        fVar14 = fVar14 + fVar13 + fVar10 * fVar8;
        goto LAB_0023453c;
      }
      fVar17 = fVar17 + fVar10 * fVar10;
      fVar13 = fVar8 * fVar10 + fVar13;
      fVar10 = fVar7 * fVar17 - fVar9 * fVar13;
      if (fVar10 < 0.0) {
        fVar9 = -(fVar13 + fVar14) / (fVar17 + fVar15);
        *param_9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6 + (fVar13 + fVar14) * fVar9 +
                   *param_9;
        if (param_8 == (float *)0x0) {
          return;
        }
        *param_8 = fVar9;
        *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
        fVar18 = -*(float *)(param_6 + lVar2);
        goto LAB_00234698;
      }
      if (fVar12 * (fVar17 + fVar17) < fVar10) {
        fVar10 = *(float *)(param_7 + uVar5 * 4);
        fVar13 = fVar13 + fVar9 * fVar10;
        fVar7 = -fVar13 / (fVar17 + fVar15);
        *param_9 = *param_9 + fVar8 * fVar8 + fVar6 * fVar6 + fVar10 * fVar10 + fVar13 * fVar7;
        goto joined_r0x00234608;
      }
      fVar10 = fVar10 / fVar17;
      fVar7 = fVar7 - fVar10;
      fVar13 = fVar13 + fVar9 * fVar7;
      fVar9 = -fVar13 / (fVar17 + fVar15);
      *param_9 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 + fVar13 * fVar9 + *param_9;
    }
    else {
      fVar17 = fVar17 + fVar10 * fVar10;
      fVar13 = fVar8 * fVar10 + fVar13 * fVar6;
      fVar10 = fVar7 * fVar17 - fVar9 * fVar13;
      if (fVar12 * (fVar17 + fVar17) < fVar10) {
        fVar10 = *(float *)(param_7 + uVar5 * 4);
        fVar13 = fVar13 + fVar9 * fVar10;
        fVar7 = -fVar13 / (fVar17 + fVar9 * fVar9);
        *param_9 = *param_9 + fVar8 * fVar8 + fVar6 * fVar6 + fVar10 * fVar10 + fVar13 * fVar7;
joined_r0x00234608:
        if (param_8 == (float *)0x0) {
          return;
        }
        *param_8 = fVar7;
        *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
        *(float *)(param_4 + lVar2) = -*(float *)(param_6 + lVar2);
        *(undefined4 *)(param_4 + lVar1) = *(undefined4 *)(param_6 + lVar1);
        return;
      }
      fVar10 = fVar10 / fVar17;
      fVar7 = fVar7 - fVar10;
      fVar13 = fVar13 + fVar9 * fVar7;
      fVar9 = -fVar13 / (fVar17 + fVar9 * fVar9);
      *param_9 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 + fVar13 * fVar9 + *param_9;
    }
    if (param_8 == (float *)0x0) {
      return;
    }
    *param_8 = fVar9;
    *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
    *(float *)(param_4 + lVar2) = -*(float *)(param_6 + lVar2);
    fVar10 = fVar10 - *(float *)(param_6 + lVar1);
  }
  *(float *)(param_4 + lVar1) = fVar10;
  return;
}


