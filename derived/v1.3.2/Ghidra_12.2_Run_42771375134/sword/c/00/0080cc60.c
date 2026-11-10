/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cc60; name: FUN_0080cc60
 */


int FUN_0080cc60(int *param_1)

{
  if (param_1[10] == 0x7fffffff) {
    return -1;
  }
  return (param_1[10] - param_1[6]) + param_1[0xb] + (param_1[2] - *param_1);
}


