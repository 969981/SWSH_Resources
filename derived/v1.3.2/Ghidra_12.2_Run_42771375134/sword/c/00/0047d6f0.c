/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d6f0; name: FUN_0047d6f0
 */


long * FUN_0047d6f0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(PTR_DAT_02713240 + 0x10);
  if (param_1 == 0) {
    while ((plVar2 != (long *)0x0 &&
           (uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2), (uVar1 & 1) == 0))) {
      plVar2 = (long *)plVar2[1];
    }
  }
  else {
    for (; (plVar2 != (long *)0x0 && (plVar2[2] != param_1)); plVar2 = (long *)plVar2[1]) {
    }
  }
  return plVar2;
}


