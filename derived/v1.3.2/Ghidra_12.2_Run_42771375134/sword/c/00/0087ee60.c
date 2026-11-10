/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ee60; name: FUN_0087ee60
 */


bool FUN_0087ee60(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0086ce40(*(undefined8 *)(param_1 + 0x98));
  return (uVar1 & 0xf) != 0;
}


