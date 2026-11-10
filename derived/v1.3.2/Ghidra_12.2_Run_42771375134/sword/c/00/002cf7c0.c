/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002cf7c0; name: FUN_002cf7c0
 */


undefined8 FUN_002cf7c0(long param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
  uVar14 = (ulong)param_2;
  uVar13 = *(int *)(param_1 + 0x40) + param_2;
  fVar1 = (float)(int)*(short *)(lVar12 + uVar14 * 4);
  fVar15 = *(float *)(param_1 + 0x2c);
  fVar3 = (float)(int)*(short *)(lVar12 + (ulong)uVar13 * 4);
  fVar4 = (float)(int)*(short *)(lVar12 + (ulong)(uVar13 + 1) * 4);
  fVar2 = (float)(int)*(short *)(lVar12 + (ulong)(param_2 + 1) * 4);
  bVar5 = false;
  if ((fVar15 < fVar4) && (bVar5 = false, !NAN(fVar15) && !NAN(fVar3))) {
    bVar5 = fVar15 < fVar3;
  }
  bVar6 = false;
  if ((bVar5) && (bVar6 = false, !NAN(fVar15) && !NAN(fVar1))) {
    bVar6 = fVar15 < fVar1;
  }
  bVar5 = false;
  if ((bVar6) && (bVar5 = false, !NAN(fVar15) && !NAN(fVar2))) {
    bVar5 = fVar15 < fVar2;
  }
  if (!bVar5) {
    fVar15 = *(float *)(param_1 + 0x28);
    bVar5 = false;
    bVar6 = true;
    bVar9 = false;
    if (fVar4 < fVar15) {
      bVar5 = false;
      bVar6 = false;
      bVar9 = true;
      if (!NAN(fVar15) && !NAN(fVar3)) {
        bVar5 = fVar15 < fVar3;
        bVar6 = fVar15 == fVar3;
        bVar9 = false;
      }
    }
    bVar7 = false;
    bVar8 = true;
    bVar10 = false;
    if (!bVar6 && bVar5 == bVar9) {
      bVar7 = false;
      bVar8 = false;
      bVar10 = true;
      if (!NAN(fVar15) && !NAN(fVar1)) {
        bVar7 = fVar15 < fVar1;
        bVar8 = fVar15 == fVar1;
        bVar10 = false;
      }
    }
    bVar5 = false;
    bVar6 = true;
    bVar9 = false;
    if (!bVar8 && bVar7 == bVar10) {
      bVar5 = false;
      bVar6 = false;
      bVar9 = true;
      if (!NAN(fVar15) && !NAN(fVar2)) {
        bVar5 = fVar15 < fVar2;
        bVar6 = fVar15 == fVar2;
        bVar9 = false;
      }
    }
    if (!bVar6 && bVar5 == bVar9) {
      return 1;
    }
    if ((~*(byte *)(lVar12 + uVar14 * 4 + 2) & 0x7f) != 0) {
      uVar13 = *(uint *)(param_1 + 0x16c);
      if (uVar13 == 0x40) {
        uVar11 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                           (*(long **)(param_1 + 0x18),0x40,param_1 + 0x6c);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x16c) = 0;
        lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
        uVar13 = 0;
      }
      *(uint *)(param_1 + 0x16c) = uVar13 + 1;
      *(uint *)(param_1 + (ulong)uVar13 * 4 + 0x6c) = param_2 << 1;
    }
    if ((~*(byte *)(lVar12 + uVar14 * 4 + 3) & 0x7f) == 0) {
      return 1;
    }
    uVar13 = *(uint *)(param_1 + 0x16c);
    if (uVar13 == 0x40) {
      uVar14 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                         (*(long **)(param_1 + 0x18),0x40,param_1 + 0x6c);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar13 = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    *(uint *)(param_1 + 0x16c) = uVar13 + 1;
    *(uint *)(param_1 + (ulong)uVar13 * 4 + 0x6c) = param_2 << 1 | 1;
  }
  return 1;
}


