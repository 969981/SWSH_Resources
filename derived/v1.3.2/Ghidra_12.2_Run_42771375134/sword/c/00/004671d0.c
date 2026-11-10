/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004671d0; name: FUN_004671d0
 */


int FUN_004671d0(long param_1,int param_2,void *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  puVar12 = (undefined4 *)PTR_DAT_02712a90;
  piVar6 = *(int **)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar9 = (ulong)uVar5;
  piVar11 = piVar6 + uVar9 * 0xc;
  piVar7 = piVar6;
  if (uVar5 == 0) {
LAB_00467244:
    if (piVar7 == piVar11) goto LAB_00467278;
    piVar11 = piVar7 + 2;
    lVar8 = *(long *)(piVar7 + 6);
    if (param_4 != 0) goto LAB_00467424;
LAB_00467258:
    if (lVar8 != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      piVar11[4] = 0;
      piVar11[5] = 0;
    }
    piVar11[6] = 0;
    piVar11[7] = 0;
LAB_004674b0:
    iVar2 = 1;
  }
  else {
    lVar8 = uVar9 * 0x30;
    do {
      if (*piVar7 == param_2) goto LAB_00467244;
      lVar8 = lVar8 + -0x30;
      piVar7 = piVar7 + 0xc;
    } while (lVar8 != 0);
LAB_00467278:
    if (uVar5 == 0) {
LAB_004672a8:
      if (piVar6 == piVar11) goto LAB_004672c4;
      piVar11 = piVar6 + 2;
      lVar8 = *(long *)(piVar6 + 4);
      *piVar11 = param_2;
    }
    else {
      lVar8 = uVar9 * 0x30;
      do {
        if (*piVar6 == param_2) goto LAB_004672a8;
        lVar8 = lVar8 + -0x30;
        piVar6 = piVar6 + 0xc;
      } while (lVar8 != 0);
LAB_004672c4:
      uVar10 = *(uint *)(param_1 + 0x24);
      if (uVar10 <= uVar5) {
        uVar10 = uVar10 + 1;
        lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 * 0x30);
        if (lVar8 == 0) {
          return 0x34;
        }
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 != 0) && (lVar4 != lVar8)) {
          uVar9 = (ulong)*(uint *)(param_1 + 0x20);
          if (*(uint *)(param_1 + 0x20) != 0) {
            lVar4 = 0;
            do {
              if ((void *)(lVar8 + lVar4) != (void *)0x0) {
                lVar1 = lVar8 + lVar4;
                *(undefined4 *)(lVar1 + 8) = 0;
                *(undefined8 *)(lVar1 + 0x10) = 0;
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x20) = 0;
                *(undefined8 *)(lVar1 + 0x28) = 0x7f7fffffff7fffff;
              }
              memcpy((void *)(lVar8 + lVar4),(void *)(*(long *)(param_1 + 0x18) + lVar4),0x30);
              uVar9 = uVar9 - 1;
              lVar4 = lVar4 + 0x30;
            } while (uVar9 != 0);
            lVar4 = *(long *)(param_1 + 0x18);
            puVar12 = (undefined4 *)PTR_DAT_02712a90;
          }
          FUN_00404870(*puVar12,lVar4);
        }
        *(long *)(param_1 + 0x18) = lVar8;
        *(uint *)(param_1 + 0x24) = uVar10;
      }
      if (uVar10 <= uVar5) {
        return 0x34;
      }
      uVar5 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar5 + 1;
      piVar6 = (int *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x30);
      if (piVar6 == (int *)0x0) {
        return 0x34;
      }
      lVar8 = *(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x30;
      piVar11 = (int *)(lVar8 + 8);
      *piVar11 = 0;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0x7f7fffffff7fffff;
      *piVar6 = param_2;
      lVar8 = *(long *)(lVar8 + 0x10);
      *piVar11 = param_2;
    }
    if ((lVar8 == 0) &&
       (plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0),
       plVar3 != (long *)0x0)) {
      if ((*(long *)(param_1 + 0x30) == 0) || (plVar3[0xf] == 0)) {
        iVar2 = 1;
      }
      else if (plVar3[0xf] == *(long *)(param_1 + 0x30)) {
        *(long **)(piVar11 + 2) = plVar3;
        iVar2 = FUN_00480880(plVar3,param_1);
        if (iVar2 != 1) {
          piVar11[2] = 0;
          piVar11[3] = 0;
        }
      }
      else {
        iVar2 = 2;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      if (iVar2 != 1) {
        piVar6 = *(int **)(param_1 + 0x18);
        uVar5 = *(uint *)(param_1 + 0x20);
        piVar7 = piVar6 + (ulong)uVar5 * 0xc;
        if (uVar5 != 0) {
          lVar8 = (ulong)uVar5 * 0x30;
          do {
            if (*piVar6 == param_2) goto LAB_0046754c;
            lVar8 = lVar8 + -0x30;
            piVar6 = piVar6 + 0xc;
          } while (lVar8 != 0);
          piVar6 = piVar7;
        }
LAB_0046754c:
        if (piVar7 == piVar6) {
          return iVar2;
        }
        if (piVar6 < piVar7 + -0xc) {
          do {
            piVar11 = piVar6 + 0xc;
            memcpy(piVar6,piVar11,0x30);
            piVar6 = piVar11;
          } while (piVar11 < piVar7 + -0xc);
          uVar5 = *(uint *)(param_1 + 0x20);
        }
        *(uint *)(param_1 + 0x20) = uVar5 - 1;
        return iVar2;
      }
    }
    lVar8 = *(long *)(piVar11 + 4);
    if (param_4 == 0) goto LAB_00467258;
LAB_00467424:
    if (lVar8 != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      piVar11[4] = 0;
      piVar11[5] = 0;
    }
    piVar11[6] = 0;
    piVar11[7] = 0;
    if (param_3 != (void *)0x0) {
      __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)param_4 * 0xc);
      *(void **)(piVar11 + 4) = __dest;
      if (__dest == (void *)0x0) {
        piVar11[6] = 0;
        iVar2 = 0x34;
        goto LAB_004674c8;
      }
      memcpy(__dest,param_3,(ulong)(param_4 * 0xc));
      piVar11[6] = param_4;
      piVar11[7] = 0;
      if (1 < param_4) {
        piVar11[8] = **(int **)(piVar11 + 4);
        piVar11[9] = (*(int **)(piVar11 + 4))[(ulong)(param_4 - 1) * 3];
        iVar2 = 1;
        plVar3 = *(long **)(piVar11 + 2);
        goto joined_r0x004674d8;
      }
      goto LAB_004674b0;
    }
    iVar2 = 0x1f;
  }
LAB_004674c8:
  piVar11[8] = -0x800001;
  piVar11[9] = 0x7f7fffff;
  plVar3 = *(long **)(piVar11 + 2);
joined_r0x004674d8:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x180))(plVar3,0);
  }
  return iVar2;
}


