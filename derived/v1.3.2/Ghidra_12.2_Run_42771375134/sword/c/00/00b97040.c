/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b97040; name: FUN_00b97040
 */


void FUN_00b97040(long param_1,uint param_2)

{
  if (param_2 < 9) {
    *(undefined1 *)(*(long *)(param_1 + 0x70) + (ulong)param_2 + 0x188) = 0;
  }
  return;
}


