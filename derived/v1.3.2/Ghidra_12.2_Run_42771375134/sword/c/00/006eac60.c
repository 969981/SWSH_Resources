/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eac60; name: FUN_006eac60
 */


void FUN_006eac60(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_02715618 + 0x10);
  if (((DAT_029f00d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_029f00d8), iVar4 != 0)) {
    FUN_006cee90(&DAT_029f00f4,1,0);
    DAT_029f0100 = 0;
    FUN_001001c0(PTR_LAB_02715628,&DAT_029f00f0,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f00d8);
  }
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (DAT_029f0100 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)&DAT_029f00f4);
        while (DAT_029f0100 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            DAT_029f0100 = lVar5;
          }
          if (cVar1 == '\0') goto LAB_006eace4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_029f0100 = lVar5;
    }
  } while (cVar1 != '\0');
LAB_006eace4:
  puVar3 = PTR_DAT_02715620;
  if (0xff < *(ulong *)(PTR_DAT_02715620 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02715620 + *(ulong *)(PTR_DAT_02715620 + 0x800) * 8) = param_1;
  *(long *)(puVar3 + 0x800) = *(long *)(puVar3 + 0x800) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
    if (bVar2) {
      DAT_029f0100 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)&DAT_029f00f4);
  return;
}


