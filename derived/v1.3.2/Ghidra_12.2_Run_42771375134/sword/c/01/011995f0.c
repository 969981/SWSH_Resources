/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011995f0; name: FUN_011995f0
 */


void FUN_011995f0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x90);
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}


