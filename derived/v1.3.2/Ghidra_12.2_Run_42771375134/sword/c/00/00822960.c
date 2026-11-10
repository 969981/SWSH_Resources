/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00822960; name: FUN_00822960
 */


void FUN_00822960(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00822960(param_1,*param_2);
    FUN_00822960(param_1,param_2[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
      free(param_2);
      return;
    }
  }
  return;
}


