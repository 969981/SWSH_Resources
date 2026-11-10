/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231ac0; name: FUN_00231ac0
 */


undefined8 FUN_00231ac0(uint *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  
  fVar2 = DAT_01d4c2dc;
  uVar1 = *param_1;
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar4 = (float *)(param_1 + 1);
    do {
      fVar5 = fabsf(*param_2 * *pfVar4 + param_2[1] * pfVar4[1] + param_2[2] * pfVar4[2]);
      if (fVar2 < fVar5) {
        return 0;
      }
      pfVar4 = pfVar4 + 3;
    } while (pfVar4 < param_1 + (ulong)uVar1 * 3 + 1);
    uVar3 = *param_1;
    if (0xff < uVar3) {
      return 0;
    }
  }
  *param_1 = uVar3 + 1;
  param_1[(ulong)uVar3 * 3 + 1] = (uint)*param_2;
  param_1[(ulong)uVar3 * 3 + 2] = (uint)param_2[1];
  param_1[(ulong)uVar3 * 3 + 3] = (uint)param_2[2];
  return 1;
}


