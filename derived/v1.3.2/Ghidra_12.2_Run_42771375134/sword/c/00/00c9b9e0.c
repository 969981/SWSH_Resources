/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9b9e0; name: FUN_00c9b9e0
 */


void FUN_00c9b9e0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x40) + (long)param_2 * 0x28;
    iVar1 = *(int *)(lVar3 + 0x1c);
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1 + -1;
    }
    *(int *)(lVar3 + 0x1c) = iVar2;
    if (iVar2 < 1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
      if (lVar3 != 0) {
        lVar3 = lVar3 * 0x28;
        piVar4 = (int *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + 0x20);
        do {
          while (((char)piVar4[-2] != '\0' && (piVar4[-1] < 1))) {
            *piVar4 = *piVar4 + 1;
            piVar4 = piVar4 + 10;
            lVar3 = lVar3 + -0x28;
            if (lVar3 == 0) goto LAB_00c9ba84;
          }
          piVar4 = piVar4 + 10;
          lVar3 = lVar3 + -0x28;
        } while (lVar3 != 0);
LAB_00c9ba84:
        lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
        if (lVar3 != 0) {
          lVar3 = lVar3 * 0x28;
          iVar2 = *(int *)(param_1 + 8) * 4;
          piVar4 = (int *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + 0x20);
          do {
            if (((char)piVar4[-2] != '\0') && (iVar2 < *piVar4)) {
              *piVar4 = iVar2;
            }
            lVar3 = lVar3 + -0x28;
            piVar4 = piVar4 + 10;
          } while (lVar3 != 0);
        }
      }
    }
  }
  return;
}


