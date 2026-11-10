/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcfb40; name: FUN_00dcfb40
 */


void FUN_00dcfb40(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x184) == 3) {
    puVar3 = *(undefined8 **)(param_1 + 0xb90);
    if (*(undefined8 **)(param_1 + 0xb88) != puVar3) {
      puVar1 = *(undefined8 **)(param_1 + 0xb88);
      do {
        puVar2 = puVar1 + 4;
        FUN_0105b310(*puVar1,param_2,param_3 & 1);
        puVar1 = puVar2;
      } while (puVar3 != puVar2);
    }
  }
  return;
}


