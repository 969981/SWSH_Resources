/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc650; name: FUN_006fc650
 */


void FUN_006fc650(long param_1,int param_2)

{
  *(short *)(param_1 + 0x176) = (short)*(undefined4 *)(&DAT_0213ef50 + (long)param_2 * 4);
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}


