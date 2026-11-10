/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d9b30; name: FUN_013d9b30
 */


void FUN_013d9b30(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_78;
  char *pcStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar5 = local_38;
  (**(code **)(**(long **)(param_1 + 0x558) + 0x10))(&local_78);
  local_48 = local_78;
  local_78 = 0;
  FUN_00c7a630(&local_40,lVar5,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar5 = local_38;
  (**(code **)(**(long **)(param_1 + 0x558) + 0x10))(&local_78);
  local_50 = local_78;
  local_78 = 0;
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_0132d9a0();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar6[0x5e];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar3 + 0x58);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_58 = lVar7;
  FUN_00c7a130(lVar5,&local_50,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x68);
  if ((lVar5 != 0) && (puVar6 = *(undefined8 **)(lVar5 + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        lVar5 = FUN_007959b0(puVar6 + -10,&local_78);
        goto joined_r0x013d9e54;
      }
    }
  }
  lVar5 = FUN_007959b0(0,&local_78);
joined_r0x013d9e54:
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x558);
    lVar3 = FUN_00c750c0(&local_78,*(undefined8 *)(lVar7 + 8));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_78 = lVar3;
    FUN_006d9640(lVar7,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
    if (((*PTR_DAT_02715b90 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715b90), iVar1 != 0)) {
      uVar4 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_02715b98 = uVar4;
      __cxa_guard_release(PTR_DAT_02715b90);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715b98) goto LAB_013d9db8;
    }
    lVar5 = 0;
LAB_013d9db8:
    local_78 = 0xd72452feb739bdc;
    pcStack_70 = "loc_ob_Robj01";
    local_68 = 0xd;
    local_60 = 0;
    FUN_006db5e0(lVar3,lVar5,&local_78,*(undefined8 *)(param_1 + 0x558));
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


