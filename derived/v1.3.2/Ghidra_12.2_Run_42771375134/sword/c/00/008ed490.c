/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed490; name: FUN_008ed490
 */


void FUN_008ed490(ulong *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff00 |
             *param_1 & 7 | ((ulong)(param_2 & 0x1fffffff) & 0x1f) << 3;
  return;
}


