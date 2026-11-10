/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e1330; name: FUN_014e1330
 */


void FUN_014e1330(long param_1,uint param_2,void *param_3)

{
  if ((param_2 < 5) && (param_3 != (void *)0x0)) {
    memcpy((void *)(param_1 + (ulong)param_2 * 0x880 + 0x910),param_3,0x87f);
    return;
  }
  return;
}


