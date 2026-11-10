/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007301e0; name: FUN_007301e0
 */


void FUN_007301e0(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x170);
  plVar1 = *(long **)(param_1 + 0x178);
  if ((plVar2 != plVar1) && (*(long *)(*plVar2 + 0x70) != *param_2)) {
    do {
      plVar2 = plVar2 + 2;
      if (plVar1 == plVar2) {
        return;
      }
    } while (*(long *)(*plVar2 + 0x70) != *param_2);
  }
  if (plVar2 == plVar1) {
    return;
  }
  FUN_0072a6e0(*plVar2,param_3);
  return;
}


