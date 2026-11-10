/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a01a0; name: FUN_003a01a0
 */


undefined8 FUN_003a01a0(uint *param_1,ulong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  
  if (*(long *)(param_1 + 4) == 0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar3 = (uVar1 & 0xffffffff | param_2[1] << 0x20) + (uVar1 << 0x20 ^ 0xffffffffffffffff);
  uVar3 = uVar3 ^ uVar3 >> 0x16;
  uVar3 = uVar3 + (uVar3 << 0xd ^ 0xffffffffffffffff);
  uVar3 = (uVar3 ^ uVar3 >> 8) * 9;
  uVar3 = uVar3 ^ uVar3 >> 0xf;
  uVar3 = uVar3 + (uVar3 << 0x1b ^ 0xffffffffffffffff);
  uVar3 = (ulong)(param_1[1] & ((uint)(uVar3 >> 0x1f) ^ (uint)uVar3));
  uVar5 = *(uint *)(*(long *)(param_1 + 4) + uVar3 * 4);
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  do {
    puVar6 = (ulong *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 0x18);
    if (*puVar6 == uVar1 && puVar6[1] == param_2[1]) {
      if (puVar6 == (ulong *)0x0) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 8) + (ulong)uVar5 * 0x18;
      *param_3 = *(undefined4 *)(lVar4 + 0x10);
      *param_4 = *(undefined4 *)(lVar4 + 0x14);
      FUN_003a06b0(param_1,param_2,uVar3,(ulong)(uVar5 * 0x18) / 0x18);
      uVar2 = param_1[2] | param_1[2] >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = uVar2 | uVar2 >> 0x10;
      uVar5 = uVar2 + 1;
      if ((*param_1 != uVar5) && (param_1[10] <= uVar5)) {
        *param_1 = uVar5;
        param_1[1] = uVar2;
        FUN_003a5f40(param_1);
      }
      return 1;
    }
    uVar5 = *(uint *)(*(long *)(param_1 + 6) + (ulong)uVar5 * 4);
  } while (uVar5 != 0xffffffff);
  return 0;
}


