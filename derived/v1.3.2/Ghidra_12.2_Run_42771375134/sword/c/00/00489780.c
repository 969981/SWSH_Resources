/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489780; name: FUN_00489780
 */


undefined8 FUN_00489780(undefined4 *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  plVar5 = *(long **)(param_1 + 6);
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((int)plVar5[1] < 1) {
    return 0x25;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  pfVar6 = (float *)*plVar5;
  *(undefined2 *)(param_1 + 9) = 1;
  fVar12 = *pfVar6;
  param_1[0x17] = fVar12;
  fVar13 = pfVar6[1];
  param_1[0x18] = fVar13;
  fVar11 = pfVar6[2];
  param_1[0x19] = fVar11;
  iVar1 = *(int *)PTR_DAT_02712e58;
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = ((int)pfVar6[3] + iVar1 + -1) / iVar1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  param_1[0x13] = uVar4;
  puVar3 = PTR_DAT_02712b80;
  fVar2 = DAT_01d4c480;
  if ((int)plVar5[1] < 2) {
    *(undefined8 *)(param_1 + 0x1a) = 0;
    iVar1 = param_1[0xe];
    param_1[0x1c] = 0;
  }
  else {
    lVar7 = *plVar5;
    fVar15 = *(float *)(lVar7 + 0x10);
    fVar14 = *(float *)(lVar7 + 0x14);
    fVar17 = *(float *)(lVar7 + 0x18);
    if ((((fVar15 == fVar12) && (fVar14 == fVar13)) && ((int)plVar5[1] < 3)) && (fVar11 == fVar17))
    {
      lVar7 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
      fVar17 = (float)(uint)((ulong)lVar8 >> 0x21) * DAT_01d4c480;
      fVar12 = ((float)(uint)((ulong)lVar7 >> 0x21) * DAT_01d4c480 * *(float *)((long)plVar5 + 0xc)
               - *(float *)((long)plVar5 + 0xc)) + fVar12;
      param_1[0x17] = fVar12;
      lVar7 = lVar8 * 0x5851f42d4c957f2d + 1;
      fVar11 = (fVar17 * *(float *)(plVar5 + 2) - *(float *)(plVar5 + 2)) + fVar11;
      param_1[0x19] = fVar11;
      *(long *)puVar3 = lVar7;
      fVar13 = ((float)(uint)((ulong)lVar7 >> 0x21) * fVar2 * *(float *)((long)plVar5 + 0x14) -
               *(float *)((long)plVar5 + 0x14)) + fVar13;
      param_1[0x18] = fVar13;
      fVar15 = fVar12;
      fVar17 = fVar11;
      fVar14 = fVar13;
    }
    else {
      lVar7 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
      lVar9 = lVar8 * 0x5851f42d4c957f2d + 1;
      lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
      fVar12 = ((float)(uint)((ulong)lVar7 >> 0x21) * DAT_01d4c480 * *(float *)((long)plVar5 + 0xc)
               - *(float *)((long)plVar5 + 0xc)) + fVar12;
      fVar16 = (float)(uint)((ulong)lVar8 >> 0x21) * DAT_01d4c480;
      param_1[0x17] = fVar12;
      lVar8 = lVar10 * 0x5851f42d4c957f2d + 1;
      lVar7 = lVar8 * 0x5851f42d4c957f2d + 1;
      fVar11 = (fVar16 * *(float *)(plVar5 + 2) - *(float *)(plVar5 + 2)) + fVar11;
      param_1[0x19] = fVar11;
      fVar13 = ((float)(uint)((ulong)lVar9 >> 0x21) * fVar2 * *(float *)((long)plVar5 + 0x14) -
               *(float *)((long)plVar5 + 0x14)) + fVar13;
      param_1[0x18] = fVar13;
      fVar16 = *(float *)((long)plVar5 + 0xc);
      fVar18 = *(float *)(plVar5 + 2);
      *(long *)puVar3 = lVar7;
      fVar15 = ((float)(uint)((ulong)lVar10 >> 0x21) * fVar2 * fVar16 - fVar16) + fVar15;
      fVar17 = ((float)(uint)((ulong)lVar8 >> 0x21) * fVar2 * fVar18 - fVar18) + fVar17;
      fVar14 = ((float)(uint)((ulong)lVar7 >> 0x21) * fVar2 * *(float *)((long)plVar5 + 0x14) -
               *(float *)((long)plVar5 + 0x14)) + fVar14;
    }
    param_1[0x1a] = fVar15 - fVar12;
    param_1[0x1b] = fVar14 - fVar13;
    iVar1 = param_1[0xe];
    param_1[0x1c] = fVar17 - fVar11;
  }
  if (iVar1 != 0) {
    plVar5 = *(long **)(param_1 + 0xc);
    lVar7 = *(long *)(*plVar5 + 0x140);
    *(float *)(lVar7 + 0x20) = fVar13 + *(float *)(lVar7 + 0x20);
    *(float *)(lVar7 + 0x1c) = fVar12 + *(float *)(lVar7 + 0x1c);
    *(float *)(lVar7 + 0x24) = fVar11 + *(float *)(lVar7 + 0x24);
    while (plVar5 = plVar5 + 1,
          plVar5 != (long *)(*(long *)(param_1 + 0xc) + (ulong)(uint)param_1[0xe] * 8)) {
      fVar12 = (float)param_1[0x18];
      fVar13 = (float)param_1[0x19];
      lVar7 = *(long *)(*plVar5 + 0x140);
      *(float *)(lVar7 + 0x1c) = (float)param_1[0x17] + *(float *)(lVar7 + 0x1c);
      *(float *)(lVar7 + 0x20) = fVar12 + *(float *)(lVar7 + 0x20);
      *(float *)(lVar7 + 0x24) = fVar13 + *(float *)(lVar7 + 0x24);
    }
    uVar4 = param_1[0x13];
  }
  param_1[0x1f] = param_1[0x19];
  param_1[0x11] = param_2;
  param_1[0x12] = uVar4 + param_2;
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_1 + 0x17);
  *param_1 = 1;
  param_1[0x14] = 1.0 / (float)uVar4;
  param_1[0x15] = -((1.0 / (float)uVar4) * (float)param_2);
  return 1;
}


