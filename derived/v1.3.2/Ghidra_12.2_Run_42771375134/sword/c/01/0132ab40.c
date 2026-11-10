/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132ab40; name: FUN_0132ab40
 */


void FUN_0132ab40(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x40);
  if ((((*plVar1 == 0) || (plVar1 = (long *)(param_1 + 0x50), *plVar1 == 0)) ||
      (plVar1 = (long *)(param_1 + 0x60), *plVar1 == 0)) ||
     (plVar1 = (long *)(param_1 + 0x70), *plVar1 == 0)) {
    *plVar1 = *param_2;
    return;
  }
  return;
}


