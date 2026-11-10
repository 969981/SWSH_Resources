/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9c20; name: FUN_004c9c20
 */


undefined8 FUN_004c9c20(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
  lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 5;
  do {
    if (*plVar1 == param_2) {
      return 1;
    }
    plVar1 = plVar1 + 4;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  return 0;
}


