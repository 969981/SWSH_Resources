/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e06f0; name: FUN_012e06f0
 */


void FUN_012e06f0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != plVar1) && (*plVar2 != param_2)) {
    do {
      plVar2 = plVar2 + 0x60;
      if (plVar1 == plVar2) {
        return;
      }
    } while (*plVar2 != param_2);
  }
  if (((plVar2 == plVar1) || (plVar2 == (long *)0x0)) || (plVar2[0x4c] == 0)) {
    return;
  }
  FUN_00794740();
  FUN_012e0500(param_1,param_2,2);
  return;
}


