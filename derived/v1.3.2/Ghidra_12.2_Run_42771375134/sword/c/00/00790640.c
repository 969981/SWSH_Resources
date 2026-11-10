/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790640; name: FUN_00790640
 */


int FUN_00790640(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x4f0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4e4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_007906a4;
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
LAB_007906a4:
  if (*(long *)(param_1 + 0x4b8) == 0) {
    iVar8 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar8 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x4b8) + -1;
    iVar8 = *(int *)(param_1 + lVar4 * 4 + 0xb8);
    *(long *)(param_1 + 0x4b8) = lVar4;
  }
  piVar6 = (int *)(param_1 + 0xa8);
  uVar7 = (ulong)((long)iVar8 - (long)*piVar6) >> 3 & 0x1ffffffffffffff8;
  *(ulong *)((long)piVar6 + uVar7 + 0x418) =
       1L << ((long)iVar8 - (long)*piVar6 & 0x3fU) | *(ulong *)((long)piVar6 + uVar7 + 0x418);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4e4));
  FUN_019f2ff0(*(undefined8 *)(param_1 + 0x78),param_1 + 0x58,
               *(undefined8 *)(*(long *)(param_2 + 400) + 0x58),iVar8,1,0);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x98) + (long)iVar8 * 8);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(char *)(lVar4 + 9) != '\0') {
      lVar5 = lVar4;
    }
  }
  FUN_019e8de0(lVar5,PTR_LAB_027164a0,param_1);
  return iVar8;
}


