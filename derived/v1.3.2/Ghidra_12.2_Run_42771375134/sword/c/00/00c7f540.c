/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7f540; name: FUN_00c7f540
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c7f540(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long local_50;
  long local_48;
  long local_38;
  
  *param_1 = 0;
  local_48 = *param_3;
  if (local_48 == 0) {
    FUN_00c7c720(&local_38,param_2,&local_48,0);
    pbVar5 = PTR_DAT_0271c218;
    puVar6 = (undefined8 *)PTR_DAT_0271c220;
    lVar10 = local_38;
  }
  else {
    plVar13 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_00c7c720(&local_38,param_2,&local_48,0);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_48 = 0;
    pbVar5 = PTR_DAT_0271c218;
    puVar6 = (undefined8 *)PTR_DAT_0271c220;
    lVar10 = local_38;
  }
  if (lVar10 == 0) {
    PTR_DAT_0271c218 = pbVar5;
    PTR_DAT_0271c220 = (undefined *)puVar6;
    return;
  }
  PTR_DAT_0271c218 = pbVar5;
  PTR_DAT_0271c220 = (undefined *)puVar6;
  local_38 = lVar10;
  if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00c7f7b8;
  lVar7 = lVar10;
  iVar8 = _DAT_00000060;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar12 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar10 + 0x58);
        if (((*pbVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar5), iVar8 != 0)) {
          uVar9 = FUN_00c72b60();
          *puVar6 = uVar9;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          lVar7 = local_38;
          iVar8 = _DAT_00000060;
          if (plVar13 == (long *)0x0) goto joined_r0x00c7f6b8;
          if (plVar13 == puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar8 = _DAT_00000060;
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            iVar8 = *(int *)(lVar10 + 0x10);
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
            lVar7 = local_38;
          }
          goto joined_r0x00c7f6b8;
        }
        iVar12 = iVar2;
        if (iVar2 == 0) goto joined_r0x00c7f6b8;
      }
      ClearExclusiveLocal();
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
joined_r0x00c7f6b8:
  local_38 = lVar7;
  if (iVar8 != 0x11) goto LAB_00c7f7b8;
  if (lVar7 == 0) {
LAB_00c7f754:
    plVar13 = (long *)0x0;
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
    if (*(int *)(lVar7 + 0x54) == 0) goto LAB_00c7f754;
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar7 + 0x58);
        plVar11 = (long *)FUN_00c80fa0();
        plVar13 = (long *)0x0;
        if (plVar14 == (long *)0x0) goto LAB_00c7f758;
        while (plVar14 != plVar11) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar13 = (long *)0x0;
            goto LAB_00c7f758;
          }
        }
        iVar12 = *piVar1;
        if (iVar12 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            plVar13 = (long *)(*(long *)(lVar7 + 0x60) + -0x50);
          }
          goto LAB_00c7f758;
        }
        plVar13 = (long *)0x0;
        iVar8 = iVar12;
        if (iVar12 == 0) goto LAB_00c7f758;
      }
      ClearExclusiveLocal();
      plVar13 = (long *)0x0;
      iVar8 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00c7f758:
  (**(code **)(*plVar13 + 0xd8))(&local_50,plVar13);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar10 = local_50;
  local_50 = 0;
  *param_1 = lVar10;
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
LAB_00c7f7b8:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


