/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006479a0; name: FUN_006479a0
 */


undefined8 FUN_006479a0(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 0x184) == '\0') {
    return 0;
  }
  memcpy((void *)(param_1 + 400),param_2,(long)*(int *)(param_1 + 0x174));
  return 1;
}


