/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009053b0; name: FUN_009053b0
 */


bool FUN_009053b0(long param_1,uint param_2)

{
  param_2 = param_2 & 0xff;
  if (((((int)*(char *)(param_1 + 0x538) == param_2) || ((int)*(char *)(param_1 + 0x539) == param_2)
       ) || ((int)*(char *)(param_1 + 0x53a) == param_2)) ||
     (((int)*(char *)(param_1 + 0x53b) == param_2 || ((int)*(char *)(param_1 + 0x53c) == param_2))))
  {
    return true;
  }
  return (int)*(char *)(param_1 + 0x53d) == param_2;
}


