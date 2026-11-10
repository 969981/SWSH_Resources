/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff9020; name: FUN_00ff9020
 */


void FUN_00ff9020(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (*(undefined8 **)(param_1 + 0x78) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    do {
      puVar3 = puVar2 + 1;
      FUN_00ffa160(*puVar2,param_2 & 1,1);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


