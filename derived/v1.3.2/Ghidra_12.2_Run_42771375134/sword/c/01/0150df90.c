/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150df90; name: FUN_0150df90
 */


void FUN_0150df90(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xffffff00 |
       *(uint *)(param_1 + 0x60) & 0xf | (param_2 & 0xf) << 4;
  FUN_014bfd10(param_2 & 0xf);
  return;
}


