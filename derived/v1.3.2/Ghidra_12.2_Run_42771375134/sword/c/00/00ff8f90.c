/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8f90; name: FUN_00ff8f90
 */


void FUN_00ff8f90(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  for (puVar2 = *(undefined8 **)(param_1 + 0x78); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00ffadf0(*puVar2);
  }
  return;
}


