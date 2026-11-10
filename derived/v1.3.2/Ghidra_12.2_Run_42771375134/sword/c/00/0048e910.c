/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e910; name: FUN_0048e910
 */


void FUN_0048e910(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x2b0) != 0) {
    plVar1 = *(long **)(param_1 + 0x2a8);
    do {
      FUN_004815f0(*plVar1,param_1);
      if ((*(uint *)(param_1 + 0x26b) >> 0x1c & 1) != 0) {
        *(short *)(*plVar1 + 0x2a) = *(short *)(*plVar1 + 0x2a) + -1;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != (long *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8))
    ;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  return;
}


