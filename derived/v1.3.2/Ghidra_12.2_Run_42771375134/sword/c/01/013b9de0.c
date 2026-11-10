/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b9de0; name: FUN_013b9de0
 */


undefined8 FUN_013b9de0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_3a0 [704];
  int local_e0;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  int local_b0 [24];
  
  if (*(char *)(param_1 + 0x9a8) != '\0') {
    nn::os::GetSystemTick();
    lVar7 = nn::os::ConvertToTimeSpan();
    lVar7 = lVar7 - *(long *)(param_1 + 0x998);
    *(long *)(param_1 + 0x9a0) = lVar7;
    *(double *)(param_1 + 0x9b0) =
         *(double *)(param_1 + 0x9b0) +
         *(double *)(param_1 + 0x9b8) * ((double)lVar7 / DAT_01cd50a0);
    nn::os::GetSystemTick();
    uVar8 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x998) = uVar8;
  }
  if ((*(int *)(param_1 + 0x9c0) < 0x3c) &&
     (iVar11 = (int)*(double *)(param_1 + 0x9b0), *(int *)(param_1 + 0x9c0) != iVar11)) {
    lVar7 = *(long *)(param_1 + 0x90);
    if (0x3b < iVar11) {
      iVar11 = 0x3c;
    }
    *(int *)(param_1 + 0x9c0) = iVar11;
    puVar5 = PTR_DAT_02729068;
    puVar4 = PTR_DAT_02729060;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar11 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar7 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar8 = FUN_009b7e90();
            *(undefined8 *)puVar5 = uVar8;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_013b9f54;
            if (plVar9 == (long *)puVar5) break;
            plVar9 = (long *)*plVar9;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_013b9f54;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            memcpy(auStack_3a0,(void *)(lVar7 + 0x40),0x2d0);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            goto LAB_013b9f64;
          }
          break;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_013b9f54:
    memcpy(auStack_3a0,&DAT_00000090,0x2d0);
LAB_013b9f64:
    local_e0 = 0x3c - *(int *)(param_1 + 0x9c0);
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar9 = (long *)(**(code **)*puVar12)(puVar12);
    lVar7 = FUN_0132d9a0();
    for (; plVar9 != (long *)lVar7; plVar9 = (long *)*plVar9) {
    }
    lVar13 = puVar12[2];
    lVar7 = nn::os::GetCurrentThread();
    plVar9 = (long *)(lVar13 + 0x70);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
          while (*plVar9 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_013b9ff8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_013b9ff8:
    local_b0[0] = local_e0;
    local_d0 = PTR_LAB_02729070;
    local_c8 = (code *)PTR_FUN_02729078;
    local_c0 = PTR_LAB_02729080;
    local_b8 = PTR_LAB_02729088;
    FUN_012d5b10(lVar13,0x1f9b6e7bcd875a4e,&local_d0,1);
    pcVar10 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined *)0x0;
      local_b8 = (undefined *)0x0;
      local_d0 = (undefined *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar10)(local_b0);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
    FUN_013ba250(param_1 + 0x78,auStack_3a0);
    if (*(int *)(param_1 + 0x9c0) == 0x3c) {
      if (*(char *)(param_1 + 0x9a8) != '\0') {
        nn::os::GetSystemTick();
        lVar7 = nn::os::ConvertToTimeSpan();
        *(long *)(param_1 + 0x9a0) = lVar7 - *(long *)(param_1 + 0x998);
        *(undefined1 *)(param_1 + 0x9a8) = 0;
      }
      if (*(code **)(param_1 + 0x6b0) != (code *)0x0) {
        (**(code **)(param_1 + 0x6b0))(param_1 + 0x6d0);
        pcVar10 = *(code **)(param_1 + 0x6b8);
        if (pcVar10 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x6c0) = 0;
          *(undefined8 *)(param_1 + 0x6c8) = 0;
          *(undefined8 *)(param_1 + 0x6b0) = 0;
          *(undefined8 *)(param_1 + 0x6b8) = 0;
          (*pcVar10)(param_1 + 0x6d0);
        }
      }
    }
  }
  return 0;
}


