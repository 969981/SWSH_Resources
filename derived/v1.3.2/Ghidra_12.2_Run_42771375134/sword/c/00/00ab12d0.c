/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab12d0; name: FUN_00ab12d0
 */


void FUN_00ab12d0(float param_1,long *param_2,long param_3,undefined8 *param_4,long *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_015f5d10();
  puVar1 = PTR_DAT_02719830;
  param_2[0x10] = param_3;
  *param_2 = (long)(puVar1 + 0x10);
  param_2[9] = (long)(puVar1 + 0x60);
  param_2[10] = (long)(puVar1 + 0xa0);
  param_2[0x13] = param_5[1];
  param_2[0x12] = *param_5;
  *(undefined4 *)(param_2 + 0x16) = param_7;
  *(undefined4 *)((long)param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0x17) = param_6;
  fVar2 = (float)*param_4 - (float)*param_5;
  fVar4 = (float)param_4[1] - (float)param_5[1];
  fVar3 = (float)FUN_00a92fd0(CONCAT44((float)((ulong)*param_4 >> 0x20) -
                                       (float)((ulong)*param_5 >> 0x20),fVar2),fVar4);
  *(float *)(param_2 + 0x15) = -fVar3;
  *(float *)((long)param_2 + 0xac) = param_1 - fVar3;
  fVar3 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  *(float *)((long)param_2 + 0xa4) = fVar2;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)((long)param_4 + 4);
  return;
}


