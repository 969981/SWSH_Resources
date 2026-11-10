/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043c5c0; name: FUN_0043c5c0
 */


void FUN_0043c5c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(short *)(*(long *)(plVar1[2] + 8) + 0x34) == 0x503) {
      FUN_00441d90(*(long *)(plVar1[2] + 8),param_2);
    }
  }
  for (plVar1 = *(long **)(param_1 + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(short *)(*(long *)(plVar1[2] + 8) + 0x34) == 0x503) {
      FUN_00441d90(*(long *)(plVar1[2] + 8),param_2);
    }
  }
  return;
}


