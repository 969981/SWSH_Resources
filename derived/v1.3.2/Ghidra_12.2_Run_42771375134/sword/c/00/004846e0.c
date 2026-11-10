/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004846e0; name: FUN_004846e0
 */


void FUN_004846e0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x9c) =
       *(uint *)(param_1 + 0x9c) & 0xffffe000 |
       *(uint *)(param_1 + 0x9c) & 0xfff | (param_2 & 1) << 0xc;
  return;
}


