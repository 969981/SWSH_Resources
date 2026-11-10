/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6400; name: FUN_006b6400
 */


void FUN_006b6400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  for (puVar2 = *(undefined8 **)(param_1 + 0xc0); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    FUN_006b79d0(*puVar2,param_2,param_3,param_4);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  for (puVar2 = *(undefined8 **)(param_1 + 0x90); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    FUN_006b6400(*puVar2,param_2,param_3,param_4);
  }
  return;
}


