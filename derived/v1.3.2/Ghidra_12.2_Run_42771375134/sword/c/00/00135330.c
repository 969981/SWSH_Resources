/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00135330; name: FUN_00135330
 */


void FUN_00135330(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_00135410(param_1,param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < param_2) {
    uVar5 = *(ulong *)(param_1 + 8);
    puVar1 = (undefined4 *)(uVar5 + (ulong)param_2 * 4);
    puVar4 = (undefined4 *)(uVar5 + (ulong)uVar2 * 4);
    puVar3 = puVar4 + 1;
    if (puVar4 + 1 <= puVar1) {
      puVar3 = puVar1;
    }
    uVar5 = (long)puVar3 + ~uVar5 + (ulong)uVar2 * -4;
    uVar2 = ((uint)(uVar5 >> 2) & 0x3fffffff) + 1;
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
    if (0xb < uVar5) {
      do {
        *puVar4 = *param_3;
        puVar4[1] = *param_3;
        puVar4[2] = *param_3;
        puVar4[3] = *param_3;
        puVar4 = puVar4 + 4;
      } while (puVar4 < puVar1);
    }
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}


