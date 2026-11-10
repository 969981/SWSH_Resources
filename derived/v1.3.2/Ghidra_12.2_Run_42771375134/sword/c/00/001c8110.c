/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c8110; name: FUN_001c8110
 */


long FUN_001c8110(long param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 == 0) {
    uVar3 = 0;
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 0x2c);
  }
  else {
    lVar2 = *param_2;
    uVar4 = lVar2 + (lVar2 << 0x20 ^ 0xffffffffffffffffU);
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
    uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
    uVar3 = uVar1 - 1 & ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 4);
    if (uVar6 != 0xffffffff) {
      lVar5 = *(long *)(param_1 + 8);
      do {
        if (*(long *)(lVar5 + (ulong)uVar6 * 8) == lVar2) {
          *param_3 = 1;
          return lVar5 + (ulong)uVar6 * 8;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
    }
    *param_3 = 0;
    uVar6 = *(uint *)(param_1 + 0x2c);
  }
  if (uVar6 == 0xffffffff) {
    uVar3 = 0x10;
    if (uVar1 != 0) {
      uVar3 = uVar1 << 1;
    }
    if (uVar1 < uVar3) {
      FUN_001c5c60(param_1);
      uVar1 = *(uint *)(param_1 + 0x24);
      uVar6 = *(uint *)(param_1 + 0x2c);
    }
    else {
      uVar6 = 0xffffffff;
    }
    uVar4 = *param_2 + (*param_2 << 0x20 ^ 0xffffffffffffffffU);
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
    uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
    uVar3 = uVar1 - 1 & ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4) =
       *(undefined4 *)(lVar2 + (ulong)uVar3 * 4);
  *(uint *)(lVar2 + (ulong)uVar3 * 4) = uVar6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar6 * 8;
}


