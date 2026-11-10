/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01381f00; name: FUN_01381f00
 */


void FUN_01381f00(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_40 [16];
  
  fVar7 = *(float *)(param_1 + 0xdc);
  fVar4 = (float)FUN_01029020(0x3f000000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  fVar5 = (float)FUN_012dcb90(param_1);
  fVar6 = DAT_01d4bef8;
  fVar4 = *(float *)(param_1 + 0xe0) + fVar5 * fVar7 * (fVar4 + 1.0);
  *(float *)(param_1 + 0xe0) = fVar4;
  if (fVar6 < fVar4) {
    do {
      fVar4 = fVar4 + DAT_01d4c6ec;
    } while (fVar6 < fVar4);
    *(float *)(param_1 + 0xe0) = fVar4;
  }
  puVar2 = PTR_FloatDegree180_027194f0;
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb0);
  uVar3 = (ulong)(fVar4 * (fVar6 / *(float *)puVar2));
  uVar1 = uVar3 >> 0x18 & 0xff;
  fVar6 = (*(float *)(PTR_SinCosSampleTable_02715d20 + uVar1 * 0x10 + 4) +
          *(float *)(PTR_SinCosSampleTable_02715d20 + uVar1 * 0x10 + 0xc) *
          (float)((uint)uVar3 & 0xffffff) * DAT_01d4bc78) * DAT_01d4c0bc;
  *(float *)(param_1 + 0xb0) = fVar6;
  local_40 = FUN_00a92cd0(*(undefined8 *)(param_1 + 0xa0),
                          (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) + fVar6,
                          (int)*(undefined8 *)(param_1 + 0xa8));
  FUN_012dc7f0(param_1,local_40);
  fVar6 = *(float *)(param_1 + 0xb0);
  fVar5 = *(float *)(param_1 + 0xb4);
  fVar7 = *(float *)(&DAT_01d4a360 + (long)*(int *)(param_1 + 0x7c) * 4);
  fVar4 = (float)FUN_012dcb90(param_1);
  *(float *)(param_1 + 0xcc) = ABS(fVar6 - fVar5) * fVar7 * (1.0 / fVar4);
  return;
}


