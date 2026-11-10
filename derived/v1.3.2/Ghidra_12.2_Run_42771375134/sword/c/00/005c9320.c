/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9320; name: FUN_005c9320
 */


float FUN_005c9320(ulong param_1,ulong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 < 1) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.0;
    fVar3 = 1.0;
    do {
      fVar1 = (float)FUN_005c91c0(param_1,param_2);
      fVar1 = fVar3 * fVar1;
      fVar3 = fVar3 * 0.5;
      fVar2 = fVar2 + fVar1;
      param_1 = (ulong)(uint)((float)param_1 + (float)param_1);
      param_2 = (ulong)(uint)((float)param_2 + (float)param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return fVar2;
}


