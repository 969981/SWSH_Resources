/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ad9e0; name: FUN_014ad9e0
 */


undefined8 FUN_014ad9e0(int *param_1,int *param_2)

{
  if (((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
       (param_1[2] == param_2[2])) &&
      (((char)param_1[3] == (char)param_2[3] &&
       (*(char *)((long)param_1 + 0xd) == *(char *)((long)param_2 + 0xd))))) &&
     ((param_1[4] == param_2[4] && ((param_1[5] == param_2[5] && (param_1[6] == param_2[6])))))) {
    return 1;
  }
  return 0;
}


