/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889210; name: FUN_00889210
 */


int FUN_00889210(long *param_1)

{
  return ((uint)*(byte *)(*param_1 + 0x16) << 0x1c | (uint)*(byte *)(*param_1 + 0x18) << 0x10) +
         (int)param_1[1];
}


