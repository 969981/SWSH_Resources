/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d93fb0; name: FUN_00d93fb0
 */


uint FUN_00d93fb0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (plVar4 == (long *)0x0) {
    return 1;
  }
  plVar3 = plVar4 + 9;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x78))(plVar4);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar1 & 1;
}


