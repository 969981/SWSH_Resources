/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af860; name: FUN_009af860
 */


bool FUN_009af860(long param_1,byte param_2)

{
  if ((int)*(uint *)(param_1 + 8) < 0) {
    return true;
  }
  return *(uint *)(param_1 + (ulong)param_2 * 4 + 0xc) == (*(uint *)(param_1 + 8) & 0x7fffffff);
}


