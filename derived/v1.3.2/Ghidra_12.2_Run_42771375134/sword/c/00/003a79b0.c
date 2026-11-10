/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a79b0; name: FUN_003a79b0
 */


void FUN_003a79b0(long param_1,int param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((param_2 != param_4) && (*(int *)(param_1 + 0x1edc) != 0)) {
    uVar1 = *param_3;
    uVar7 = (uVar1 & 0xffffffff | param_3[1] << 0x20) + (uVar1 << 0x20 ^ 0xffffffffffffffff);
    uVar7 = uVar7 ^ uVar7 >> 0x16;
    uVar7 = uVar7 + (uVar7 << 0xd ^ 0xffffffffffffffff);
    uVar7 = (uVar7 ^ uVar7 >> 8) * 9;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    uVar7 = uVar7 + (uVar7 << 0x1b ^ 0xffffffffffffffff);
    uVar6 = *(uint *)(*(long *)(param_1 + 0x1ec0) +
                     (ulong)(*(int *)(param_1 + 0x1ecc) - 1U & ((uint)(uVar7 >> 0x1f) ^ (uint)uVar7)
                            ) * 4);
    if (uVar6 != 0xffffffff) {
      lVar4 = *(long *)(param_1 + 0x1eb0);
      do {
        uVar7 = (ulong)uVar6;
        if ((*(ulong *)(lVar4 + uVar7 * 0x20) == uVar1) &&
           (lVar3 = lVar4 + uVar7 * 0x20, *(ulong *)(lVar3 + 8) == param_3[1])) {
          if (lVar4 + uVar7 * 0x20 == 0) {
            return;
          }
          plVar5 = *(long **)(*(long *)(param_1 + 0x1f10) + (ulong)*(uint *)(lVar3 + 0x18) * 0x10);
          uVar6 = *(uint *)(plVar5[2] + (ulong)*(uint *)(lVar3 + 0x14) * 0x1c + 0x18);
          uVar2 = uVar6 >> 1 & 0xf;
          if (uVar2 == 0) {
            return;
          }
          lVar3 = 0;
          lVar4 = *plVar5 + (ulong)(uVar6 >> 5) * 4;
          do {
            if (*(int *)(lVar4 + lVar3 * 4) == param_4) {
              *(int *)(lVar4 + lVar3 * 4) = param_2;
              return;
            }
            lVar3 = lVar3 + 1;
          } while ((uint)lVar3 < uVar2);
          return;
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x1eb8) + uVar7 * 4);
      } while (uVar6 != 0xffffffff);
    }
  }
  return;
}


