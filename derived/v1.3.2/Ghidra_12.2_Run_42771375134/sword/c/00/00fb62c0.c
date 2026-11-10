/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb62c0; name: FUN_00fb62c0
 */


void FUN_00fb62c0(long param_1,int param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  lVar12 = *(long *)(param_1 + (long)param_2 * 0x110 + 0x2178);
  if (lVar12 == 0) {
    return;
  }
  if (*(char *)(lVar12 + 0x170) == '\0') {
    return;
  }
  lVar12 = param_1 + (long)param_2 * 4;
  if (*(int *)(lVar12 + 0x25b0) != 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + (long)param_2 * 8 + 0x25c0);
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00fb6368;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00fb6368:
  puVar7 = PTR_DAT_027164f0;
  puVar6 = PTR_DAT_027164e8;
  puVar5 = PTR_DAT_027105c8;
  plVar16 = *(long **)(lVar15 + 0x140);
  plVar2 = *(long **)(lVar15 + 0x148);
  if (plVar16 != plVar2) {
    if ((param_3 & 1) == 0) {
      do {
        lVar9 = *plVar16;
        puVar13 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00727dd0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            FUN_007946a0(lVar9 + -0x48,1);
            break;
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
    else {
      do {
        lVar9 = *plVar16;
        puVar13 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00727dd0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            lVar14 = *(long *)puVar5;
            lVar9 = lVar9 + -0x48;
            FUN_007946a0(lVar9,1);
            uVar11 = FUN_00794780(lVar9);
            FUN_00790fe0(*(undefined8 *)(lVar14 + 0x238),uVar11,0x78);
            break;
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
    if (*(long **)(lVar15 + 0x148) != plVar2) goto LAB_00fb6640;
  }
  puVar7 = PTR_DAT_027164f0;
  puVar6 = PTR_DAT_027164e8;
  puVar5 = PTR_DAT_027105c8;
  plVar16 = *(long **)(lVar15 + 0x110);
  plVar2 = *(long **)(lVar15 + 0x118);
  if (plVar16 != plVar2) {
    if ((param_3 & 1) == 0) {
      do {
        lVar9 = *plVar16;
        puVar13 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00727dd0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            FUN_007946a0(lVar9 + -0x48,1);
            break;
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
    else {
      do {
        lVar9 = *plVar16;
        puVar13 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00727dd0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            lVar14 = *(long *)puVar5;
            lVar9 = lVar9 + -0x48;
            FUN_007946a0(lVar9,1);
            uVar11 = FUN_00794780(lVar9);
            FUN_00790fe0(*(undefined8 *)(lVar14 + 0x238),uVar11,0x78);
            break;
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
  }
LAB_00fb6640:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xe4));
  *(undefined4 *)(lVar12 + 0x25b0) = 1;
  return;
}


