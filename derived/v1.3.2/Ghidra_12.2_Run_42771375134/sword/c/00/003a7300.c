/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7300; name: FUN_003a7300
 */


void FUN_003a7300(long param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  
  fVar7 = DAT_01d4c6a4;
  fVar6 = DAT_01d4c150;
  if (*(char *)(param_1 + 0x1f20) == '\0') {
    return;
  }
  iVar18 = *(int *)(param_1 + 0x1f18);
  if (iVar18 != 0) {
    lVar20 = (ulong)(iVar18 - 1) << 4;
    uVar17 = 0;
    lVar19 = (ulong)(iVar18 - 1) * 0x18;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x1f10) + lVar20);
      FUN_00398520(lVar14,param_2);
      pfVar15 = *(float **)(lVar14 + 0x10);
      fVar22 = *pfVar15;
      uVar8 = nn::cstd::IsNan(fVar22);
      if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
        fVar22 = pfVar15[1];
        uVar8 = nn::cstd::IsNan(fVar22);
        if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
          fVar22 = pfVar15[2];
          uVar8 = nn::cstd::IsNan(fVar22);
          if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
            fVar22 = pfVar15[3];
            uVar8 = nn::cstd::IsNan(fVar22);
            if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
              fVar22 = pfVar15[4];
              uVar8 = nn::cstd::IsNan(fVar22);
              if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
                fVar22 = pfVar15[5];
                uVar8 = nn::cstd::IsNan(fVar22);
                if (((uVar8 & 1) == 0) && (uVar8 = nn::cstd::IsInf(fVar22), (uVar8 & 1) == 0)) {
                  if ((((*pfVar15 <= pfVar15[3]) && (pfVar15[1] <= pfVar15[4])) &&
                      (pfVar15[2] <= pfVar15[5])) ||
                     (((((*pfVar15 == fVar7 && (pfVar15[1] == fVar7)) && (pfVar15[3] == fVar6)) &&
                       ((pfVar15[2] == fVar7 && (pfVar15[4] == fVar6)))) && (pfVar15[5] == fVar6))))
                  {
                    uVar17 = uVar17 + 1;
                  }
                }
              }
            }
          }
        }
      }
      lVar20 = lVar20 + -0x10;
      pfVar1 = (float *)(*(long *)(param_1 + 0x1f08) + lVar19);
      lVar19 = lVar19 + -0x18;
      *pfVar1 = *pfVar15;
      pfVar1[1] = pfVar15[1];
      pfVar1[2] = pfVar15[2];
      pfVar1[3] = pfVar15[3];
      pfVar1[4] = pfVar15[4];
      iVar18 = iVar18 + -1;
      pfVar1[5] = pfVar15[5];
    } while (iVar18 != 0);
    uVar5 = *(uint *)(param_1 + 0x1f18);
    if (uVar17 != uVar5) {
      if (uVar5 == 0) {
        lVar20 = 0;
        *(uint *)(param_1 + 0x1f18) = uVar17;
        lVar19 = 0;
        if (uVar17 == 0) goto LAB_003a776c;
LAB_003a7734:
        lVar20 = lVar19;
        FUN_003a7130(param_1);
        if (*(int *)(param_1 + 0x1ec8) != 0) {
          uVar17 = **(uint **)(param_1 + 0x1ec0);
          if (uVar17 == 0xffffffff) {
            uVar5 = 1;
            do {
              uVar12 = uVar5;
              if (*(uint *)(param_1 + 0x1ecc) == uVar12) goto LAB_003a77f0;
              uVar17 = (*(uint **)(param_1 + 0x1ec0))[uVar12];
              uVar5 = uVar12 + 1;
            } while (uVar17 == 0xffffffff);
          }
          else {
            uVar12 = 0;
          }
          lVar19 = *(long *)(param_1 + 0x1eb0);
          lVar14 = *(long *)(param_1 + 0x1eb8);
          do {
            do {
              lVar16 = lVar19 + (ulong)uVar17 * 0x20;
              *(undefined4 *)(lVar16 + 0x18) =
                   *(undefined4 *)(lVar20 + (ulong)*(uint *)(lVar16 + 0x18) * 4);
              uVar17 = *(uint *)(lVar14 + (ulong)uVar17 * 4);
            } while (uVar17 != 0xffffffff);
            do {
              if (*(int *)(param_1 + 0x1ecc) - 1U == uVar12) goto LAB_003a77f0;
              uVar12 = uVar12 + 1;
              uVar17 = *(uint *)(*(long *)(param_1 + 0x1ec0) + (ulong)uVar12 * 4);
            } while (uVar17 == 0xffffffff);
          } while( true );
        }
      }
      else {
        plVar9 = (long *)FUN_00400d30();
        lVar20 = (**(code **)(*plVar9 + 0x10))
                           (plVar9,(ulong)uVar5 << 2,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                            ,300);
        if (*(int *)(param_1 + 0x1f18) != 0) {
          lVar14 = 0;
          lVar19 = 0;
          uVar8 = 0;
          uVar21 = 0;
          do {
            lVar16 = *(long *)(*(long *)(param_1 + 0x1f10) + lVar19);
            pfVar15 = *(float **)(lVar16 + 0x10);
            fVar22 = *pfVar15;
            uVar10 = nn::cstd::IsNan(fVar22);
            if (((uVar10 & 1) == 0) && (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) == 0)) {
              fVar22 = pfVar15[1];
              uVar10 = nn::cstd::IsNan(fVar22);
              if (((uVar10 & 1) != 0) || (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) != 0))
              goto LAB_003a76f0;
              fVar22 = pfVar15[2];
              uVar10 = nn::cstd::IsNan(fVar22);
              if (((uVar10 & 1) != 0) || (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) != 0))
              goto LAB_003a76f0;
              fVar22 = pfVar15[3];
              uVar10 = nn::cstd::IsNan(fVar22);
              if (((uVar10 & 1) != 0) || (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) != 0))
              goto LAB_003a76f0;
              fVar22 = pfVar15[4];
              uVar10 = nn::cstd::IsNan(fVar22);
              if (((uVar10 & 1) != 0) || (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) != 0))
              goto LAB_003a76f0;
              fVar22 = pfVar15[5];
              uVar10 = nn::cstd::IsNan(fVar22);
              if (((uVar10 & 1) != 0) || (uVar10 = nn::cstd::IsInf(fVar22), (uVar10 & 1) != 0))
              goto LAB_003a76f0;
              if ((((pfVar15[3] < *pfVar15) || (pfVar15[4] < pfVar15[1])) ||
                  (pfVar15[5] < pfVar15[2])) &&
                 ((((*pfVar15 != fVar7 || (pfVar15[1] != fVar7)) || (pfVar15[3] != fVar6)) ||
                  (((pfVar15[2] != fVar7 || (pfVar15[4] != fVar6)) || (pfVar15[5] != fVar6))))))
              goto LAB_003a76f0;
              if (uVar8 != uVar21) {
                puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1f10) + uVar21 * 0x10);
                puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1f10) + lVar19);
                uVar13 = *puVar2;
                puVar2[1] = puVar3[1];
                *puVar2 = *puVar3;
                *(undefined8 *)(*(long *)(param_1 + 0x1f10) + lVar19) = uVar13;
                puVar11 = (undefined4 *)(*(long *)(param_1 + 0x1f08) + uVar21 * 0x18);
                puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1f08) + lVar14);
                *puVar11 = *puVar4;
                puVar11[1] = puVar4[1];
                puVar11[2] = puVar4[2];
                puVar11[3] = puVar4[3];
                puVar11[4] = puVar4[4];
                puVar11[5] = puVar4[5];
              }
              *(int *)(lVar20 + uVar8 * 4) = (int)uVar21;
              uVar21 = (ulong)((int)uVar21 + 1);
            }
            else {
LAB_003a76f0:
              FUN_00397700(lVar16,1);
              *(undefined8 *)(*(long *)(param_1 + 0x1f10) + lVar19 + 8) = 0;
            }
            *(int *)(lVar20 + (ulong)*(uint *)(param_1 + 0x1f18) * 4) = (int)uVar8;
            uVar8 = uVar8 + 1;
            lVar19 = lVar19 + 0x10;
            lVar14 = lVar14 + 0x18;
          } while (uVar8 < *(uint *)(param_1 + 0x1f18));
        }
        *(uint *)(param_1 + 0x1f18) = uVar17;
        lVar19 = lVar20;
        if (uVar17 != 0) goto LAB_003a7734;
LAB_003a776c:
        FUN_00397700(*(undefined8 *)(param_1 + 0x1ee0),1);
      }
LAB_003a77f0:
      if (lVar20 != 0) {
        plVar9 = (long *)FUN_00400d30();
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar20);
      }
      goto LAB_003a7808;
    }
  }
  FUN_00398520(*(undefined8 *)(param_1 + 0x1ee0),*(undefined8 *)(param_1 + 0x1f08));
LAB_003a7808:
  *(char *)(param_1 + 0x1f20) = '\0';
  return;
}


