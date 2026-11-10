/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dc410; name: FUN_005dc410
 */


int FUN_005dc410(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = param_1 + 7;
  do {
    iVar3 = (int)*plVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *(int *)plVar4 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
    plVar4 = (long *)param_1[6];
    (**(code **)*param_1)(param_1);
    if ((plVar4 != (long *)0x0) && (plVar4 != param_1)) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,param_1,"../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",
                 0x22);
    }
  }
  return iVar3;
}


