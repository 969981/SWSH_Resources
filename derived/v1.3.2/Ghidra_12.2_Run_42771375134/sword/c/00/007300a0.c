/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007300a0; name: FUN_007300a0
 */


void FUN_007300a0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  if (*(undefined8 **)(param_1 + 0x170) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x170);
    do {
      puVar3 = puVar2 + 2;
      FUN_0072b690(*puVar2,param_2,param_3,param_4 & 1);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


