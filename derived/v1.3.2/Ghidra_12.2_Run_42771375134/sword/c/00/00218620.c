/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00218620; name: FUN_00218620
 */


void FUN_00218620(long param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar8 = fVar3 + fVar3;
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar9 = fVar4 + fVar4;
  fVar10 = fVar5 * (fVar5 + fVar5);
  fVar7 = (fVar5 + fVar5) * fVar6;
  fVar2 = 1.0 - fVar3 * fVar8;
  uVar1 = *(undefined8 *)(param_2 + 4);
  fVar3 = param_2[6];
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(float *)(param_1 + 0x34) = fVar8 * fVar4 - fVar7;
  *(float *)(param_1 + 0x3c) = fVar9 * fVar5 + fVar8 * fVar6;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  *(float *)(param_1 + 0x28) = fVar8 * fVar4 + fVar7;
  *(float *)(param_1 + 0x2c) = fVar8 * fVar5 - fVar9 * fVar6;
  *(float *)(param_1 + 0x44) = fVar8 * fVar5 + fVar9 * fVar6;
  *(float *)(param_1 + 0x5c) = fVar3;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(float *)(param_1 + 0x48) = fVar9 * fVar5 - fVar8 * fVar6;
  *(float *)(param_1 + 0x24) = (1.0 - fVar4 * fVar9) - fVar10;
  *(float *)(param_1 + 0x38) = fVar2 - fVar10;
  *(float *)(param_1 + 0x4c) = fVar2 - fVar4 * fVar9;
  return;
}


