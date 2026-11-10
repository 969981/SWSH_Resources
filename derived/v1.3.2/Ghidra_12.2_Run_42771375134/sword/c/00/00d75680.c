/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d75680; name: FUN_00d75680
 */


long FUN_00d75680(long param_1,undefined8 param_2,uint *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00d705e0(param_2);
  return *(long *)(param_1 + (uVar1 & 0xff) * 0x30 + 8) + (ulong)*param_3 * 0x148;
}


