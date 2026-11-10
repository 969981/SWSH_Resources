/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3dd70; name: FUN_00e3dd70
 */


void FUN_00e3dd70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar14 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  fVar9 = (float)param_3[2];
  fVar10 = (float)((ulong)param_3[2] >> 0x20);
  fVar11 = (float)param_3[3];
  fVar12 = (float)((ulong)param_3[3] >> 0x20);
  fVar5 = (float)*param_3;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar7 = (float)param_3[1];
  fVar8 = (float)((ulong)param_3[1] >> 0x20);
  fVar13 = *(float *)((long)param_4 + 0x2c);
  fVar15 = *(float *)(param_4 + 6);
  fVar1 = (float)param_2;
  fVar16 = *(float *)((long)param_3 + 0x2c);
  fVar17 = *(float *)(param_3 + 6);
  param_1[1] = CONCAT44(fVar8 + ((float)((ulong)param_4[1] >> 0x20) - fVar8) * fVar1,
                        fVar7 + ((float)param_4[1] - fVar7) * fVar1);
  *param_1 = CONCAT44(fVar6 + ((float)((ulong)uVar14 >> 0x20) - fVar6) * fVar1,
                      fVar5 + ((float)uVar14 - fVar5) * fVar1);
  param_1[3] = CONCAT44(fVar12 + ((float)((ulong)uVar4 >> 0x20) - fVar12) * fVar1,
                        fVar11 + ((float)uVar4 - fVar11) * fVar1);
  param_1[2] = CONCAT44(fVar10 + ((float)((ulong)uVar3 >> 0x20) - fVar10) * fVar1,
                        fVar9 + ((float)uVar3 - fVar9) * fVar1);
  *(float *)((long)param_1 + 0x2c) = fVar16 + (fVar13 - fVar16) * fVar1;
  *(float *)(param_1 + 6) = fVar17 + (fVar15 - fVar17) * fVar1;
  local_40 = FUN_00a92cd0(*(undefined4 *)(param_3 + 4),*(undefined4 *)((long)param_3 + 0x24),
                          *(undefined4 *)(param_3 + 5));
  local_50 = FUN_00a92cd0(*(undefined4 *)(param_4 + 4),*(undefined4 *)((long)param_4 + 0x24),
                          *(undefined4 *)(param_4 + 5));
  local_60 = FUN_0075e7d0(param_2,local_40,local_50);
  auVar2 = FUN_007101c0(local_60);
  uVar3 = NEON_rev64(auVar2._0_8_,4);
  param_1[4] = uVar3;
  *(float *)(param_1 + 5) = auVar2._8_4_;
  fVar1 = DAT_01d4c708;
  if (((DAT_01d4c708 < ABS(auVar2._0_4_)) && (ABS(*(float *)((long)param_3 + 0x24)) <= DAT_01d4c708)
      ) && (ABS(*(float *)((long)param_4 + 0x24)) <= DAT_01d4c708)) {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (((fVar1 < ABS(auVar2._4_4_)) && (ABS(*(float *)(param_3 + 4)) <= fVar1)) &&
     (ABS(*(float *)(param_4 + 4)) <= fVar1)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (((fVar1 < ABS(auVar2._8_4_)) && (ABS(*(float *)(param_3 + 5)) <= fVar1)) &&
     (ABS(*(float *)(param_4 + 5)) <= fVar1)) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}


