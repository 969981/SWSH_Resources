/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8740; name: FUN_012e8740
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_012e8740(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long local_38;
  
  lVar12 = *(long *)PTR_DAT_02727748;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar13 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        uVar8 = FUN_012eac20(*(undefined8 *)(lVar12 + 0x58));
        if ((uVar8 & 1) == 0) {
          return false;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar13) break;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 == 0) {
            return false;
          }
          if ((*(long *)(param_1 + 0x4f0) == 0) || (uVar8 = FUN_0130e360(), (uVar8 & 1) == 0)) {
            local_38 = 0;
            goto LAB_012e88e8;
          }
          FUN_0130e3b0(&local_38,*(undefined8 *)(param_1 + 0x4f0));
          lVar5 = local_38;
          if (local_38 == 0) goto LAB_012e88e8;
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          puVar4 = PTR_DAT_02715080;
          puVar3 = PTR_DAT_02715078;
          lVar10 = *(long *)(lVar12 + 0x18);
          if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) goto LAB_012e88e8;
          piVar1 = (int *)(lVar10 + 0x54);
          iVar13 = *(int *)(lVar10 + 0x54);
          goto LAB_012e8814;
        }
        iVar13 = iVar7;
        if (iVar7 == 0) {
          return false;
        }
      }
      ClearExclusiveLocal();
      iVar13 = iVar7;
    } while (iVar7 != 0);
  }
  return false;
LAB_012e8814:
  plVar11 = *(long **)(lVar10 + 0x58);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
    uVar9 = FUN_00a87090();
    *(undefined8 *)puVar4 = uVar9;
    __cxa_guard_release(puVar3);
  }
  while( true ) {
    if (plVar11 == (long *)0x0) goto LAB_012e88e8;
    if (plVar11 == (long *)puVar4) break;
    plVar11 = (long *)*plVar11;
  }
  iVar7 = *piVar1;
  if (iVar7 == iVar13) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar10 = *(long *)(lVar10 + 0x60);
      if (lVar10 == 0) {
LAB_012e88e8:
        bVar6 = false;
      }
      else {
        bVar6 = lVar5 == lVar10 + -0x50;
        (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
      }
      goto LAB_012e88ec;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar6 = false;
  iVar13 = iVar7;
  if (iVar7 == 0) {
LAB_012e88ec:
    (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
    return bVar6;
  }
  goto LAB_012e8814;
}


