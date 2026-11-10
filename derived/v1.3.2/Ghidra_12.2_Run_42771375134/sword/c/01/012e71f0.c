/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e71f0; name: FUN_012e71f0
 */


void FUN_012e71f0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long local_108;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *apuStack_e0 [13];
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar13 = *param_2;
  bVar6 = lVar13 == 0;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if ((((*(long *)(param_1 + 0x4f8) == 0) || (uVar9 = FUN_0130e360(), (uVar9 & 1) == 0)) ||
      (4 < *(uint *)(param_1 + 0x500))) ||
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) == 0)) {
    bVar6 = false;
    lVar5 = local_58;
  }
  else {
    if ((*(long *)(param_1 + 0x4f8) != 0) && (uVar9 = FUN_0130e360(), (uVar9 & 1) != 0)) {
      FUN_0130e3b0(&local_58,*(undefined8 *)(param_1 + 0x4f8));
      bVar6 = lVar13 == local_58;
      lVar5 = 0;
      if (local_58 == 0) goto joined_r0x012e72b0;
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_58 = 0;
    lVar5 = local_58;
  }
joined_r0x012e72b0:
  local_58 = lVar5;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (bVar6) {
    return;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    lVar13 = *(long *)(param_1 + 0x710);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN_012b65a0(lVar13);
    iVar7 = FUN_0087b560();
    local_58 = 0;
    local_50 = 0x3e8000003ea8f5c3;
    uStack_48 = 0;
    uVar9 = FUN_012b7000(1.0 - *(float *)((long)&local_58 + (long)iVar7 * 4));
    if ((uVar9 & 1) == 0) {
      local_60 = param_1;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
      uVar9 = FUN_012f2910(&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if ((uVar9 & 1) == 0) {
        FUN_012e7710(param_1);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        goto LAB_012e73f4;
      }
    }
    else {
      FUN_013100e0(param_1,0x46177123c0441b18);
    }
    if (lVar13 == 0) {
      return;
    }
    plVar14 = (long *)(lVar13 + 0x48);
    pcVar12 = *(code **)(*plVar14 + 0x18);
  }
  else {
    local_68 = param_1;
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    uVar9 = FUN_012f2810(&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if ((uVar9 & 1) != 0) {
      return;
    }
LAB_012e73f4:
    uVar10 = FUN_012d5170(*param_2,&local_58);
    local_100 = &LAB_012ec860;
    local_f8 = FUN_012ec960;
    apuStack_e0[0] = &local_70;
    local_f0 = &LAB_012ec970;
    local_e8 = &LAB_012ec980;
    local_70 = 0;
    FUN_0130a080(&local_78,uVar10,&local_100);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    pcVar12 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar12)(apuStack_e0);
    }
    puVar4 = PTR_DAT_02715080;
    puVar3 = PTR_DAT_02715078;
    lVar13 = *(long *)(param_1 + 0x68);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar1 = (int *)(lVar13 + 0x54);
      iVar7 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar13 + 0x58);
          if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
            uVar11 = FUN_00a87090();
            *(undefined8 *)puVar4 = uVar11;
            __cxa_guard_release(puVar3);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_012e7548;
            if (plVar14 == (long *)puVar4) break;
            plVar14 = (long *)*plVar14;
          }
          iVar8 = *piVar1;
          if (iVar8 != iVar7) break;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_108 = 0;
            if (*(long *)(lVar13 + 0x60) != 0) {
              local_108 = *(long *)(lVar13 + 0x60) + -0x50;
            }
            goto LAB_012e754c;
          }
          iVar7 = iVar8;
          if (iVar8 == 0) goto LAB_012e7548;
        }
        ClearExclusiveLocal();
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_012e7548:
    local_108 = 0;
LAB_012e754c:
    uVar9 = FUN_013099c0(uVar10,&local_108);
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    local_58 = 0x15b6bfb6d5d5b688;
    local_50 = 0;
    uVar9 = FUN_0130fad0(param_1,&local_58,0);
    if ((uVar9 & 1) != 0) {
      lVar13 = param_1 + 0x370;
      *(undefined8 *)(param_1 + 0x768) = 0;
      *(undefined8 *)(param_1 + 0x760) = 0;
      *(undefined2 *)(param_1 + 0x30c) = 0;
      FUN_0131b6b0(lVar13,0);
      if ((*(int *)(param_1 + 0x308) != 4) && (*(int *)(param_1 + 0x308) != 1)) {
        return;
      }
      uVar9 = FUN_0131d090(lVar13);
      if ((uVar9 & 1) == 0) {
        FUN_0131d150(lVar13,1);
        return;
      }
      return;
    }
    lVar13 = *(long *)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (lVar13 == 0) {
      return;
    }
    plVar14 = (long *)(lVar13 + 0x48);
    pcVar12 = *(code **)(*plVar14 + 0x18);
  }
  (*pcVar12)(plVar14);
  return;
}


