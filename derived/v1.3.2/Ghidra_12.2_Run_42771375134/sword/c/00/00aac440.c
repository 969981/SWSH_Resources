/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aac440; name: FUN_00aac440
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00aac440(long *param_1,uint param_2,byte param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined **local_b0;
  long *plStack_a8;
  long *local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (param_1[0x97] == 0) {
    return;
  }
  if (*(int *)(param_1[0x97] + 0x54) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1[0x78] + 0x528);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_48 = param_1[0x97];
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1[0x78] + 0x3f8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar9 + 0x58);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_50 = lVar11;
  FUN_00c7a130(lVar8,&local_48,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  local_58 = *(long *)(*(long *)(param_1[0x78] + 0x1e18) + 0x400);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  if ((int)param_1[0x98] == 2) {
    FUN_00aac900(param_1);
    if (*(int *)((long)param_1 + 0x4ec) != 0) {
      FUN_00aacf90(&local_68,param_1);
      local_70 = local_58;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_00da16f0(&local_60,&local_68,&local_70,2);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      uVar2 = (**(code **)(*(long *)param_1[0x78] + 0x748))
                        ((long *)param_1[0x78],(int)param_1[0x79]);
      uVar5 = 8;
      if ((uVar2 & 1) == 0) {
        uVar5 = 9;
      }
      FUN_00aacf90(&local_b0,param_1);
      ppuVar7 = local_b0;
      FUN_00727800(local_b0,uVar5);
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar7 = ppuVar7 + 9;
        (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
        local_b0 = (undefined **)0x0;
      }
      param_3 = 0;
    }
    goto LAB_00aac890;
  }
  lVar8 = *(long *)(param_1[0x78] + 0x528);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_78 = param_1[0x97];
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_b0,lVar8,&local_78);
  if (local_b0 == (undefined **)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)local_b0[0xc];
    if (puVar10 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_02719750 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02719750), iVar1 != 0)) {
        uVar4 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_02719758 = uVar4;
        __cxa_guard_release(PTR_DAT_02719750);
      }
      for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
        if (puVar3 == (undefined8 *)PTR_DAT_02719758) {
          puVar10 = puVar10 + -10;
          goto joined_r0x00aac718;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
joined_r0x00aac718:
    if (local_b0 != (undefined **)0x0) {
      (**(code **)(local_b0[9] + 0x18))();
    }
  }
  local_b0 = (undefined **)0x0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00c68d70(puVar10,0x40);
    lVar8 = *(long *)(param_1[0x78] + 0x400);
    if (lVar8 == 0) {
      FUN_00c68e70(puVar10,0);
    }
    else {
      plVar12 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_00c68e70(puVar10,lVar8);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    FUN_00c68b70(puVar10,1);
  }
  local_80 = param_1[0x97];
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  plStack_a8 = &local_58;
  local_b0 = &PTR_LAB_02631c88;
  local_90 = (long *)&local_b0;
  FUN_00ca4690(&local_80,&local_b0);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar6 = *(code **)(*local_90 + 0x20);
LAB_00aac874:
    (*pcVar6)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar6 = *(code **)(*local_90 + 0x28);
    goto LAB_00aac874;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
LAB_00aac890:
  *(undefined1 *)(param_1 + 0xa1) = 1;
  uVar2 = (**(code **)(*param_1 + 400))(param_1);
  if ((uVar2 & 1) != 0) {
    *(byte *)((long)param_1 + 0x509) = param_3 & 1;
  }
  (**(code **)(*param_1 + 0x198))(param_1,param_2 & 1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


