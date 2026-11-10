/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ff9c0; name: FUN_013ff9c0
 */


void FUN_013ff9c0(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x55c) = 0;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar8 = FUN_013f9d40();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  iVar4 = FUN_0132a1f0(*(undefined8 *)(puVar11[9] + 0x420));
  if (*(int *)(*(long *)(param_1 + 0x78) + (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 +
              0x64c) == 3) {
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar5 = FUN_00888c50(0x4f0,0xe);
    iVar6 = FUN_01520330(lVar8,uVar5);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((iVar6 == 0) && (*(int *)(param_1 + 0xcc) == -1)) goto LAB_013ffaf0;
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    lVar8 = FUN_013f9d40();
    for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
    }
    if ((*(byte *)(puVar11[9] + 0x45c) & iVar4 < 2) != 0) goto LAB_013ffb04;
  }
  else {
LAB_013ffaf0:
    if (iVar4 < 2) {
LAB_013ffb04:
      *(undefined4 *)(param_1 + 0x55c) = 1;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x78) + (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 +
              0x64c) == 3) {
    bVar3 = *(int *)(param_1 + 0x98) != 0;
    uVar5 = 2;
    uVar10 = 2;
    if (!bVar3) {
      uVar10 = 1;
    }
    uVar1 = (uint)bVar3;
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar10;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      lVar8 = FUN_013f9d40();
      for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
      }
      if (*(char *)(puVar11[9] + 0x4f0) != '\0') {
        lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        uVar5 = FUN_00888c50(0x4f0,0xe);
        iVar4 = FUN_01520330(lVar8,uVar5);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        if ((iVar4 != 0) || (*(int *)(param_1 + 0xcc) != -1)) {
          puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
          plVar7 = (long *)(**(code **)*puVar11)(puVar11);
          lVar8 = FUN_013f9d40();
          for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
          }
          if (*(char *)(puVar11[9] + 0x45c) == '\0') {
            uVar5 = 3;
            goto LAB_013ffb98;
          }
        }
      }
    }
    else {
LAB_013ffb98:
      *(undefined4 *)(param_1 + 0x55c) = uVar5;
    }
  }
  lVar8 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar8 + (long)*(int *)(lVar8 + 0x640) * 4 + 0x64c) == 3) {
    bVar3 = *(int *)(param_1 + 0x98) != 0;
    uVar5 = 2;
    uVar10 = 2;
    if (!bVar3) {
      uVar10 = 1;
    }
    uVar1 = (uint)bVar3;
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = uVar10;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 == 0) goto LAB_013ffc34;
  }
  else {
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 0x560) = uVar5;
LAB_013ffc34:
  local_58[0] = 3;
  local_48 = 0xcbf29ce484222645;
  local_50 = 0x19083640e833bc34;
  local_40 = 0x190ba040e836a629;
  local_38 = 0x190b9f40e836a476;
  uVar10 = *(int *)(param_1 + 0x55c) - 1;
  if (uVar10 < 3) {
    local_48 = *(undefined8 *)(&UNK_0216caf0 + (long)(int)uVar10 * 8);
  }
  FUN_008c8fa0(lVar8,local_58);
  iVar4 = *(int *)(param_1 + 0x560);
  if (iVar4 == 2) {
    FUN_013fd860(*(undefined8 *)(param_1 + 0x88),1);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0)) {
      uVar9 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar9;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
    }
    FUN_00ff86a0(&local_68,puVar11[0xd],3);
    local_70 = *(long *)(local_68 + 0x60);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_013fd8e0(uVar12,&local_70,"msg_ui_pokecamp_cooking_31_02");
    lVar8 = 0;
    lVar2 = local_60;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
      lVar8 = local_70;
      lVar2 = local_60;
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        FUN_013fd860(*(undefined8 *)(param_1 + 0x88),0);
        return;
      }
      return;
    }
    FUN_013fd860(*(undefined8 *)(param_1 + 0x88),1);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0)) {
      uVar9 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar9;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
    }
    FUN_00ff86a0(&local_68,puVar11[0xd],3);
    local_60 = *(long *)(local_68 + 0x60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    FUN_013fd8e0(uVar12,&local_60,"msg_ui_pokecamp_cooking_31_01");
    lVar8 = local_70;
    lVar2 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
      lVar8 = local_70;
      lVar2 = local_60;
    }
  }
  local_60 = lVar2;
  local_70 = lVar8;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


