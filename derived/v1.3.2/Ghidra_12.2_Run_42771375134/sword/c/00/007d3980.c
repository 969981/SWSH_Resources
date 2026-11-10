/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d3980; name: FUN_007d3980
 */


undefined8 FUN_007d3980(long param_1,undefined2 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined2 local_38;
  undefined2 local_36;
  
  plVar10 = *(long **)(param_1 + 8);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar10 != plVar9) && (*plVar10 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf0))) {
    do {
      plVar10 = plVar10 + 2;
      if (plVar9 == plVar10) {
        return 0;
      }
    } while (*plVar10 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf0));
  }
  if ((plVar10 != plVar9) && (lVar12 = plVar10[1], lVar12 != 0)) {
    plVar10 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    puVar4 = PTR_DAT_02716ce0;
    if (*(int *)(lVar12 + 0x54) != 0) {
      piVar1 = (int *)(lVar12 + 0x54);
      puVar7 = PTR_DAT_02716ce8;
      iVar8 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar12 + 0x58);
          if ((*puVar4 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(puVar4);
            puVar7 = PTR_DAT_02716ce8;
            if (iVar5 != 0) {
              uVar6 = FUN_009b7e90();
              *(undefined8 *)PTR_DAT_02716ce8 = uVar6;
              __cxa_guard_release(puVar4);
              puVar7 = PTR_DAT_02716ce8;
            }
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_007d3adc;
            if (plVar9 == (long *)puVar7) break;
            plVar9 = (long *)*plVar9;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar8) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar12 + 0x60) != 0) {
              lVar11 = *(long *)(lVar12 + 0x60) + -0x50;
            }
            goto LAB_007d3ae0;
          }
          iVar8 = iVar5;
          if (iVar5 == 0) goto LAB_007d3adc;
        }
        ClearExclusiveLocal();
        iVar8 = iVar5;
      } while (iVar5 != 0);
    }
LAB_007d3adc:
    lVar11 = 0;
LAB_007d3ae0:
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (lVar11 != 0) {
      local_36 = *(undefined2 *)(lVar11 + 0x8a);
      local_38 = param_2;
      FUN_007d3860(lVar11,&local_38);
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      return 1;
    }
  }
  return 0;
}


