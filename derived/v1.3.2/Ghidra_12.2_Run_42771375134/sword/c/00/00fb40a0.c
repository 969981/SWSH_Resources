/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb40a0; name: FUN_00fb40a0
 */


void FUN_00fb40a0(long param_1,undefined8 param_2)

{
  if ((*(long *)(param_1 + 0x3f8) == 0) && (*(long *)(param_1 + 0x400) == 0)) {
    FUN_00fb2010(param_1,param_2,1);
    return;
  }
  FUN_00fb3e70();
  return;
}


