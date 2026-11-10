/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00320860; name: FUN_00320860
 */


long FUN_00320860(long param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *param_2;
    uVar4 = lVar3 + (lVar3 << 0x20 ^ 0xffffffffffffffffU);
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
    uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
    uVar2 = uVar1 - 1 & ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 4);
    if (uVar6 != 0xffffffff) {
      lVar5 = *(long *)(param_1 + 0x10);
      do {
        uVar4 = (ulong)uVar6;
        if (*(long *)(lVar5 + uVar4 * 0x10) == lVar3) {
          *param_3 = 1;
          return lVar5 + uVar4 * 0x10;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + uVar4 * 4);
      } while (uVar6 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x28)) {
    uVar2 = 0x10;
    if (uVar1 != 0) {
      uVar2 = uVar1 << 1;
    }
    if (uVar1 < uVar2) {
      FUN_003209e0(param_1);
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
    uVar4 = *param_2 + (*param_2 << 0x20 ^ 0xffffffffffffffffU);
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
    uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
    uVar2 = uVar1 - 1 & ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  lVar3 = *(long *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x34) = uVar1 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 4) =
       *(undefined4 *)(lVar3 + (ulong)uVar2 * 4);
  *(uint *)(lVar3 + (ulong)uVar2 * 4) = uVar1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return *(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x10;
}


