/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b4cf0; name: FUN_004b4cf0
 */


void FUN_004b4cf0(undefined8 *param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  uint3 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined2 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  ushort *puVar15;
  ulong uVar16;
  void *__dest;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  float *pfVar21;
  int *piVar22;
  long *plVar23;
  int iVar24;
  undefined8 *puVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  long local_b0;
  ulong uStack_a8;
  float local_a0;
  float fStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined2 local_8f;
  long local_88;
  
  piVar13 = (int *)*param_1;
  uVar6 = *(uint *)(param_1 + 1);
  piVar22 = piVar13;
  if (uVar6 == 0) {
LAB_004b4d60:
    if (piVar22 != piVar13 + (ulong)uVar6 * 4) {
      piVar22 = *(int **)(piVar22 + 2);
      if ((param_5 & 1) == 0) {
        FUN_004b51d0(param_1,param_2,piVar22[1],param_3);
        if (((*(code **)PTR_DAT_02712e10 != (code *)0x0) && ((param_4 & 1) == 0)) &&
           (uVar8 = (**(code **)PTR_DAT_02712e10)(param_2,param_3), (uVar8 & 1) != 0)) {
          return;
        }
      }
      if ((param_4 & 1) == 0) {
        if (piVar22[1] == param_3) {
          return;
        }
        piVar14 = *(int **)(piVar22 + 4);
        uVar6 = piVar22[6];
        piVar13 = piVar14;
        if (uVar6 != 0) {
          lVar18 = (ulong)uVar6 * 0xc;
          do {
            if ((*piVar13 == piVar22[1]) && (piVar13[1] == param_3)) goto LAB_004b4e18;
            lVar18 = lVar18 + -0xc;
            piVar13 = piVar13 + 3;
          } while (lVar18 != 0);
          piVar13 = piVar14 + (ulong)uVar6 * 3;
        }
LAB_004b4e18:
        piVar4 = piVar22;
        if (piVar13 != piVar14 + (ulong)uVar6 * 3) {
          piVar4 = piVar13 + 2;
        }
        iVar24 = *piVar4;
        lVar18 = *(long *)(piVar22 + 2);
      }
      else {
        iVar24 = 0;
        lVar18 = *(long *)(piVar22 + 2);
      }
      if (lVar18 != 0) {
        puVar25 = (undefined8 *)PTR_DAT_02712b18;
        do {
          plVar23 = *(long **)(lVar18 + 0x18);
          *(int *)(lVar18 + 0x3c) = param_3;
          lVar9 = FUN_004b3c10(lVar18,param_3);
          local_88 = 0;
          plVar5 = &local_88;
          if (lVar9 != 0) {
            plVar5 = (long *)(lVar9 + 0x18);
          }
          plVar10 = (long *)(**(code **)(*plVar23 + 0x38))(plVar23);
          if ((plVar10 != (long *)0x0) && ((int)plVar10[1] != 0)) {
            uVar8 = 0;
LAB_004b4ea4:
            do {
              puVar1 = (uint3 *)(*plVar10 + uVar8 * 4);
              uVar7 = (ushort)*puVar1;
              puVar15 = *(ushort **)(lVar18 + 0x20);
              iVar3 = 0;
              if (*(char *)((long)puVar1 + 2) != '\x04') {
                iVar3 = iVar24;
              }
              if (puVar15 != (ushort *)0x0) {
                uVar19 = 0;
                pfVar26 = (float *)((long)puVar15 + ((ulong)((uint)*puVar15 * 2 + 5) & 0x3fffc));
                do {
                  if (puVar15[uVar19 + 1] == uVar7) goto LAB_004b4f08;
                  uVar19 = uVar19 + 1;
                  pfVar26 = pfVar26 + 4;
                } while (uVar19 < *puVar15);
              }
              pfVar26 = (float *)0x0;
LAB_004b4f08:
              fVar28 = 1.0;
              if (*(char *)((long)puVar1 + 2) != '\x03') {
                fVar28 = 0.0;
              }
              puVar20 = (ushort *)*plVar5;
              uVar19 = (ulong)*(byte *)((long)puVar1 + 3) & 1;
              fVar27 = fVar28;
              if (puVar20 != (ushort *)0x0) {
                uVar17 = 0;
                pfVar21 = (float *)((long)puVar20 + ((ulong)((uint)*puVar20 * 2 + 5) & 0x3fffc));
                do {
                  if (puVar20[uVar17 + 1] == uVar7) {
                    if (pfVar21 != (float *)0x0) {
                      fVar27 = *pfVar21;
                    }
                    break;
                  }
                  uVar17 = uVar17 + 1;
                  pfVar21 = pfVar21 + 1;
                } while (uVar17 < *puVar20);
              }
              uVar17 = (ulong)*puVar1 | uVar19 << 0x18;
              if (pfVar26 != (float *)0x0) {
                if (*(long *)(pfVar26 + 2) != 0) {
                  FUN_004be340(fVar27,*puVar25,*(long *)(pfVar26 + 2),uVar17,iVar3,4,0);
                  uVar8 = uVar8 + 1;
                  if (*(uint *)(plVar10 + 1) <= uVar8) break;
                  goto LAB_004b4ea4;
                }
                fVar28 = *pfVar26;
              }
              if (fVar28 == fVar27) {
LAB_004b513c:
                uVar8 = uVar8 + 1;
                if (*(uint *)(plVar10 + 1) <= uVar8) break;
                goto LAB_004b4ea4;
              }
              if (pfVar26 == (float *)0x0) {
                uVar16 = 0;
                if (puVar15 != (ushort *)0x0) {
                  uVar16 = (ulong)*puVar15;
                }
                iVar12 = (int)uVar16;
                uVar6 = iVar12 + 1;
                uVar2 = uVar6 * 2 + 5 & 0x7fffc;
                puVar11 = (undefined2 *)
                          FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + uVar6 * 0x10);
                if (puVar11 == (undefined2 *)0x0) {
                  pfVar26 = (float *)0x0;
                  puVar25 = (undefined8 *)PTR_DAT_02712b18;
                }
                else {
                  if (*(long *)(lVar18 + 0x20) == 0) {
                    __dest = (void *)((long)puVar11 + (ulong)uVar2);
                  }
                  else {
                    memcpy(puVar11 + 1,(void *)(*(long *)(lVar18 + 0x20) + 2),
                           (ulong)(uint)(iVar12 * 2));
                    __dest = (void *)((long)puVar11 + (ulong)uVar2);
                    memcpy(__dest,(void *)(*(long *)(lVar18 + 0x20) +
                                          (ulong)(iVar12 * 2 + 5U & 0x3fffc)),
                           (ulong)(uint)(iVar12 << 4));
                    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)(lVar18 + 0x20));
                  }
                  puVar11[uVar6] = uVar7;
                  *puVar11 = (short)uVar6;
                  *(undefined2 **)(lVar18 + 0x20) = puVar11;
                  puVar25 = (undefined8 *)PTR_DAT_02712b18;
                  pfVar26 = (float *)((long)__dest + uVar16 * 0x10);
                  if (pfVar26 != (float *)0x0) {
                    *pfVar26 = 0.0;
                    *(undefined8 *)((long)__dest + uVar16 * 0x10 + 8) = 0;
                  }
                }
              }
              if (iVar3 != 0) {
                uStack_94 = 4;
                local_90 = (undefined1)uVar19;
                local_8f = 1;
                local_b0 = lVar18;
                uStack_a8 = uVar17;
                local_a0 = fVar28;
                fStack_9c = fVar27;
                local_98 = iVar3;
                lVar9 = FUN_004bde40(*puVar25,&local_b0,1,1);
                if (pfVar26 == (float *)0x0) {
                  if (lVar9 != 0) {
LAB_004b512c:
                    FUN_004be250(*puVar25,lVar9,lVar18);
                  }
                }
                else {
                  *(long *)(pfVar26 + 2) = lVar9;
                  if (lVar9 == 0) {
                    *pfVar26 = fVar27;
                    goto LAB_004b5154;
                  }
                  uVar19 = (**(code **)(*plVar23 + 0x10))();
                  if ((uVar19 & 1) == 0) {
                    FUN_004b3c70(fVar27,lVar18,uVar17,1);
                    goto LAB_004b512c;
                  }
                }
                goto LAB_004b513c;
              }
LAB_004b5154:
              FUN_004b3c70(fVar27,lVar18,uVar17,1);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(plVar10 + 1));
            if (local_88 != 0) {
              FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
            }
          }
          lVar18 = *(long *)(lVar18 + 8);
        } while (lVar18 != 0);
      }
      piVar22[1] = param_3;
    }
  }
  else {
    lVar18 = (ulong)uVar6 << 4;
    do {
      if (*piVar22 == param_2) goto LAB_004b4d60;
      lVar18 = lVar18 + -0x10;
      piVar22 = piVar22 + 4;
    } while (lVar18 != 0);
  }
  return;
}


