/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052b950; name: FUN_0052b950
 */


undefined8 FUN_0052b950(long param_1)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_8;
  float local_4;
  
  fVar5 = *(float *)(param_1 + 0x6c8);
  *(float *)(param_1 + 0x8f8) = *(float *)(param_1 + 0x8f0);
  local_8 = DAT_01d4bdf0;
  fVar6 = *(float *)(param_1 + 0x8ec);
  if (*(float *)(param_1 + 0x8ec) <= *(float *)(param_1 + 0x6c4)) {
    fVar6 = *(float *)(param_1 + 0x6c4);
  }
  *(float *)(param_1 + 0x8f4) = fVar6;
  local_4 = fVar5 * local_8;
  pfVar1 = (float *)(param_1 + 0x8f4);
  if (local_4 <= fVar6) {
    pfVar1 = &local_4;
  }
  fVar6 = *pfVar1;
  *(float *)(param_1 + 0x8f4) = fVar6;
  lVar2 = 0x8f8;
  if (fVar5 <= *(float *)(param_1 + 0x8f0)) {
    lVar2 = 0x6c8;
  }
  fVar4 = *(float *)(param_1 + lVar2);
  if (*(float *)(param_1 + lVar2) <= 0.0) {
    fVar4 = fVar5;
  }
  if (fVar4 <= fVar6) {
    fVar4 = (fVar5 - fVar6) * DAT_01d4c4d4 + fVar6;
  }
  *(float *)(param_1 + 0x904) = *(float *)(param_1 + 0x8fc);
  *(float *)(param_1 + 0x908) = *(float *)(param_1 + 0x900);
  *(float *)(param_1 + 0x8f8) = fVar4;
  local_8 = fVar4 * local_8;
  lVar2 = 0x904;
  if (*(float *)(param_1 + 0x8fc) <= fVar6) {
    lVar2 = 0x8f4;
  }
  fVar6 = *(float *)(param_1 + lVar2);
  *(float *)(param_1 + 0x904) = fVar6;
  pfVar1 = (float *)(param_1 + 0x904);
  if (local_8 <= fVar6) {
    pfVar1 = &local_8;
  }
  fVar6 = *pfVar1;
  *(float *)(param_1 + 0x904) = fVar6;
  lVar2 = 0x908;
  if (fVar4 <= *(float *)(param_1 + 0x900)) {
    lVar2 = 0x8f8;
  }
  fVar5 = *(float *)(param_1 + lVar2);
  if (*(float *)(param_1 + lVar2) <= 0.0) {
    fVar5 = fVar4;
  }
  *(float *)(param_1 + 0x908) = fVar5;
  if (fVar5 <= fVar6) {
    fVar6 = (fVar4 - fVar6) * DAT_01d4c4d4 + fVar6;
    pfVar1 = (float *)(param_1 + 0x908);
    *pfVar1 = fVar6;
    pfVar3 = pfVar1;
    if (fVar4 <= fVar6) {
      pfVar3 = (float *)(param_1 + 0x8f8);
    }
    *pfVar1 = *pfVar3;
  }
  return 0;
}


