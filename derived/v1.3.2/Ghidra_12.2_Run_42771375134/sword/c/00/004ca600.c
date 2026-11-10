/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca600; name: FUN_004ca600
 */


void FUN_004ca600(float param_1,float param_2,long param_3,undefined2 *param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  undefined2 *puVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint auStack_210 [128];
  
  fVar7 = DAT_01d4c564;
  fVar6 = DAT_01d4c478;
  uVar11 = (ulong)param_6 & 0xff;
  lVar20 = -((ulong)((int)uVar11 * 8 + 0xf) & 0xff0);
  puVar12 = (undefined4 *)((long)auStack_210 + lVar20 + 0x200);
  if ((param_6 >> 0xf & 1) == 0) {
    if ((param_6 & 0xff) != 0) {
      if (uVar11 - 1 < 3) {
        lVar15 = 0;
      }
      else {
        iVar16 = 0;
        lVar15 = 0;
        piVar17 = (int *)((long)auStack_210 + lVar20 + 0x208);
        do {
          iVar1 = param_5 * 2 + iVar16;
          iVar2 = param_5 * 3 + iVar16;
          lVar15 = lVar15 + 4;
          piVar17[-2] = iVar16;
          piVar17[-1] = param_5 + iVar16;
          iVar16 = iVar16 + param_5 * 4;
          *piVar17 = iVar1;
          piVar17[1] = iVar2;
          piVar17 = piVar17 + 4;
        } while (uVar11 - ((ulong)param_6 & 3) != lVar15);
      }
      if ((param_6 & 3) != 0) {
        iVar16 = param_5 * (int)lVar15;
        lVar20 = -((ulong)param_6 & 3);
        piVar17 = puVar12 + lVar15;
        do {
          *piVar17 = iVar16;
          iVar16 = iVar16 + param_5;
          lVar20 = lVar20 + 1;
          piVar17 = piVar17 + 1;
        } while (lVar20 != 0);
      }
    }
  }
  else {
    uVar5 = param_6 >> 0xe & 1 | 2;
    uVar13 = (ulong)uVar5;
    *puVar12 = 0;
    *(uint *)((long)auStack_210 + lVar20 + 0x204) = param_5;
    if (uVar5 != 2) {
      *(uint *)((long)auStack_210 + lVar20 + 0x208) = param_5 << 1;
    }
    uVar4 = param_6 & 0xff;
    puVar12[uVar13] = (uVar4 - 1) * param_5;
    uVar18 = uVar5 + 1;
    if (uVar18 < uVar4) {
      uVar14 = uVar5;
      if (((param_6 + 1) - (param_6 >> 0xe) & 1) != 0) {
        uVar13 = uVar13 + 1;
        puVar12[uVar13] = uVar5 * param_5;
        uVar14 = uVar18;
        uVar18 = uVar5 + 2;
      }
      if (uVar4 - 2 != uVar5) {
        iVar16 = uVar18 * param_5;
        piVar17 = puVar12 + uVar13;
        do {
          iVar1 = uVar14 * param_5;
          uVar14 = uVar18 + 1;
          uVar18 = uVar18 + 2;
          piVar17[1] = iVar1;
          piVar17[2] = iVar16;
          iVar16 = iVar16 + param_5 * 2;
          piVar17 = piVar17 + 2;
        } while (uVar4 != uVar18);
      }
    }
  }
  if ((param_5 != 0) && ((param_6 & 0xff) != 0)) {
    param_2 = param_2 - param_1;
    uVar13 = 0;
    do {
      fVar21 = param_1 * fVar7;
      puVar19 = param_4;
      if (uVar11 == 1) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        do {
          puVar3 = puVar12 + lVar20;
          lVar20 = lVar20 + 2;
          fVar23 = fVar21 * *(float *)(param_3 + (uVar13 + *puVar3) * 4);
          fVar24 = (float)NEON_fminnm(fVar23,fVar7);
          fVar22 = fVar6;
          if (fVar6 < fVar24) {
            fVar22 = fVar7;
          }
          bVar8 = false;
          bVar9 = true;
          bVar10 = false;
          if (fVar23 < fVar7) {
            bVar8 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar24) && !NAN(fVar6)) {
              bVar8 = fVar24 < fVar6;
              bVar9 = fVar24 == fVar6;
              bVar10 = false;
            }
          }
          if (!bVar9 && bVar8 == bVar10) {
            fVar22 = fVar23;
          }
          *puVar19 = (short)(int)fVar22;
          fVar23 = fVar21 * *(float *)(param_3 + (uVar13 + puVar3[1]) * 4);
          fVar24 = (float)NEON_fminnm(fVar23,fVar7);
          fVar22 = fVar6;
          if (fVar6 < fVar24) {
            fVar22 = fVar7;
          }
          bVar8 = false;
          bVar9 = true;
          bVar10 = false;
          if (fVar23 < fVar7) {
            bVar8 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar24) && !NAN(fVar6)) {
              bVar8 = fVar24 < fVar6;
              bVar9 = fVar24 == fVar6;
              bVar10 = false;
            }
          }
          if (!bVar9 && bVar8 == bVar10) {
            fVar22 = fVar23;
          }
          puVar19[1] = (short)(int)fVar22;
          puVar19 = puVar19 + 2;
        } while (uVar11 - ((ulong)param_6 & 1) != lVar20);
      }
      if ((param_6 & 1) != 0) {
        fVar21 = fVar21 * *(float *)(param_3 + (uVar13 + (uint)puVar12[lVar20]) * 4);
        fVar23 = (float)NEON_fminnm(fVar21,fVar7);
        fVar22 = fVar6;
        if (fVar6 < fVar23) {
          fVar22 = fVar7;
        }
        bVar8 = false;
        bVar9 = true;
        bVar10 = false;
        if (fVar21 < fVar7) {
          bVar8 = false;
          bVar9 = false;
          bVar10 = true;
          if (!NAN(fVar23) && !NAN(fVar6)) {
            bVar8 = fVar23 < fVar6;
            bVar9 = fVar23 == fVar6;
            bVar10 = false;
          }
        }
        if (!bVar9 && bVar8 == bVar10) {
          fVar22 = fVar21;
        }
        *puVar19 = (short)(int)fVar22;
      }
      param_1 = param_1 + param_2 / (float)param_5;
      param_4 = param_4 + uVar11;
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_5);
  }
  return;
}


