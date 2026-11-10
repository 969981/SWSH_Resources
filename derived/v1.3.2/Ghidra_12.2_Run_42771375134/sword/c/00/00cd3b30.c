/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd3b30; name: FUN_00cd3b30
 */


ulong FUN_00cd3b30(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  return (ulong)(plVar1[1] - *plVar1) >> 3;
}


