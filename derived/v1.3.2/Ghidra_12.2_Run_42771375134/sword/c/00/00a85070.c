/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a85070; name: FUN_00a85070
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a85070(long param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long local_88;
  long local_80;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  long local_48;
  
  pcVar7 = (char *)(param_1 + 0x14c1);
  if ((*pcVar7 == '\0') && (*(char *)(param_1 + 0x14c2) == '\0')) {
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  if ((param_2 & 1) == 0) {
    iVar4 = _DAT_0000007c;
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      iVar4 = *(int *)(lVar10 + 0x7c);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    iVar4 = _DAT_0000007c;
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      iVar4 = *(int *)(lVar10 + 0x7c);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (iVar4 == 1) {
      return;
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  if (lVar10 == 0) {
    FUN_00dab450(0,0,1);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00dab450(lVar10,0,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  if (lVar10 == 0) {
    FUN_00dab450(0,1,1);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00dab450(lVar10,1,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  if (lVar10 == 0) {
    FUN_00dab450(0,2,1);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00dab450(lVar10,2,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  }
  if (lVar10 == 0) {
    FUN_00dab450(0,3,1);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00dab450(lVar10,3,1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((param_2 & 1) == 0) {
    if (*pcVar7 == '\0') {
      uVar8 = *(undefined8 *)(param_1 + 0x1e18);
      local_88 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
      }
      FUN_00e391d0(uVar8,0,0,&local_88,*(undefined8 *)(param_1 + 0x5c0));
      if (local_88 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      return;
    }
    uVar5 = FUN_00a70120(param_1,param_3);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1e18);
    local_80 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
    }
    FUN_00e391d0(uVar8,0,0,&local_80,*(undefined8 *)(param_1 + 0x5c0));
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    puVar3 = PTR_DAT_027195c0;
    puVar2 = PTR_DAT_027195b8;
    plVar1 = *(long **)(*(long *)(param_1 + 0x5b8) + 0xb8);
    for (plVar11 = *(long **)(*(long *)(param_1 + 0x5b8) + 0xb0); plVar11 != plVar1;
        plVar11 = plVar11 + 1) {
      while (uVar5 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar5 & 1) == 0) {
        lVar10 = *plVar11;
        puVar9 = (undefined8 *)(lVar10 + 0x50);
        plVar6 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar8 = FUN_00a8c480();
          *(undefined8 *)puVar3 = uVar8;
          __cxa_guard_release(puVar2);
        }
        while( true ) {
          if (plVar6 == (long *)0x0) goto LAB_00a854d0;
          if (plVar6 == (long *)puVar3) break;
          plVar6 = (long *)*plVar6;
        }
        *(undefined4 *)(lVar10 + 0x564) = 0;
        plVar11 = plVar11 + 1;
        if (plVar11 == plVar1) goto LAB_00a854dc;
      }
LAB_00a854d0:
    }
LAB_00a854dc:
    lVar10 = *(long *)PTR_DAT_027107a8;
    pcVar7 = "Stop_PM_G_Lowtone";
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x1e18);
    local_48 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00e391d0(uVar8,1,1,&local_48,*(undefined8 *)(param_1 + 0x5c0));
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    puVar3 = PTR_DAT_027195c0;
    puVar2 = PTR_DAT_027195b8;
    if (*pcVar7 == '\0') {
      return;
    }
    plVar1 = *(long **)(*(long *)(param_1 + 0x5b8) + 0xb8);
    for (plVar11 = *(long **)(*(long *)(param_1 + 0x5b8) + 0xb0); plVar11 != plVar1;
        plVar11 = plVar11 + 1) {
      while (uVar5 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar5 & 1) == 0) {
        lVar10 = *plVar11;
        puVar9 = (undefined8 *)(lVar10 + 0x50);
        plVar6 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar8 = FUN_00a8c480();
          *(undefined8 *)puVar3 = uVar8;
          __cxa_guard_release(puVar2);
        }
        while( true ) {
          if (plVar6 == (long *)0x0) goto LAB_00a852fc;
          if (plVar6 == (long *)puVar3) break;
          plVar6 = (long *)*plVar6;
        }
        *(undefined4 *)(lVar10 + 0x564) = 1;
        plVar11 = plVar11 + 1;
        if (plVar11 == plVar1) goto LAB_00a85308;
      }
LAB_00a852fc:
    }
LAB_00a85308:
    lVar10 = *(long *)PTR_DAT_027107a8;
    pcVar7 = "Play_PM_G_Lowtone";
  }
  FUN_0010d170(&local_78,pcVar7);
  FUN_006cf0c0(auStack_70,&local_78);
  FUN_008962c0(lVar10 + 0x108,auStack_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


