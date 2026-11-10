/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009336e0; name: FUN_009336e0
 */


undefined8 FUN_009336e0(long param_1,ulong param_2)

{
  return *(undefined8 *)(param_1 + (param_2 & 0xff) * 0x20 + 8);
}


