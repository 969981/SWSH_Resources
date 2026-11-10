/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f3930; name: FUN_003f3930
 */


void FUN_003f3930(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_003f39c0(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x18);
    do {
      puVar1[2] = param_3[2];
      puVar1[1] = param_3[1];
      puVar2 = puVar1 + 3;
      *puVar1 = *param_3;
      puVar1 = puVar2;
    } while (puVar2 < (undefined8 *)(lVar3 + (ulong)param_2 * 0x18));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


