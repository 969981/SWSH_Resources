/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013842f0; name: FUN_013842f0
 */


void FUN_013842f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  lVar1 = (long)*(int *)(param_1 + 0x7c) * 0x10;
  fVar13 = *(float *)(param_1 + 0xd4);
  uVar12 = *(undefined8 *)(lVar1 + 0x2a70c28);
  fVar7 = (float)*param_2 + (float)*(undefined8 *)(&DAT_02a70c20 + lVar1);
  fVar8 = (float)((ulong)*param_2 >> 0x20) +
          (float)((ulong)*(undefined8 *)(&DAT_02a70c20 + lVar1) >> 0x20);
  fVar9 = (float)param_2[1] + (float)uVar12;
  fVar10 = (float)((ulong)param_2[1] >> 0x20) + (float)((ulong)uVar12 >> 0x20);
  *(ulong *)(param_1 + 0xa8) = CONCAT44(fVar10,fVar9);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar8,fVar7);
  fVar11 = *(float *)(&DAT_01d4a260 + (long)*(int *)(param_1 + 0x7c) * 4);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x1b0);
  uVar3 = *(uint *)(param_1 + 0x1c8);
  *(uint *)(param_1 + 0x1c8) = uVar3 + 1;
  *(float *)(param_1 + 0x1b0 + (ulong)(uVar3 % 3) * 4) = fVar11 - fVar13;
  puVar4 = PTR_FloatPi_02715160;
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  fVar13 = fVar13 + (*(float *)(param_1 + 0x1b0) + 0.0 + *(float *)(param_1 + 0x1b4) +
                    *(float *)(param_1 + 0x1b8)) / 3.0;
  *(float *)(param_1 + 0xd8) = fVar13;
  uVar6 = (ulong)(fVar13 * (fVar11 / *(float *)puVar4));
  pfVar2 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar6 >> 0x18 & 0xff) * 0x10);
  fVar11 = (float)((uint)uVar6 & 0xffffff) * DAT_01d4bc78;
  local_30 = CONCAT44(fVar8 + 0.0,fVar7 + (*pfVar2 + pfVar2[2] * fVar11) * DAT_01d4c690);
  uStack_28 = CONCAT44(fVar10 + 0.0,fVar9 + (pfVar2[1] + pfVar2[3] * fVar11) * DAT_01d4c690);
  FUN_012dc9c0(param_1,&local_30);
  puVar5 = (undefined8 *)FUN_012dcaa0(param_1);
  uVar12 = puVar5[1];
  *(undefined8 *)(param_1 + 0xb0) = *puVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar12;
  FUN_012dc620(param_1,PTR_DAT_02715088);
  return;
}


