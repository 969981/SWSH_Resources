/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a1f0; name: FUN_0103a1f0
 */


void FUN_0103a1f0(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xbac) == 2) {
    *(undefined1 *)(param_1 + 0xbb0) = 0;
    FUN_010364c0();
    return;
  }
  *(undefined1 *)(param_1 + 0xbb0) = 1;
  *(undefined4 *)(param_1 + 0xbb4) = param_2;
  return;
}


