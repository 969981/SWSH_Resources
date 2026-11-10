/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c969b0; name: FUN_00c969b0
 */


undefined8 FUN_00c969b0(byte *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = (long *)FUN_00cbd3c0();
  uVar4 = (ulong)*param_1;
  if (uVar4 < 2) {
    lVar3 = *plVar2;
    if (*(int *)(&DAT_0215d7ac + uVar4 * 0x40) == 2) {
      if (*(long *)(param_1 + 8) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7ac + uVar4 * 0x40) == 1) && (*(long *)(param_1 + 8) == lVar3)) {
      return 0;
    }
    lVar1 = uVar4 * 0x40;
    if (*(int *)(&DAT_0215d7b0 + lVar1) == 1) {
      if (*(long *)(param_1 + 0x10) == lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7b0 + lVar1) == 2) && (*(long *)(param_1 + 0x10) != lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7b4 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x18) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7b4 + lVar1) == 1) && (*(long *)(param_1 + 0x18) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7b8 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x20) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7b8 + lVar1) == 1) && (*(long *)(param_1 + 0x20) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7bc + lVar1) == 2) {
      if (*(long *)(param_1 + 0x28) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7bc + lVar1) == 1) && (*(long *)(param_1 + 0x28) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7c0 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x30) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7c0 + lVar1) == 1) && (*(long *)(param_1 + 0x30) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7c4 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x38) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7c4 + lVar1) == 1) && (*(long *)(param_1 + 0x38) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7c8 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x40) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7c8 + lVar1) == 1) && (*(long *)(param_1 + 0x40) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7cc + lVar1) == 2) {
      if (*(long *)(param_1 + 0x48) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7cc + lVar1) == 1) && (*(long *)(param_1 + 0x48) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7d0 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x50) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7d0 + lVar1) == 1) && (*(long *)(param_1 + 0x50) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7d4 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x58) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7d4 + lVar1) == 1) && (*(long *)(param_1 + 0x58) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7d8 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x60) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7d8 + lVar1) == 1) && (*(long *)(param_1 + 0x60) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7dc + lVar1) == 2) {
      if (*(long *)(param_1 + 0x68) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7dc + lVar1) == 1) && (*(long *)(param_1 + 0x68) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7e0 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x70) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7e0 + lVar1) == 1) && (*(long *)(param_1 + 0x70) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7e4 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x78) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7e4 + lVar1) == 1) && (*(long *)(param_1 + 0x78) == lVar3)) {
      return 0;
    }
    if (*(int *)(&DAT_0215d7e8 + lVar1) == 2) {
      if (*(long *)(param_1 + 0x80) != lVar3) {
        return 0;
      }
    }
    else if ((*(int *)(&DAT_0215d7e8 + lVar1) == 1) && (*(long *)(param_1 + 0x80) == lVar3)) {
      return 0;
    }
  }
  return 1;
}


