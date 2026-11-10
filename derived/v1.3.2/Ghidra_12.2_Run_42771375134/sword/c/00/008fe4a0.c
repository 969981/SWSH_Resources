/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe4a0; name: FUN_008fe4a0
 */


void FUN_008fe4a0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x350) = param_2;
  *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) | 8;
  return;
}


