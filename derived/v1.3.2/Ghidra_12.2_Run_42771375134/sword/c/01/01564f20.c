/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564f20; name: FUN_01564f20
 */


void FUN_01564f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0076cd80(param_1,"g_mode");
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}


