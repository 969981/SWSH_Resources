/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eafa0; name: FUN_004eafa0
 */


void FUN_004eafa0(float *param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_3[1] - *(float *)(param_2 + 0x4c);
  fVar4 = *(float *)(param_2 + 0x50);
  fVar9 = *(float *)(param_2 + 0x54);
  fVar1 = *param_3 - *(float *)(param_2 + 0x48);
  fVar3 = param_3[2];
  param_1[2] = *(float *)(param_2 + 0x50);
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x48);
  fVar3 = fVar3 - fVar4;
  fVar5 = *(float *)(param_2 + 0x60) * fVar1 + fVar2 * *(float *)(param_2 + 100) +
          fVar3 * *(float *)(param_2 + 0x68);
  fVar4 = -fVar9;
  if ((-fVar9 <= fVar5) && (fVar4 = fVar9, fVar5 <= fVar9)) {
    fVar4 = fVar5;
  }
  fVar6 = *param_1 + *(float *)(param_2 + 0x60) * fVar4;
  fVar9 = param_1[1] + *(float *)(param_2 + 100) * fVar4;
  fVar7 = param_1[2] + *(float *)(param_2 + 0x68) * fVar4;
  *param_1 = fVar6;
  param_1[1] = fVar9;
  param_1[2] = fVar7;
  fVar10 = *(float *)(param_2 + 0x58);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0xc) * fVar1 + fVar2 * fVar8 + fVar3 * fVar5;
  fVar4 = -fVar10;
  if ((-fVar10 <= fVar1) && (fVar4 = fVar10, fVar1 <= fVar10)) {
    fVar4 = fVar1;
  }
  *param_1 = fVar6 + *(float *)(param_2 + 0xc) * fVar4;
  param_1[1] = fVar9 + fVar8 * fVar4;
  param_1[2] = fVar7 + fVar5 * fVar4;
  return;
}


