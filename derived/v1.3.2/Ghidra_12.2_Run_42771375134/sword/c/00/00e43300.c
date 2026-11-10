/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e43300; name: FUN_00e43300
 */


undefined8
FUN_00e43300(long param_1,long param_2,long *param_3,long *param_4,long *param_5,undefined8 param_6,
            undefined8 param_7)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar5 = FUN_00db3640(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    local_70 = *param_4;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_00e43620(param_1,param_2,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (*(int *)(param_1 + 0x4e8) == 1) {
      cVar1 = *(char *)(param_1 + 0x5c8);
      *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x4ec);
    }
    else if (*(int *)(param_1 + 0x4e8) == 2) {
      fVar11 = (float)*(undefined8 *)(param_1 + 0x508);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x508) >> 0x20);
      fVar9 = (float)*(undefined8 *)(param_1 + 0x500);
      fVar9 = fVar9 * fVar9;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      auVar14._4_4_ = 0;
      auVar14._0_4_ = fVar9;
      auVar14._8_4_ = fVar11;
      auVar14._12_4_ = fVar12;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar12;
      auVar14 = NEON_ext(auVar14,auVar2,8,1);
      cVar1 = *(char *)(param_1 + 0x5c8);
      *(float *)(param_1 + 0x5bc) = SQRT(auVar14._0_4_ + fVar9 + auVar14._4_4_ + 0.0);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x5c8);
      *(undefined4 *)(param_1 + 0x5bc) = 0;
    }
    if ((cVar1 != '\0') && (lVar7 = *(long *)(*(long *)(*param_3 + 0x128) + 0x270), lVar7 != 0)) {
      fVar9 = (float)*(undefined8 *)(lVar7 + 0xb0) - *(float *)(param_1 + 0xb0);
      fVar11 = (float)((ulong)*(undefined8 *)(lVar7 + 0xb0) >> 0x20) - *(float *)(param_1 + 0xb4);
      fVar12 = (float)*(undefined8 *)(lVar7 + 0xb8) - *(float *)(param_1 + 0xb8);
      fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20) - *(float *)(param_1 + 0xbc);
      fVar9 = fVar9 * fVar9;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = fVar12;
      auVar3._12_4_ = fVar13;
      auVar4._4_4_ = fVar11;
      auVar4._0_4_ = fVar9;
      auVar4._8_4_ = fVar12;
      auVar4._12_4_ = fVar13;
      auVar14 = NEON_ext(auVar3,auVar4,8,1);
      fVar12 = *(float *)(param_1 + 0x370) + DAT_01d4bde4;
      uVar10 = 0x3f800000;
      if (fVar12 * fVar12 <= auVar14._0_4_ + fVar9 + auVar14._4_4_ + fVar11) {
        uVar10 = 0;
      }
      *(undefined1 *)(param_1 + 0x5c9) = 1;
      *(undefined4 *)(param_1 + 0x5c4) = uVar10;
    }
    piVar8 = *(int **)(*(long *)PTR_DAT_02717c48 + 0x48);
    if ((piVar8 != (int *)0x0) &&
       (((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x47 ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x23], uVar5 == 0)) ||
        (*(char *)((long)piVar8 + uVar5) == '\0')))) {
      local_78 = param_1;
      local_48 = FUN_00e47050(&local_48,*(undefined8 *)(param_1 + 8),param_3,&local_78);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN_006d9640(param_1,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    lVar7 = FUN_00e47180(param_1,&local_48);
    if (lVar7 == 0) {
      local_78 = param_2;
      lVar7 = FUN_00e47380(&local_48,param_2,&local_78);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      local_48 = lVar7;
      FUN_006d9640(param_1,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      FUN_00e437f0(lVar7);
    }
    uVar6 = 1;
  }
  return uVar6;
}


