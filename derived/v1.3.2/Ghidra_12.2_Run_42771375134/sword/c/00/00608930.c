/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608930; name: FUN_00608930
 */


bool FUN_00608930(char *param_1,char *param_2,ulong param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    param_3 = param_3 - 1;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}


