/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00115360; name: FUN_00115360
 */


void FUN_00115360(ulong *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_0011afa0(param_1,param_2);
  }
  uVar1 = (uint)param_1[1];
  if (uVar1 < param_2) {
    uVar5 = *param_1;
    puVar2 = (undefined8 *)(uVar5 + (ulong)param_2 * 0x20);
    puVar4 = (undefined8 *)(uVar5 + (ulong)uVar1 * 0x20);
    puVar3 = puVar4 + 4;
    if (puVar4 + 4 <= puVar2) {
      puVar3 = puVar2;
    }
    uVar5 = (long)puVar3 + ~uVar5 + (ulong)uVar1 * -0x20;
    uVar1 = ((uint)(uVar5 >> 5) & 0x7ffffff) + 1;
    if ((uVar1 & 7) != 0) {
      lVar6 = -((ulong)uVar1 & 7);
      puVar3 = puVar4;
      do {
        puVar3[3] = param_3[3];
        puVar3[2] = param_3[2];
        puVar3[1] = param_3[1];
        lVar6 = lVar6 + 1;
        puVar4 = puVar3 + 4;
        *puVar3 = *param_3;
        puVar3 = puVar4;
      } while (lVar6 != 0);
    }
    if (0xdf < uVar5) {
      do {
        puVar4[3] = param_3[3];
        puVar4[2] = param_3[2];
        puVar4[1] = param_3[1];
        *puVar4 = *param_3;
        puVar4[7] = param_3[3];
        puVar4[6] = param_3[2];
        puVar4[5] = param_3[1];
        puVar4[4] = *param_3;
        puVar4[0xb] = param_3[3];
        puVar4[10] = param_3[2];
        puVar4[9] = param_3[1];
        puVar4[8] = *param_3;
        puVar4[0xc] = *param_3;
        puVar4[0xd] = param_3[1];
        puVar4[0xe] = param_3[2];
        puVar4[0xf] = param_3[3];
        puVar4[0x13] = param_3[3];
        puVar4[0x12] = param_3[2];
        puVar4[0x11] = param_3[1];
        puVar4[0x10] = *param_3;
        puVar4[0x16] = param_3[2];
        puVar4[0x15] = param_3[1];
        puVar4[0x14] = *param_3;
        puVar4[0x17] = param_3[3];
        puVar4[0x1a] = param_3[2];
        puVar4[0x19] = param_3[1];
        puVar4[0x18] = *param_3;
        puVar4[0x1b] = param_3[3];
        puVar4[0x1f] = param_3[3];
        puVar4[0x1e] = param_3[2];
        puVar4[0x1d] = param_3[1];
        puVar4[0x1c] = *param_3;
        puVar4 = puVar4 + 0x20;
      } while (puVar4 < puVar2);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


