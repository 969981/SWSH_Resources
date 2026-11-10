/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01382060; name: FUN_01382060
 */


void FUN_01382060(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  char local_24 [4];
  
  local_24[0] = '\0';
  uVar3 = FUN_012d6270(1,local_24);
  if ((uVar3 & 1) == 0) {
    if (*(float *)(param_1 + 0xc0) <= *(float *)(param_1 + 0xc4)) {
      return;
    }
  }
  else {
    local_60 = 0xaff04f9838ed50d8;
    pcStack_58 = "Play_Camp_Cooking_Fan";
    local_50 = 0x15;
    local_48 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    cVar1 = local_24[0];
    lVar5 = *(long *)PTR_DAT_02710840;
    uVar2 = FUN_010247a0(lVar5 + 0x390,&DAT_0216c5a8);
    if (cVar1 == '\0') {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    FUN_01023770(lVar5 + 0x390,uVar2,uVar4);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    fVar7 = *(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xb8) = fVar7;
    fVar6 = (ABS((float)(&DAT_01cd5110)[fVar7 <= 0.0] - fVar7) * DAT_01d4be64) / DAT_01d4c4c8;
    *(undefined4 *)(param_1 + 0xbc) = (&DAT_01cd5110)[fVar7 <= 0.0];
    *(float *)(param_1 + 0xc0) = fVar6;
    if (fVar6 <= 0.0) {
      return;
    }
  }
  fVar7 = (float)FUN_012dcb90(param_1);
  fVar6 = *(float *)(param_1 + 0xc0);
  fVar7 = fVar7 + *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0xc4) = fVar7;
  if (fVar6 < fVar7) {
    *(float *)(param_1 + 0xc4) = fVar6;
    fVar7 = fVar6;
  }
  fVar8 = *(float *)(param_1 + 0xb8);
  fVar9 = *(float *)(param_1 + 0xbc);
  fVar7 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 200) * 8))
                           (fVar7 / fVar6);
  *(float *)(param_1 + 0xb0) = fVar8 + (fVar9 - fVar8) * fVar7;
  return;
}


