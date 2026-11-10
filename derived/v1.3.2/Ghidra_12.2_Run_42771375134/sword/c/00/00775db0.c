/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775db0; name: FUN_00775db0
 */


bool FUN_00775db0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)*param_1 + 0x68))();
  return iVar1 == 1;
}


