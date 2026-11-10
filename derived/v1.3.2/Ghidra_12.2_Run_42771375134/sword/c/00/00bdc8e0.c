/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc8e0; name: FUN_00bdc8e0
 */


void FUN_00bdc8e0(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x1ac0) == '\0') {
    *(long *)(param_1 + 0x1ac8) = *param_2;
    *(char *)(param_1 + 0x1ac0) = '\x01';
    return;
  }
  if (*(long *)(param_1 + 0x1ac8) < *param_2) {
    *(long *)(param_1 + 0x1ac8) = *param_2;
  }
  return;
}


