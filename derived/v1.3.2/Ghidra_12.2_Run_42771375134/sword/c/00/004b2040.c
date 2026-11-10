/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b2040; name: FUN_004b2040
 */


void FUN_004b2040(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined2 *puVar8;
  int *piVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  undefined4 *puVar20;
  int iVar21;
  ulong uVar22;
  undefined4 uVar23;
  
  plVar7 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar18 = *plVar7;
  if (lVar18 != 0) {
    puVar20 = (undefined4 *)PTR_DAT_02712a90;
    do {
      puVar6 = PTR_DAT_02712b18;
      piVar9 = *(int **)(lVar18 + 0x28);
      uVar4 = *(uint *)(lVar18 + 0x30);
      piVar16 = piVar9;
      if (uVar4 == 0) {
LAB_004b2210:
        if ((piVar16 == piVar9 + (ulong)uVar4 * 4) || (*(long *)(piVar16 + 2) == 0))
        goto LAB_004b2258;
        puVar10 = *(ushort **)(*(long *)(piVar16 + 2) + 0x18);
        if (puVar10 != (ushort *)0x0) {
          puVar1 = (undefined4 *)((long)puVar10 + ((ulong)((uint)*puVar10 * 2 + 5) & 0x3fffc));
          puVar11 = puVar10 + (ulong)*puVar10 + 1;
          while (puVar10 = puVar10 + 1, puVar10 != puVar11) {
            uVar23 = *puVar1;
            uVar5 = *puVar10;
            puVar13 = *(ushort **)(lVar18 + 0x20);
            if (puVar13 == (ushort *)0x0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*puVar13;
              uVar15 = 0;
              puVar14 = (undefined4 *)((long)puVar13 + ((ulong)((uint)*puVar13 * 2 + 5) & 0x3fffc));
              do {
                if (puVar13[uVar15 + 1] == uVar5) {
                  if (puVar14 != (undefined4 *)0x0) {
                    if (*(long *)(puVar14 + 2) == 0) {
                      *puVar14 = uVar23;
                    }
                    else {
                      FUN_004be340(uVar23,*(undefined8 *)PTR_DAT_02712b18,*(long *)(puVar14 + 2),
                                   uVar5,0,4,0);
                    }
                    goto LAB_004b2090;
                  }
                  break;
                }
                uVar15 = uVar15 + 1;
                puVar14 = puVar14 + 4;
              } while (uVar15 < uVar22);
            }
            iVar21 = (int)uVar22;
            uVar4 = iVar21 + 1;
            uVar2 = uVar4 * 2 + 5 & 0x7fffc;
            puVar8 = (undefined2 *)FUN_00404690(*puVar20,uVar2 + uVar4 * 0x10);
            if (puVar8 != (undefined2 *)0x0) {
              if (*(long *)(lVar18 + 0x20) == 0) {
                pvVar19 = (void *)((long)puVar8 + (ulong)uVar2);
              }
              else {
                memcpy(puVar8 + 1,(void *)(*(long *)(lVar18 + 0x20) + 2),(ulong)(uint)(iVar21 * 2));
                puVar20 = (undefined4 *)PTR_DAT_02712a90;
                pvVar19 = (void *)((long)puVar8 + (ulong)uVar2);
                memcpy(pvVar19,(void *)(*(long *)(lVar18 + 0x20) +
                                       (ulong)(iVar21 * 2 + 5U & 0x3fffc)),
                       (ulong)(uint)(iVar21 << 4));
                FUN_00404870(*puVar20,*(undefined8 *)(lVar18 + 0x20));
              }
              puVar14 = (undefined4 *)((long)pvVar19 + uVar22 * 0x10);
              puVar8[uVar4] = uVar5;
              *puVar8 = (short)uVar4;
              *(undefined2 **)(lVar18 + 0x20) = puVar8;
              if (puVar14 != (undefined4 *)0x0) {
                *puVar14 = uVar23;
                *(undefined8 *)((long)pvVar19 + uVar22 * 0x10 + 8) = 0;
              }
            }
LAB_004b2090:
            puVar1 = puVar1 + 1;
          }
        }
      }
      else {
        lVar17 = (ulong)uVar4 << 4;
        do {
          if (*piVar16 == *(int *)(lVar18 + 0x3c)) goto LAB_004b2210;
          lVar17 = lVar17 + -0x10;
          piVar16 = piVar16 + 4;
        } while (lVar17 != 0);
LAB_004b2258:
        puVar10 = *(ushort **)(lVar18 + 0x20);
        if ((puVar10 != (ushort *)0x0) && ((ulong)*puVar10 != 0)) {
          lVar17 = (ulong)*puVar10 << 1;
          plVar7 = (long *)((long)puVar10 + ((ulong)((int)lVar17 + 5) & 0x3fffc) + 8);
          do {
            if (*plVar7 != 0) {
              FUN_004be250(*(undefined8 *)puVar6,*plVar7,lVar18);
              *plVar7 = 0;
              (**(code **)(**(long **)(lVar18 + 0x18) + 0x18))();
            }
            plVar7 = plVar7 + 2;
            lVar17 = lVar17 + -2;
          } while (lVar17 != 0);
        }
        plVar7 = (long *)(**(code **)(*param_1 + 0x38))();
        if ((plVar7 != (long *)0x0) && ((int)plVar7[1] != 0)) {
          puVar10 = (ushort *)*plVar7;
          do {
            uVar5 = *puVar10;
            uVar3 = 0x3f800000;
            if ((char)puVar10[1] != '\x03') {
              uVar3 = 0;
            }
            puVar11 = *(ushort **)(lVar18 + 0x20);
            if (puVar11 == (ushort *)0x0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*puVar11;
              uVar15 = 0;
              puVar12 = (undefined8 *)((long)puVar11 + ((ulong)((uint)*puVar11 * 2 + 5) & 0x3fffc));
              do {
                if (puVar11[uVar15 + 1] == uVar5) {
                  if (puVar12 != (undefined8 *)0x0) goto LAB_004b23c8;
                  break;
                }
                uVar15 = uVar15 + 1;
                puVar12 = puVar12 + 2;
              } while (uVar15 < uVar22);
            }
            iVar21 = (int)uVar22;
            uVar4 = iVar21 + 1;
            uVar2 = uVar4 * 2 + 5 & 0x7fffc;
            puVar8 = (undefined2 *)FUN_00404690(*puVar20,uVar2 + uVar4 * 0x10);
            if (puVar8 != (undefined2 *)0x0) {
              if (*(long *)(lVar18 + 0x20) == 0) {
                pvVar19 = (void *)((long)puVar8 + (ulong)uVar2);
              }
              else {
                memcpy(puVar8 + 1,(void *)(*(long *)(lVar18 + 0x20) + 2),(ulong)(uint)(iVar21 * 2));
                puVar20 = (undefined4 *)PTR_DAT_02712a90;
                pvVar19 = (void *)((long)puVar8 + (ulong)uVar2);
                memcpy(pvVar19,(void *)(*(long *)(lVar18 + 0x20) +
                                       (ulong)(iVar21 * 2 + 5U & 0x3fffc)),
                       (ulong)(uint)(iVar21 << 4));
                FUN_00404870(*puVar20,*(undefined8 *)(lVar18 + 0x20));
              }
              puVar12 = (undefined8 *)((long)pvVar19 + uVar22 * 0x10);
              puVar8[uVar4] = uVar5;
              *puVar8 = (short)uVar4;
              *(undefined2 **)(lVar18 + 0x20) = puVar8;
              if (puVar12 != (undefined8 *)0x0) {
LAB_004b23c8:
                *puVar12 = uVar3;
                puVar12[1] = 0;
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != (ushort *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 4));
        }
      }
      lVar18 = *(long *)(lVar18 + 0x10);
    } while (lVar18 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x004b2434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


