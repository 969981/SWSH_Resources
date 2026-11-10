/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b80c0; name: FUN_007b80c0
 */


void FUN_007b80c0(undefined1 *param_1)

{
  int local_30 [4];
  
  if (((*(long *)PTR_DAT_02716a30 == 0) || (*(long *)PTR_DAT_027104b0 == 0)) ||
     (*(char *)(*(long *)PTR_DAT_027104b0 + 0x218) == '\0')) {
    *param_1 = 0;
    return;
  }
  FUN_019416b0(local_30);
  *param_1 = 0;
  if (local_30[0] != 0) {
    FUN_018724d0(param_1 + 4,local_30);
    *param_1 = 1;
  }
  return;
}


