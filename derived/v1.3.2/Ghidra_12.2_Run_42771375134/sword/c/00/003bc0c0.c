/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc0c0; name: FUN_003bc0c0
 */


void FUN_003bc0c0(long *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_003bd510(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar2 = *param_1;
    puVar1 = (undefined4 *)(lVar2 + (ulong)*(uint *)(param_1 + 1) * 0x1c);
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      puVar1[4] = param_3[4];
      puVar1[5] = param_3[5];
      puVar1[6] = param_3[6];
      puVar1 = puVar1 + 7;
    } while (puVar1 < (undefined4 *)(lVar2 + (ulong)param_2 * 0x1c));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


