/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5100; name: FUN_003c5100
 */


void FUN_003c5100(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_003c60b0(param_1,param_2);
  }
  if (*(uint *)(param_1 + 0x10) < param_2) {
    lVar2 = *(long *)(param_1 + 8);
    puVar1 = (undefined4 *)(lVar2 + (ulong)*(uint *)(param_1 + 0x10) * 0x20);
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      puVar1[4] = param_3[4];
      puVar1[5] = param_3[5];
      puVar1[6] = param_3[6];
      puVar1[7] = param_3[7];
      puVar1 = puVar1 + 8;
    } while (puVar1 < (undefined4 *)(lVar2 + (ulong)param_2 * 0x20));
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}


