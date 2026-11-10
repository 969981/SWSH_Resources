/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009359b0; name: FUN_009359b0
 */


void FUN_009359b0(int *param_1)

{
  int iVar1;
  
  iVar1 = 399;
  if (-1 < *param_1 + -1) {
    iVar1 = *param_1 + -1;
  }
  *(undefined1 *)((long)param_1 + (long)iVar1 * 0xc + 0xd) = 1;
  return;
}


