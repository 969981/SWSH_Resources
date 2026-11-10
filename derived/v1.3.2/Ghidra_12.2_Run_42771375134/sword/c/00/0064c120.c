/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064c120; name: FUN_0064c120
 */


undefined8 FUN_0064c120(long param_1,long *param_2,long param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_a8;
  float local_a4;
  
  if (param_2 == (long *)0x0) {
LAB_0064c374:
    uVar7 = 0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
    *puVar3 = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x118);
    puVar3[1] = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x268);
    *(uint *)(puVar3 + 0x31) = *(uint *)(puVar3 + 0x31) | 0xffff;
    if (*(char *)(param_3 + 0x60) == '\0') {
      FUN_005ed7d0(&local_a8,param_2);
      if (param_5 == (float *)0x0) {
        fVar23 = 1.0;
        fVar15 = 0.0;
        fVar21 = 0.0;
        fVar19 = 1.0;
      }
      else {
        fVar15 = *param_5;
        if ((param_5[1] - fVar15 <= 0.0) || (param_5[3] - param_5[2] <= 0.0)) goto LAB_0064c374;
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar21 = param_5[2];
        fVar15 = fVar15 / (float)*(int *)(lVar4 + 0x14);
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar21 = fVar21 / (float)*(int *)(lVar4 + 0x18);
        fVar23 = param_5[1];
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar19 = param_5[3];
        fVar23 = fVar23 / (float)*(int *)(lVar4 + 0x14);
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar19 = fVar19 / (float)*(int *)(lVar4 + 0x18);
      }
      fVar25 = *param_4;
      fVar17 = param_4[1];
      fVar20 = param_4[2];
      fVar18 = param_4[3];
      lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar24 = fVar21 + local_a4;
      fVar16 = fVar19 + local_a4;
      if (*(char *)(lVar4 + 0x38) != '\0') {
        fVar24 = fVar19 + local_a4;
        fVar16 = fVar21 + local_a4;
      }
      fVar19 = (float)*(int *)(param_3 + 100);
      if (*(char *)(param_1 + 0x184) == '\0') {
        FUN_00647410(param_1);
        iVar1 = *(int *)(param_1 + 0x174);
        if (iVar1 < 1) {
          iVar12 = 0;
        }
        else {
          iVar12 = 0;
          if (iVar1 != 0) {
            iVar12 = *(int *)(param_1 + 0x170) / iVar1;
          }
        }
        *(int *)(param_1 + 0x17c) = iVar12;
        *(undefined4 *)(param_1 + 0x180) = 5;
        *(undefined1 *)(param_1 + 0x184) = 1;
        if (*(long *)(param_1 + 0x160) == 0) {
          *(undefined1 *)(param_1 + 0x184) = 0;
        }
        else {
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
          *(undefined4 *)(param_1 + 0x178) = 0;
        }
      }
      FUN_006479e0(fVar25,fVar20,0,0x3f800000,param_1,0,0);
      FUN_006479e0(fVar15 + local_a8,fVar16,fVar19,0x3f800000,param_1,5,0);
      if (((*(char *)(param_1 + 0x184) != '\0') &&
          (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
         (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar1 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar1;
        if (*(int *)(param_1 + 0x17c) <= iVar1) {
          FUN_006475b0(param_1,0,0);
        }
      }
      FUN_006479e0(fVar17,fVar20,0,0x3f800000,param_1,0,0);
      FUN_006479e0(fVar23 + local_a8,fVar16,fVar19,0x3f800000,param_1,5,0);
      if (((*(char *)(param_1 + 0x184) != '\0') &&
          (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
         (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar1 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar1;
        if (*(int *)(param_1 + 0x17c) <= iVar1) {
          FUN_006475b0(param_1,0,0);
        }
      }
      FUN_006479e0(fVar25,fVar18,0,0x3f800000,param_1,0,0);
      FUN_006479e0(fVar15 + local_a8,fVar24,fVar19,0x3f800000,param_1,5,0);
      if (((*(char *)(param_1 + 0x184) != '\0') &&
          (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
         (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar1 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar1;
        if (*(int *)(param_1 + 0x17c) <= iVar1) {
          FUN_006475b0(param_1,0,0);
        }
      }
      FUN_006479e0(fVar17,fVar18,0,0x3f800000,param_1,0,0);
      FUN_006479e0(fVar23 + local_a8,fVar24,fVar19,0x3f800000,param_1,5,0);
      if (*(char *)(param_1 + 0x184) != '\0') {
        pvVar6 = *(void **)(param_1 + 0x168);
        if ((pvVar6 != (void *)0x0) &&
           (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
          memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
          iVar1 = *(int *)(param_1 + 0x178) + 1;
          *(int *)(param_1 + 0x178) = iVar1;
          if (*(int *)(param_1 + 0x17c) <= iVar1) {
            FUN_006475b0(param_1,0,0);
          }
        }
        if (*(char *)(param_1 + 0x184) != '\0') {
          FUN_006475b0(param_1,1,0);
          *(undefined1 *)(param_1 + 0x184) = 0;
        }
      }
    }
    else {
      FUN_005ed7d0(&local_a8,param_2);
      lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      iVar12 = *(int *)(lVar4 + 0x24);
      uVar11 = *(uint *)(param_3 + 0x68);
      iVar1 = *(int *)(param_3 + 0x6c);
      if (iVar12 <= (int)uVar11 || 0x7fffffff < uVar11) {
        uVar11 = 0;
      }
      if (iVar1 < (int)uVar11 || iVar12 <= iVar1) {
        iVar1 = iVar12 + -1;
      }
      iVar1 = iVar1 - uVar11;
      if (iVar1 < 1) {
        iVar12 = 1;
joined_r0x0064c380:
        if (param_5 != (float *)0x0) goto LAB_0064c21c;
LAB_0064c384:
        fVar19 = 0.0;
        fVar23 = 1.0;
        fVar21 = 1.0;
        fVar15 = 0.0;
      }
      else {
        fVar15 = SQRT((float)(iVar1 + 1));
        if (!NAN(fVar15)) {
          iVar12 = (int)fVar15;
          goto joined_r0x0064c380;
        }
        fVar15 = sqrtf((float)(iVar1 + 1));
        iVar12 = (int)fVar15;
        if (param_5 == (float *)0x0) goto LAB_0064c384;
LAB_0064c21c:
        fVar15 = *param_5;
        if ((param_5[1] - fVar15 <= 0.0) || (param_5[3] - param_5[2] <= 0.0)) goto LAB_0064c374;
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar19 = param_5[2];
        fVar15 = fVar15 / (float)*(int *)(lVar4 + 0x14);
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar21 = param_5[1];
        fVar19 = fVar19 / (float)*(int *)(lVar4 + 0x18);
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar23 = param_5[3];
        fVar21 = fVar21 / (float)*(int *)(lVar4 + 0x14);
        lVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        fVar23 = fVar23 / (float)*(int *)(lVar4 + 0x18);
      }
      if (0 < iVar12) {
        pvVar6 = (void *)(param_1 + 400);
        fVar20 = *param_4;
        fVar16 = (param_4[1] - fVar20) / (float)iVar12;
        fVar18 = param_4[2];
        fVar17 = (param_4[3] - fVar18) / (float)iVar12;
        iVar13 = 0;
        iVar14 = 0;
        fVar24 = fVar18;
        do {
          if (iVar1 < iVar14) break;
          fVar18 = fVar17 + fVar18;
          cVar8 = *(char *)(param_1 + 0x184);
          iVar10 = 0;
          fVar25 = fVar20;
          do {
            fVar22 = (float)(int)(uVar11 + iVar10);
            if (cVar8 == '\0') {
              FUN_00647410(param_1);
              iVar2 = *(int *)(param_1 + 0x174);
              if (iVar2 < 1) {
                iVar9 = 0;
              }
              else {
                iVar9 = 0;
                if (iVar2 != 0) {
                  iVar9 = *(int *)(param_1 + 0x170) / iVar2;
                }
              }
              *(int *)(param_1 + 0x17c) = iVar9;
              *(undefined4 *)(param_1 + 0x180) = 5;
              *(undefined1 *)(param_1 + 0x184) = 1;
              if (*(long *)(param_1 + 0x160) == 0) {
                *(undefined1 *)(param_1 + 0x184) = 0;
              }
              else {
                *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
                *(undefined4 *)(param_1 + 0x178) = 0;
              }
            }
            fVar20 = fVar16 + fVar20;
            FUN_006479e0(fVar25,fVar24,0,0x3f800000,param_1,0,0);
            FUN_006479e0(fVar15 + local_a8,fVar19 + local_a4,fVar22,0x3f800000,param_1,5,0);
            if (((*(char *)(param_1 + 0x184) != '\0') &&
                (pvVar5 = *(void **)(param_1 + 0x168), pvVar5 != (void *)0x0)) &&
               (pvVar5 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
              memcpy(pvVar5,pvVar6,(long)*(int *)(param_1 + 0x174));
              *(long *)(param_1 + 0x168) =
                   *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
              iVar2 = *(int *)(param_1 + 0x178) + 1;
              *(int *)(param_1 + 0x178) = iVar2;
              if (*(int *)(param_1 + 0x17c) <= iVar2) {
                FUN_006475b0(param_1,0,0);
              }
            }
            FUN_006479e0(fVar20,fVar24,0,0x3f800000,param_1,0,0);
            FUN_006479e0(fVar21 + local_a8,fVar19 + local_a4,fVar22,0x3f800000,param_1,5,0);
            if (((*(char *)(param_1 + 0x184) != '\0') &&
                (pvVar5 = *(void **)(param_1 + 0x168), pvVar5 != (void *)0x0)) &&
               (pvVar5 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
              memcpy(pvVar5,pvVar6,(long)*(int *)(param_1 + 0x174));
              *(long *)(param_1 + 0x168) =
                   *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
              iVar2 = *(int *)(param_1 + 0x178) + 1;
              *(int *)(param_1 + 0x178) = iVar2;
              if (*(int *)(param_1 + 0x17c) <= iVar2) {
                FUN_006475b0(param_1,0,0);
              }
            }
            FUN_006479e0(fVar25,fVar18,0,0x3f800000,param_1,0,0);
            FUN_006479e0(fVar15 + local_a8,fVar23 + local_a4,fVar22,0x3f800000,param_1,5,0);
            if (((*(char *)(param_1 + 0x184) != '\0') &&
                (pvVar5 = *(void **)(param_1 + 0x168), pvVar5 != (void *)0x0)) &&
               (pvVar5 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
              memcpy(pvVar5,pvVar6,(long)*(int *)(param_1 + 0x174));
              *(long *)(param_1 + 0x168) =
                   *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
              iVar2 = *(int *)(param_1 + 0x178) + 1;
              *(int *)(param_1 + 0x178) = iVar2;
              if (*(int *)(param_1 + 0x17c) <= iVar2) {
                FUN_006475b0(param_1,0,0);
              }
            }
            iVar2 = iVar14 + iVar10;
            FUN_006479e0(fVar20,fVar18,0,0x3f800000,param_1,0,0);
            FUN_006479e0(fVar21 + local_a8,fVar23 + local_a4,fVar22,0x3f800000,param_1,5,0);
            if (*(char *)(param_1 + 0x184) != '\0') {
              pvVar5 = *(void **)(param_1 + 0x168);
              if (pvVar5 != (void *)0x0) {
                if (pvVar5 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))
                {
                  memcpy(pvVar5,pvVar6,(long)*(int *)(param_1 + 0x174));
                  *(long *)(param_1 + 0x168) =
                       *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
                  iVar9 = *(int *)(param_1 + 0x178) + 1;
                  *(int *)(param_1 + 0x178) = iVar9;
                  if (*(int *)(param_1 + 0x17c) <= iVar9) {
                    FUN_006475b0(param_1,0,0);
                  }
                }
                if (*(char *)(param_1 + 0x184) == '\0') goto LAB_0064c734;
              }
              FUN_006475b0(param_1,1,0);
              *(undefined1 *)(param_1 + 0x184) = 0;
            }
LAB_0064c734:
            iVar10 = iVar10 + 1;
            if (iVar1 <= iVar2) break;
            fVar25 = fVar16 + fVar25;
            cVar8 = '\0';
          } while (iVar10 < iVar12);
          if (iVar1 <= iVar2) break;
          fVar20 = *param_4;
          fVar24 = fVar17 + fVar24;
          iVar13 = iVar13 + 1;
          iVar14 = iVar14 + iVar10;
          uVar11 = uVar11 + iVar12;
        } while (iVar13 < iVar12);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


