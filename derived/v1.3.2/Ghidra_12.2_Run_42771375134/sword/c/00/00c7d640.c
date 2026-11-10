/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7d640; name: FUN_00c7d640
 */


void FUN_00c7d640(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long local_50;
  long local_48;
  
  lVar7 = *param_3;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x54) == 0) {
      local_48 = *(long *)(param_1 + 8);
      goto joined_r0x00c7d6dc;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar6 = *(long **)(lVar7 + 0x58);
        lVar5 = FUN_00c80ca0();
        while( true ) {
          if (plVar6 == (long *)0x0) goto LAB_00c7d6d4;
          if (plVar6 == (long *)lVar5) break;
          plVar6 = (long *)*plVar6;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar5 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar5 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          local_48 = *(long *)(param_1 + 8);
          goto joined_r0x00c7d79c;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00c7d6d4;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c7d6d4:
  local_48 = *(long *)(param_1 + 8);
joined_r0x00c7d6dc:
  lVar5 = 0;
joined_r0x00c7d79c:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_2;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_00c6a640(lVar5,&local_48,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


