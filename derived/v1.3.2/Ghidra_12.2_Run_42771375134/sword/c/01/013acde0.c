/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013acde0; name: FUN_013acde0
 */


void FUN_013acde0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_013a5170(&local_38);
  if (local_38 != 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    plVar14 = *(long **)(lVar13 + 0x58);
    if (plVar14 != (long *)0x0) {
      (**(code **)(plVar14[9] + 0x10))();
    }
    lVar4 = local_38;
    lVar7 = FUN_00d3fd50(*(undefined8 *)(param_1 + 0x98),&local_50);
    lVar9 = *(long *)(lVar7 + 0x68);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02715080;
      pbVar11 = PTR_DAT_02715078;
      iVar6 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if ((*pbVar11 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(PTR_DAT_02715078);
            pbVar11 = PTR_DAT_02715078;
            puVar10 = PTR_DAT_02715080;
            if (iVar5 != 0) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
              pbVar11 = PTR_DAT_02715078;
              puVar10 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_013acf4c;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar6) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_48 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              local_48 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_013acf50;
          }
          iVar6 = iVar5;
          if (iVar5 == 0) goto LAB_013acf4c;
        }
        ClearExclusiveLocal();
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_013acf4c:
    local_48 = 0;
LAB_013acf50:
    FUN_013093c0(lVar4,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_012e9540(lVar7);
    iVar6 = *(int *)(param_1 + 0x64c);
    if (iVar6 == 6) {
      iVar6 = FUN_00884820(plVar14);
      iVar6 = iVar6 + -1;
    }
    local_50 = (**(code **)(*plVar14 + 0x50))(plVar14,iVar6);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_012e5160(lVar7,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    (**(code **)(plVar14[9] + 0x18))(plVar14 + 9);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


