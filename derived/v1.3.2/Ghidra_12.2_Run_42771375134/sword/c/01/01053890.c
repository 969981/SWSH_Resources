/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053890; name: FUN_01053890
 */


void FUN_01053890(long param_1,byte param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x148) + 0x128);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 & 1);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x148) + 0xf0) + 0x1ac) = ~param_2 & 1;
  return;
}


