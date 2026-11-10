/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbae0; name: FUN_008dbae0
 */


void FUN_008dbae0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) =
       *(uint *)(param_1 + 0x3c) & 0xc0000000 |
       *(uint *)(param_1 + 0x3c) & 0x1fffffff | (param_2 & 1) << 0x1d;
  return;
}


