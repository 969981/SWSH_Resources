/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a973e0; name: FUN_00a973e0
 */


void FUN_00a973e0(long param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    fVar6 = (float)*(undefined8 *)(param_1 + 0x30) + *(float *)(param_1 + 0x60);
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + *(float *)(param_1 + 100);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x38) + *(float *)(param_1 + 0x68);
    fVar1 = *(float *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0xc1) != '\0') {
      fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ (uint)fVar1) & -(uint)(fVar3 < fVar1));
    }
    fVar4 = *(float *)(param_1 + 0x40) + (float)*(undefined8 *)(param_1 + 0x70);
    fVar7 = *(float *)(param_1 + 0x44) + (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    fVar8 = *(float *)(param_1 + 0x48) + (float)*(undefined8 *)(param_1 + 0x78);
    fVar7 = (float)((uint)fVar7 ^
                   ((uint)fVar7 ^ (uint)fVar1) &
                   -(uint)(fVar7 < fVar1 && *(char *)(param_1 + 0xc1) != '\0'));
  }
  else {
    fVar9 = (float)*(undefined8 *)(param_1 + 0xd8);
    fVar6 = (float)*(undefined8 *)(param_1 + 0xd0);
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
    fVar4 = *(float *)(param_1 + 0xe0);
    fVar7 = *(float *)(param_1 + 0xe4);
    fVar8 = *(float *)(param_1 + 0xe8);
  }
  fVar6 = fVar6 - fVar4;
  fVar9 = fVar9 - fVar8;
  fVar1 = fVar6 * fVar6 + fVar9 * fVar9;
  fVar4 = SQRT(fVar1);
  auVar5 = ZEXT416((uint)fVar4);
  if (NAN(fVar4)) {
    fVar1 = sqrtf(fVar1);
    auVar5._12_4_ = extraout_var_01;
    auVar5._8_4_ = extraout_var_00;
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = fVar1;
  }
  uVar2 = FUN_00a81e00(-(fVar3 - fVar7),auVar5);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_2 + 4);
  uVar2 = FUN_00a81e00(fVar6,fVar9);
  param_2[1] = 0;
  *param_2 = CONCAT44(uVar2,*(undefined4 *)param_2);
  return;
}


