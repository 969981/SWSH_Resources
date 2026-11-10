/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f9fc0; name: thunk_FUN_006f9fd0
 */


void thunk_FUN_006f9fd0(long *param_1,byte *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_48;
  
  puVar4 = PTR_DAT_02710450;
  lVar6 = *(long *)PTR_DAT_02710450;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006fa044;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006fa044:
  lVar5 = (((((((((((((((((((((((((((((((((ulong)*param_2 ^ 0xcbf29ce484222645) * 0x100000001b3 ^
                                        (ulong)param_2[1]) * 0x100000001b3 ^ (ulong)param_2[2]) *
                                       0x100000001b3 ^ (ulong)param_2[3]) * 0x100000001b3 ^
                                     (ulong)param_2[4]) * 0x100000001b3 ^ (ulong)param_2[5]) *
                                    0x100000001b3 ^ (ulong)param_2[6]) * 0x100000001b3 ^
                                  (ulong)param_2[7]) * 0x100000001b3 ^ (ulong)param_2[8]) *
                                 0x100000001b3 ^ (ulong)param_2[9]) * 0x100000001b3 ^
                               (ulong)param_2[10]) * 0x100000001b3 ^ (ulong)param_2[0xb]) *
                              0x100000001b3 ^ (ulong)param_2[0xc]) * 0x100000001b3 ^
                            (ulong)param_2[0xd]) * 0x100000001b3 ^ (ulong)param_2[0xe]) *
                           0x100000001b3 ^ (ulong)param_2[0xf]) * 0x100000001b3 ^
                         (ulong)param_2[0x10]) * 0x100000001b3 ^ (ulong)param_2[0x11]) *
                        0x100000001b3 ^ (ulong)param_2[0x12]) * 0x100000001b3 ^ (ulong)param_2[0x13]
                      ) * 0x100000001b3 ^ (ulong)param_2[0x14]) * 0x100000001b3 ^
                    (ulong)param_2[0x15]) * 0x100000001b3 ^ (ulong)param_2[0x16]) * 0x100000001b3 ^
                  (ulong)param_2[0x17]) * 0x100000001b3 ^ (ulong)param_2[0x18]) * 0x100000001b3 ^
                (ulong)param_2[0x19]) * 0x100000001b3 ^ (ulong)param_2[0x1a]) * 0x100000001b3 ^
              (ulong)param_2[0x1b]) * 0x100000001b3 ^ (ulong)param_2[0x1c]) * 0x100000001b3 ^
            (ulong)param_2[0x1d]) * 0x100000001b3 ^ (ulong)param_2[0x1e]) * 0x100000001b3 ^
          (ulong)param_2[0x1f]) * 0x100000001b3;
  FUN_006f9020(param_1,*(undefined8 *)puVar4,lVar5);
  if (*param_1 == 0) {
    FUN_006f89b0(&lStack_48,*(undefined8 *)puVar4,lVar5);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = lStack_48;
    lVar7 = *(long *)puVar4;
    FUN_019a30f0(lStack_48 + 0x58,PTR_DAT_027155e8,param_2);
    lVar7 = lVar7 + 0x50;
    FUN_0199e6b0(lVar7);
    FUN_0199e720(lVar7,*(undefined4 *)(lStack_48 + 0xe0),lStack_48 + 0x58);
    FUN_0199e760(lVar7,lStack_48 + 0xd0,*(undefined4 *)(lStack_48 + 0xe0));
    FUN_0199e6c0(lVar7);
    *(long *)(lStack_48 + 0xd8) = lVar5;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe4));
  return;
}


