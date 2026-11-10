/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004febc0; name: FUN_004febc0
 */


ulong FUN_004febc0(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5,byte param_6,
                  uint *param_7,long *param_8)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong *puVar16;
  
  *param_8 = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    return 0;
  }
  iVar15 = 0;
  iVar9 = iVar3 + -1;
  do {
    while( true ) {
      iVar5 = iVar9 - iVar15;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      uVar2 = iVar15 + (iVar5 >> 1);
      puVar8 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8);
      uVar6 = (uint)puVar8[4];
      if (uVar6 <= param_2) break;
LAB_004febf8:
      iVar9 = uVar2 - 1;
      if (iVar9 < iVar15) goto LAB_004fec28;
    }
    if (param_2 <= uVar6) {
      uVar13 = *puVar8;
      if (uVar13 < param_3) goto LAB_004febf8;
      if (uVar13 == param_3) {
        if (param_3 <= (uVar13 - param_4) + (ulong)*param_7) {
          puVar10 = puVar8 + 3;
          iVar15 = (int)*puVar10;
          goto LAB_004fecf0;
        }
        break;
      }
    }
    iVar15 = uVar2 + 1;
  } while (iVar15 <= iVar9);
LAB_004fec28:
  if ((uVar6 == param_2) && (uVar13 = *puVar8, uVar13 <= param_3)) {
    puVar10 = puVar8 + 3;
    iVar15 = (int)*puVar10;
    if ((int)param_3 <= (int)(((int)uVar13 - param_4) + iVar15)) goto LAB_004fecf0;
  }
  if (iVar3 <= (int)(uVar2 + 1)) {
    return 0;
  }
  puVar8 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)(uVar2 + 1) * 8);
  if ((uint)puVar8[4] != param_2) {
    return 0;
  }
  uVar13 = *puVar8;
  if (param_3 < uVar13) {
    return 0;
  }
  puVar10 = puVar8 + 3;
  iVar15 = (int)*puVar10;
  if ((int)(((int)uVar13 - param_4) + iVar15) < (int)param_3) {
    return 0;
  }
LAB_004fecf0:
  param_3 = param_3 - uVar13;
  uVar2 = iVar15 - (int)param_3;
  if (*param_7 < uVar2) {
    return 0;
  }
  if ((uVar2 == *param_7 & param_6) == 0) {
    uVar6 = 0;
    if (param_5 != 0) {
      uVar6 = uVar2 / param_5;
    }
    if (uVar2 != uVar6 * param_5) {
      return 0;
    }
  }
  uVar13 = 0;
  if (param_4 <= uVar2) {
    uVar1 = puVar8[1] + (param_3 & 0xffffffff);
    uVar14 = (ulong)param_5;
    uVar7 = 0;
    if (uVar14 != 0) {
      uVar7 = uVar1 / uVar14;
    }
    if (uVar1 == uVar7 * uVar14) {
      *param_7 = uVar2;
      sVar4 = *(short *)((long)puVar8 + 0x24);
      if (sVar4 == 0) {
        puVar12 = (ulong *)0x0;
        puVar16 = (ulong *)(param_1 + 0x18);
        do {
          puVar11 = puVar12;
          puVar12 = (ulong *)*puVar16;
          puVar16 = puVar12 + 2;
        } while (puVar12 != (ulong *)0x0 && puVar8 != puVar12);
        if (puVar12 != (ulong *)0x0) {
          puVar16 = (ulong *)(param_1 + 0x18);
          if (*(ulong **)(param_1 + 0x18) != puVar12) {
            puVar16 = puVar11 + 2;
          }
          *puVar16 = puVar12[2];
          if (*(ulong **)(param_1 + 0x10) == puVar12) {
            *(ulong **)(param_1 + 0x10) = puVar11;
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)*puVar10;
        sVar4 = *(short *)((long)puVar8 + 0x24);
        puVar8[2] = 0;
      }
      uVar13 = param_3 & 0xffffffff;
      *(short *)((long)puVar8 + 0x24) = sVar4 + 1;
      *param_8 = (long)puVar8;
    }
  }
  return uVar13;
}


