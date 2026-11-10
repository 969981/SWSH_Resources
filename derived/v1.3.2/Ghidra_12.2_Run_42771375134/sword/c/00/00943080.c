/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943080; name: FUN_00943080
 */


bool FUN_00943080(long param_1,ulong param_2)

{
  return (*(ulong *)(param_1 + 200) & 1L << (param_2 & 0x3f)) != 0;
}


