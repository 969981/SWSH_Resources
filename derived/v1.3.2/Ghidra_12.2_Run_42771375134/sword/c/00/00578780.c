/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578780; name: FUN_00578780
 */


float FUN_00578780(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,ulong param_4,
                  float *param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  local_64 = param_3;
  FUN_00578590(param_6,&local_68,&local_6c,&local_70,&local_64);
  fVar4 = 1.0 / (local_6c + local_6c);
  fVar3 = 1.0 / (local_70 + local_70);
  fVar5 = *param_5 * (1.0 / fVar4) - 0.5 / fVar4;
  fVar3 = param_5[1] * (1.0 / fVar3) - 0.5 / fVar3;
  fVar1 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar3 = fVar1;
  if ((fVar1 == 0.0) || (fVar1 == 1.0)) {
LAB_0057889c:
    if ((param_4 & 1) == 0) goto LAB_005788a4;
LAB_00578838:
    fVar1 = 0.0;
    if (fVar3 <= 0.0) goto LAB_005788f0;
    fVar2 = tanf(local_68 * 0.5);
    __x = (float)NEON_fminnm(fVar3 * local_68 * 0.5,DAT_01d4c51c);
    if (DAT_01d4c05c <= __x) goto LAB_005788f4;
    fVar1 = tanf(__x);
    fVar1 = (1.0 / fVar2) * fVar1;
  }
  else {
    fVar3 = SQRT(fVar1);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar1);
      goto LAB_0057889c;
    }
    if ((param_4 & 1) != 0) goto LAB_00578838;
LAB_005788a4:
    if (fVar3 <= 0.0) {
LAB_005788f0:
      fVar1 = 0.0;
      goto LAB_005788f4;
    }
    fVar1 = tanf(local_68 * 0.5);
    fVar1 = atanf(fVar3 * fVar1);
    fVar1 = (2.0 / local_68) * fVar1;
  }
  fVar1 = powf(fVar1 / fVar3,local_64);
  fVar1 = fVar5 * fVar1;
LAB_005788f4:
  return fVar4 * fVar1 + 0.5;
}


