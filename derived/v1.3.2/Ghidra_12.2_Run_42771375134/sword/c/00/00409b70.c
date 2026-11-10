/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409b70; name: FUN_00409b70
 */


ulong FUN_00409b70(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  double *pdVar12;
  long *plVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar8 = *param_2;
  *param_2 = lVar8 + 4;
  bVar3 = *(byte *)(lVar8 + 4);
  *param_2 = lVar8 + 5;
  *(byte *)((long)param_1 + 0xdc) =
       bVar3 & 8 | bVar3 >> 1 & 1 | bVar3 >> 1 & 2 | *(byte *)((long)param_1 + 0xdc) & 0xf4;
  uVar7 = FUN_004854e0();
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  pdVar12 = (double *)((uint *)*param_2 + 1);
  uVar1 = *(uint *)*param_2;
  *param_2 = (long)pdVar12;
  if (uVar1 != 0) {
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3);
    param_1[0x17] = lVar8;
    if (lVar8 == 0) {
      return 0x34;
    }
    uVar14 = 0;
    *(uint *)((long)param_1 + 0xc4) = uVar1;
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      uVar7 = (**(code **)(*param_1 + 0x58))(param_1,uVar2);
      iVar10 = (int)uVar7;
      if (iVar10 != 0xf && iVar10 != 1) {
        return uVar7;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar1);
    if (iVar10 != 1) {
      return uVar7;
    }
    pdVar12 = (double *)*param_2;
  }
  puVar11 = (uint *)((long)pdVar12 + 0x17);
  dVar16 = *pdVar12;
  *param_2 = (long)(pdVar12 + 1);
  dVar15 = pdVar12[1];
  *param_2 = (long)(pdVar12 + 2);
  fVar17 = *(float *)(pdVar12 + 2);
  *param_2 = (long)((long)pdVar12 + 0x14);
  bVar3 = *(byte *)((long)pdVar12 + 0x14);
  *param_2 = (long)pdVar12 + 0x15;
  bVar4 = *(byte *)((long)pdVar12 + 0x15);
  *param_2 = (long)pdVar12 + 0x16;
  cVar5 = *(char *)((long)pdVar12 + 0x16);
  *param_2 = (long)puVar11;
  if (cVar5 != '\0') {
    *(byte *)((long)param_1 + 0xdc) = *(byte *)((long)param_1 + 0xdc) | 4;
    *(float *)(param_1 + 0x19) = fVar17;
    dVar19 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
    dVar18 = (4.0 / (double)bVar4) * (DAT_01cd5118 / (double)fVar17) * dVar19;
    dVar20 = 0.5;
    if (dVar18 <= 0.0) {
      dVar20 = -0.5;
    }
    iVar10 = (int)(dVar20 + dVar18);
    *(int *)((long)param_1 + 0xcc) = iVar10;
    *(uint *)(param_1 + 0x1a) = iVar10 * (uint)bVar3;
    dVar16 = dVar19 * DAT_01cd5288 * dVar16;
    dVar18 = 0.5;
    if (dVar16 <= 0.0) {
      dVar18 = -0.5;
    }
    dVar15 = dVar19 * DAT_01cd5288 * dVar15;
    dVar19 = 0.5;
    if (dVar15 <= 0.0) {
      dVar19 = -0.5;
    }
    *(int *)((long)param_1 + 0xd4) = (int)(dVar18 + dVar16);
    *(int *)(param_1 + 0x1b) = (int)(dVar19 + dVar15);
    puVar11 = (uint *)*param_2;
  }
  uVar1 = *puVar11;
  uVar7 = (ulong)uVar1;
  *param_2 = (long)(puVar11 + 1);
  puVar6 = PTR_DAT_02712a90;
  if (uVar1 != 0) {
    lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar7 * 0x18);
    if (lVar8 == 0) {
      return 2;
    }
    puVar9 = (undefined4 *)(lVar8 + 0xc);
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar9[-3] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar9[-2] = uVar2;
      uVar7 = uVar7 - 1;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar9[-1] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      *puVar9 = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar9[1] = uVar2;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar9[2] = uVar2;
      puVar9 = puVar9 + 6;
    } while (uVar7 != 0);
    uVar7 = FUN_00409e80(param_1,lVar8,uVar1);
    FUN_00404870(*(undefined4 *)puVar6,lVar8);
    return uVar7 & 0xffffffff;
  }
  plVar13 = (long *)param_1[0x1c];
  if (plVar13 == (long *)0x0) {
    return 1;
  }
  if (*plVar13 != 0) {
    *(undefined4 *)(plVar13 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *plVar13 = 0;
    *(undefined4 *)((long)plVar13 + 0xc) = 0;
    plVar13 = (long *)param_1[0x1c];
    if (plVar13 == (long *)0x0) goto LAB_00409e54;
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar13);
LAB_00409e54:
  param_1[0x1c] = 0;
  return 1;
}


