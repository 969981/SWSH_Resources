/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd480; name: FUN_00ecd480
 */


void FUN_00ecd480(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  if (((param_2[1] != 0) && (*param_2 != 0)) && (*(int *)(*param_2 + 0x54) != 0)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x54) == 0)) {
      lVar9 = 0;
    }
    else {
      piVar1 = (int *)(lVar2 + 0x54);
      iVar10 = *(int *)(lVar2 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar2 + 0x58);
          plVar7 = (long *)FUN_00ecd7b0();
          lVar9 = 0;
          if (plVar8 == (long *)0x0) goto LAB_00ecd528;
          while (plVar8 != plVar7) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              lVar9 = 0;
              goto LAB_00ecd528;
            }
          }
          iVar4 = *piVar1;
          if (iVar4 != iVar10) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar9 = 0;
            if (*(long *)(lVar2 + 0x60) != 0) {
              lVar9 = *(long *)(lVar2 + 0x60) + -0x50;
            }
            goto LAB_00ecd528;
          }
          lVar9 = 0;
          iVar10 = iVar4;
          if (iVar4 == 0) goto LAB_00ecd528;
        }
        ClearExclusiveLocal();
        lVar9 = 0;
        iVar10 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00ecd528:
    local_60 = *(undefined8 *)(lVar9 + 0x418);
    local_58 = *(undefined8 *)(lVar9 + 0x420);
    local_50 = *(undefined8 *)(lVar9 + 0x428);
    local_48 = *(long *)(lVar9 + 0x430);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00895fd0(lVar3,&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  return;
}


