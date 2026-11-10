/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b0a60; name: FUN_001b0a60
 */


void FUN_001b0a60(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  float fVar24;
  
  iVar22 = param_1[2];
  plVar17 = *(long **)(param_1 + 4);
  if (iVar22 == 1) {
    lVar18 = *(long *)(*plVar17 + 0x10);
    iVar21 = *(int *)(lVar18 + 0x3c);
    uVar20 = (ulong)(uint)param_1[3];
    bVar10 = true;
  }
  else {
    uVar5 = param_1[3];
    uVar20 = (ulong)uVar5;
    lVar18 = *(long *)(*plVar17 + 0x10);
    lVar23 = *(long *)(lVar18 + 0x50);
    iVar21 = *(int *)(lVar18 + 0x3c);
    fVar6 = (float)(int)*(short *)(lVar23 + uVar20 * 4);
    fVar8 = (float)(int)*(short *)(lVar23 + (ulong)(iVar21 + uVar5) * 4);
    fVar24 = *(float *)(plVar17 + 4);
    fVar9 = (float)(int)*(short *)(lVar23 + (ulong)(iVar21 + uVar5 + 1) * 4);
    fVar7 = (float)(int)*(short *)(lVar23 + (ulong)(uVar5 + 1) * 4);
    bVar10 = false;
    if ((fVar24 < fVar9) && (bVar10 = false, !NAN(fVar24) && !NAN(fVar8))) {
      bVar10 = fVar24 < fVar8;
    }
    bVar11 = false;
    if ((bVar10) && (bVar11 = false, !NAN(fVar24) && !NAN(fVar6))) {
      bVar11 = fVar24 < fVar6;
    }
    bVar10 = false;
    if ((bVar11) && (bVar10 = false, !NAN(fVar24) && !NAN(fVar7))) {
      bVar10 = fVar24 < fVar7;
    }
    if (bVar10) {
      bVar10 = false;
    }
    else {
      fVar24 = *(float *)((long)plVar17 + 0x1c);
      bVar10 = fVar24 <= fVar9 || (fVar24 <= fVar8 || (fVar24 <= fVar6 || fVar24 <= fVar7));
    }
  }
  iVar3 = (int)plVar17[2];
  iVar4 = (int)plVar17[3];
  uVar5 = iVar4 + iVar21 * iVar3;
  if (uVar5 <= (uint)uVar20) {
    return;
  }
  do {
    if (bVar10) {
      do {
        uVar19 = (uint)uVar20;
        if (iVar22 == 0) {
          iVar22 = 1;
          param_1[2] = 1;
          if ((~*(byte *)(*(long *)(lVar18 + 0x50) + (ulong)(uVar19 & 0x7fffffff) * 4 + 3) & 0x7f)
              != 0) {
            return;
          }
        }
        else {
          iVar22 = param_1[1];
          uVar19 = uVar19 + 1;
          uVar20 = (ulong)uVar19;
          param_1[3] = uVar19;
          param_1[1] = iVar22 + 1;
          param_1[2] = 0;
          if (iVar22 + 1 != iVar4) goto LAB_001b0c58;
          iVar22 = *param_1;
          *param_1 = iVar22 + 1;
          iVar16 = *(int *)((long)plVar17 + 0x14);
          uVar2 = (iVar21 - iVar4) + uVar19 + iVar16;
          param_1[3] = uVar2;
          if (iVar22 + 1 != iVar3) goto LAB_001b0c54;
          uVar19 = iVar21 + uVar19;
          uVar20 = (ulong)uVar19;
          iVar22 = 0;
          param_1[3] = uVar19;
        }
        if (uVar5 <= uVar19) {
          return;
        }
      } while( true );
    }
    uVar2 = (int)uVar20 + 1;
    iVar22 = param_1[1];
    while( true ) {
      uVar20 = (ulong)uVar2;
      iVar1 = iVar22 + 1;
      if (iVar1 != iVar4) break;
      iVar22 = *param_1;
      *param_1 = iVar22 + 1;
      if (iVar22 + 1 != iVar3) {
        iVar16 = *(int *)((long)plVar17 + 0x14);
        param_1[1] = iVar1;
        param_1[2] = 0;
        uVar2 = (iVar21 - iVar4) + iVar16 + uVar2;
        param_1[3] = uVar2;
LAB_001b0c54:
        uVar20 = (ulong)uVar2;
        param_1[1] = iVar16;
        goto LAB_001b0c58;
      }
      uVar2 = uVar2 + iVar21 + 1;
      iVar22 = iVar4;
      if (uVar5 <= uVar2 - 1) {
        param_1[1] = iVar1;
        param_1[2] = 0;
        param_1[3] = uVar2 - 1;
        return;
      }
    }
    param_1[1] = iVar1;
    param_1[2] = 0;
    param_1[3] = uVar2;
LAB_001b0c58:
    lVar23 = *(long *)(lVar18 + 0x50);
    uVar19 = (uint)uVar20;
    fVar6 = (float)(int)*(short *)(lVar23 + uVar20 * 4);
    fVar24 = *(float *)(plVar17 + 4);
    fVar8 = (float)(int)*(short *)(lVar23 + (ulong)(uVar19 + iVar21) * 4);
    fVar7 = (float)(int)*(short *)(lVar23 + (ulong)(uVar19 + 1) * 4);
    fVar9 = (float)(int)*(short *)(lVar23 + (ulong)(uVar19 + iVar21 + 1) * 4);
    bVar10 = false;
    if ((fVar24 < fVar9) && (bVar10 = false, !NAN(fVar24) && !NAN(fVar8))) {
      bVar10 = fVar24 < fVar8;
    }
    bVar11 = false;
    if ((bVar10) && (bVar11 = false, !NAN(fVar24) && !NAN(fVar6))) {
      bVar11 = fVar24 < fVar6;
    }
    bVar10 = false;
    if ((bVar11) && (bVar10 = false, !NAN(fVar24) && !NAN(fVar7))) {
      bVar10 = fVar24 < fVar7;
    }
    if (bVar10) {
      bVar10 = false;
      iVar22 = 0;
      if (uVar5 <= uVar19) {
        return;
      }
    }
    else {
      fVar24 = *(float *)((long)plVar17 + 0x1c);
      bVar10 = false;
      bVar11 = true;
      bVar14 = false;
      if (fVar9 < fVar24) {
        bVar10 = false;
        bVar11 = false;
        bVar14 = true;
        if (!NAN(fVar24) && !NAN(fVar8)) {
          bVar10 = fVar24 < fVar8;
          bVar11 = fVar24 == fVar8;
          bVar14 = false;
        }
      }
      bVar12 = false;
      bVar13 = true;
      bVar15 = false;
      if (!bVar11 && bVar10 == bVar14) {
        bVar12 = false;
        bVar13 = false;
        bVar15 = true;
        if (!NAN(fVar24) && !NAN(fVar6)) {
          bVar12 = fVar24 < fVar6;
          bVar13 = fVar24 == fVar6;
          bVar15 = false;
        }
      }
      bVar10 = false;
      bVar11 = true;
      bVar14 = false;
      if (!bVar13 && bVar12 == bVar15) {
        bVar10 = false;
        bVar11 = false;
        bVar14 = true;
        if (!NAN(fVar24) && !NAN(fVar7)) {
          bVar10 = fVar24 < fVar7;
          bVar11 = fVar24 == fVar7;
          bVar14 = false;
        }
      }
      if (bVar11 || bVar10 != bVar14) {
        if ((~*(byte *)(lVar23 + (ulong)(uVar19 & 0x7fffffff) * 4 + 2) & 0x7f) != 0) {
          return;
        }
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      iVar22 = 0;
      if (uVar5 <= uVar19) {
        return;
      }
    }
  } while( true );
}


