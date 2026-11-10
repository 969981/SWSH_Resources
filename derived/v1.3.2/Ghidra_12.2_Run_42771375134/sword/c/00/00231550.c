/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231550; name: FUN_00231550
 */


undefined8
FUN_00231550(long param_1,undefined8 param_2,long param_3,float *param_4,float *param_5,
            undefined8 param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
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
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *(float *)(param_3 + 0x10);
  fVar4 = *(float *)(param_3 + 0x14);
  fVar6 = fVar4 - param_4[5];
  fVar8 = fVar3 - param_4[4];
  fVar5 = *(float *)(param_3 + 0x18);
  fVar9 = fVar5 - param_4[6];
  fVar9 = fVar9 + fVar9;
  fVar10 = param_4[2];
  fVar13 = param_4[3];
  fVar8 = fVar8 + fVar8;
  fVar6 = fVar6 + fVar6;
  fVar12 = *param_4;
  fVar11 = param_4[1];
  fVar7 = *(float *)(param_1 + 4);
  fVar6 = (fVar12 * (fVar8 * fVar12 + fVar6 * fVar11 + fVar9 * fVar10) +
          (fVar8 * (fVar13 * fVar13 + -0.5) - fVar13 * (fVar9 * fVar11 - fVar6 * fVar10))) - fVar7;
  if (*param_5 < fVar6) {
    return 0;
  }
  uVar2 = *(uint *)(param_7 + 0x1000);
  if (uVar2 < 0x40) {
    fVar15 = fVar13 + fVar13;
    fVar14 = fVar12 + fVar12;
    fVar9 = fVar10 * fVar15 + fVar14 * fVar11;
    fVar8 = fVar14 * fVar10 - fVar15 * fVar11;
    fVar10 = fVar12 * fVar14 + fVar13 * fVar15 + -1.0;
    pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
    *(uint *)(param_7 + 0x1000) = uVar2 + 1;
    pfVar1[2] = fVar8;
    pfVar1[3] = fVar6;
    *pfVar1 = fVar10;
    pfVar1[1] = fVar9;
    pfVar1[5] = fVar4 - fVar7 * fVar9;
    pfVar1[6] = fVar5 - fVar7 * fVar8;
    pfVar1[4] = fVar3 - fVar7 * fVar10;
    pfVar1[0xd] = -NAN;
  }
  return 1;
}


