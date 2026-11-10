/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063f3a0; name: FUN_0063f3a0
 */


void FUN_0063f3a0(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x20) == 2) {
      plVar8 = (long *)(param_1 + 0x60);
    }
    else {
      if (*(int *)(param_1 + 0x20) != 1) {
        return;
      }
      plVar8 = (long *)(param_1 + 0x58);
    }
    if ((((-1 < param_2) && (lVar7 = *plVar8, lVar7 != 0)) && (param_2 < *(int *)(lVar7 + 0x38))) &&
       (*(int *)(*(long *)(lVar7 + 0x50) + (long)param_2 * 0x28) == 5)) {
      lVar9 = *(long *)(*(long *)(lVar7 + 0x50) + (long)param_2 * 0x28 + 0x20);
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      if (0 < (int)uVar4) {
        lVar10 = 0;
        iVar6 = 0;
        do {
          piVar5 = (int *)(*(long *)(lVar9 + 0x30) + lVar10 * 0x14);
          if (*piVar5 == 1) {
            iVar1 = piVar5[1];
            if (iVar1 < 0) {
              return;
            }
            iVar2 = piVar5[3];
            if (0x3f < iVar2 + iVar1) {
              return;
            }
            if (0 < iVar2) {
              puVar11 = (undefined4 *)(param_1 + 0x1488 + (long)iVar1 * 4);
              lVar12 = 0;
              lVar13 = (long)iVar6;
              do {
                if (*(int *)(param_3 + 0xa0) <= lVar13) break;
                plVar8 = *(long **)(*(long *)(param_3 + 0xb8) + lVar13 * 8);
                if ((plVar8 != (long *)0x0) &&
                   (piVar5 = (int *)(**(code **)(*plVar8 + 0x40))(plVar8), *piVar5 == 1)) {
                  uVar3 = FUN_0063f540(param_1,plVar8,lVar7);
                  *puVar11 = uVar3;
                }
                lVar12 = lVar12 + 1;
                puVar11 = puVar11 + 1;
                lVar13 = lVar13 + 1;
              } while (lVar12 < iVar2);
              uVar4 = *(undefined8 *)(lVar9 + 0x18);
            }
            iVar6 = iVar2 + iVar6;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uVar4);
      }
    }
  }
  return;
}


