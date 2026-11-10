/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ee1a0; name: FUN_013ee1a0
 */


void FUN_013ee1a0(undefined8 param_1,byte *param_2,undefined1 *param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 local_b0 [96];
  
  uVar7 = 0xcbf29ce484222645;
  lVar6 = FUN_013c8cc0();
  bVar2 = *param_2;
  while (bVar2 != 0) {
    param_2 = param_2 + 1;
    uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
    bVar2 = *param_2;
  }
  lVar8 = *(long *)(lVar6 + 0x60);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x70);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 100));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013ee250;
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
LAB_013ee250:
  local_b0[0] = *param_3;
  local_d0 = PTR_LAB_027289b0;
  local_c8 = (code *)PTR_FUN_027289b8;
  local_c0 = PTR_LAB_027289c0;
  local_b8 = PTR_LAB_027289c8;
  FUN_012d5b10(lVar8,uVar7,&local_d0,param_4 & 1);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(local_b0);
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 100));
  return;
}


