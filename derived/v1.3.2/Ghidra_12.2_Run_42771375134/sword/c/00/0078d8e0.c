/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078d8e0; name: FUN_0078d8e0
 */


undefined8 FUN_0078d8e0(long param_1,long *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_50;
  long *local_48;
  
  lVar9 = *(long *)(param_1 + 0x640);
  lVar8 = *(long *)(param_1 + 0x648);
  local_48 = param_2;
  if (lVar8 == lVar9) {
LAB_0078d9c0:
    lVar9 = lVar8;
  }
  else {
    lVar6 = *(long *)(lVar9 + 0x140);
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar9 + 0x140);
      lVar5 = lVar9;
      while (lVar9 = lVar5, *(int *)(lVar6 + 0x54) != 0) {
        if ((*plVar4 != 0) &&
           (puVar7 = *(undefined8 **)(*plVar4 + 0x60), puVar7 != (undefined8 *)0x0)) {
          plVar4 = (long *)(**(code **)*puVar7)(puVar7);
          lVar6 = FUN_006f10c0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar6) {
              if (puVar7 + -10 == local_48) goto LAB_0078d9c4;
              goto LAB_0078d978;
            }
          }
        }
        if (local_48 == (long *)0x0) break;
LAB_0078d978:
        lVar9 = lVar5 + 0x158;
        if (lVar9 == lVar8) goto LAB_0078d9c0;
        lVar6 = *(long *)(lVar5 + 0x298);
        plVar4 = (long *)(lVar5 + 0x298);
        lVar5 = lVar9;
        if (lVar6 == 0) break;
      }
    }
  }
LAB_0078d9c4:
  if ((*(long *)(lVar9 + 0x140) == 0) || (*(int *)(*(long *)(lVar9 + 0x140) + 0x54) == 0)) {
    lVar6 = *(long *)(lVar9 + 0x148);
    lVar8 = nn::os::GetCurrentThread();
    plVar4 = (long *)(lVar6 + 0x158);
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
          while (*plVar4 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar8;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0078da24;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0078da24:
    plVar3 = local_48;
    lVar5 = local_48[0xe];
    lVar8 = lVar5;
    if (*(long *)(lVar5 + 0x120) != 0) {
      lVar8 = *(long *)(lVar5 + 0x120);
    }
    if (*(long *)(lVar5 + 0x128) != 0) {
      lVar5 = *(long *)(lVar5 + 0x128);
    }
    FUN_006d15e0(lVar6,lVar8,lVar5);
    (**(code **)(*plVar3 + 0x10))(&local_50,plVar3);
    if (*(long *)(lVar9 + 0x140) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar9 + 0x140) + 0x48) + 0x18))();
      *(undefined8 *)(lVar9 + 0x140) = 0;
    }
    *(undefined8 *)(lVar9 + 0x140) = local_50;
    *(ulong *)(*(long *)(lVar9 + 0x148) + 0x138) =
         *(ulong *)(*(long *)(lVar9 + 0x148) + 0x138) & 0xfffffffffffffffe;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  }
  *param_3 = *(undefined4 *)(lVar9 + 0x150);
  return *(undefined8 *)(lVar9 + 0x148);
}


