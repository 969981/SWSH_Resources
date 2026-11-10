/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cacde0; name: FUN_00cacde0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cacde0(long *param_1,long param_2,uint param_3,long param_4,long param_5,uint param_6,
                 undefined8 param_7,uint param_8,undefined8 param_9,byte param_10,
                 undefined4 param_11)

{
  int *piVar1;
  LightEventType *pLVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  if (param_4 == 0) {
    return;
  }
  iVar12 = *(int *)(param_4 + 0x18);
  if (iVar12 == 5) {
    lVar20 = *(long *)(param_2 + 0x1630);
  }
  else {
    if (iVar12 != 4) {
      return;
    }
    lVar20 = *(long *)(param_2 + 0x1610);
  }
  if (lVar20 == 0) {
    return;
  }
  iVar6 = FUN_00cad6e0(param_2,lVar20,param_4,param_5,param_1);
  if (iVar6 != *(int *)PTR_DAT_0271c508) {
    if (iVar6 < 0) {
      return;
    }
    if (*(int *)(lVar20 + 8) <= iVar6) {
      return;
    }
    if ((ulong)(long)iVar6 < *(ulong *)(*(long *)(lVar20 + 0x38) + 0x48)) {
      lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 0x40) + (long)iVar6 * 0x28;
      iVar12 = 1;
      if (-1 < *(int *)(lVar20 + 0x1c)) {
        iVar12 = *(int *)(lVar20 + 0x1c) + 1;
      }
      *(int *)(lVar20 + 0x1c) = iVar12;
      *(undefined4 *)(lVar20 + 0x20) = 0;
      return;
    }
    goto LAB_00cad6d8;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_2 + 0x15a0);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1594));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00cacf44;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00cacf44:
  iVar6 = FUN_00cada30(lVar20);
  lVar8 = *(long *)(lVar20 + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if ((-1 < iVar6) && (iVar6 < *(int *)(lVar20 + 8))) {
    uVar15 = (ulong)iVar6;
    if (*(ulong *)(*(long *)(lVar20 + 0x38) + 0x48) <= uVar15) goto LAB_00cad6d8;
    lVar11 = *(long *)(*(long *)(lVar20 + 0x38) + 0x40);
    plVar13 = (long *)(lVar11 + uVar15 * 0x28 + 0x10);
    lVar17 = *plVar13;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    lVar8 = *(long *)(lVar20 + 0x10);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar9 = *plVar13;
    *plVar13 = lVar8;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
    lVar11 = lVar11 + uVar15 * 0x28;
    *(undefined1 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x1c) = 0;
    lVar8 = lVar17;
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x1594);
  nn::os::SignalLightEvent(pLVar2);
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar8 + 0x68);
    if (lVar11 != 0) {
      plVar13 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      if (*(int *)(lVar11 + 0x54) != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar13);
        puVar18 = *(undefined8 **)(lVar11 + 0x60);
        if (puVar18 == (undefined8 *)0x0) {
LAB_00cad110:
          uVar16 = _DAT_00000070;
        }
        else {
          plVar10 = (long *)(**(code **)*puVar18)(puVar18);
          if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar7 != 0)) {
            uVar19 = FUN_00c72b60();
            *(undefined8 *)PTR_DAT_0271c2b8 = uVar19;
            __cxa_guard_release(PTR_DAT_0271c2b0);
          }
          if (plVar10 == (long *)0x0) goto LAB_00cad110;
          for (; plVar10 != (long *)PTR_DAT_0271c2b8; plVar10 = (long *)*plVar10) {
          }
          uVar16 = *(undefined4 *)(puVar18 + 4);
        }
        local_70 = lVar11;
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar13);
        FUN_00ca9590(param_2,0,&local_70,uVar16);
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar13);
        local_70 = 0;
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar13);
      }
    }
    lVar17 = *(long *)(lVar8 + 0x70);
    if (lVar17 == 0) {
      *(undefined4 *)(lVar8 + 0x88) = 1;
    }
    else {
      plVar13 = (long *)(lVar17 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      if (*(int *)(lVar17 + 0x54) != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))(plVar13);
        puVar18 = *(undefined8 **)(lVar17 + 0x60);
        if (puVar18 == (undefined8 *)0x0) {
LAB_00cad238:
          uVar16 = _DAT_00000070;
        }
        else {
          plVar10 = (long *)(**(code **)*puVar18)();
          if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar7 != 0)) {
            uVar19 = FUN_00c72b60();
            *(undefined8 *)PTR_DAT_0271c2b8 = uVar19;
            __cxa_guard_release(PTR_DAT_0271c2b0);
          }
          if (plVar10 == (long *)0x0) goto LAB_00cad238;
          for (; plVar10 != (long *)PTR_DAT_0271c2b8; plVar10 = (long *)*plVar10) {
          }
          uVar16 = *(undefined4 *)(puVar18 + 4);
        }
        local_70 = lVar17;
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))(plVar13);
        FUN_00ca9590(param_2,0,&local_70,uVar16);
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))(plVar13);
        local_70 = 0;
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))(plVar13);
      }
      *(undefined4 *)(lVar8 + 0x88) = 1;
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
  }
  if ((iVar6 < 0) || (*(int *)(lVar20 + 8) <= iVar6)) {
    local_80 = 0;
    uVar19 = 0;
  }
  else {
    uVar15 = (ulong)iVar6;
    if ((*(ulong *)(*(long *)(lVar20 + 0x38) + 0x48) <= uVar15) ||
       (*(ulong *)(*(long *)(lVar20 + 0x38) + 0x48) <= uVar15)) goto LAB_00cad6d8;
    uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x40) + uVar15 * 0x28);
    local_80 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x40) + uVar15 * 0x28 + 8);
  }
  plVar13 = (long *)FUN_00c72f10(&local_70,uVar19);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  (**(code **)(*plVar13 + 0x10))(&local_70,plVar13);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar11 = local_70;
  *param_1 = local_70;
  if ((local_70 != 0) && (*(int *)(local_70 + 0x54) != 0)) {
    piVar1 = (int *)(local_70 + 0x54);
    iVar7 = *(int *)(local_70 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        lVar17 = FUN_00c72e20();
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00cad400;
          if (plVar10 == (long *)lVar17) break;
          plVar10 = (long *)*plVar10;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar7) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 != 0) {
            *(int *)(lVar11 + 0x10) = iVar12;
            (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
            goto LAB_00cad408;
          }
          goto LAB_00cad400;
        }
        iVar7 = iVar3;
        if (iVar3 == 0) goto LAB_00cad400;
      }
      ClearExclusiveLocal();
      iVar7 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00cad400:
  _DAT_00000060 = iVar12;
