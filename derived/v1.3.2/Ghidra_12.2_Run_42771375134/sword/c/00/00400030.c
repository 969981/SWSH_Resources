/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400030; name: FUN_00400030
 */


void FUN_00400030(ThreadType *param_1,char *param_2)

{
  if (*(int *)(param_1 + 0x1d0) == 1) {
    nn::os::SetThreadNamePointer(param_1,param_2);
    return;
  }
  *(char **)(param_1 + 0x1a8) = param_2;
  return;
}


