/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6cdd0; name: FUN_00c6cdd0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00c6cdd0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_40;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  if (*(int *)(param_1 + 0x94) != 3) {
    return *(int *)(param_1 + 0x94) == 5;
  }
  local_38 = param_2;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    lVar15 = *(long *)(param_1 + 0x108);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00c6cef0:
      lVar12 = 0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar10 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar15 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6cef0;
            if (plVar11 == (long *)puVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar10) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar15 + 0x60) != 0) {
              lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
            }
            goto LAB_00c6cef4;
          }
          lVar12 = 0;
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00c6cef4;
        }
        ClearExclusiveLocal();
        lVar12 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6cef4:
    plVar11 = (long *)FUN_00c735f0(&local_90,local_38);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_90 = plVar11;
    FUN_006d9640(lVar12,&local_90);
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    lVar15 = *(long *)(param_1 + 0x110);
    *(long **)(param_1 + 0x110) = plVar11;
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar13 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(long *)(param_1 + 0x108);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(&local_90);
    local_48 = local_90;
    local_90 = (long *)0x0;
    FUN_00c7d640(uVar13,&local_40,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(local_48[9] + 0x18))();
      local_48 = (long *)0x0;
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(&local_90);
    local_50 = local_90;
    local_90 = (long *)0x0;
    FUN_00c764f0(param_1,&local_50);
    if (local_50 != (long *)0x0) {
      (**(code **)(local_50[9] + 0x18))();
      local_50 = (long *)0x0;
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar15 = *(long *)(param_1 + 0x108);
  if (lVar15 == 0) {
LAB_00c6d16c:
    lVar12 = 0;
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_00c6d160;
LAB_00c6d178:
    uVar13 = local_38;
    FUN_00c736d0(&local_90);
  }
  else {
    if (*(int *)(lVar15 + 0x54) != 0) {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar10 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar15 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6d150;
            if (plVar11 == (long *)puVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00c6d16c;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
          }
          lVar15 = *(long *)(param_1 + 0xe0);
          goto joined_r0x00c6dae4;
        }
        iVar10 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c6d16c;
    }
LAB_00c6d150:
    lVar12 = 0;
    lVar15 = *(long *)(param_1 + 0xe0);
joined_r0x00c6dae4:
    if (lVar15 != 0) goto LAB_00c6d178;
LAB_00c6d160:
    local_90 = (long *)0x0;
    uVar13 = local_38;
  }
  uVar7 = FUN_00c78eb0(local_90);
  lVar15 = FUN_00adc640(lVar12,uVar13,uVar7);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x118);
  *(long *)(param_1 + 0x118) = lVar15;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(local_90[9] + 0x18))();
    local_90 = (long *)0x0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x20);
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  if (*(long *)(param_1 + 200) == *plVar11) {
    lVar15 = *(long *)(param_1 + 0x108);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00c6d2f0:
      lVar12 = 0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar10 = *(int *)(lVar15 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar15 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6d2f0;
            if (plVar11 == (long *)puVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar10) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar15 + 0x60) != 0) {
              lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
            }
            goto LAB_00c6d2f4;
          }
          lVar12 = 0;
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00c6d2f4;
        }
        ClearExclusiveLocal();
        lVar12 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6d2f4:
    local_58 = *(undefined8 *)(param_1 + 0x118);
    plVar11 = (long *)FUN_00adc750(&local_90,local_38,&local_58);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_90 = plVar11;
    FUN_006d9640(lVar12,&local_90);
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    lVar15 = *(long *)(param_1 + 0x120);
    *(long **)(param_1 + 0x120) = plVar11;
    plVar11 = local_90;
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      plVar11 = local_90;
    }
  }
  else {
    if ((*(long *)(param_1 + 0xe8) == 0) || (*(int *)(*(long *)(param_1 + 0xe8) + 0x54) == 0))
    goto LAB_00c6d7d4;
    lVar15 = *(long *)(param_1 + 0x108);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00c6d468:
      lVar12 = 0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0x54);
      iVar10 = *(int *)(lVar15 + 0x54);
      do {
        plVar11 = *(long **)(lVar15 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar13 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar13;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00c6d468;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar15 + 0x60) != 0) {
              lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar12 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
    local_58 = *(undefined8 *)(param_1 + 0x118);
    plVar11 = (long *)FUN_00adc750(&local_90,local_38,&local_58);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_90 = plVar11;
    FUN_006d9640(lVar12,&local_90);
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    lVar15 = *(long *)(param_1 + 0x120);
    *(long **)(param_1 + 0x120) = plVar11;
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar13 = local_38;
    uVar14 = *(undefined8 *)(param_1 + 0x120);
    FUN_00c738a0(&local_90,*(undefined8 *)(param_1 + 0xe8));
    uVar7 = (**(code **)(*local_90 + 0x98))();
    FUN_0069ae40(uVar14,uVar13,uVar7,1);
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    *(undefined1 *)(param_1 + 0x128) = 1;
    plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9);
    puVar5 = PTR_DAT_02715080;
    puVar4 = PTR_DAT_02715078;
    if (*(long *)(param_1 + 0xa8) == *plVar11) {
      lVar15 = *(long *)(param_1 + 0x108);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00c6d64c:
        lVar12 = 0;
      }
      else {
        piVar1 = (int *)(lVar15 + 0x54);
        iVar10 = *(int *)(lVar15 + 0x54);
        do {
          plVar11 = *(long **)(lVar15 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6d64c;
            if (plVar11 == (long *)puVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar10) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = 0;
              if (*(long *)(lVar15 + 0x60) != 0) {
                lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar12 = 0;
          iVar10 = iVar6;
        } while (iVar6 != 0);
      }
      local_5c = 0;
    }
    else {
      plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),10);
      puVar5 = PTR_DAT_02715080;
      puVar4 = PTR_DAT_02715078;
      if (*(long *)(param_1 + 0xa8) != *plVar11) goto LAB_00c6d7d4;
      lVar15 = *(long *)(param_1 + 0x108);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_00c6d748:
        lVar12 = 0;
      }
      else {
        piVar1 = (int *)(lVar15 + 0x54);
        iVar10 = *(int *)(lVar15 + 0x54);
        do {
          plVar11 = *(long **)(lVar15 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6d748;
            if (plVar11 == (long *)puVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar10) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = 0;
              if (*(long *)(lVar15 + 0x60) != 0) {
                lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar12 = 0;
          iVar10 = iVar6;
        } while (iVar6 != 0);
      }
      local_5c = 1;
    }
    local_58 = *(undefined8 *)(param_1 + 0x118);
    local_68 = *(undefined8 *)(param_1 + 0x120);
    plVar11 = (long *)FUN_00c73a70(&local_90,local_38,&local_5c,&local_38,&local_58,&local_68);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    local_90 = plVar11;
    FUN_006d9640(lVar12,&local_90);
    plVar11 = (long *)0x0;
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
      plVar11 = local_90;
    }
  }
  local_90 = plVar11;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
