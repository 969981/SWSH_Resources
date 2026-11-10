/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008163d0; name: FUN_008163d0
 */


int FUN_008163d0(uint *param_1)

{
  if ((*param_1 & 1) == 0) {
    return 0;
  }
  if ((*(uint **)(param_1 + 4) < param_1) || (param_1 + 6 <= *(uint **)(param_1 + 4))) {
    return (*param_1 & 0xfffffffe) - 1;
  }
  return 0;
}


