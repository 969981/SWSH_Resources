/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d756f0; name: FUN_00d756f0
 */


int FUN_00d756f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00d705e0(param_2);
  param_1 = param_1 + (uVar1 & 0xff) * 0x30;
  return (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) * -0x3e7063e7;
}


