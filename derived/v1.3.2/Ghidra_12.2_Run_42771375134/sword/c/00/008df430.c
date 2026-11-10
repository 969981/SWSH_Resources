/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df430; name: FUN_008df430
 */


undefined8 FUN_008df430(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008e16b0(*(undefined8 *)(param_1 + 0x120 + (param_2 & 0xff) * 8));
  return *(undefined8 *)(param_1 + 0x120 + (uVar1 & 0xff) * 8);
}


