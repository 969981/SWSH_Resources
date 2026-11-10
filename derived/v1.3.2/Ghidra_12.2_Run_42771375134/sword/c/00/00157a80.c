/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00157a80; name: FUN_00157a80
 */


void FUN_00157a80(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_00158bd0(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x14);
    do {
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
      puVar1[1] = param_3[1];
      puVar2 = (undefined8 *)((long)puVar1 + 0x14);
      *puVar1 = *param_3;
      puVar1 = puVar2;
    } while (puVar2 < (undefined8 *)(lVar3 + (ulong)param_2 * 0x14));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


