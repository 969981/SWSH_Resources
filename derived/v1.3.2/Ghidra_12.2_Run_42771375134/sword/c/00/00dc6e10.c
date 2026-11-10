/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc6e10; name: FUN_00dc6e10
 */


undefined8
FUN_00dc6e10(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
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
  uVar3 = FUN_00db5ea0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
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
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3d8) == 0) || (*(char *)(*(long *)(param_1 + 0x3d8) + 0x170) == '\0'))
  goto LAB_00dc71a4;
  lVar6 = param_1 + 0x4e0;
  FUN_006c6290(lVar6,param_2,1,2);
  local_70 = lVar6;
  lVar4 = FUN_00dc9040(&local_48,*(undefined8 *)(param_1 + 8),&local_70);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_48 = lVar4;
  FUN_006d9640(param_1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long *)(param_1 + 0x608) = lVar4;
  if ((*(long *)(lVar4 + 0x80) != 0) &&
     (lVar8 = *(long *)(param_1 + 0x3d8), *(int *)(*(long *)(lVar4 + 0x80) + 0x54) != 0)) {
    if (*(long *)(lVar4 + 0x80) == 0) {
LAB_00dc6fe0:
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = *(undefined8 **)(*(long *)(lVar4 + 0x80) + 0x60);
      if (puVar10 != (undefined8 *)0x0) {
        plVar5 = (long *)(**(code **)*puVar10)(puVar10);
        if (((*PTR_DAT_02715290 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_02715290), iVar2 != 0)) {
          uVar7 = FUN_01590a70();
          *(undefined8 *)PTR_DAT_02715298 = uVar7;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)PTR_DAT_02715298) {
            puVar10 = puVar10 + -10;
            goto LAB_00dc6fe4;
          }
        }
        goto LAB_00dc6fe0;
      }
    }
LAB_00dc6fe4:
    FUN_006cb0d0(puVar10);
    FUN_006cb4e0(puVar10,PTR_DAT_02715088,lVar8 + 0x1b0);
    FUN_012c4020(lVar4,*(undefined4 *)(lVar4 + 0xa8));
  }
  local_70 = lVar6;
  lVar4 = FUN_00dc9160(&local_48,*(undefined8 *)(param_1 + 8),&local_70);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_48 = lVar4;
  FUN_006d9640(param_1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long *)(param_1 + 0x5f8) = lVar4;
  FUN_00dc7290(*(undefined4 *)(param_1 + 0x3bc),lVar4,PTR_DAT_0271e930);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x5f8) + 0x80) + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  puVar1 = PTR_DAT_02715280;
  puVar10 = (undefined8 *)PTR_DAT_02715288;
  if (((*PTR_DAT_02715280 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02715280), puVar10 = (undefined8 *)PTR_DAT_02715288,
     iVar2 != 0)) {
    uVar7 = FUN_01590a70();
    *(undefined8 *)PTR_DAT_02715288 = uVar7;
    __cxa_guard_release(PTR_DAT_02715280);
    puVar10 = (undefined8 *)PTR_DAT_02715288;
  }
  for (; plVar5 != puVar10; plVar5 = (long *)*plVar5) {
  }
  PTR_DAT_02715288 = (undefined *)puVar10;
  *(undefined1 *)(puVar9 + 0x2c) = 0;
  local_70 = lVar6;
  lVar6 = FUN_00dc9160(&local_48,*(undefined8 *)(param_1 + 8),&local_70);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_48 = lVar6;
  FUN_006d9640(param_1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long *)(param_1 + 0x600) = lVar6;
  FUN_00dc7290(*(undefined4 *)(param_1 + 0x3c0),lVar6,PTR_DAT_0271e930);
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x600) + 0x80) + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02715280), iVar2 != 0)) {
    uVar7 = FUN_01590a70();
    *puVar10 = uVar7;
    __cxa_guard_release(PTR_DAT_02715280);
  }
  for (; plVar5 != puVar10; plVar5 = (long *)*plVar5) {
  }
  *(undefined1 *)(puVar9 + 0x2c) = 0;
  FUN_00dc73b0(*(undefined8 *)(param_1 + 0x600),0);
LAB_00dc71a4:
  if ((*(long **)(param_1 + 0x618) != (long *)0x0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x618) + 0x40))(), (uVar3 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x618) + 0x48))(*(long **)(param_1 + 0x618),param_2);
  }
  return 1;
}


