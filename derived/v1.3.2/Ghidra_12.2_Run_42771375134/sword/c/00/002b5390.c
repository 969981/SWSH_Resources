/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b5390; name: FUN_002b5390
 */


undefined8 FUN_002b5390(float *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_90 [24];
  
  FUN_00295e20(local_90,param_2 + 0x24,param_2 + 0x30,param_2,param_2 + 0xc,param_2 + 0x18);
  fVar11 = param_1[2];
  fVar3 = *param_1;
  fVar6 = param_1[1];
  fVar12 = param_1[3];
  fVar8 = fVar12 + local_90[0] * fVar3 + local_90[1] * fVar6 + local_90[2] * fVar11;
  fVar10 = fVar12 + fVar3 * local_90[3] + fVar6 * local_90[4] + fVar11 * local_90[5];
  fVar4 = fVar12 + fVar3 * local_90[6] + fVar6 * local_90[7] + fVar11 * local_90[8];
  fVar7 = fVar10;
  if (fVar8 <= fVar10) {
    fVar7 = fVar8;
  }
  fVar5 = fVar4;
  if (fVar7 <= fVar4) {
    fVar5 = fVar7;
  }
  fVar9 = fVar12 + fVar3 * local_90[9] + fVar6 * local_90[10] + fVar11 * local_90[0xb];
  uVar1 = 2;
  if (fVar7 <= fVar4) {
    uVar1 = (ulong)(fVar10 < fVar8);
  }
  fVar7 = fVar9;
  if (fVar5 <= fVar9) {
    fVar7 = fVar5;
  }
  fVar4 = fVar12 + fVar3 * local_90[0xc] + fVar6 * local_90[0xd] + fVar11 * local_90[0xe];
  uVar2 = 3;
  if (fVar5 <= fVar9) {
    uVar2 = uVar1;
  }
  fVar8 = fVar4;
  if (fVar7 <= fVar4) {
    fVar8 = fVar7;
  }
  fVar10 = fVar12 + fVar3 * local_90[0xf] + fVar6 * local_90[0x10] + fVar11 * local_90[0x11];
  *(float *)(param_3 + 0x24) = *param_1;
  uVar1 = 4;
  if (fVar7 <= fVar4) {
    uVar1 = uVar2;
  }
  fVar7 = fVar12 + fVar3 * local_90[0x12] + fVar6 * local_90[0x13] + fVar11 * local_90[0x14];
  fVar4 = fVar10;
  if (fVar8 <= fVar10) {
    fVar4 = fVar8;
  }
  uVar2 = 5;
  if (fVar8 <= fVar10) {
    uVar2 = uVar1;
  }
  uVar1 = 6;
  if (fVar4 <= fVar7) {
    uVar1 = uVar2;
  }
  if (fVar4 <= fVar7) {
    fVar7 = fVar4;
  }
  fVar12 = fVar12 + fVar3 * local_90[0x15] + fVar6 * local_90[0x16] + fVar11 * local_90[0x17];
  *(float *)(param_3 + 0x28) = param_1[1];
  *(float *)(param_3 + 0x2c) = param_1[2];
  fVar3 = fVar12;
  if (fVar7 <= fVar12) {
    fVar3 = fVar7;
  }
  uVar2 = 7;
  if (fVar7 <= fVar12) {
    uVar2 = uVar1;
  }
  *(float *)(param_3 + 0x30) = fVar3;
  fVar4 = param_1[2];
  fVar7 = *param_1;
  fVar8 = local_90[uVar2 * 3 + 2];
  fVar6 = local_90[uVar2 * 3];
  *(float *)(param_3 + 0x1c) = local_90[uVar2 * 3 + 1] - fVar3 * param_1[1];
  *(float *)(param_3 + 0x18) = fVar6 - fVar3 * fVar7;
  *(float *)(param_3 + 0x20) = fVar8 - fVar3 * fVar4;
  return 1;
}


