/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfe860; name: FUN_00dfe860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00dfe860(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_0271ee60;
  if (((*(int *)(param_1 + 0x6c) == 0) || (*(long *)(param_1 + 0x60) == 0)) ||
     (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0)) {
    bVar4 = false;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x60);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      puVar8 = PTR_DAT_0271ee68;
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar7 + 0x58);
          if (((*puVar3 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar3), puVar8 = PTR_DAT_0271ee68, iVar5 != 0)) {
            uVar6 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee68 = uVar6;
            __cxa_guard_release(puVar3);
            puVar8 = PTR_DAT_0271ee68;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00dfe9ac;
            if (plVar10 == (long *)puVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00dfe9ac;
        }
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            iVar9 = *(int *)(lVar7 + 0x418);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            return iVar9 != -1;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00dfe9ac:
    bVar4 = _DAT_00000468 != -1;
  }
  return bVar4;
}


