/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc690; name: FUN_006fc690
 */


void FUN_006fc690(long param_1,int param_2)

{
  *(char *)(param_1 + 0x171) = (char)*(undefined4 *)(&DAT_01d4ab70 + (long)param_2 * 4);
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}


