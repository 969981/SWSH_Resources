/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d440; name: FUN_0047d440
 */


long * FUN_0047d440(void)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(PTR_DAT_02713240 + 0x10);
  while ((plVar2 != (long *)0x0 && (uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2), (uVar1 & 1) == 0)
         )) {
    plVar2 = (long *)plVar2[1];
  }
  return plVar2;
}


