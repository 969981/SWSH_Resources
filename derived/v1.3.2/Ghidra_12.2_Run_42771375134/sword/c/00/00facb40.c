/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00facb40; name: FUN_00facb40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00facb40(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    plVar11 = *(long **)(param_1 + 0x100);
    lVar12 = *(long *)(param_1 + 0x108) << 3;
    do {
      while (lVar9 = *plVar11, lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_015c12c0(*(undefined8 *)(lVar9 + 0x1c8));
        (**(code **)(*plVar10 + 0x18))(plVar10);
        plVar11 = plVar11 + 1;
        lVar12 = lVar12 + -8;
        if (lVar12 == 0) goto LAB_00facbc4;
      }
      FUN_015c12c0(_DAT_000001c8);
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
LAB_00facbc4:
  puVar5 = PTR_DAT_02722e10;
  puVar4 = PTR_DAT_02722e08;
  lVar12 = *(long *)(param_1 + 0x68);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar12 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_01455eb0();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00faccc4;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar6;
        if (iVar6 == 0) goto LAB_00faccc4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          FUN_01031710(lVar12 + -0x50);
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
          goto LAB_00facccc;
        }
        break;
      }
      iVar8 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00faccc4:
  FUN_01031710(0);
LAB_00facccc:
  FUN_00fa9c40(*(undefined8 *)(param_1 + 0x120));
  return;
}


