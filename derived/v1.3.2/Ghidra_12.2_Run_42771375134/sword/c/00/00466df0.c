/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466df0; name: FUN_00466df0
 */


undefined8 FUN_00466df0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      if (((*plVar1 != 0) && (lVar3 = *(long *)(*plVar1 + 0x70), lVar3 != 0)) &&
         (0 < *(short *)(lVar3 + 0x90))) {
        return 1;
      }
      plVar1 = plVar1 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return 0;
}


