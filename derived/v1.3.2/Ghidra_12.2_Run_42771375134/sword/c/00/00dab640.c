/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab640; name: FUN_00dab640
 */


float FUN_00dab640(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_18;
  float local_14;
  
  local_14 = param_1;
  fVar5 = *(float *)(param_2 + 8);
  local_24 = 1.0;
  pfVar1 = &local_24;
  if (param_1 <= 1.0) {
    pfVar1 = &local_14;
  }
  pfVar2 = &local_18;
  if (0.0 <= param_1) {
    pfVar2 = pfVar1;
  }
  local_18 = 0.0;
  local_14 = *pfVar2;
  fVar4 = *(float *)(param_2 + 0xc);
  if (*(float *)(param_2 + 0xc) <= fVar5) {
    fVar4 = fVar5 + DAT_01d4bec0;
  }
  iVar3 = *(int *)(param_2 + 4);
  fVar6 = fVar5 + (fVar4 - fVar5) * local_14;
  if (iVar3 == 2) {
    fVar5 = (fVar6 - fVar5) * *(float *)(param_2 + 0x10) * DAT_01d4c4d4;
    fVar5 = -(fVar5 * fVar5);
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        return ((fVar6 - fVar5) / (fVar4 - fVar5)) * *(float *)(param_2 + 0x10);
      }
      return 0.0;
    }
    fVar5 = (fVar6 - fVar5) * *(float *)(param_2 + 0x10) * DAT_01d4bfa0;
  }
  fVar5 = expf(fVar5);
  return 1.0 - fVar5;
}


