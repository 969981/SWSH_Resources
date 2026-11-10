/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd6f0; name: FUN_008dd6f0
 */


uint FUN_008dd6f0(int param_1)

{
  if ((param_1 - 0xd1U & 0xffff) < 0x32) {
    return (uint)(0x2808100000001 >> ((ulong)(param_1 - 0xd1U) & 0x3f)) & 1;
  }
  return 0;
}


