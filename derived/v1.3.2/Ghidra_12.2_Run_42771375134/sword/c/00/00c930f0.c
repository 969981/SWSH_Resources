/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c930f0; name: FUN_00c930f0
 */


void FUN_00c930f0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  long *plVar8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = 0;
  local_a0 = -0x65661d42bf2e02fc;
  local_80 = -0x65661a42bf2dfde3;
  pcStack_78 = "hideB";
  local_98 = "hideA";
  local_60 = -0x65661b42bf2dff96;
  local_90 = 5;
  local_88 = 0;
  local_70 = 5;
  local_68 = 0;
  local_58 = "hideC";
  uStack_50 = 5;
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    plVar5 = (long *)(**(code **)plVar8[10])(plVar8 + 10);
    plVar2 = plVar5;
    if (((*PTR_DAT_0271c490 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar4 != 0)) {
      uVar6 = FUN_00c95940();
      *(undefined8 *)PTR_DAT_0271c488 = uVar6;
      __cxa_guard_release(PTR_DAT_0271c490);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_0271c488) {
        (**(code **)(plVar8[9] + 0x10))(plVar8 + 9);
        bVar7 = false;
        goto LAB_00c931e0;
      }
      plVar2 = (long *)0x0;
    }
    bVar7 = true;
    plVar8 = plVar2;
LAB_00c931e0:
    (**(code **)(*plVar8 + 0xa8))(&local_b0,plVar8);
    FUN_00ad2020(&local_a8,&local_b0);
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      cVar1 = *param_3;
      iVar4 = FUN_0072e390(*(undefined8 *)(local_a8 + 0x360),&local_a0);
      if (-1 < iVar4) {
        FUN_0072e410(*(undefined8 *)(lVar3 + 0x360),iVar4,cVar1 != '\0',0);
      }
      lVar3 = local_a8;
      cVar1 = param_3[1];
      iVar4 = FUN_0072e390(*(undefined8 *)(local_a8 + 0x360),&local_80);
      if (-1 < iVar4) {
        FUN_0072e410(*(undefined8 *)(lVar3 + 0x360),iVar4,cVar1 != '\0',0);
      }
      lVar3 = local_a8;
      cVar1 = param_3[2];
      iVar4 = FUN_0072e390(*(undefined8 *)(local_a8 + 0x360),&local_60);
      if (-1 < iVar4) {
        FUN_0072e410(*(undefined8 *)(lVar3 + 0x360),iVar4,cVar1 != '\0',0);
      }
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
    }
    if (!bVar7) {
      (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  return;
}


