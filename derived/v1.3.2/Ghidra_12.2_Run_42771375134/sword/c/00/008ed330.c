/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed330; name: FUN_008ed330
 */


void FUN_008ed330(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)((uint)*param_1 ^ 4);
  if ((0xe1U >> (uVar1 & 7) & 1) != 0) {
    lVar2 = (uVar1 & 7) * 8;
    *param_1 = *param_1 & *(ulong *)(&DAT_02149b80 + lVar2) |
               (param_2 & 1) << (*(ulong *)(&DAT_02149b40 + lVar2) & 0x3f);
  }
  return;
}


