/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00399850; name: FUN_00399850
 */


/* WARNING: Removing unreachable block (ram,0x0039994c) */

void FUN_00399850(undefined8 *param_1,uint *param_2,int *param_3,undefined8 param_4,long param_5)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_40;
  float local_38;
  
  uVar3 = *(uint *)((long)param_1 + 0x24);
  uVar13 = (ulong)uVar3;
  puVar1 = (uint *)(param_5 + (ulong)*(uint *)(param_1 + 4) * 4);
  uVar8 = (ulong)*puVar1;
  lVar7 = *(long *)(param_2 + 4);
  pauVar12 = (undefined1 (*) [16])(*(long *)(param_2 + 2) + uVar8 * 0x18);
  auVar26 = *pauVar12;
  auVar25 = auVar26._0_12_;
  auVar18 = *(undefined1 (*) [16])(*pauVar12 + 0xc);
  auVar17 = auVar18._0_12_;
  puVar4 = (undefined8 *)(lVar7 + uVar8 * 0xc);
  uVar10 = puVar4[1];
  fVar21 = (float)uVar10;
  uVar19 = *puVar4;
  if (1 < uVar3) {
    lVar14 = uVar13 - 1;
    puVar11 = puVar1;
    do {
      puVar11 = puVar11 + 1;
      pauVar12 = (undefined1 (*) [16])(*(long *)(param_2 + 2) + (ulong)*puVar11 * 0x18);
      puVar4 = (undefined8 *)(lVar7 + (ulong)*puVar11 * 0xc);
      uVar6 = *puVar4;
      auVar26 = NEON_fmin(auVar26,*pauVar12,4);
      auVar25 = auVar26._0_12_;
      uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                        (float)uVar19 + (float)uVar6);
      fVar21 = (float)uVar10 + (float)puVar4[1];
      uVar10 = (ulong)(uint)fVar21;
      auVar5._12_4_ = (int)((ulong)*(undefined8 *)(pauVar12[1] + 4) >> 0x20);
      auVar5._0_12_ = *(undefined1 (*) [12])(*pauVar12 + 0xc);
      auVar18 = NEON_fmax(auVar18,auVar5,4);
      auVar17 = auVar18._0_12_;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *param_1 = auVar25._0_8_;
  param_1[1] = CONCAT44(auVar17._0_4_,auVar25._8_4_);
  param_1[2] = auVar17._4_8_;
  if (uVar3 <= *param_2) {
    return;
  }
  fVar23 = 1.0 / (float)uVar3;
  fVar24 = (float)uVar19 * fVar23;
  fVar27 = (float)((ulong)uVar19 >> 0x20) * fVar23;
  fVar21 = fVar21 * fVar23;
  puVar4 = (undefined8 *)(lVar7 + uVar8 * 0xc);
  uVar19 = *puVar4;
  fVar23 = (float)uVar19 - fVar24;
  fVar20 = (float)((ulong)uVar19 >> 0x20) - fVar27;
  fVar22 = (float)puVar4[1] - fVar21;
  fVar23 = fVar23 * fVar23 + 0.0;
  fVar20 = fVar20 * fVar20 + 0.0;
  local_38 = fVar22 * fVar22 + 0.0;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      lVar9 = 1;
    }
    else {
      lVar14 = 0;
      do {
        lVar9 = lVar14;
        puVar4 = (undefined8 *)(lVar7 + (ulong)puVar1[lVar9 + 1] * 0xc);
        uVar19 = *puVar4;
        fVar22 = (float)uVar19 - fVar24;
        fVar29 = (float)((ulong)uVar19 >> 0x20) - fVar27;
        fVar31 = (float)puVar4[1] - fVar21;
        puVar4 = (undefined8 *)(lVar7 + (ulong)puVar1[lVar9 + 2] * 0xc);
        uVar19 = *puVar4;
        fVar28 = (float)uVar19 - fVar24;
        fVar30 = (float)((ulong)uVar19 >> 0x20) - fVar27;
        fVar32 = (float)puVar4[1] - fVar21;
        fVar23 = fVar23 + fVar22 * fVar22 + fVar28 * fVar28;
        fVar20 = fVar20 + fVar29 * fVar29 + fVar30 * fVar30;
        local_38 = local_38 + fVar31 * fVar31 + fVar32 * fVar32;
        lVar14 = lVar9 + 2;
      } while ((uVar13 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
      lVar9 = lVar9 + 3;
      if ((~uVar3 & 1) == 0) goto LAB_003999c0;
    }
    puVar4 = (undefined8 *)(lVar7 + (ulong)puVar1[lVar9] * 0xc);
    uVar19 = *puVar4;
    fVar24 = (float)uVar19 - fVar24;
    fVar27 = (float)((ulong)uVar19 >> 0x20) - fVar27;
    fVar21 = (float)puVar4[1] - fVar21;
    fVar23 = fVar23 + fVar24 * fVar24;
    fVar20 = fVar20 + fVar27 * fVar27;
    local_38 = local_38 + fVar21 * fVar21;
  }
LAB_003999c0:
  fVar21 = 1.0 / (float)(uVar3 - 1);
  local_40 = CONCAT44(fVar20 * fVar21,fVar23 * fVar21);
  local_38 = local_38 * fVar21;
  uVar10 = (ulong)(fVar23 * fVar21 < fVar20 * fVar21);
  uVar8 = 2;
  if (local_38 <= *(float *)((ulong)&local_40 | uVar10 << 2)) {
    uVar8 = uVar10;
  }
  pfVar2 = (float *)((long)param_1 + uVar8 * 4);
  fVar21 = *pfVar2;
  fVar23 = pfVar2[3];
  puVar11 = puVar1;
  uVar10 = 0;
  do {
    uVar15 = *puVar11;
    uVar16 = uVar10;
    if ((fVar21 + fVar23) * 0.5 < *(float *)(uVar8 * 4 + lVar7 + (ulong)uVar15 * 0xc)) {
      uVar16 = (ulong)((int)uVar10 + 1);
      *puVar11 = puVar1[uVar10];
      puVar1[uVar10] = uVar15;
    }
    uVar15 = (uint)uVar16;
    uVar13 = uVar13 - 1;
    puVar11 = puVar11 + 1;
    uVar10 = uVar16;
  } while (uVar13 != 0);
  if ((uVar15 == 0) || (uVar15 == uVar3)) {
    if (uVar3 <= *param_2) {
      return;
    }
    uVar15 = uVar3 >> 1;
  }
  lVar7 = FUN_00399710(param_4);
  param_1[3] = lVar7;
  *param_3 = *param_3 + 2;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 4);
  *(uint *)(lVar7 + 0x24) = uVar15;
  *(uint *)(lVar7 + 0x48) = *(int *)(param_1 + 4) + uVar15;
  *(uint *)(lVar7 + 0x4c) = *(int *)((long)param_1 + 0x24) - uVar15;
  return;
}


