/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbb20; name: FUN_008dbb20
 */


void FUN_008dbb20(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) =
       *(uint *)(param_1 + 0x3c) & 0xfe000000 |
       *(uint *)(param_1 + 0x3c) & 0xffffff | (param_2 & 1) << 0x18;
  return;
}


