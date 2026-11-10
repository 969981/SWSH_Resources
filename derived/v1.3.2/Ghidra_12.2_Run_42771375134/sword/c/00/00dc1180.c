/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1180; name: FUN_00dc1180
 */


/* WARNING: Removing unreachable block (ram,0x00dc1244) */

void FUN_00dc1180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_40;
  undefined8 uStack_38;
  
  if (((*(long *)(param_1 + 0x410) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x410) + 0x60), lVar7 != 0)) &&
     (uVar4 = FUN_00a8cbe0(lVar7), (uVar4 & 1) != 0)) {
    local_40 = lVar7 + -0x50;
    lVar7 = *(long *)(*(long *)PTR_DAT_027155f8 + 0x50);
    do {
      lVar5 = lVar7;
      lVar7 = lVar5;
      if (*(long *)(lVar5 + 0x128) != 0) {
        lVar7 = *(long *)(lVar5 + 0x128);
      }
    } while (lVar7 != lVar5);
    if ((*(byte *)(lVar5 + 0x130) >> 6 & 1) != 0) {
      plVar1 = (long *)(lVar5 + 0x278);
      uStack_38 = param_4;
      if (((*(byte *)(lVar5 + 0x280) & 1) == 0) ||
         (lVar6 = *plVar1, lVar7 = nn::os::GetCurrentThread(), lVar7 != lVar6)) {
        lVar7 = nn::os::GetCurrentThread();
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x26c));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar7;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_00dc1264;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_00dc1264:
        FUN_00dc3240(lVar5 + 0x1f8,&local_40);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x26c));
      }
      else {
        FUN_00dc3240(lVar5 + 0x230,&local_40);
      }
    }
  }
  return;
}


