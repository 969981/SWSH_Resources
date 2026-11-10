/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b98c0; name: FUN_007b98c0
 */


void FUN_007b98c0(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0x169) {
    *(size_t *)(param_1 + 0x3f0) = param_3;
    memcpy((void *)(param_1 + 0x284),param_2,param_3);
    *(undefined1 *)(param_1 + 0x3f8) = 1;
  }
  return;
}


