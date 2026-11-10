/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e0780; name: FUN_012e0780
 */


void FUN_012e0780(undefined4 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0xa8);
  plVar1 = *(long **)(param_2 + 0xb0);
  if ((plVar2 != plVar1) && (*plVar2 != param_3)) {
    do {
      plVar2 = plVar2 + 0x60;
      if (plVar1 == plVar2) {
        return;
      }
    } while (*plVar2 != param_3);
  }
  if ((plVar2 != plVar1) && (plVar2 != (long *)0x0)) {
    *(undefined4 *)(plVar2 + 0x5e) = param_1;
  }
  return;
}


