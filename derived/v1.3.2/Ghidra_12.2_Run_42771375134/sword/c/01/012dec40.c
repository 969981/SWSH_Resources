/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dec40; name: FUN_012dec40
 */


/* WARNING: Removing unreachable block (ram,0x012dedb4) */

undefined8 FUN_012dec40(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long local_48;
  
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  if (*(int *)(param_1 + 0x88) == 0 || *(int *)(param_1 + 0x88) == 6) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x68);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x54) == 0)) {
LAB_012ded30:
    lVar11 = 0;
  }
  else {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar14 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_012ded30;
          if (plVar10 == (long *)puVar5) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar14) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            lVar11 = *(long *)(lVar12 + 0x60) + -0x50;
          }
          goto LAB_012ded34;
        }
        lVar11 = 0;
        iVar14 = iVar6;
        if (iVar6 == 0) goto LAB_012ded34;
      }
      ClearExclusiveLocal();
      lVar11 = 0;
      iVar14 = iVar6;
    } while (iVar6 != 0);
  }
LAB_012ded34:
  lVar12 = *(long *)(lVar11 + 0x170);
  do {
    lVar9 = lVar12;
    lVar12 = lVar9;
    if (*(long *)(lVar9 + 0x120) != 0) {
      lVar12 = *(long *)(lVar9 + 0x120);
    }
  } while (lVar12 != lVar9);
  local_48 = param_1;
  if ((*(byte *)(lVar9 + 0x130) >> 6 & 1) != 0) {
    plVar10 = (long *)(lVar9 + 0x1e8);
    if (((*(byte *)(lVar9 + 0x1f0) & 1) == 0) ||
       (lVar13 = *plVar10, lVar12 = nn::os::GetCurrentThread(), lVar12 != lVar13)) {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1dc));
            while (*plVar10 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = lVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_012dedd4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_012dedd4:
      FUN_012df420(lVar9 + 0x168,&local_48);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1dc));
    }
    else {
      FUN_012df420(lVar9 + 0x1a0,&local_48);
    }
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  uVar8 = 4;
  if (*(int *)(param_1 + 0x88) != 2) {
    uVar8 = 5;
  }
  *(undefined4 *)(param_1 + 0x88) = uVar8;
  return 1;
}


