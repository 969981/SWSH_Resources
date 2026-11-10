/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01382200; name: FUN_01382200
 */


void FUN_01382200(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b0 [2];
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_24;
  
  puVar3 = PTR_DAT_02710840;
  lVar5 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  (**(code **)(**(long **)(lVar5 + 0x210) + 0x18))(*(long **)(lVar5 + 0x210),1,local_b0);
  fVar11 = DAT_01d4c54c;
  fVar9 = 0.0;
  if (DAT_01d4c54c <= ABS(local_98._4_4_)) {
    fVar9 = local_98._4_4_;
  }
  lVar5 = FUN_0101f850(*(undefined8 *)puVar3);
  (**(code **)(**(long **)(lVar5 + 0x210) + 0x18))(*(long **)(lVar5 + 0x210),2,local_b0);
  fVar10 = 0.0;
  if (fVar11 <= ABS(local_98._4_4_)) {
    fVar10 = local_98._4_4_;
  }
  fVar11 = *(float *)(param_1 + 0xb0);
  local_b0[0] = -1.0995574;
  local_24 = fVar11 - (fVar9 + 0.0 + fVar10);
  pfVar1 = &DAT_01d4c0bc;
  if (local_24 <= DAT_01d4c0bc) {
    pfVar1 = &local_24;
  }
  pfVar2 = local_b0;
  if (DAT_01d4c768 <= local_24) {
    pfVar2 = pfVar1;
  }
  fVar8 = *pfVar2;
  local_24 = fVar8;
  fVar7 = (float)(**(code **)PTR_PTR_02718e90)(DAT_01d4bb94);
  fVar11 = fVar11 + (fVar8 - fVar11) * fVar7;
  fVar8 = *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xb0) = fVar11;
  if (0.0 < fVar8) {
    fVar8 = (float)FUN_012dcb90(param_1);
    fVar8 = *(float *)(param_1 + 0xd8) - fVar8;
    fVar11 = *(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xd8) = fVar8;
  }
  if ((DAT_01d4c704 < ABS(fVar11 - *(float *)(param_1 + 0xb4))) && (fVar8 <= 0.0)) {
    local_b0[0] = 0.00011316099;
    local_b0[1] = -4.37123e-10;
    pcStack_a8 = "Play_Camp_Cooking_Fan";
    local_a0 = 0x15;
    local_98 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,local_b0);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    lVar5 = *(long *)puVar3 + 0x390;
    uVar4 = FUN_010247a0(lVar5,&DAT_0216c5a8);
    if (ABS(fVar9) <= ABS(fVar10)) {
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
    }
    FUN_01023770(lVar5,uVar4,uVar6);
    *(undefined4 *)(param_1 + 0xd8) = 0x3dcccccd;
  }
  return;
}


