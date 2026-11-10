/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2280; name: FUN_008e2280
 */


bool FUN_008e2280(long param_1,ulong param_2)

{
  return (*(byte *)(param_1 + (param_2 & 0xff) * 0x1c + 0x2db) & 0xf) != 0;
}


