/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f6d00; name: FUN_001f6d00
 */


void FUN_001f6d00(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x269c) != 0) {
    uVar5 = ((long)param_2 << 0x20 ^ 0xffffffffffffffffU) + (long)param_2;
    uVar5 = uVar5 ^ uVar5 >> 0x16;
    uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 8) * 9;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff);
    puVar4 = (uint *)(*(long *)(param_1 + 0x2680) +
                     (ulong)(*(int *)(param_1 + 0x268c) - 1U & ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5)
                            ) * 4);
    uVar3 = *puVar4;
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(long *)(param_1 + 0x2678) + (ulong)uVar3 * 4);
        uVar2 = *puVar1;
        if (*(long **)(*(long *)(param_1 + 0x2670) + (ulong)uVar3 * 8) == param_2) {
          *puVar4 = uVar2;
          *(int *)(param_1 + 0x269c) = *(int *)(param_1 + 0x269c) + -1;
          *(int *)(param_1 + 0x2698) = *(int *)(param_1 + 0x2698) + 1;
          *puVar1 = *(uint *)(param_1 + 0x2694);
          *(uint *)(param_1 + 0x2694) = uVar3;
          break;
        }
        puVar4 = puVar1;
        uVar3 = uVar2;
      } while (uVar2 != 0xffffffff);
    }
  }
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f6d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2);
  return;
}


