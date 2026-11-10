/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8d00; name: FUN_001b8d00
 */


void FUN_001b8d00(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x37c) != 0) {
    uVar5 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2;
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    puVar4 = (uint *)(*(long *)(param_1 + 0x360) +
                     (ulong)(*(int *)(param_1 + 0x36c) - 1U & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5))
                     * 4);
    uVar2 = *puVar4;
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(long *)(param_1 + 0x358) + (ulong)uVar2 * 4);
        uVar3 = *puVar1;
        if (*(long *)(*(long *)(param_1 + 0x350) + (ulong)uVar2 * 8) == param_2) {
          *puVar4 = uVar3;
          *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + -1;
          *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + 1;
          *puVar1 = *(uint *)(param_1 + 0x374);
          *(uint *)(param_1 + 0x374) = uVar2;
          break;
        }
        puVar4 = puVar1;
        uVar2 = uVar3;
      } while (uVar3 != 0xffffffff);
    }
  }
                    /* try { // try from 001b8dd4 to 001b8dd7 has its CatchHandler @ 001b8de4 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return;
}


