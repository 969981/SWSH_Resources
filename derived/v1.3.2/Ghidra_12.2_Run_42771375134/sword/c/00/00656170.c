/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00656170; name: FUN_00656170
 */


bool FUN_00656170(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  
  iVar10 = -1;
  lVar14 = 0;
  puVar15 = (uint *)(param_1 + 0xd0);
  iVar13 = -1;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  do {
    if (puVar15[-0xc] != 0) {
      if (*(long **)(puVar15 + -10) == (long *)0x0) {
        if (*(long **)(puVar15 + -6) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(puVar15 + -6) + 0x88))();
          uVar16 = *(uint *)(lVar6 + 0x14);
          lVar6 = (**(code **)(**(long **)(puVar15 + -6) + 0x88))();
          uVar9 = *(uint *)(lVar6 + 0x18);
          goto LAB_006562a4;
        }
        if (*(long **)(puVar15 + -4) != (long *)0x0) {
          lVar6 = (**(code **)(**(long **)(puVar15 + -4) + 0x98))();
          if (*(int *)(lVar6 + 0x14) >> (*puVar15 & 0x1f) < 1) {
            uVar16 = 1;
          }
          else {
            lVar6 = (**(code **)(**(long **)(puVar15 + -4) + 0x98))();
            uVar16 = *(int *)(lVar6 + 0x14) >> (*puVar15 & 0x1f);
          }
          lVar6 = (**(code **)(**(long **)(puVar15 + -4) + 0x98))();
          if (*(int *)(lVar6 + 0x18) >> (*puVar15 & 0x1f) < 1) {
            uVar9 = 1;
          }
          else {
            lVar6 = (**(code **)(**(long **)(puVar15 + -4) + 0x98))();
            uVar9 = *(int *)(lVar6 + 0x18) >> (*puVar15 & 0x1f);
          }
          goto LAB_006562a4;
        }
      }
      else {
        lVar6 = (**(code **)(**(long **)(puVar15 + -10) + 0x88))();
        uVar16 = *(uint *)(lVar6 + 8);
        lVar6 = (**(code **)(**(long **)(puVar15 + -10) + 0x88))();
        uVar9 = *(uint *)(lVar6 + 0xc);
LAB_006562a4:
        uVar3 = uVar11;
        if ((int)uVar16 <= (int)uVar11) {
          uVar3 = uVar16;
        }
        uVar1 = uVar16;
        if ((uVar11 & 0x80000000) == 0) {
          uVar1 = uVar3;
        }
        if (0 < (int)uVar16) {
          uVar11 = uVar1;
        }
        if (0 < (int)uVar9) {
          if ((int)uVar12 < 0) {
            uVar12 = uVar9;
          }
          else {
            if ((int)uVar9 <= (int)uVar12) {
              uVar12 = uVar9;
            }
          }
        }
      }
      iVar13 = (int)lVar14;
      iVar2 = iVar13;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      iVar10 = iVar2;
    }
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 0xe;
  } while (lVar14 != 8);
  *(undefined2 *)(param_1 + 0x90) = 0;
  if (iVar13 < 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    plVar7 = *(long **)(param_1 + 0x268);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (plVar7 == (long *)0x0) goto LAB_00656340;
LAB_00656314:
    plVar7 = (long *)(**(code **)(*plVar7 + 200))();
joined_r0x00656540:
    if (plVar7 == (long *)0x0) goto LAB_00656418;
  }
  else {
    *(int *)(param_1 + 0x84) = iVar10;
    plVar7 = *(long **)(param_1 + 0x268);
    *(int *)(param_1 + 0x88) = (iVar13 + 1) - iVar10;
    if (plVar7 != (long *)0x0) goto LAB_00656314;
LAB_00656340:
    plVar7 = *(long **)(param_1 + 0x270);
    if (plVar7 == (long *)0x0) {
      if (*(long **)(param_1 + 0x278) == (long *)0x0) goto LAB_00656418;
      piVar8 = (int *)(**(code **)(**(long **)(param_1 + 0x278) + 0x98))();
      plVar7 = *(long **)(param_1 + 0x278);
      if (*piVar8 == 2) {
        plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,*(undefined4 *)(param_1 + 0x288));
      }
      else {
        piVar8 = (int *)(**(code **)(*plVar7 + 0x98))();
        plVar7 = *(long **)(param_1 + 0x278);
        if (*piVar8 == 5) {
          plVar7 = (long *)(**(code **)(*plVar7 + 0xd8))
                                     (plVar7,*(undefined4 *)(param_1 + 0x280),
                                      *(undefined4 *)(param_1 + 0x288));
        }
        else {
          piVar8 = (int *)(**(code **)(*plVar7 + 0x98))();
          plVar7 = *(long **)(param_1 + 0x278);
          if (*piVar8 == 4) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0xd0))
                                       (plVar7,*(undefined4 *)(param_1 + 0x28c),
                                        *(undefined4 *)(param_1 + 0x288));
          }
          else {
            piVar8 = (int *)(**(code **)(*plVar7 + 0x98))();
            if (*piVar8 != 6) goto LAB_00656418;
            plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0x278) + 0xe0))
                                       (*(long **)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x280)
                                        ,*(undefined4 *)(param_1 + 0x28c),
                                        *(undefined4 *)(param_1 + 0x288));
          }
        }
      }
      goto joined_r0x00656540;
    }
  }
  uVar16 = 1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  lVar14 = (**(code **)(*plVar7 + 0x88))(plVar7);
  bVar5 = FUN_005ed240(*(undefined4 *)(lVar14 + 4));
  *(byte *)(param_1 + 0x91) = bVar5 & 1;
  lVar14 = (**(code **)(*plVar7 + 0x88))(plVar7);
  if (0 < *(int *)(lVar14 + 0x14) >> (*(uint *)(param_1 + 0x288) & 0x1f)) {
    lVar14 = (**(code **)(*plVar7 + 0x88))(plVar7);
    uVar16 = *(int *)(lVar14 + 0x14) >> (*(uint *)(param_1 + 0x288) & 0x1f);
  }
  lVar14 = (**(code **)(*plVar7 + 0x88))(plVar7);
  if (*(int *)(lVar14 + 0x18) >> (*(uint *)(param_1 + 0x288) & 0x1f) < 1) {
    uVar9 = 1;
  }
  else {
    lVar14 = (**(code **)(*plVar7 + 0x88))(plVar7);
    uVar9 = *(int *)(lVar14 + 0x18) >> (*(uint *)(param_1 + 0x288) & 0x1f);
  }
  uVar3 = uVar11;
  if ((int)uVar16 <= (int)uVar11) {
    uVar3 = uVar16;
  }
  bVar4 = -1 < (int)uVar11;
  uVar11 = uVar16;
  if (bVar4) {
    uVar11 = uVar3;
  }
  uVar16 = uVar12;
  if ((int)uVar9 <= (int)uVar12) {
    uVar16 = uVar9;
  }
  bVar4 = -1 < (int)uVar12;
  uVar12 = uVar9;
  if (bVar4) {
    uVar12 = uVar16;
  }
LAB_00656418:
  bVar4 = -1 < (int)(uVar11 | uVar12);
  if (bVar4) {
    *(uint *)(param_1 + 0x78) = uVar11;
    *(uint *)(param_1 + 0x7c) = uVar12;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return bVar4;
}


