/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e491f0; name: FUN_00e491f0
 */


void FUN_00e491f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x78);
  plVar1 = *(long **)(lVar2 + 0x70);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  plVar3 = *(long **)(lVar2 + 0x80);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x48))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00e4927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  return;
}


