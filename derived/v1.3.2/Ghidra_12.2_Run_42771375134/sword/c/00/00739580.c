/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00739580; name: FUN_00739580
 */


void FUN_00739580(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar2 = *(undefined8 **)(param_1 + 0xb0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_0072ac30(*puVar2,param_2);
  }
  return;
}


