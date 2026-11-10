/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013677a0; name: FUN_013677a0
 */


void FUN_013677a0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_38;
  
  uVar11 = *param_1;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar4 = PTR_DAT_02715078;
  lVar12 = *param_3;
  lVar7 = *(long *)(lVar12 + 0x68);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_013678e0:
    plVar10 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02715080;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar7 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar11 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar11;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_013678e0;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar10 = (long *)0x0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            plVar10 = (long *)(*(long *)(lVar7 + 0x60) + -0x50);
          }
          goto LAB_013678e4;
        }
        plVar10 = (long *)0x0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_013678e4;
      }
      ClearExclusiveLocal();
      plVar10 = (long *)0x0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_013678e4:
  (**(code **)(*plVar10 + 0x10))(&local_38,plVar10);
  uVar11 = local_38;
  local_38 = 0;
  *param_2 = uVar11;
  if (plVar10 != (long *)0x0) {
    (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
  }
  param_2[1] = lVar12;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return;
}


