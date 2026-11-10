/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164550; name: FUN_01164550
 */


void FUN_01164550(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 local_18;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x68) + 0xf10);
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  (**(code **)(*plVar1 + 0x10))(&local_18);
  *param_1 = local_18;
  return;
}


