/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97f60; name: FUN_00c97f60
 */


void FUN_00c97f60(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long local_38;
  
  if ((*(long *)(param_1 + 0xf8) != 0) && (*(int *)(*(long *)(param_1 + 0xf8) + 0x54) != 0)) {
    lVar6 = *(long *)(param_1 + 0x70);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c97fe0;
          iVar2 = *piVar1;
          if (iVar2 != iVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar7 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            lVar6 = *(long *)(param_1 + 0xf8);
            goto joined_r0x00c98028;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00c97fe0;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c97fe0:
    lVar7 = 0;
    lVar6 = *(long *)(param_1 + 0xf8);
joined_r0x00c98028:
    if (lVar6 == 0) {
      local_38 = 0;
    }
    else {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      local_38 = lVar6;
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    FUN_00ca9590(lVar7,0,&local_38,8);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  if ((*(long *)(param_1 + 0x100) != 0) && (*(int *)(*(long *)(param_1 + 0x100) + 0x54) != 0)) {
    lVar6 = *(long *)(param_1 + 0x70);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c980ec;
          iVar2 = *piVar1;
          if (iVar2 != iVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar7 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            lVar6 = *(long *)(param_1 + 0x100);
            goto joined_r0x00c98134;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00c980ec;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c980ec:
    lVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x100);
joined_r0x00c98134:
    if (lVar6 == 0) {
      local_38 = 0;
    }
    else {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      local_38 = lVar6;
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    FUN_00ca9590(lVar7,0,&local_38,8);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  return;
}


