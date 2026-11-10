/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775d00; name: FUN_00775d00
 */


void FUN_00775d00(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  if (param_2[3] == 0) {
    FUN_0077c640(*param_1 + 0x10,param_2[2]);
    return;
  }
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x60);
  }
  FUN_0077c640(*param_1 + 0x10,*puVar1);
  return;
}


