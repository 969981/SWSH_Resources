/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314230; name: FUN_01314230
 */


/* WARNING: Removing unreachable block (ram,0x013142f4) */

void FUN_01314230(long param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0 [12];
  
  if ((*(char *)(param_1 + 0x3e0) == '\0') || (*(char *)(param_1 + 0x68) == '\0')) {
    return;
  }
  lVar7 = 0;
  do {
    lVar6 = param_1 + lVar7;
    if ((*(long *)(lVar6 + 0x80) != 0) && (*(long *)(lVar6 + 0x88) != 0)) {
      if (*(char *)(lVar6 + 0x90) == '\0') {
        *(undefined8 *)(lVar6 + 0x80) = 0;
        *(undefined8 *)(lVar6 + 0x88) = 0;
      }
      else {
        *(undefined1 *)(lVar6 + 0x90) = 0;
      }
    }
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x360);
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar7 + 0x4e0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x4d4));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01314314;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01314314:
    cVar3 = *(char *)(lVar7 + 0x4c8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x4d4));
    if (cVar3 != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 1000) == '\0') {
    local_140 = &LAB_01317ee0;
    local_138 = FUN_01317ef0;
    local_130 = &LAB_01317f00;
    local_128 = &LAB_01317f10;
    local_c0 = PTR_LAB_02727ea8;
    local_b8 = (code *)PTR_FUN_02727eb0;
    local_b0 = PTR_LAB_02727eb8;
    local_a8 = PTR_LAB_02727ec0;
    alStack_120[0] = param_1;
    local_a0[0] = (undefined1 *)&local_140;
    FUN_01306ed0(*(undefined8 *)(param_1 + 0x70),&local_c0);
    pcVar5 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar5)(local_a0);
    }
    pcVar5 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar5)(alStack_120);
    }
  }
  return;
}


