/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147950; name: FUN_00147950
 */


void FUN_00147950(float *param_1,long param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float __x;
  float __x_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_4 != 0) {
    puVar2 = param_3 + (ulong)param_4 * 2;
    do {
      pfVar3 = (float *)(param_2 + (ulong)*param_3 * 0x10);
      fVar4 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar15 = pfVar3[3];
      pfVar3 = (float *)(param_2 + (ulong)param_3[1] * 0x10);
      fVar9 = *pfVar3;
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar13 = (fVar9 - fVar4) * 0.5;
      fVar14 = (fVar10 - fVar7) * 0.5;
      fVar12 = (fVar11 - fVar8) * 0.5;
      fVar16 = (pfVar3[3] - fVar15) * 0.5;
      __x = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
      __x_00 = __x - fVar16 * fVar16;
      fVar5 = sqrtf(__x);
      fVar6 = sqrtf(__x_00);
      fVar6 = 1.0 / fVar6;
      *param_1 = (fVar4 + fVar9) * 0.5;
      fVar4 = 1.0 / fVar5;
      if (__x_00 <= 0.0) {
        fVar4 = 0.0;
      }
      param_1[1] = (fVar7 + fVar10) * 0.5;
      param_1[4] = fVar13 * fVar4;
      param_1[5] = fVar14 * fVar4;
      if (__x_00 <= 0.0) {
        fVar6 = 0.0;
      }
      param_1[8] = 1.0 - fVar16 * fVar4 * fVar16 * fVar4;
      param_1[9] = __x * fVar4;
      param_1[6] = fVar12 * fVar4;
      param_1[7] = fVar16 * fVar6;
      param_1[2] = (fVar8 + fVar11) * 0.5;
      param_1[3] = (fVar15 + fVar16) * fVar6 * __x * fVar4;
      fVar4 = (float)(1 << (ulong)(*param_3 & 0x1f));
      param_1[10] = fVar4;
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      param_1[0xb] = (float)(1 << (ulong)(*puVar1 & 0x1f) | (uint)fVar4);
      param_1 = param_1 + 0xc;
    } while (param_3 != puVar2);
  }
  return;
}


