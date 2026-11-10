/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231660; name: FUN_00231660
 */


undefined8
FUN_00231660(long param_1,long param_2,long param_3,long param_4,float *param_5,undefined8 param_6,
            long param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
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
  
  fVar10 = *(float *)(param_3 + 0x14) - *(float *)(param_4 + 0x14);
  fVar11 = *(float *)(param_3 + 0x10) - *(float *)(param_4 + 0x10);
  fVar12 = *(float *)(param_3 + 0x18) - *(float *)(param_4 + 0x18);
  fVar4 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
  fVar9 = *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
  fVar5 = fVar9 + *param_5;
  if (fVar5 * fVar5 <= fVar4) {
    uVar3 = 0;
  }
  else {
    fVar4 = sqrtf(fVar4);
    if (fVar4 <= DAT_01d4c050) {
      fVar10 = 0.0;
      fVar11 = 1.0;
      fVar12 = 0.0;
      uVar2 = *(uint *)(param_7 + 0x1000);
    }
    else {
      fVar5 = 1.0 / fVar4;
      fVar11 = fVar11 * fVar5;
      fVar10 = fVar10 * fVar5;
      fVar12 = fVar12 * fVar5;
      uVar2 = *(uint *)(param_7 + 0x1000);
    }
    if (uVar2 < 0x40) {
      fVar5 = *(float *)(param_1 + 4);
      fVar6 = *(float *)(param_2 + 4);
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      fVar13 = *(float *)(param_3 + 0x14);
      fVar7 = *(float *)(param_3 + 0x18);
      fVar8 = *(float *)(param_3 + 0x10);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      pfVar1[3] = fVar4 - fVar9;
      fVar4 = ((fVar4 + fVar5) - fVar6) * -0.5;
      pfVar1[1] = fVar10;
      pfVar1[2] = fVar12;
      *pfVar1 = fVar11;
      pfVar1[4] = fVar11 * fVar4 + fVar8;
      pfVar1[6] = fVar12 * fVar4 + fVar7;
      pfVar1[0xd] = -NAN;
      pfVar1[5] = fVar10 * fVar4 + fVar13;
    }
    uVar3 = 1;
  }
  return uVar3;
}


