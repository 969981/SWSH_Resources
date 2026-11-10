/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0520; name: FUN_00df0520
 */


undefined8 FUN_00df0520(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(int *)(param_1 + 0xe8) - 1U < 3) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x70);
  local_50 = 0xdc22d45ade0efebd;
  local_48 = "fi_npc_type";
  local_40 = 0xb;
  local_38 = 0;
  iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_50,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (iVar1 == 2) {
    return 0;
  }
  if (plVar5[0x52] == 0) {
    return 0;
  }
  lVar7 = *(long *)(plVar5[0x52] + 0x80);
  if (lVar7 == 0) {
    return 0;
  }
  plVar6 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(int *)(lVar7 + 0x54) == 0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    return 0;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0x60);
  if (puVar8 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715290 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715290), iVar1 != 0)) {
      uVar3 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715298 = uVar3;
      __cxa_guard_release(PTR_DAT_02715290);
    }
    if (plVar2 != (long *)0x0) {
      for (; plVar2 != (long *)PTR_DAT_02715298; plVar2 = (long *)*plVar2) {
      }
      piVar4 = (int *)(puVar8 + 8);
      goto LAB_00df068c;
    }
  }
  piVar4 = (int *)&DAT_00000090;
LAB_00df068c:
  iVar1 = *piVar4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0xe3) == '\0') {
      local_50 = 0xa5f7d5afebf3bfd;
      local_48 = "fi_wait_type";
      local_40 = 0xc;
      local_38 = 0;
      iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      if (iVar1 < 3) {
        local_50 = 0xf39d0c2019596ff3;
        local_48 = "fi_common_event";
        local_40 = 0xf;
        local_38 = 0;
        iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_50,0);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
        if (iVar1 < 1) {
          local_50 = 0x57e81a56a5a7f061;
          local_48 = "fi_unique_event";
          local_40 = 0xf;
          local_38 = 0;
          iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_50,0);
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          }
          if (iVar1 < 1) {
            return 1;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0xec) == 3) {
      local_50 = 0xeb8cb4cd665fb6aa;
      local_48 = "app_state";
      local_40 = 9;
      local_38 = 0;
      iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_50,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      if (iVar1 == 3) {
        return 1;
      }
    }
  }
  return 0;
}


