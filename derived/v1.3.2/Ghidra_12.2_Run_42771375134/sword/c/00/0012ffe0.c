/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012ffe0; name: FUN_0012ffe0
 */


void FUN_0012ffe0(ulong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_00134a30(param_1,param_2);
  }
  uVar2 = (uint)param_1[1];
  if (uVar2 < param_2) {
    uVar5 = *param_1;
    puVar1 = (undefined8 *)(uVar5 + (ulong)param_2 * 0x10);
    puVar4 = (undefined8 *)(uVar5 + (ulong)uVar2 * 0x10);
    puVar3 = puVar4 + 2;
    if (puVar4 + 2 <= puVar1) {
      puVar3 = puVar1;
    }
    uVar5 = (long)puVar3 + ~uVar5 + (ulong)uVar2 * -0x10;
    uVar2 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 7) != 0) {
      lVar6 = -((ulong)uVar2 & 7);
      puVar3 = puVar4;
      do {
        puVar3[1] = param_3[1];
        puVar4 = puVar3 + 2;
        *puVar3 = *param_3;
        lVar6 = lVar6 + 1;
        puVar3 = puVar4;
      } while (lVar6 != 0);
    }
    if (0x6f < uVar5) {
      do {
        puVar4[1] = param_3[1];
        *puVar4 = *param_3;
        puVar4[3] = param_3[1];
        puVar4[2] = *param_3;
        puVar4[5] = param_3[1];
        puVar4[4] = *param_3;
        puVar4[7] = param_3[1];
        puVar4[6] = *param_3;
        puVar4[9] = param_3[1];
        puVar4[8] = *param_3;
        puVar4[0xb] = param_3[1];
        puVar4[10] = *param_3;
        puVar4[0xc] = *param_3;
        puVar4[0xd] = param_3[1];
        puVar4[0xe] = *param_3;
        puVar4[0xf] = param_3[1];
        puVar4 = puVar4 + 0x10;
      } while (puVar4 < puVar1);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


