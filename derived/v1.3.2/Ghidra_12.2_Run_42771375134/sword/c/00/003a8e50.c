/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8e50; name: FUN_003a8e50
 */


long FUN_003a8e50(long param_1,ulong *param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar5 = (uVar2 & 0xffffffff | param_2[1] << 0x20) + (uVar2 << 0x20 ^ 0xffffffffffffffff);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = uVar3 - 1 & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 4);
    if (uVar6 != 0xffffffff) {
      do {
        uVar5 = (ulong)uVar6;
        if ((*(ulong *)(*(long *)(param_1 + 8) + uVar5 * 0x20) == uVar2) &&
           (lVar1 = *(long *)(param_1 + 8) + uVar5 * 0x20, *(ulong *)(lVar1 + 8) == param_2[1])) {
          *param_3 = 1;
          return lVar1;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + uVar5 * 4);
      } while (uVar6 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar4 = 0x10;
    if (uVar3 != 0) {
      uVar4 = uVar3 << 1;
    }
    if (uVar3 < uVar4) {
      FUN_003a8c80(param_1);
      uVar3 = *(uint *)(param_1 + 0x24);
    }
    uVar5 = ((ulong)(uint)*param_2 | param_2[1] << 0x20) +
            ((ulong)(uint)*param_2 << 0x20 ^ 0xffffffffffffffff);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = uVar3 - 1 & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5);
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  lVar1 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 4) =
       *(undefined4 *)(lVar1 + (ulong)uVar4 * 4);
  *(uint *)(lVar1 + (ulong)uVar4 * 4) = uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar3 * 0x20;
}


