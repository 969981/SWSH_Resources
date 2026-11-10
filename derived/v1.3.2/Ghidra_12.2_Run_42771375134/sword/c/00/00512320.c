/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512320; name: FUN_00512320
 */


void FUN_00512320(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6)

{
  param_4 = param_3 + param_4;
  if (param_5 != (float *)0x0) {
    if (param_4 <= 0.0) {
      param_3 = 0.0;
    }
    else {
      param_3 = param_3 / param_4;
    }
    *param_5 = (param_1 - param_2) * param_3 + param_2;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = param_4 * 0.5;
  }
  return;
}


