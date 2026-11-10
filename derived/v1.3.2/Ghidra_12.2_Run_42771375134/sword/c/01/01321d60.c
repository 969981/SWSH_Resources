/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01321d60; name: FUN_01321d60
 */


undefined8 FUN_01321d60(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long local_38;
  long local_28;
  
  plVar1 = (long *)(param_1 + 0x88);
  FUN_01320fc0(&local_28,plVar1);
  if (local_28 != 0) {
    uVar7 = FUN_01323dd0();
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((uVar7 & 1) != 0) {
      return 0;
    }
  }
  plVar8 = (long *)FUN_013230d0(*(undefined8 *)(param_1 + 0x80));
  puVar5 = PTR_DAT_02715078;
  uVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x68);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
      piVar2 = (int *)(lVar10 + 0x54);
      puVar11 = PTR_DAT_02715080;
      iVar12 = *(int *)(lVar10 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar10 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar11 = PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar9 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar9;
              __cxa_guard_release(puVar5);
              puVar11 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01321eb0;
            if (plVar13 == (long *)puVar11) break;
            plVar13 = (long *)*plVar13;
          }
          iVar6 = *piVar2;
          if (iVar6 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            local_38 = 0;
            if (*(long *)(lVar10 + 0x60) != 0) {
              local_38 = *(long *)(lVar10 + 0x60) + -0x50;
            }
            goto LAB_01321eb4;
          }
          iVar12 = iVar6;
          if (iVar6 == 0) goto LAB_01321eb0;
        }
        ClearExclusiveLocal();
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01321eb0:
    local_38 = 0;
LAB_01321eb4:
    FUN_01323f70(plVar8,&local_38,1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    (**(code **)(*plVar8 + 0x10))(&local_28,plVar8);
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    uVar9 = 1;
    *plVar1 = local_28;
  }
  return uVar9;
}


