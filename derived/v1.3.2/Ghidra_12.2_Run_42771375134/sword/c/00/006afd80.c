/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006afd80; name: FUN_006afd80
 */


undefined8 FUN_006afd80(undefined8 *param_1,float *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  
  fVar4 = *(float *)(param_1 + 4);
  if (fVar4 == 0.0) {
    fVar4 = param_2[1];
    fVar6 = *(float *)((long)param_1 + 0x24);
    if (fVar4 <= 0.0) {
      fVar6 = -fVar6;
      bVar3 = fVar4 < fVar6;
      if (bVar3) {
        fVar4 = fVar6;
      }
    }
    else if (fVar6 < fVar4) {
      bVar3 = true;
      fVar4 = fVar6;
    }
    else {
      bVar3 = false;
    }
    if (param_3 != (ulong *)0x0) {
      param_3[1] = param_3[1];
      *param_3 = *param_3 & 0xffffffff;
    }
    if (bVar3) {
      if (param_3 != (ulong *)0x0) {
        fVar7 = param_2[1];
        param_3[1] = param_3[1];
        *param_3 = CONCAT44(fVar7 - fVar6,(int)*param_3);
      }
      uVar5 = *(ulong *)(param_2 + 2);
      *(ulong *)(param_2 + 2) = uVar5;
      *(ulong *)param_2 = CONCAT44(fVar4,(int)*(ulong *)param_2);
      *(ulong *)(param_2 + 2) = uVar5;
      *(ulong *)param_2 = (ulong)(uint)fVar4 << 0x20;
    }
    else {
      *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2);
      *(ulong *)param_2 = *(ulong *)param_2 & 0xffffffff00000000;
    }
    if (param_3 == (ulong *)0x0) {
      return 1;
    }
    param_3[1] = param_3[1];
    *param_3 = *param_3 & 0xffffffff00000000;
    return 1;
  }
  fVar6 = *(float *)((long)param_1 + 0x24);
  if (fVar6 != 0.0) {
    uVar5 = *(ulong *)(param_2 + 2);
    fVar7 = (float)*(ulong *)param_2;
    fVar8 = fVar7 - (float)param_1[2];
    fVar18 = (float)(*(ulong *)param_2 >> 0x20);
    fVar9 = fVar18 - (float)((ulong)param_1[2] >> 0x20);
    fVar10 = (float)uVar5 - (float)param_1[3];
    fVar15 = (float)(uVar5 >> 0x20);
    fVar11 = fVar15 - (float)((ulong)param_1[3] >> 0x20);
    fVar12 = fVar7 - (float)*param_1;
    fVar13 = fVar18 - (float)((ulong)*param_1 >> 0x20);
    fVar14 = (float)uVar5 - (float)param_1[1];
    fVar15 = fVar15 - (float)((ulong)param_1[1] >> 0x20);
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    auVar16._4_4_ = fVar9;
    auVar16._0_4_ = fVar8;
    auVar16._8_4_ = fVar10;
    auVar16._12_4_ = fVar11;
    auVar17._4_4_ = fVar9;
    auVar17._0_4_ = fVar8;
    auVar17._8_4_ = fVar10;
    auVar17._12_4_ = fVar11;
    auVar16 = NEON_ext(auVar16,auVar17,8,1);
    fVar12 = fVar12 * fVar12;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    auVar1._4_4_ = fVar13;
    auVar1._0_4_ = fVar12;
    auVar1._8_4_ = fVar14;
    auVar1._12_4_ = fVar15;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar12;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar15;
    auVar17 = NEON_ext(auVar1,auVar2,8,1);
    if (SQRT(auVar16._0_4_ + fVar8 + auVar16._4_4_ + fVar9) +
        SQRT(auVar17._0_4_ + fVar12 + auVar17._4_4_ + fVar13) <= *(float *)(param_1 + 6)) {
      return 0;
    }
    if (fVar7 == 0.0) {
      if (fVar18 <= 0.0) {
        fVar6 = -fVar6;
      }
      if (param_3 != (ulong *)0x0) {
        uVar5 = param_3[1];
        param_3[1] = uVar5;
        *param_3 = *param_3 & 0xffffffff00000000;
        fVar4 = param_2[1];
        param_3[1] = uVar5;
        *param_3 = (ulong)(uint)(fVar4 - fVar6) << 0x20;
        uVar5 = *(ulong *)(param_2 + 2);
      }
      *(ulong *)(param_2 + 2) = uVar5;
      *(ulong *)param_2 = (ulong)(uint)fVar6 << 0x20;
      return 1;
    }
    fVar18 = fVar18 / fVar7;
    fVar15 = *(float *)((long)param_1 + 0x2c) + fVar18 * fVar18 * *(float *)(param_1 + 5);
    fVar7 = SQRT(fVar15);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar15);
    }
    fVar7 = (fVar4 * fVar6) / fVar7;
    uVar5 = *(ulong *)(param_2 + 2);
    fVar4 = -fVar7;
    if (0.0 <= (float)*(ulong *)param_2) {
      fVar4 = fVar7;
    }
    if (param_3 != (ulong *)0x0) {
      fVar6 = (float)*(ulong *)param_2 - fVar4;
      uVar5 = param_3[1];
      param_3[1] = uVar5;
      *param_3 = CONCAT44((int)(*param_3 >> 0x20),fVar6);
      fVar7 = param_2[1];
      param_3[1] = uVar5;
      *param_3 = CONCAT44(fVar7 - fVar18 * fVar4,fVar6);
      uVar5 = *(ulong *)(param_2 + 2);
    }
    *(ulong *)(param_2 + 2) = uVar5;
    *(ulong *)param_2 = CONCAT44(fVar18 * fVar4,fVar4);
    return 1;
  }
  fVar6 = *param_2;
  if (fVar6 <= 0.0) {
    fVar4 = -fVar4;
    if (fVar6 < fVar4) goto LAB_006aff84;
  }
  else if (fVar4 < fVar6) {
LAB_006aff84:
    bVar3 = true;
    fVar6 = fVar4;
    goto joined_r0x006afdf0;
  }
  bVar3 = false;
joined_r0x006afdf0:
  if (param_3 != (ulong *)0x0) {
    param_3[1] = param_3[1];
    *param_3 = *param_3 & 0xffffffff00000000;
  }
  if (bVar3) {
    if (param_3 != (ulong *)0x0) {
      fVar7 = *param_2;
      param_3[1] = param_3[1];
      *param_3 = CONCAT44((int)(*param_3 >> 0x20),fVar7 - fVar4);
    }
    uVar5 = *(ulong *)(param_2 + 2);
    *(ulong *)(param_2 + 2) = uVar5;
    *(ulong *)param_2 = CONCAT44((int)(*(ulong *)param_2 >> 0x20),fVar6);
    *(ulong *)(param_2 + 2) = uVar5;
    *(ulong *)param_2 = (ulong)(uint)fVar6;
  }
  else {
    *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2);
    *(ulong *)param_2 = *(ulong *)param_2 & 0xffffffff;
  }
  if (param_3 != (ulong *)0x0) {
    param_3[1] = param_3[1];
    *param_3 = *param_3 & 0xffffffff;
  }
  return 1;
}


