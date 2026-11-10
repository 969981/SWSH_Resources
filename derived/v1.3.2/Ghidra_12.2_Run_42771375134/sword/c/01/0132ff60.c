/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132ff60; name: FUN_0132ff60
 */


uint FUN_0132ff60(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0103c8d0(*(undefined8 *)(param_1 + 0x400));
  uVar2 = FUN_0103c8d0(*(undefined8 *)(param_1 + 0x408));
  return uVar1 & uVar2 & 1;
}


