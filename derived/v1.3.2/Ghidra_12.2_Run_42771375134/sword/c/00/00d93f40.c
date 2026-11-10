/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d93f40; name: FUN_00d93f40
 */


uint FUN_00d93f40(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  plVar3 = plVar2 + 9;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar1 & 1;
}


