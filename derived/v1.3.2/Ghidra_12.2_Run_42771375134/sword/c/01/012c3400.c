/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c3400; name: FUN_012c3400
 */


void FUN_012c3400(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0 [24];
  
  if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x68) == '\0')) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    uVar2 = *(uint *)(&DAT_0216ae2c + (ulong)*(uint *)(param_1 + 0x6c) * 4);
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x180);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x174));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012c3488;
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
LAB_012c3488:
    local_a0[0] = *(undefined4 *)(&DAT_0216ae90 + (ulong)uVar2 * 4);
    local_b0 = &LAB_012c6330;
    local_c0 = &LAB_012c6270;
    local_b8 = FUN_012c6320;
    local_a8 = &LAB_012c6340;
    FUN_012c6db0(&local_c0);
    pcVar5 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar5)(local_a0);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x174));
  }
  return;
}


