/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb2e0; name: FUN_004eb2e0
 */


undefined8 FUN_004eb2e0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    return 0;
  }
  lVar2 = (ulong)*(uint *)(param_1 + 0x30) << 3;
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (*(long *)(*plVar1 + 0x38) == param_2) {
      return 1;
    }
    lVar2 = lVar2 + -8;
    plVar1 = plVar1 + 1;
  } while (lVar2 != 0);
  return 0;
}


