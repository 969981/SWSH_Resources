/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a5db0; name: FUN_003a5db0
 */


void FUN_003a5db0(uint *param_1,ulong *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar5 = (uVar1 & 0xffffffff | param_2[1] << 0x20) + (uVar1 << 0x20 ^ 0xffffffffffffffff);
  uVar5 = uVar5 ^ uVar5 >> 0x16;
  uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
  uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
  uVar5 = uVar5 ^ uVar5 >> 0xf;
  uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
  uVar4 = param_1[1] & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5);
  if ((*(long *)(param_1 + 4) != 0) &&
     (uVar6 = *(uint *)(*(long *)(param_1 + 4) + (ulong)uVar4 * 4), uVar6 != 0xffffffff)) {
    do {
      puVar3 = (ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 0x18);
      if (*puVar3 == uVar1 && puVar3[1] == param_2[1]) {
        if (puVar3 != (ulong *)0x0) {
          return;
        }
        break;
      }
      uVar6 = *(uint *)(*(long *)(param_1 + 6) + (ulong)uVar6 * 4);
    } while (uVar6 != 0xffffffff);
  }
  uVar6 = param_1[2];
  if (*param_1 <= uVar6) {
    uVar4 = uVar6 + 1 | uVar6 + 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    *param_1 = uVar4 + 1;
    param_1[1] = uVar4;
    FUN_003a5f40(param_1);
    uVar5 = ((ulong)(uint)*param_2 | param_2[1] << 0x20) +
            ((ulong)(uint)*param_2 << 0x20 ^ 0xffffffffffffffff);
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    uVar6 = param_1[2];
    uVar4 = param_1[1] & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5);
  }
  puVar3 = (ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 0x18);
  puVar3[1] = param_2[1];
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 2) = param_3;
  *(undefined4 *)((long)puVar3 + 0x14) = param_4;
  lVar2 = *(long *)(param_1 + 4);
  *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)param_1[2] * 4) =
       *(undefined4 *)(lVar2 + (ulong)uVar4 * 4);
  uVar6 = param_1[2];
  param_1[2] = uVar6 + 1;
  *(uint *)(lVar2 + (ulong)uVar4 * 4) = uVar6;
  return;
}


