/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fff20; name: FUN_003fff20
 */


undefined8 FUN_003fff20(ThreadType *param_1)

{
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return 0;
  }
  nn::os::WaitThread(param_1);
  return 1;
}