LAB_00cad408:
  *(undefined8 *)(param_4 + 0x10) = uVar19;
  *(undefined8 *)(param_4 + 0x38) = local_80;
  if ((param_6 & 1) != 0) {
    *(undefined8 *)(param_5 + 0x10) = uVar19;
    *(undefined8 *)(param_5 + 0x38) = local_80;
  }
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00cad464;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00cad464:
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  if ((-1 < iVar6) && (iVar6 < *(int *)(lVar20 + 8))) {
    uVar15 = (ulong)iVar6;
    if (*(ulong *)(*(long *)(lVar20 + 0x38) + 0x48) <= uVar15) goto LAB_00cad6d8;
    lVar11 = *(long *)(*(long *)(lVar20 + 0x38) + 0x40);
    plVar10 = (long *)(lVar11 + uVar15 * 0x28 + 0x10);
    if (plVar13 != (long *)0x0) {
      (**(code **)(plVar13[9] + 0x10))();
    }
    lVar17 = *plVar10;
    *plVar10 = (long)plVar13;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
    }
    lVar11 = lVar11 + uVar15 * 0x28;
    *(undefined1 *)(lVar11 + 0x18) = 1;
    *(undefined8 *)(lVar11 + 0x1c) = 1;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))();
  }
  lVar11 = *(long *)(lVar20 + 0x10);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if ((iVar6 < 0) || (*(int *)(lVar20 + 8) <= iVar6)) {
    lVar20 = lVar11;
  }
  else {
    if (*(ulong *)(*(long *)(lVar20 + 0x38) + 0x48) <= (ulong)(long)iVar6) {
LAB_00cad6d8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x40) + (long)iVar6 * 0x28 + 0x10);
    if (lVar20 != 0) {
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
  }
  FUN_008d4280(&local_70,local_80);
  *(long *)(lVar20 + 0x98) = local_70;
  *(undefined8 *)(lVar20 + 0xa0) = uStack_68;
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent(pLVar2);
  local_78 = *param_1;
  if (local_78 == 0) {
    FUN_00cadb90(param_2,&local_78,param_3 & 1,param_4,param_5,param_6 & 1,param_7,param_8 & 1,
                 param_9,param_10 & 1,param_11);
  }
  else {
    plVar14 = (long *)(local_78 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_00cadb90(param_2,&local_78,param_3 & 1,param_4,param_5,param_6 & 1,param_7,param_8 & 1,
                 param_9,param_10 & 1,param_11);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_78 = 0;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


