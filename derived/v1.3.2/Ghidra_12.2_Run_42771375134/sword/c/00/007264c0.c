/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007264c0; name: FUN_007264c0
 */


undefined4 FUN_007264c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x368);
  if (plVar1 == *(long **)(param_1 + 0x370)) {
    return 0;
  }
  if ((long *)plVar1[1] == (long *)*plVar1) {
    return 0;
  }
  return *(undefined4 *)(*(long *)*plVar1 + 0x1dc);
}


