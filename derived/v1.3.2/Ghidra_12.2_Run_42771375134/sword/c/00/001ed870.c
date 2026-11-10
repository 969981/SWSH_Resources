/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ed870; name: FUN_001ed870
 */


void FUN_001ed870(long *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_001ed900(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar2 = *param_1;
    puVar1 = (undefined4 *)(lVar2 + (ulong)*(uint *)(param_1 + 1) * 0xc);
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1 = puVar1 + 3;
    } while (puVar1 < (undefined4 *)(lVar2 + (ulong)param_2 * 0xc));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


