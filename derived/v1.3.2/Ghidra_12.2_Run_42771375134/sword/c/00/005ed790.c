/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed790; name: FUN_005ed790
 */


bool FUN_005ed790(int param_1)

{
  if ((param_1 - 0x48U < 0x1c) && ((1 << (ulong)(param_1 - 0x48U & 0x1f) & 0x8280049U) != 0)) {
    return true;
  }
  return param_1 == 0x1d;
}


