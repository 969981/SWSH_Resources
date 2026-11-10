/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fea50; name: FUN_001fea50
 */


void FUN_001fea50(ulong *param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_001feb30(param_1,param_2);
  }
  uVar2 = (uint)param_1[1];
  if (uVar2 < param_2) {
    uVar5 = *param_1;
    puVar1 = (undefined2 *)(uVar5 + (ulong)param_2 * 2);
    puVar4 = (undefined2 *)(uVar5 + (ulong)uVar2 * 2);
    puVar3 = puVar4 + 1;
    if (puVar4 + 1 <= puVar1) {
      puVar3 = puVar1;
    }
    uVar5 = (long)puVar3 + ~uVar5 + (ulong)uVar2 * -2;
    uVar2 = ((uint)(uVar5 >> 1) & 0x7fffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar6 = -((ulong)uVar2 & 3);
      puVar3 = puVar4;
      do {
        lVar6 = lVar6 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *param_3;
        puVar3 = puVar4;
      } while (lVar6 != 0);
    }
    if (5 < uVar5) {
      do {
        *puVar4 = *param_3;
        puVar4[1] = *param_3;
        puVar4[2] = *param_3;
        puVar4[3] = *param_3;
        puVar4 = puVar4 + 4;
      } while (puVar4 < puVar1);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


