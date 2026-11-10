/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcfa90; name: FUN_00dcfa90
 */


void FUN_00dcfa90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb90);
  for (puVar1 = *(undefined8 **)(param_1 + 0xb88); puVar1 != puVar2; puVar1 = puVar1 + 4) {
    FUN_0105aad0(*puVar1,param_2,param_3);
  }
  return;
}


