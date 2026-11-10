/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050fa30; name: FUN_0050fa30
 */


void FUN_0050fa30(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = param_1[5];
  if (param_2 != (float *)0x0) {
    *param_2 = 1.0 / *param_1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = 1.0 / fVar1;
  }
  return;
}


