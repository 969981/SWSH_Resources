/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01328b20; name: FUN_01328b20
 */


undefined8 FUN_01328b20(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long local_80 [12];
  long local_18;
  
  puVar4 = PTR_DAT_02715078;
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB_01328c1c:
    plVar11 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    puVar9 = PTR_DAT_02715080;
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar4);
          puVar9 = PTR_DAT_02715080;
          if (iVar6 != 0) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_01328c1c;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar11 = (long *)0x0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            plVar11 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
          }
          goto LAB_01328c20;
        }
        plVar11 = (long *)0x0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_01328c20;
      }
      ClearExclusiveLocal();
      plVar11 = (long *)0x0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01328c20:
  (**(code **)(*plVar11 + 0x10))(&local_18,plVar11);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  }
  lVar8 = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  local_a0 = &LAB_01329330;
  local_98 = FUN_01329440;
  local_90 = &LAB_01329610;
  local_80[0] = lVar8;
  local_88 = &LAB_01329630;
  FUN_012c6db0(&local_a0);
  pcVar5 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar5)(local_80);
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return 1;
}


