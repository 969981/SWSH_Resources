/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100ad0; name: FUN_00100ad0
 */


void * FUN_00100ad0(long param_1,void *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__dest;
  undefined8 local_50;
  ulong local_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xb0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00100b3c;
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
LAB_00100b3c:
  local_50 = 0x10;
  if ((param_2 != (void *)0x0) &&
     (FUN_00760670(param_1 + 0x28,param_2,&local_48,&local_50), param_3 - 1U < local_48))
  goto LAB_00100be0;
  if (param_3 == 0) {
    if (param_2 == (void *)0x0) goto LAB_00100be0;
    __dest = (void *)0x0;
LAB_00100bc8:
    FUN_00760550(param_1 + 0x28,param_2);
  }
  else {
    __dest = (void *)FUN_00760430(param_1 + 0x28,param_3,local_50);
    if (__dest == (void *)0x0) {
      param_2 = (void *)0x0;
      goto LAB_00100be0;
    }
    FUN_007610b0(param_1,__dest,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflib3/include\\mem/reallocatable_resource.h"
                 ,0x46);
    if (param_2 != (void *)0x0) {
      memmove(__dest,param_2,local_48);
      goto LAB_00100bc8;
    }
  }
  param_2 = __dest;
LAB_00100be0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa4));
  return param_2;
}


