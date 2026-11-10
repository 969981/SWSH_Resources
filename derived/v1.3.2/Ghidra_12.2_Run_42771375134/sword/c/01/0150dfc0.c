/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150dfc0; name: FUN_0150dfc0
 */


void FUN_0150dfc0(long param_1,uint param_2)

{
  if (param_2 < 0xb) {
    *(uint *)(param_1 + 0x60) =
         *(uint *)(param_1 + 0x60) & 0xffffe000 |
         *(uint *)(param_1 + 0x60) & 0x1ff | (param_2 & 0xf) << 9;
  }
  return;
}


