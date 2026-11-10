/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00490e30; name: FUN_00490e30
 */


/* WARNING: Removing unreachable block (ram,0x00490fe0) */

void FUN_00490e30(long param_1,int param_2,long param_3,int *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int *piVar12;
  uint uVar13;
  
  piVar12 = *(int **)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  piVar10 = piVar12;
  if (uVar3 != 0) {
    lVar8 = (ulong)uVar3 * 0x18;
    do {
      if (*piVar10 == param_2) goto LAB_00490e9c;
      lVar8 = lVar8 + -0x18;
      piVar10 = piVar10 + 6;
    } while (lVar8 != 0);
    piVar10 = piVar12 + (ulong)uVar3 * 6;
  }
LAB_00490e9c:
  plVar11 = (long *)(piVar10 + 2);
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  puVar5 = PTR_DAT_02712a90;
  if (piVar10 == piVar12 + (ulong)uVar3 * 6) {
    piVar12 = *(int **)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x18);
    piVar10 = piVar12;
    if (uVar3 == 0) {
LAB_00490f48:
      if (piVar10 == piVar12 + (ulong)uVar3 * 6) goto LAB_00490f60;
    }
    else {
      lVar8 = (ulong)uVar3 * 0x18;
      do {
        if (*piVar10 == param_2) goto LAB_00490f48;
        lVar8 = lVar8 + -0x18;
        piVar10 = piVar10 + 6;
      } while (lVar8 != 0);
LAB_00490f60:
      uVar13 = *(uint *)(param_1 + 0x1c);
      if (uVar13 <= uVar3) {
        uVar13 = uVar13 + 1;
        puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 * 0x18);
        if (puVar6 == (undefined8 *)0x0) goto LAB_004910c8;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
          uVar4 = *(uint *)(param_1 + 0x18);
          if (uVar4 != 0) {
            puVar6[2] = puVar7[2];
            puVar6[1] = puVar7[1];
            *puVar6 = *puVar7;
            if (uVar4 != 1) {
              if (uVar4 == 2) {
                lVar8 = 1;
              }
              else {
                lVar8 = 1;
                lVar9 = 0;
                do {
                  lVar1 = *(long *)(param_1 + 0x10) + lVar9;
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                  lVar1 = *(long *)(param_1 + 0x10) + lVar9;
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
                  lVar8 = lVar8 + 2;
                  *(undefined8 *)((long)puVar6 + lVar9 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
                  lVar9 = lVar9 + 0x30;
                } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar8);
                if ((~uVar4 & 1) == 0) goto LAB_00491074;
              }
              puVar7 = puVar6 + lVar8 * 3;
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 0x18);
              puVar7[2] = puVar2[2];
              puVar7[1] = puVar2[1];
              *puVar7 = *puVar2;
            }
LAB_00491074:
            puVar7 = *(undefined8 **)(param_1 + 0x10);
          }
          FUN_00404870(*(undefined4 *)puVar5,puVar7);
        }
        *(undefined8 **)(param_1 + 0x10) = puVar6;
        *(uint *)(param_1 + 0x1c) = uVar13;
      }
      if (uVar13 <= uVar3) goto LAB_004910c8;
      uVar3 = *(uint *)(param_1 + 0x18);
      lVar8 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      piVar10 = (int *)(lVar8 + (ulong)uVar3 * 0x18);
      if (piVar10 == (int *)0x0) goto LAB_004910c8;
      *piVar10 = param_2;
      piVar10 = (int *)(lVar8 + (ulong)uVar3 * 0x18);
    }
    plVar11 = (long *)(piVar10 + 2);
    *(undefined8 *)(piVar10 + 4) = *(undefined8 *)param_4;
  }
  else if (*plVar11 == param_3) {
    *(undefined8 *)(piVar10 + 4) = *(undefined8 *)param_4;
  }
  else if (param_4[1] != 2) {
    if (*param_4 < piVar10[4]) {
      piVar10[4] = *param_4;
    }
    if (piVar10[5] != 1) {
      piVar10[5] = param_4[1];
    }
  }
  *plVar11 = param_3;
LAB_004910c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}