LAB_00c6d7d4:
  if (((((*(long *)(param_1 + 0xe8) != 0) && (*(int *)(*(long *)(param_1 + 0xe8) + 0x54) != 0)) &&
       (*(long *)(param_1 + 0x120) != 0)) &&
      ((*(char *)(param_1 + 0x128) != '\0' &&
       (plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x18),
       *(long *)(param_1 + 200) == *plVar11)))) &&
     ((plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9),
      *(long *)(param_1 + 0xa8) == *plVar11 ||
      ((plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),10),
       *(long *)(param_1 + 0xa8) == *plVar11 ||
       (plVar11 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0xd),
       *(long *)(param_1 + 0xa8) == *plVar11)))))) {
    uVar7 = *(undefined8 *)(param_1 + 0x120);
    uVar13 = FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x22);
    FUN_01050390(uVar7,uVar13,1);
    uVar7 = *(undefined8 *)(param_1 + 0x120);
    uVar13 = FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x23);
    FUN_01050390(uVar7,uVar13,1);
  }
  FUN_00c6db70(param_1);
  FUN_00c6dc60(param_1,local_38);
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar15 = *(long *)(param_1 + 0x108);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar10 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        puVar16 = *(undefined8 **)(lVar15 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar13 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar13;
          __cxa_guard_release(puVar4);
        }
        lVar12 = 0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_00c6d98c;
        while (puVar16 != (undefined8 *)puVar5) {
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 == (undefined8 *)0x0) {
            lVar12 = 0;
            goto LAB_00c6d98c;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            lVar12 = *(long *)(lVar15 + 0x60) + -0x50;
          }
          goto LAB_00c6d98c;
        }
        lVar12 = 0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00c6d98c;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00c6d98c:
  lVar15 = FUN_00c6e3b0(lVar12,local_38,&local_38);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x130);
  *(long *)(param_1 + 0x130) = lVar15;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  local_70 = 0x101;
  local_80 = 0;
  uStack_78 = 0;
  local_6e = 1;
  local_90 = (long *)0x0;
  local_88 = 0;
  plVar11 = *(long **)(param_1 + 0x108);
  if (plVar11 == (long *)0x0) {
  }
  else {
    (**(code **)(plVar11[9] + 0x10))();
    if (local_90 != (long *)0x0) {
      plVar9 = local_90 + 9;
      local_90 = plVar11;
      (**(code **)(*plVar9 + 0x18))();
      plVar11 = local_90;
    }
  }
  local_90 = plVar11;
  local_88 = *(undefined8 *)(param_1 + 0x118);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  FUN_01060f90(*(undefined8 *)(param_1 + 0x130),&local_90);
  FUN_00c6e4b0(param_1,0);
  FUN_00c6e4b0(param_1,1);
  FUN_00c6e4b0(param_1,2);
  FUN_00c6e4b0(param_1,3);
  FUN_00c6e4b0(param_1,4);
  FUN_00c6e4b0(param_1,5);
  *(undefined4 *)(param_1 + 0x94) = 5;
  if (local_90 != (long *)0x0) {
    (**(code **)(local_90[9] + 0x18))();
  }
  return true;
}


