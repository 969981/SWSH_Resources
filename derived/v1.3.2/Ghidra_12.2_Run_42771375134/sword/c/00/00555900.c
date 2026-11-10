/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00555900; name: FUN_00555900
 */


undefined8 FUN_00555900(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0xbc) < 0x10) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc0) < 0x10) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  if ((iVar1 != 0) && (0xf < iVar1 - 1U)) {
    return 0;
  }
  if (0x10 < *(int *)(param_1 + 0xf0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    if (*(int *)(param_1 + 0xb4) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      return 0;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x30) == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_1 + 0x2f0) + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x318) + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x398) + 0x38) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3a0) != 0) && (*(int *)(*(long *)(param_1 + 0x3a0) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3b8) != 0) && (*(int *)(*(long *)(param_1 + 0x3b8) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3b0) != 0) && (*(int *)(*(long *)(param_1 + 0x3b0) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3a8) != 0) && (*(int *)(*(long *)(param_1 + 0x3a8) + 0x38) == 0)) {
    return 0;
  }
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x310) + lVar2 * 8);
      if (*(int *)(lVar3 + 0x30) == 0) {
        return 0;
      }
      if (*(long *)(lVar3 + 0x38) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  lVar2 = *(long *)(param_1 + 0x328);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
      return 0;
    }
  }
  if ((*(long *)(param_1 + 0x330) != 0) && (*(int *)(*(long *)(param_1 + 0x330) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x338) != 0) && (*(int *)(*(long *)(param_1 + 0x338) + 0x38) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
      return 0;
    }
  }
  if ((*(long *)(param_1 + 0x390) != 0) && (*(int *)(*(long *)(param_1 + 0x390) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x350) != 0) && (*(uint *)(param_1 + 0xfc) != 0)) {
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x350) + lVar2 * 8);
      if (*(int *)(lVar3 + 0x30) == 0) {
        return 0;
      }
      if (*(long *)(lVar3 + 0x38) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(param_1 + 0xfc));
  }
  if ((*(long *)(param_1 + 0x3c0) != 0) && (*(int *)(*(long *)(param_1 + 0x3c0) + 0x38) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3d0) != 0) && (*(int *)(*(long *)(param_1 + 0x3d0) + 0x38) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x3c8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
      return 0;
    }
  }
  return 1;
}


