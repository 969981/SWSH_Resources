/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b47f0; name: FUN_006b47f0
 */


bool FUN_006b47f0(long *param_1)

{
  if (*param_1 == 0) {
    return false;
  }
  if (*(int *)(*param_1 + 0x54) == 0) {
    return false;
  }
  return *(char *)((long)param_1 + 0xc) != '\0';
}


