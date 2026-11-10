/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053e6f0; name: FUN_0053e6f0
 */


undefined8 FUN_0053e6f0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  if (((*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) &&
      (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
     (*(long *)(param_1 + 0x118) == *(long *)(param_2 + 0x118))) {
    iVar1 = *(int *)(param_1 + 0xfc);
    if (iVar1 == *(int *)(param_2 + 0xfc)) {
      iVar2 = *(int *)(param_1 + 0x110);
      if (iVar2 == *(int *)(param_2 + 0x110)) {
        if (0 < iVar1) {
          lVar3 = 0;
          piVar4 = (int *)(param_2 + 0x34);
          piVar5 = (int *)(param_1 + 0x34);
          do {
            if (piVar5[-6] != piVar4[-6]) {
              return 0;
            }
            if (piVar5[-5] != piVar4[-5]) {
              return 0;
            }
            if (piVar5[-4] != piVar4[-4]) {
              return 0;
            }
            if (piVar5[-3] != piVar4[-3]) {
              return 0;
            }
            if (piVar5[-2] != piVar4[-2]) {
              return 0;
            }
            if (piVar5[-1] != piVar4[-1]) {
              return 0;
            }
            if (*piVar5 != *piVar4) {
              return 0;
            }
            lVar3 = lVar3 + 1;
            piVar4 = piVar4 + 7;
            piVar5 = piVar5 + 7;
          } while (lVar3 < iVar1);
        }
        if (iVar2 < 1) {
          return 1;
        }
        lVar3 = 0;
        while (*(int *)(param_1 + 0x100 + lVar3 * 4) == *(int *)(param_2 + 0x100 + lVar3 * 4)) {
          lVar3 = lVar3 + 1;
          if (iVar2 <= lVar3) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


