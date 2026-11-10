/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190e30; name: FUN_00190e30
 */


void FUN_00190e30(long param_1,long param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(long *)(param_1 + 0x10) = param_2;
  *(short **)(param_1 + 0x38) = param_3;
  sVar1 = *param_3;
  *(short *)(param_1 + 0x30) = sVar1;
  sVar2 = param_3[1];
  *(short *)(param_1 + 0x32) = sVar2;
  sVar3 = param_3[2];
  *(short *)(param_1 + 0x34) = sVar3;
  fVar7 = *(float *)(param_2 + 0x48c);
  fVar4 = fVar7 * (float)(int)sVar1;
  fVar8 = *(float *)(param_2 + 0x49c);
  fVar5 = fVar7 * (float)(int)sVar2;
  fVar6 = fVar7 * (float)(int)sVar3;
  *(float *)(param_1 + 0x18) = fVar4 - fVar8;
  *(float *)(param_1 + 0x1c) = fVar5 - fVar8;
  *(float *)(param_1 + 0x20) = fVar6 - fVar8;
  *(float *)(param_1 + 0x24) = fVar8 + fVar7 + fVar4;
  *(float *)(param_1 + 0x28) = fVar8 + fVar7 + fVar5;
  *(float *)(param_1 + 0x2c) = fVar8 + fVar7 + fVar6;
  return;
}


