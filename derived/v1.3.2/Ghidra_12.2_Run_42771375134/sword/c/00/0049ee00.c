/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ee00; name: FUN_0049ee00
 */


void FUN_0049ee00(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x40))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x48);
        }
        *(uint *)(param_1 + 0x48) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x58);
        goto joined_r0x0049ee58;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x58);
joined_r0x0049ee58:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x50);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x50))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x68);
        goto joined_r0x0049eeac;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
joined_r0x0049eeac:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x60);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x60))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x68) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x78);
        goto joined_r0x0049ef00;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x78);
joined_r0x0049ef00:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x70);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x70))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x78);
        }
        *(uint *)(param_1 + 0x78) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x88);
        goto joined_r0x0049ef54;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x88);
joined_r0x0049ef54:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x80);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x80))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x88);
        }
        *(uint *)(param_1 + 0x88) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0x98);
        goto joined_r0x0049efa8;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x98);
joined_r0x0049efa8:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0x90);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x90))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0x98) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0xa8);
        goto joined_r0x0049effc;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
joined_r0x0049effc:
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0xa0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xa0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar1 - 1;
        uVar1 = *(uint *)(param_1 + 0xb8);
        if (uVar1 == 0) {
          return;
        }
        goto LAB_0049f054;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
LAB_0049f054:
    lVar3 = (ulong)uVar1 * 4;
    piVar2 = *(int **)(param_1 + 0xb0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xb0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar1 - 1;
        return;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  return;
}


