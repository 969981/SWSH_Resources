/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fc330; name: FUN_004fc330
 */


undefined8 FUN_004fc330(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == (uint *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_3 / uVar2;
    }
    *(uint *)(param_1 + 0x90) = uVar4 * uVar2;
  }
  else {
    uVar2 = param_2[2];
    if (uVar2 == 0) {
      uVar4 = *(uint *)(param_1 + 0x9c);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x60);
      uVar4 = uVar2;
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar4 = uVar1;
        uVar6 = uVar2;
      }
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar3 * uVar6;
      if (uVar4 != 0) {
        if (((uVar6 | uVar4) & 1) == 0) {
          uVar3 = 0;
          uVar7 = uVar6;
          do {
            uVar3 = uVar3 + 1;
            uVar5 = uVar4 | uVar7;
            uVar4 = uVar4 >> 1;
            uVar6 = uVar7 >> 1;
            uVar7 = uVar7 >> 1;
          } while ((uVar5 >> 1 & 1) == 0);
        }
        else {
          uVar3 = 0;
        }
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 >> 1;
        } while ((uVar7 & 1) == 0);
        do {
          uVar5 = uVar4;
          uVar4 = uVar5 >> 1;
        } while ((uVar5 & 1) == 0);
        if (uVar7 == uVar5) {
          uVar6 = uVar7;
        }
        else {
          do {
            uVar6 = uVar7;
            if (uVar5 <= uVar7) {
              uVar6 = uVar5;
              uVar5 = uVar7;
            }
            uVar4 = uVar5 - uVar6;
            do {
              uVar7 = uVar4 >> 1;
              uVar5 = uVar4 >> 1;
              uVar4 = uVar7;
            } while ((uVar5 & 1) == 0);
            uVar5 = uVar6;
          } while (uVar7 != uVar6);
        }
        uVar6 = uVar6 << (ulong)(uVar3 & 0x1f);
      }
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar2 / uVar6;
      }
      uVar4 = uVar4 * uVar1;
      *(uint *)(param_1 + 0x9c) = uVar4;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = param_3 / uVar4;
    }
    *(uint *)(param_1 + 0x98) = uVar4;
    *(uint *)(param_1 + 0x90) = uVar2 * uVar4;
    uVar6 = *param_2;
    if (uVar6 == 0) {
      if (param_2[1] <= uVar4) {
        return 1;
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = ((uVar4 + param_2[1]) - 1) / uVar4;
      }
      *(uint *)(param_1 + 0x98) = uVar6 * uVar4;
      if (uVar2 * uVar4 < uVar6 * uVar4) {
        return 2;
      }
      return 1;
    }
    if (param_3 < uVar6) {
      return 2;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar6 / uVar4;
    }
    if (uVar6 != uVar2 * uVar4) {
      return 2;
    }
    *(uint *)(param_1 + 0x90) = uVar6;
    uVar2 = *param_2;
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  return 1;
}


