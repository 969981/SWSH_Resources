/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049db10; name: FUN_0049db10
 */


long * FUN_0049db10(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  uVar1 = (int)param_2 + param_3;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  for (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
      (plVar4 != (long *)0x0 && ((*plVar4 != param_2 || ((int)plVar4[1] != param_3))));
      plVar4 = (long *)plVar4[2]) {
  }
  return plVar4;
}


