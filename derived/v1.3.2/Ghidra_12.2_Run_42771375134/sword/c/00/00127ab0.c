/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00127ab0; name: FUN_00127ab0
 */


long FUN_00127ab0(long param_1,long *param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar5 = lVar2 + (lVar2 << 0x20 ^ 0xffffffffffffffffU);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar7 = lVar1 + (lVar1 << 0x20 ^ 0xffffffffffffffffU);
    uVar7 = uVar7 ^ uVar7 >> 0x16;
    uVar7 = uVar7 + (uVar7 << 0xd ^ 0xffffffffffffffff);
    uVar7 = (uVar7 ^ uVar7 >> 8) * 9;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    uVar7 = uVar7 + (uVar7 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = (((uint)(uVar7 >> 0x1f) ^ (uint)uVar7 ^ 0xfc955b95) * 0xf4247 ^
            (uint)(uVar5 >> 0x1f) ^ (uint)uVar5) & uVar3 - 1;
    uVar8 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 4);
    if (uVar8 != 0xffffffff) {
      lVar6 = *(long *)(param_1 + 8);
      do {
        uVar5 = (ulong)uVar8;
        if ((*(long *)(lVar6 + (ulong)uVar8 * 0x18) == lVar1) &&
           (*(long *)(lVar6 + uVar5 * 0x18 + 8) == lVar2)) {
          *param_3 = 1;
          return lVar6 + uVar5 * 0x18;
        }
        uVar8 = *(uint *)(*(long *)(param_1 + 0x10) + uVar5 * 4);
      } while (uVar8 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar4 = 0x10;
    if (uVar3 != 0) {
      uVar4 = uVar3 << 1;
    }
    if (uVar3 < uVar4) {
      FUN_00127530(param_1);
      uVar3 = *(uint *)(param_1 + 0x24);
    }
    uVar5 = param_2[1] + (param_2[1] << 0x20 ^ 0xffffffffffffffffU);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar7 = *param_2 + (*param_2 << 0x20 ^ 0xffffffffffffffffU);
    uVar7 = uVar7 ^ uVar7 >> 0x16;
    uVar7 = uVar7 + (uVar7 << 0xd ^ 0xffffffffffffffff);
    uVar7 = (uVar7 ^ uVar7 >> 8) * 9;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    uVar7 = uVar7 + (uVar7 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = (((uint)(uVar7 >> 0x1f) ^ (uint)uVar7 ^ 0xfc955b95) * 0xf4247 ^
            (uint)(uVar5 >> 0x1f) ^ (uint)uVar5) & uVar3 - 1;
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 4) =
       *(undefined4 *)(lVar1 + (ulong)uVar4 * 4);
  *(uint *)(lVar1 + (ulong)uVar4 * 4) = uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar3 * 0x18;
}


