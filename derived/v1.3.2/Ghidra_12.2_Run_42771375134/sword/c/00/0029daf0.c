/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029daf0; name: FUN_0029daf0
 */


long FUN_0029daf0(long param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x24);
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
    uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 4);
    if (uVar6 != 0xffffffff) {
      lVar5 = *(long *)(param_1 + 8);
      do {
        if (*(long *)(lVar5 + (ulong)uVar6 * 8) == lVar3) {
          *param_3 = 1;
          return lVar5 + (ulong)uVar6 * 8;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar2 = 0x10;
    if (uVar1 != 0) {
      uVar2 = uVar1 << 1;
    }
    if (uVar1 < uVar2) {
      FUN_0029d500(param_1);
      uVar1 = *(uint *)(param_1 + 0x24);
    }
    uVar4 = *param_2 + (*param_2 << 0x20 ^ 0xffffffffffffffffU);
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
    uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
    uVar2 = uVar1 - 1 & ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  lVar3 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = uVar1 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) =
       *(undefined4 *)(lVar3 + (ulong)uVar2 * 4);
  *(uint *)(lVar3 + (ulong)uVar2 * 4) = uVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar1 * 8;
}


