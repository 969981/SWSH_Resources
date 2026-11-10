/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2eac0; name: FUN_00e2eac0
 */


bool FUN_00e2eac0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)*param_2 + 0x48))();
  return lVar1 == *(long *)*param_1;
}


