/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005097e0; name: FUN_005097e0
 */


undefined8 FUN_005097e0(long param_1,long param_2,int *param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  
  puVar10 = PTR_DAT_02713950;
  if (param_3 == (int *)0x0) {
    uVar17 = *(uint *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x3c) * 4);
    if ((int)uVar17 < 0) {
      uVar17 = uVar17 + 1;
    }
                    /* WARNING: Subroutine does not return */
    memset(param_4,0,(ulong)((uVar17 & 0x7ffffffe) << 1));
  }
  if (*(int *)(param_2 + 0x34) < 2) {
    return 1;
  }
  iVar16 = *(int *)(param_2 + 0x38) * *param_3;
  uVar12 = 0;
  lVar15 = 1;
  do {
    uVar18 = (ulong)*(byte *)(*(long *)(param_2 + 0x18) + lVar15);
    iVar11 = (int)uVar12;
    if ((param_3[uVar18] & 0xffff8000U) == 0) {
      iVar4 = *(int *)(param_2 + 0x38) * param_3[uVar18];
      uVar3 = *(ushort *)(*(long *)(param_2 + 0x10) + uVar18 * 2);
      uVar18 = (ulong)uVar3;
      iVar14 = iVar4 - iVar16;
      iVar8 = -iVar14;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      uVar17 = (uint)uVar3;
      iVar7 = uVar17 - iVar11;
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar14 / iVar7;
      }
      *(float *)((long)param_4 + uVar12 * 4) =
           *(float *)(puVar10 + (long)iVar16 * 4) * (float)*(int *)((long)param_4 + uVar12 * 4);
      lVar19 = (long)iVar11 + 1;
      iVar5 = iVar7 * iVar6;
      iVar1 = -iVar5;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      uVar12 = uVar18;
      if ((uint)lVar19 < uVar17) {
        iVar8 = iVar8 - iVar1;
        uVar9 = (uVar17 - 1) - iVar11;
        uVar17 = iVar14 >> 0x1f | 1;
        if (uVar3 - 2 == iVar11) {
          iVar14 = 0;
        }
        else {
          iVar14 = 0;
          iVar11 = (iVar11 + (uVar9 & 1) + 1) - (uint)uVar3;
          pfVar13 = (float *)((long)param_4 + lVar19 * 4 + 4);
          do {
            iVar14 = iVar14 + iVar8;
            uVar2 = 0;
            if (iVar7 <= iVar14) {
              uVar2 = uVar17;
            }
            iVar1 = iVar16 + iVar6 + uVar2;
            iVar16 = 0;
            if (iVar7 <= iVar14) {
              iVar16 = iVar7;
            }
            iVar14 = (iVar14 - iVar16) + iVar8;
            uVar2 = 0;
            if (iVar7 <= iVar14) {
              uVar2 = uVar17;
            }
            iVar16 = iVar1 + iVar6 + uVar2;
            pfVar13[-1] = *(float *)(puVar10 + (long)iVar1 * 4) * (float)(int)pfVar13[-1];
            iVar1 = 0;
            if (iVar7 <= iVar14) {
              iVar1 = iVar7;
            }
            iVar14 = iVar14 - iVar1;
            lVar19 = lVar19 + 2;
            iVar11 = iVar11 + 2;
            *pfVar13 = *(float *)(puVar10 + (long)iVar16 * 4) * (float)(int)*pfVar13;
            pfVar13 = pfVar13 + 2;
          } while (iVar11 != 0);
        }
        if ((uVar9 & 1) != 0) {
          uVar9 = 0;
          if (iVar7 <= iVar14 + iVar8) {
            uVar9 = uVar17;
          }
          *(float *)((long)param_4 + lVar19 * 4) =
               *(float *)(puVar10 + (long)(int)(iVar16 + iVar6 + uVar9) * 4) *
               (float)*(int *)((long)param_4 + lVar19 * 4);
        }
      }
    }
    else {
      iVar4 = iVar16;
    }
    iVar16 = iVar4;
    lVar15 = lVar15 + 1;
  } while (lVar15 < *(int *)(param_2 + 0x34));
  return 1;
}


