/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489b60; name: FUN_00489b60
 */


void FUN_00489b60(undefined4 *param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  plVar7 = *(long **)(param_1 + 6);
  uVar4 = *(ushort *)(param_1 + 9);
  uVar8 = (ulong)uVar4;
  if ((int)(uint)uVar4 < (int)plVar7[1]) {
    pfVar2 = (float *)(*plVar7 + uVar8 * 0x10);
    uVar1 = uVar4 + 1;
    uVar8 = (ulong)uVar1;
    *(short *)(param_1 + 9) = (short)uVar1;
    fVar13 = *pfVar2;
    param_1[0x17] = fVar13;
    fVar12 = pfVar2[1];
    param_1[0x18] = fVar12;
    fVar14 = pfVar2[2];
    param_1[0x19] = fVar14;
    puVar5 = PTR_DAT_02712b80;
    fVar15 = DAT_01d4c480;
    lVar11 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    lVar9 = lVar11 * 0x5851f42d4c957f2d + 1;
    lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
    param_1[0x17] =
         ((float)(uint)((ulong)lVar11 >> 0x21) * DAT_01d4c480 * *(float *)((long)plVar7 + 0xc) -
         *(float *)((long)plVar7 + 0xc)) + fVar13;
    param_1[0x19] =
         ((float)(uint)((ulong)lVar9 >> 0x21) * fVar15 * *(float *)(plVar7 + 2) -
         *(float *)(plVar7 + 2)) + fVar14;
    *(long *)puVar5 = lVar10;
    param_1[0x18] =
         ((float)(uint)((ulong)lVar10 >> 0x21) * fVar15 * *(float *)((long)plVar7 + 0x14) -
         *(float *)((long)plVar7 + 0x14)) + fVar12;
    iVar3 = *(int *)PTR_DAT_02712e58;
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = ((int)pfVar2[3] + iVar3 + -1) / iVar3;
    }
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    param_1[0x13] = iVar6;
    if ((int)(uVar1 & 0xffff) < (int)plVar7[1]) goto LAB_00489ca4;
  }
  else if ((int)(uint)uVar4 < (int)plVar7[1]) goto LAB_00489ca4;
  iVar6 = FUN_00489d80(param_1);
  if (iVar6 != 1) {
    *param_1 = 0;
    return;
  }
  plVar7 = *(long **)(param_1 + 6);
  uVar8 = (ulong)*(ushort *)(param_1 + 9);
LAB_00489ca4:
  fVar13 = DAT_01d4c480;
  pfVar2 = (float *)(*plVar7 + (ulong)((uint)uVar8 & 0xffff) * 0x10);
  fVar12 = *pfVar2;
  fVar14 = pfVar2[1];
  fVar15 = pfVar2[2];
  lVar9 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
  fVar16 = *(float *)((long)plVar7 + 0xc);
  fVar18 = *(float *)(plVar7 + 2);
  lVar11 = lVar10 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_02712b80 = lVar11;
  fVar17 = *(float *)((long)plVar7 + 0x14);
  uVar1 = param_1[0x12];
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[0x13] + uVar1;
  param_1[0x1a] =
       (fVar12 - (float)param_1[0x17]) +
       ((float)(uint)((ulong)lVar9 >> 0x21) * fVar13 * fVar16 - fVar16);
  param_1[0x1b] =
       (fVar14 - (float)param_1[0x18]) +
       ((float)(uint)((ulong)lVar11 >> 0x21) * fVar13 * fVar17 - fVar17);
  param_1[0x1c] =
       (((float)(uint)((ulong)lVar10 >> 0x21) * fVar13 * fVar18 - fVar18) + fVar15) -
       (float)param_1[0x19];
  fVar13 = 1.0 / (float)(uint)param_1[0x13];
  param_1[0x14] = fVar13;
  param_1[0x15] = -(fVar13 * (float)uVar1);
  return;
}


