/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed200; name: FUN_005ed200
 */


uint FUN_005ed200(int param_1)

{
  if (param_1 - 0x46U < 0x23) {
    return (uint)(0x7ff007fff >> ((ulong)(param_1 - 0x46U) & 0x3f)) & 1;
  }
  return 0;
}


