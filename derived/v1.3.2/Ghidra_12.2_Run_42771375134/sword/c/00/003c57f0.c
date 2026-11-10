/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c57f0; name: FUN_003c57f0
 */


void FUN_003c57f0(long param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(*(long *)(param_1 + 0x60) + 0x7bc);
  pfVar1 = (float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x750) + 0xe8) +
                    (ulong)*(uint *)(param_1 + 0x4c) * 0x20);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  *param_2 = fVar2 * *pfVar1;
  param_2[1] = fVar2 * fVar3;
  param_2[2] = fVar2 * fVar4;
  fVar4 = pfVar1[6];
  fVar3 = pfVar1[5];
  *param_3 = fVar2 * pfVar1[4];
  param_3[1] = fVar2 * fVar3;
  param_3[2] = fVar2 * fVar4;
  return;
}


