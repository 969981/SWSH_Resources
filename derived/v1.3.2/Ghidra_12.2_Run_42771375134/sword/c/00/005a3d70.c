/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a3d70; name: FUN_005a3d70
 */


float FUN_005a3d70(uint *param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  
  fVar8 = DAT_01d4bda0;
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  uVar6 = param_1[3];
  uVar2 = *param_1 ^ *param_1 << 0xb;
  uVar7 = param_1[10];
  uVar9 = (long)(int)uVar7 - 1;
  uVar10 = uVar9 & 0xffffffff;
  *param_1 = uVar5;
  param_1[1] = uVar4;
  uVar2 = uVar2 ^ (int)uVar2 >> 8 ^ uVar6;
  uVar3 = uVar2 ^ uVar6 >> 0x13;
  param_1[2] = uVar6;
  param_1[3] = uVar3;
  if (1 < (int)uVar7) {
    uVar10 = 0;
    do {
      if ((float)(uVar3 & 0x7fffffff) * fVar8 <= (float)param_1[uVar10 + 0xb]) goto LAB_005a3ddc;
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar9);
    uVar10 = uVar9 & 0xffffffff;
  }
LAB_005a3ddc:
  uVar5 = uVar5 ^ uVar5 << 0xb;
  pfVar1 = (float *)(*(long *)(param_1 + 8) + (long)(int)uVar10 * 0x10);
  uVar5 = uVar5 ^ (int)uVar5 >> 8 ^ uVar3;
  uVar2 = uVar5 ^ uVar2 >> 0x13;
  fVar11 = *pfVar1;
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  if ((float)(uVar2 & 0x7fffffff) * fVar8 < 0.25) {
    fVar11 = fVar11 * *pfVar1;
  }
  uVar4 = uVar4 ^ uVar4 << 0xb;
  uVar4 = uVar4 ^ (int)uVar4 >> 8 ^ uVar2;
  uVar5 = uVar4 ^ uVar5 >> 0x13;
  *param_1 = uVar6;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  if (1 < (int)uVar7) {
    uVar10 = 0;
    do {
      if ((float)(uVar5 & 0x7fffffff) * fVar8 <= (float)param_1[uVar10 + 0xb]) {
        uVar9 = uVar10 & 0xffffffff;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)uVar9);
  }
  pfVar1 = (float *)(*(long *)(param_1 + 8) + (long)(int)uVar9 * 0x10);
  uVar6 = uVar6 ^ uVar6 << 0xb;
  uVar4 = uVar6 ^ (int)uVar6 >> 8 ^ uVar5 ^ uVar4 >> 0x13;
  fVar11 = fVar11 * *pfVar1;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar4;
  if ((float)(uVar4 & 0x7fffffff) * fVar8 < 0.25) {
    fVar11 = fVar11 * *pfVar1;
  }
  return fVar11;
}


