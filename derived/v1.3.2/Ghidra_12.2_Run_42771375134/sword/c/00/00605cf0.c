/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605cf0; name: FUN_00605cf0
 */


undefined8 FUN_00605cf0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  if (param_1 == (long *)0x0) {
    uVar5 = 0x21;
  }
  else {
    lVar8 = param_1[0x2b];
    iVar4 = (int)lVar8 + -1;
    *(int *)(param_1 + 0x2b) = iVar4;
    if (iVar4 == 0 || (int)lVar8 < 1) {
      lVar8 = *param_1;
      uVar9 = *(uint *)((long)param_1 + 0x14);
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          puVar14 = (undefined8 *)param_1[uVar13 + 3];
          pbVar11 = (byte *)*puVar14;
          iVar4 = strcmp(*(char **)(pbVar11 + 0x10),"type42");
          if (((iVar4 == 0) && ((*pbVar11 & 1) != 0)) && (lVar7 = puVar14[4], lVar7 != 0)) {
LAB_00605d64:
            do {
              lVar7 = *(long *)(lVar7 + 0x10);
              if (((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
                 (*(int *)(*(long *)(lVar7 + 0xf0) + 0x78) =
                       *(int *)(*(long *)(lVar7 + 0xf0) + 0x78) + -1,
                 *(int *)(*(long *)(lVar7 + 0xf0) + 0x78) < 1)) {
                lVar10 = *(long *)(lVar7 + 0xb0);
                lVar12 = *(long *)(lVar10 + 0x10);
                for (plVar6 = *(long **)(lVar10 + 0x20); plVar6 != (long *)0x0;
                    plVar6 = (long *)plVar6[1]) {
                  if (plVar6[2] == lVar7) {
                    lVar3 = *plVar6;
                    plVar6 = (long *)plVar6[1];
                    puVar1 = (undefined8 *)(lVar10 + 0x20);
                    if (lVar3 != 0) {
                      puVar1 = (undefined8 *)(lVar3 + 8);
                    }
                    *puVar1 = plVar6;
                    plVar2 = (long *)(lVar10 + 0x28);
                    if (plVar6 != (long *)0x0) {
                      plVar2 = plVar6;
                    }
                    *plVar2 = lVar3;
                    (**(code **)(lVar12 + 0x10))(lVar12);
                    FUN_006044b0(lVar12,lVar7,lVar10);
                    lVar7 = puVar14[4];
                    if (lVar7 == 0) goto LAB_00605e14;
                    goto LAB_00605d64;
                  }
                }
              }
              lVar7 = puVar14[4];
            } while (lVar7 != 0);
LAB_00605e14:
            uVar9 = *(uint *)((long)param_1 + 0x14);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar9);
        if (uVar9 != 0) {
          uVar13 = 0;
          do {
            puVar14 = (undefined8 *)param_1[uVar13 + 3];
            if (((*(byte *)*puVar14 & 1) != 0) && (lVar7 = puVar14[4], lVar7 != 0)) {
LAB_00605e60:
              do {
                lVar7 = *(long *)(lVar7 + 0x10);
                if ((lVar7 != 0) &&
                   ((*(long *)(lVar7 + 0xb0) != 0 &&
                    (*(int *)(*(long *)(lVar7 + 0xf0) + 0x78) =
                          *(int *)(*(long *)(lVar7 + 0xf0) + 0x78) + -1,
                    *(int *)(*(long *)(lVar7 + 0xf0) + 0x78) < 1)))) {
                  lVar10 = *(long *)(lVar7 + 0xb0);
                  lVar12 = *(long *)(lVar10 + 0x10);
                  for (plVar6 = *(long **)(lVar10 + 0x20); plVar6 != (long *)0x0;
                      plVar6 = (long *)plVar6[1]) {
                    if (plVar6[2] == lVar7) {
                      lVar3 = *plVar6;
                      plVar6 = (long *)plVar6[1];
                      puVar1 = (undefined8 *)(lVar10 + 0x20);
                      if (lVar3 != 0) {
                        puVar1 = (undefined8 *)(lVar3 + 8);
                      }
                      *puVar1 = plVar6;
                      plVar2 = (long *)(lVar10 + 0x28);
                      if (plVar6 != (long *)0x0) {
                        plVar2 = plVar6;
                      }
                      *plVar2 = lVar3;
                      (**(code **)(lVar12 + 0x10))(lVar12);
                      FUN_006044b0(lVar12,lVar7,lVar10);
                      lVar7 = puVar14[4];
                      if (lVar7 == 0) goto LAB_00605f10;
                      goto LAB_00605e60;
                    }
                  }
                }
                lVar7 = puVar14[4];
              } while (lVar7 != 0);
LAB_00605f10:
              uVar9 = *(uint *)((long)param_1 + 0x14);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar9);
        }
      }
      while (uVar9 != 0) {
        FUN_00605750(param_1,param_1[(ulong)(uVar9 - 1) + 3]);
        uVar9 = *(uint *)((long)param_1 + 0x14);
      }
      (**(code **)(lVar8 + 0x10))(lVar8,param_1);
    }
    uVar5 = 0;
  }
  return uVar5;
}


