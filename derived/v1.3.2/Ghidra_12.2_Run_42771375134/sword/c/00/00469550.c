/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469550; name: FUN_00469550
 */


float FUN_00469550(float *param_1,float *param_2)

{
  return SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}


