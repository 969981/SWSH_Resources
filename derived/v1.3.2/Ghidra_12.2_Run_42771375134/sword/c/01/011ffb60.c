/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ffb60; name: FUN_011ffb60
 */


void FUN_011ffb60(long *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x338) != '\0') {
    *param_1 = param_2 + 0x340;
    return;
  }
  if (*(long *)(param_2 + 0x130) == 0) {
    *param_1 = 0;
    return;
  }
  FUN_0120ca50();
  return;
}


