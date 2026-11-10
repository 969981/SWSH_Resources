/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052f3d0; name: FUN_0052f3d0
 */


undefined1  [16] FUN_0052f3d0(undefined1 param_1 [16],long param_2,long param_3,int param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined4 extraout_var;
  ulong uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  
  uVar8 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  if ((*(char *)(param_2 + 0x96c) == '\0') || (*(int *)(param_2 + 0x97c) != 0)) {
    bVar3 = false;
joined_r0x0052f410:
    if ((param_3 == 0) && (!bVar3)) goto LAB_0052f5c4;
  }
  else {
    if (0.0 < *(float *)(param_2 + 0x8c4)) {
      bVar3 = *(float *)(param_2 + 0x8c4) != DAT_01d4c570;
      goto joined_r0x0052f410;
    }
    bVar3 = true;
  }
  local_b0 = 0x3f8000003f800000;
  local_a8 = 1.0;
  FUN_00510120(&local_90,&local_b0,param_3);
  fVar2 = local_88;
  fVar1 = local_8c;
  fVar7 = local_90;
  fVar6 = local_90;
  if (local_90 <= local_8c) {
    fVar6 = local_8c;
  }
  if (fVar6 <= local_88) {
    fVar6 = local_88;
  }
  FUN_00511040(&local_b0,0);
  FUN_00511040(&local_90,0);
  if ((((((float)local_b0 == local_90) && (local_b0._4_4_ == local_8c)) && (local_a8 == local_88))
      && ((local_a4 == local_84 && (local_a0 == local_80)))) &&
     ((local_9c == local_7c && ((local_98 == local_78 && (local_94 == local_74)))))) {
    local_7c = DAT_01d4be80;
    local_8c = DAT_01d4be14;
    local_6c = DAT_01d4c3f8;
  }
  else {
    FUN_00511bb0(&local_90,&local_b0,&local_a8,&local_a0,&local_98);
  }
  fVar7 = fVar7 * local_8c + fVar1 * local_7c + fVar2 * local_6c;
  if (param_4 != 4 && param_4 != 8) {
    fVar7 = fVar6;
  }
  fVar7 = fVar7 * param_1._0_4_;
  uVar4 = (ulong)(uint)fVar7;
  uVar8 = 0;
  if (bVar3) {
    if (*(float *)(param_2 + 0x8c4) <= 0.0) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = 1.0 / (*(float *)(param_2 + 0x8c4) / DAT_01d4c570);
    }
    fVar6 = powf(fVar7,fVar6);
    uVar4 = CONCAT44(extraout_var,fVar6);
    uVar8 = extraout_var_00;
  }
LAB_0052f5c4:
  auVar5._8_8_ = uVar8;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


