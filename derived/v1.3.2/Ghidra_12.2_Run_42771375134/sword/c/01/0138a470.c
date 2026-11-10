/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138a470; name: FUN_0138a470
 */


void FUN_0138a470(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_50 [16];
  
  *(undefined8 *)(param_1 + 200) = param_2[1];
  puVar3 = PTR_DAT_02710848;
  *(undefined8 *)(param_1 + 0xc0) = *param_2;
  fVar5 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar3 + 0x98));
  fVar6 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar3 + 0x98));
  *(float *)(param_1 + 0xa0) = (fVar5 + 0.0 + fVar6) * 0.5;
  fVar5 = DAT_01d4c774;
  fVar6 = (float)FUN_01029020(DAT_01d4c774,*(undefined8 *)(*(long *)puVar3 + 0x98));
  fVar7 = (float)FUN_01029020(fVar5,*(undefined8 *)(*(long *)puVar3 + 0x98));
  *(float *)(param_1 + 0xb4) = (fVar6 + 0.0 + fVar7) * 0.5 + *(float *)(param_1 + 0xb4);
  fVar6 = (float)FUN_01029020(0x41e80000,*(undefined8 *)(*(long *)puVar3 + 0x98));
  *(float *)(param_1 + 0xac) = fVar6;
  if (*(float *)(param_1 + 0xa0) < fVar5) {
    *(float *)(param_1 + 0xac) = fVar6 + 4.0;
  }
  uVar2 = DAT_01d4bdf4;
  uVar8 = FUN_01029020(DAT_01d4bdf4,*(undefined8 *)(*(long *)puVar3 + 0x98));
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  uVar8 = FUN_01029020(uVar2,*(undefined8 *)(*(long *)puVar3 + 0x98));
  *(undefined4 *)(param_1 + 0xe0) = uVar8;
  fVar5 = (float)FUN_01029020(0x40c00000,*(undefined8 *)(*(long *)puVar3 + 0x98));
  fVar5 = fVar5 + DAT_01d4beb8;
  *(float *)(param_1 + 0xb0) = fVar5;
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  uVar4 = (ulong)(*(float *)(param_1 + 0xa8) * (fVar6 / *(float *)PTR_FloatPi_02715160));
  pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10);
  fVar6 = (float)((uint)uVar4 & 0xffffff) * DAT_01d4bc78;
  local_50._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) + fVar5,
                (float)*(undefined8 *)(param_1 + 0xc0) +
                *(float *)(param_1 + 0xac) * (*pfVar1 + pfVar1[2] * fVar6));
  local_50._8_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) + 0.0,
                (float)*(undefined8 *)(param_1 + 200) +
                *(float *)(param_1 + 0xac) * (pfVar1[1] + pfVar1[3] * fVar6));
  FUN_012dc9c0(param_1,local_50);
  uVar9 = FUN_01029020(uVar2,*(undefined8 *)(*(long *)puVar3 + 0x98));
  uVar10 = FUN_01029020(uVar2,*(undefined8 *)(*(long *)puVar3 + 0x98));
  uVar11 = FUN_01029020(uVar2,*(undefined8 *)(*(long *)puVar3 + 0x98));
  local_50 = FUN_00a92cd0(uVar9,uVar10,uVar11);
  FUN_012dc7f0(param_1,local_50);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


