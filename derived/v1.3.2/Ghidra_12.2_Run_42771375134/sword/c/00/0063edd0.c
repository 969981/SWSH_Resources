/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063edd0; name: FUN_0063edd0
 */


void FUN_0063edd0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_2 + 0x58);
  piVar1 = *(int **)(param_2 + 0x60);
  if (piVar9 == piVar1) {
    return;
  }
  do {
    while ((char)piVar9[4] != '\0') {
LAB_0063ee0c:
      piVar9 = piVar9 + 10;
      if (piVar1 == piVar9) {
        return;
      }
    }
    if (*piVar9 != 4) {
      if ((*piVar9 == 2) && (plVar8 = *(long **)(piVar9 + 6), plVar8 != (long *)0x0)) {
        iVar2 = piVar9[1];
        piVar5 = (int *)(**(code **)(*plVar8 + 0x40))(plVar8);
        if (*piVar5 == 1) {
          plVar7 = (long *)(param_1 + 0x58);
          if (*(int *)(param_1 + 0x20) != 1) {
            if (*(int *)(param_1 + 0x20) != 2) goto LAB_0063ee0c;
            plVar7 = (long *)(param_1 + 0x60);
          }
          if ((((-1 < iVar2) && (lVar6 = *plVar7, lVar6 != 0)) && (iVar2 < *(int *)(lVar6 + 0x38)))
             && ((*(int *)(*(long *)(lVar6 + 0x50) + (long)iVar2 * 0x28) == 1 &&
                 (uVar3 = *(uint *)(*(long *)(lVar6 + 0x50) + (long)iVar2 * 0x28 + 8), uVar3 < 0x40)
                 ))) {
            uVar4 = FUN_0063f540(param_1,plVar8);
            *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x1488) = uVar4;
            goto joined_r0x0063eeec;
          }
        }
      }
      goto LAB_0063ee0c;
    }
    FUN_0063f3a0(param_1,piVar9[1],*(undefined8 *)(piVar9 + 8));
joined_r0x0063eeec:
    piVar9 = piVar9 + 10;
    if (piVar1 == piVar9) {
      return;
    }
  } while( true );
}


