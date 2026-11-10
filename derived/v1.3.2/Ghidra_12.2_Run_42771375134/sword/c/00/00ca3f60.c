/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca3f60; name: FUN_00ca3f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca3f60(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  float fVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined **local_d0 [2];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined ***local_b0;
  long local_a0;
  long local_98;
  int local_8c;
  int iStack_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  long local_48;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar4 == 0) {
    FUN_00c58c20(&local_48,0);
    if (local_48 == 0) goto LAB_00ca4010;
LAB_00ca3fd4:
    FUN_00c62ba0(&local_98);
    uVar5 = *(undefined8 *)(&DAT_00001588 + local_98);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_00c58c20(&local_48,lVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (local_48 != 0) goto LAB_00ca3fd4;
LAB_00ca4010:
    local_98 = 0;
    uVar5 = _DAT_00001588;
  }
  uVar5 = FUN_00cbf640(uVar5);
  local_98 = 0;
  uVar2 = FUN_00ca5b70(uVar5,*param_2,param_3,&local_98);
  fVar1 = DAT_01d4c154;
  if ((uVar2 & 1) == 0) goto LAB_00ca43dc;
  fVar7 = (float)local_8c / DAT_01d4c154;
  fVar8 = (float)iStack_88 / DAT_01d4c154;
  lVar4 = *param_1;
  fVar9 = (float)local_84 / DAT_01d4c154;
  local_a0 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_d0[0] = &PTR_LAB_02641658;
  local_c0 = CONCAT44(fVar8,fVar7);
  uStack_b8 = (ulong)(uint)fVar9;
  local_b0 = local_d0;
  FUN_00ca4410(&local_a0,local_d0);
  if (local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
LAB_00ca40e0:
    (*pcVar3)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_b0)[5];
    goto LAB_00ca40e0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    local_a0 = 0;
  }
  lVar4 = *param_1;
  local_d8 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_d0[0] = &PTR_LAB_026416a0;
  local_c0 = CONCAT44((float)iStack_7c / fVar1,(float)local_80 / fVar1);
  uStack_b8 = (ulong)(uint)((float)local_78 / fVar1);
  local_b0 = local_d0;
  FUN_00ca4410(&local_d8,local_d0);
  if (local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
LAB_00ca4198:
    (*pcVar3)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_b0)[5];
    goto LAB_00ca4198;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    local_d8 = 0;
  }
  lVar4 = *param_1;
  local_e0 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_d0[0] = &PTR_LAB_026416e8;
  local_c0 = CONCAT44((float)iStack_70 / fVar1,(float)local_74 / fVar1);
  uStack_b8 = (ulong)(uint)((float)local_6c / fVar1);
  local_b0 = local_d0;
  FUN_00ca4410(&local_e0,local_d0);
  if (local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
LAB_00ca4250:
    (*pcVar3)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_b0)[5];
    goto LAB_00ca4250;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    local_e0 = 0;
  }
  lVar4 = *param_1;
  local_e8 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_d0[0] = &PTR_LAB_02641730;
  local_c0 = CONCAT44((float)iStack_64 / fVar1,(float)local_68 / fVar1);
  uStack_b8 = (ulong)(uint)((float)local_60 / fVar1);
  local_b0 = local_d0;
  FUN_00ca4410(&local_e8,local_d0);
  if (local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
LAB_00ca4308:
    (*pcVar3)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_b0)[5];
    goto LAB_00ca4308;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    local_e8 = 0;
  }
  lVar4 = *param_1;
  local_f0 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_d0[0] = &PTR_LAB_02641778;
  local_c0 = CONCAT44((float)iStack_58 / fVar1,(float)local_5c / fVar1);
  uStack_b8 = (ulong)(uint)((float)local_54 / fVar1);
  local_b0 = local_d0;
  FUN_00ca4410(&local_f0,local_d0);
  if (local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
LAB_00ca43c0:
    (*pcVar3)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_b0)[5];
    goto LAB_00ca43c0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    local_f0 = 0;
  }
LAB_00ca43dc:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


