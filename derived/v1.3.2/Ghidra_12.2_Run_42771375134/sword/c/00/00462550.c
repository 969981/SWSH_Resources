/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462550; name: FUN_00462550
 */


void FUN_00462550(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_00462410(param_1);
  return;
}


