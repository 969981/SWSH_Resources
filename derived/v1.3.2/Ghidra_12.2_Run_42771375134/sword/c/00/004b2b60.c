/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b2b60; name: FUN_004b2b60
 */


undefined8 FUN_004b2b60(long param_1,uint param_2,int param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  lVar12 = *(long *)PTR_DAT_02712ae8;
  nn::os::LockMutex((MutexType *)(lVar12 + 0x70));
  uVar14 = *(uint *)(lVar12 + 0x98);
  if (uVar14 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    uVar16 = 0;
    if (uVar14 != 0) {
      uVar16 = param_2 / uVar14;
    }
    for (plVar13 = *(long **)(*(long *)(lVar12 + 0x90) + (ulong)(param_2 - uVar16 * uVar14) * 8);
        plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
      if (*(uint *)(plVar13 + 2) == param_2) {
        *(int *)((long)plVar13 + 0x14) = *(int *)((long)plVar13 + 0x14) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0x70));
  piVar8 = *(int **)(param_1 + 0x28);
  uVar14 = *(uint *)(param_1 + 0x30);
  piVar9 = piVar8;
  puVar5 = (undefined4 *)PTR_DAT_02712a90;
  if (uVar14 == 0) {
LAB_004b2c2c:
    if (piVar9 != piVar8 + (ulong)uVar14 * 4) {
      if (plVar13 == *(long **)(piVar9 + 2)) {
        if (plVar13 == (long *)0x0) {
          return 1;
        }
        (**(code **)(*plVar13 + 0x18))(plVar13);
        return 1;
      }
      FUN_004b1d40();
      (**(code **)(**(long **)(piVar9 + 2) + 0x18))();
      piVar11 = *(int **)(param_1 + 0x28);
      uVar14 = *(uint *)(param_1 + 0x30);
      uVar15 = (ulong)uVar14;
      piVar9 = piVar11 + uVar15 * 4;
      piVar8 = piVar11;
      puVar5 = (undefined4 *)PTR_DAT_02712a90;
      if (uVar14 == 0) {
LAB_004b2d78:
        if (piVar9 != piVar8) {
          if (piVar8 < piVar9 + -4) {
            uVar15 = (long)piVar11 + ~(ulong)piVar8 + uVar15 * 0x10 + -0x10;
            uVar14 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
            if ((uVar14 & 7) != 0) {
              lVar12 = -((ulong)uVar14 & 7);
              piVar11 = piVar8;
              do {
                piVar8 = piVar11 + 4;
                *(undefined8 *)piVar11 = *(undefined8 *)piVar8;
                *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar11 + 6);
                lVar12 = lVar12 + 1;
                piVar11 = piVar8;
              } while (lVar12 != 0);
            }
            if (0x6f < uVar15) {
              do {
                *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + 4);
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
                *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 8);
                *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(piVar8 + 10);
                *(undefined8 *)(piVar8 + 8) = *(undefined8 *)(piVar8 + 0xc);
                *(undefined8 *)(piVar8 + 10) = *(undefined8 *)(piVar8 + 0xe);
                *(undefined8 *)(piVar8 + 0xc) = *(undefined8 *)(piVar8 + 0x10);
                *(undefined8 *)(piVar8 + 0xe) = *(undefined8 *)(piVar8 + 0x12);
                *(undefined8 *)(piVar8 + 0x10) = *(undefined8 *)(piVar8 + 0x14);
                *(undefined8 *)(piVar8 + 0x12) = *(undefined8 *)(piVar8 + 0x16);
                *(undefined8 *)(piVar8 + 0x14) = *(undefined8 *)(piVar8 + 0x18);
                *(undefined8 *)(piVar8 + 0x16) = *(undefined8 *)(piVar8 + 0x1a);
                *(undefined8 *)(piVar8 + 0x18) = *(undefined8 *)(piVar8 + 0x1c);
                *(undefined8 *)(piVar8 + 0x1a) = *(undefined8 *)(piVar8 + 0x1e);
                piVar11 = piVar8 + 0x20;
                *(undefined8 *)(piVar8 + 0x1c) = *(undefined8 *)piVar11;
                *(undefined8 *)(piVar8 + 0x1e) = *(undefined8 *)(piVar8 + 0x22);
                piVar8 = piVar11;
              } while (piVar11 < piVar9 + -4);
            }
            uVar14 = *(uint *)(param_1 + 0x30);
          }
          uVar14 = uVar14 - 1;
          *(uint *)(param_1 + 0x30) = uVar14;
          puVar5 = (undefined4 *)PTR_DAT_02712a90;
        }
      }
      else {
        lVar12 = uVar15 << 4;
        do {
          if (*piVar8 == param_3) goto LAB_004b2d78;
          lVar12 = lVar12 + -0x10;
          piVar8 = piVar8 + 4;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    lVar12 = (ulong)uVar14 << 4;
    do {
      if (*piVar9 == param_3) goto LAB_004b2c2c;
      lVar12 = lVar12 + -0x10;
      piVar9 = piVar9 + 4;
    } while (lVar12 != 0);
  }
  if (plVar13 == (long *)0x0) {
    PTR_DAT_02712a90 = (undefined *)puVar5;
    return 0x10;
  }
  piVar8 = *(int **)(param_1 + 0x28);
  piVar9 = piVar8;
  PTR_DAT_02712a90 = (undefined *)puVar5;
  if (uVar14 == 0) {
LAB_004b2dc8:
    if (piVar9 != piVar8 + (ulong)uVar14 * 4) goto LAB_004b2f4c;
  }
  else {
    lVar12 = (ulong)uVar14 << 4;
    do {
      if (*piVar9 == param_3) goto LAB_004b2dc8;
      lVar12 = lVar12 + -0x10;
      piVar9 = piVar9 + 4;
    } while (lVar12 != 0);
  }
  uVar16 = *(uint *)(param_1 + 0x34);
  if (uVar16 <= uVar14) {
    uVar16 = uVar16 + 1;
    puVar6 = (undefined8 *)FUN_00404690(*puVar5,(ulong)uVar16 << 4);
    if (puVar6 == (undefined8 *)0x0) goto LAB_004b2f70;
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
      uVar4 = *(uint *)(param_1 + 0x30);
      if (uVar4 != 0) {
        puVar6[1] = puVar7[1];
        *puVar6 = *puVar7;
        if (uVar4 != 1) {
          uVar3 = uVar4 + 3 & 3;
          if ((ulong)uVar4 - 2 < 3) {
            lVar10 = 1;
          }
          else {
            lVar10 = 1;
            lVar12 = 0x40;
            do {
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              puVar7 = (undefined8 *)((long)puVar6 + lVar12);
              puVar7[-5] = *(undefined8 *)(lVar1 + -0x28);
              puVar7[-6] = *(undefined8 *)(lVar1 + -0x30);
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              puVar7[-3] = *(undefined8 *)(lVar1 + -0x18);
              puVar7[-4] = *(undefined8 *)(lVar1 + -0x20);
              lVar1 = *(long *)(param_1 + 0x28) + lVar12;
              puVar7[-1] = *(undefined8 *)(lVar1 + -8);
              puVar7[-2] = *(undefined8 *)(lVar1 + -0x10);
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar12);
              lVar12 = lVar12 + 0x40;
              *puVar7 = *puVar2;
              lVar10 = lVar10 + 4;
              puVar7[1] = puVar2[1];
            } while ((ulong)uVar4 - (ulong)uVar3 != lVar10);
          }
          if (uVar3 != 0) {
            lVar10 = lVar10 << 4;
            lVar12 = -(ulong)uVar3;
            do {
              puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar10);
              puVar2 = (undefined8 *)((long)puVar6 + lVar10);
              lVar10 = lVar10 + 0x10;
              puVar2[1] = puVar7[1];
              lVar12 = lVar12 + 1;
              *puVar2 = *puVar7;
            } while (lVar12 != 0);
          }
        }
        puVar7 = *(undefined8 **)(param_1 + 0x28);
      }
      FUN_00404870(*puVar5,puVar7);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar6;
    *(uint *)(param_1 + 0x34) = uVar16;
  }
  if (uVar14 < uVar16) {
    uVar14 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar14 + 1;
    piVar8 = (int *)(*(long *)(param_1 + 0x28) + (ulong)uVar14 * 0x10);
    if (piVar8 != (int *)0x0) {
      piVar9 = (int *)(*(long *)(param_1 + 0x28) + (ulong)uVar14 * 0x10);
      *piVar8 = param_3;
LAB_004b2f4c:
      *(long **)(piVar9 + 2) = plVar13;
      FUN_004b1d30(plVar13,*(undefined8 *)(param_1 + 0x18));
      if ((param_4 & 1) != 0) {
        FUN_004b2040(*(undefined8 *)(param_1 + 0x18));
      }
      return 1;
    }
  }
LAB_004b2f70:
  (**(code **)(*plVar13 + 0x18))(plVar13);
  return 0x34;
}


