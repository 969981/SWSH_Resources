/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00252b50; name: FUN_00252b50
 */


void FUN_00252b50(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *in_x5;
  int *in_x6;
  uint *in_x7;
  uint uVar4;
  
  uVar2 = param_2 >> 1;
  cVar1 = *(char *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 4 + 2);
  *in_x5 = 0xffffffff;
  if (cVar1 < '\0') {
    if ((param_2 & 1) == 0) {
      *in_x6 = param_2 + 1;
      *in_x7 = 0xffffffff;
      uVar4 = *(uint *)(param_1 + 0x3c);
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar2 != uVar3 * uVar4) {
        *in_x5 = param_2 - 1;
        uVar4 = *(uint *)(param_1 + 0x3c);
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      if (uVar3 == *(int *)(param_1 + 0x38) - 2U) {
        return;
      }
      *in_x7 = (uVar4 + uVar2) * 2 | 1;
      return;
    }
    *in_x6 = param_2 - 1;
    *in_x7 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar2 / uVar4;
    }
    if (uVar2 - uVar3 * uVar4 < uVar4 - 2) {
      *in_x5 = param_2 + 1;
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    if (uVar2 < uVar4 - 1) {
      return;
    }
    param_2 = (uVar2 - uVar4) * 2;
  }
  else if ((param_2 & 1) == 0) {
    *in_x6 = param_2 + 1;
    *in_x7 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x3c);
    if (uVar4 - 1 <= uVar2) {
      *in_x5 = (uVar2 - uVar4) * 2 | 1;
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar2 / uVar4;
    }
    if (uVar2 == uVar3 * uVar4) {
      return;
    }
    param_2 = param_2 - 1;
  }
  else {
    *in_x6 = param_2 - 1;
    *in_x7 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar2 / uVar4;
    }
    if (uVar3 != *(int *)(param_1 + 0x38) - 2U) {
      *in_x5 = (uVar4 + uVar2) * 2;
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar2 / uVar4;
    }
    if (uVar4 - 2 <= uVar2 - uVar3 * uVar4) {
      return;
    }
    param_2 = param_2 + 1;
  }
  *in_x7 = param_2;
  return;
}


