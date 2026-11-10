/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009333a0; name: FUN_009333a0
 */


void FUN_009333a0(long param_1,byte param_2,uint param_3)

{
  if ((param_2 < 0x1e) && ((param_3 & 0xff) < 5)) {
    param_1 = param_1 + (ulong)param_2 * 4;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (ulong)(param_3 & 0x1f);
  }
  return;
}


