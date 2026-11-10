/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009afa30; name: FUN_009afa30
 */


void FUN_009afa30(undefined1 *param_1,void *param_2,uint param_3)

{
  memcpy(param_1 + 6,param_2,(ulong)param_3);
  *param_1 = (char)param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


