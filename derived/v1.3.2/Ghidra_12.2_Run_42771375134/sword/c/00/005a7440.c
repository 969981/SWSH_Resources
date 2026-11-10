/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a7440; name: FUN_005a7440
 */


undefined4 FUN_005a7440(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    return 0xfffffffa;
  }
  if (*(uint *)(param_2 + 8) < 0x10) {
    return 0xfffffffa;
  }
  uVar6 = 0xfffffffa;
  if (*(int *)(param_2 + 0x10) - 1U < 7) {
    if (*(char *)(param_2 + 0x6d) == '\0') {
      if (*(int *)(param_2 + 0x1c) < 0) {
        if (*(int *)(param_2 + 0x20) < 0) {
          return 0xfffffffa;
        }
        if (*(int *)(param_2 + 0x24) < 0) {
          return 0xfffffffa;
        }
        uVar1 = *(uint *)(param_2 + 0x28);
        uVar3 = *(uint *)(param_2 + 0x2c);
        if (((int)uVar1 < 0) && (-1 < (int)uVar3)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar1) && ((int)uVar3 < 0)) {
          return 0xfffffffa;
        }
        uVar5 = uVar3 | uVar1;
        if ((((int)uVar3 <= *(int *)(param_2 + 0x24)) && ((int)uVar1 <= *(int *)(param_2 + 0x20)))
           && (-1 < (int)uVar5)) {
          return 0xfffffffa;
        }
        uVar2 = *(uint *)(param_2 + 0x30);
        uVar4 = *(uint *)(param_2 + 0x34);
        if (((int)uVar2 < 0) && (-1 < (int)uVar4)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar2) && ((int)uVar4 < 0)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)(uVar4 | uVar2)) && ((int)uVar5 < 0)) {
          return 0xfffffffa;
        }
        uVar5 = uVar5 | uVar4 | uVar2;
        if ((((int)uVar4 <= (int)uVar3) && ((int)uVar2 <= (int)uVar1)) && (-1 < (int)uVar5)) {
          return 0xfffffffa;
        }
        uVar1 = *(uint *)(param_2 + 0x38);
        uVar3 = *(uint *)(param_2 + 0x3c);
        if (((int)uVar1 < 0) && (-1 < (int)uVar3)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar1) && ((int)uVar3 < 0)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)(uVar3 | uVar1)) && ((int)uVar5 < 0)) {
          return 0xfffffffa;
        }
        uVar5 = uVar5 | uVar3 | uVar1;
        if ((((int)uVar3 <= (int)uVar4) && ((int)uVar1 <= (int)uVar2)) && (-1 < (int)uVar5)) {
          return 0xfffffffa;
        }
        uVar2 = *(uint *)(param_2 + 0x40);
        uVar4 = *(uint *)(param_2 + 0x44);
        if (((int)uVar2 < 0) && (-1 < (int)uVar4)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar2) && ((int)uVar4 < 0)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)(uVar4 | uVar2)) && ((int)uVar5 < 0)) {
          return 0xfffffffa;
        }
        uVar5 = uVar5 | uVar4 | uVar2;
        if ((((int)uVar4 <= (int)uVar3) && ((int)uVar2 <= (int)uVar1)) && (-1 < (int)uVar5)) {
          return 0xfffffffa;
        }
        uVar1 = *(uint *)(param_2 + 0x48);
        uVar3 = *(uint *)(param_2 + 0x4c);
        if (((int)uVar1 < 0) && (-1 < (int)uVar3)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar1) && ((int)uVar3 < 0)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)(uVar3 | uVar1)) && ((int)uVar5 < 0)) {
          return 0xfffffffa;
        }
        uVar5 = uVar5 | uVar3 | uVar1;
        if ((((int)uVar3 <= (int)uVar4) && ((int)uVar1 <= (int)uVar2)) && (-1 < (int)uVar5)) {
          return 0xfffffffa;
        }
        uVar2 = *(uint *)(param_2 + 0x50);
        uVar4 = *(uint *)(param_2 + 0x54);
        if (((int)uVar2 < 0) && (-1 < (int)uVar4)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)uVar2) && ((int)uVar4 < 0)) {
          return 0xfffffffa;
        }
        if ((-1 < (int)(uVar4 | uVar2)) && ((int)uVar5 < 0)) {
          return 0xfffffffa;
        }
        if ((((int)uVar4 <= (int)uVar3) && ((int)uVar2 <= (int)uVar1)) &&
           (-1 < (int)(uVar5 | uVar4 | uVar2))) {
          return 0xfffffffa;
        }
      }
    }
    else if (*PTR_DAT_027139e0 == '\0') {
      return 0xfffffffa;
    }
    uVar6 = 0;
    if (*(char *)(param_2 + 0x65) != '\0' && param_1 == 0) {
      uVar6 = 0xfffffffa;
    }
  }
  return uVar6;
}


