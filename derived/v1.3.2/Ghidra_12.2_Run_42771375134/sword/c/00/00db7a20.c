/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db7a20; name: FUN_00db7a20
 */


undefined8 FUN_00db7a20(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x1f0);
  plVar3 = *(long **)(param_1 + 0x1e8);
  if (*(long **)(param_1 + 0x1e8) == plVar1) {
    return 0;
  }
  do {
    plVar4 = plVar3 + 1;
    uVar2 = FUN_00db8dc0(*plVar3 + 0x50);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    plVar3 = plVar4;
  } while (plVar1 != plVar4);
  return 0;
}


