/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323f70; name: FUN_01323f70
 */


undefined8 FUN_01323f70(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x430);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01323fdc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01323fdc:
  if ((*(long *)(param_1 + 0x398) == 0) || (*(int *)(*(long *)(param_1 + 0x398) + 0x54) == 0)) {
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    if ((param_3 & 1) != 0) {
      local_50 = 0x275dbcecced052c0;
      uStack_48 = 0;
      FUN_0130fad0(param_1,&local_50,0);
    }
    (**(code **)(*(long *)*param_2 + 0x10))(&local_50);
    if (*(long *)(param_1 + 0x398) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x398) = 0;
    }
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = local_50;
  }
  else {
    uVar5 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
  return uVar5;
}


