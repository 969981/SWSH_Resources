/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d340; name: FUN_0045d340
 */


void FUN_0045d340(long param_1)

{
  if ((*(int *)(param_1 + 0x48) == 2) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_0045caa0(param_1,0,4);
    return;
  }
  return;
}


