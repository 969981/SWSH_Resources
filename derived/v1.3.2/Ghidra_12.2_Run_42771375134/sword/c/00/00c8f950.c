/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8f950; name: FUN_00c8f950
 */


void FUN_00c8f950(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long local_38;
  
  if (*(long *)(param_1 + 0x268) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x268) + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x270) + 0x50) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (lVar6 != 0) {
    FUN_00c83200(lVar6);
    (**(code **)(**(long **)(param_1 + 0x2b0) + 0x18))
              (*(long **)(param_1 + 0x2b0),lVar6,*(undefined8 *)(param_1 + 0x2b8),
               *(undefined8 *)(param_1 + 0x2c0));
  }
  lVar6 = *(long *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (lVar6 != 0) {
    FUN_00c83f10(lVar6);
    (**(code **)(**(long **)(param_1 + 0x290) + 0x18))
              (*(long **)(param_1 + 0x290),lVar6,*(undefined8 *)(param_1 + 0x298),
               *(undefined8 *)(param_1 + 0x2a0));
  }
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  if ((*(long *)(param_1 + 0x2d0) != 0) && (*(int *)(*(long *)(param_1 + 0x2d0) + 0x54) != 0)) {
    lVar6 = *(long *)(param_1 + 0x70);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c8fa50;
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
            lVar6 = *(long *)(param_1 + 0x2d0);
            goto joined_r0x00c8fa9c;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00c8fa50;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c8fa50:
    lVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x2d0);
joined_r0x00c8fa9c:
    if (lVar6 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      local_38 = 0;
    }
    else {
      plVar10 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      local_38 = lVar6;
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    FUN_00ca9590(lVar7,0,&local_38,uVar9);
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
  if ((*(long *)(param_1 + 0x2c8) != 0) && (*(int *)(*(long *)(param_1 + 0x2c8) + 0x54) != 0)) {
    lVar6 = *(long *)(param_1 + 0x70);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c8fb64;
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
            lVar6 = *(long *)(param_1 + 0x2c8);
            goto joined_r0x00c8fbb0;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00c8fb64;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c8fb64:
    lVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x2c8);
joined_r0x00c8fbb0:
    if (lVar6 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      local_38 = 0;
    }
    else {
      plVar10 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      local_38 = lVar6;
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    FUN_00ca9590(lVar7,0,&local_38,uVar9);
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


