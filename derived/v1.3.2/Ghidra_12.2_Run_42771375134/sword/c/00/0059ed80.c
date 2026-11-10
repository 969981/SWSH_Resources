/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ed80; name: FUN_0059ed80
 */


void FUN_0059ed80(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713d20 + 0x10;
  *param_1 = (long)puVar1;
  if (param_1[4] != 0) {
    FUN_0059f160(param_1);
    puVar1 = (undefined *)*param_1;
    param_1[4] = 0;
  }
  (**(code **)(puVar1 + 0x18))(param_1);
  FUN_00551380(param_1 + 2);
  return;
}


