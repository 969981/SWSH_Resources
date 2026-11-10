/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199440; name: FUN_01199440
 */


void FUN_01199440(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  
  lVar7 = *(long *)(param_1 + 0x150);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    pbVar6 = PTR_DAT_027252f0;
    puVar8 = PTR_DAT_027252f8;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar7 + 0x58);
        if (((*pbVar6 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(pbVar6), pbVar6 = PTR_DAT_027252f0,
           puVar8 = PTR_DAT_027252f8, iVar4 != 0)) {
          uVar5 = FUN_009b7e90();
          *(undefined8 *)PTR_DAT_027252f8 = uVar5;
          __cxa_guard_release(PTR_DAT_027252f0);
          pbVar6 = PTR_DAT_027252f0;
          puVar8 = PTR_DAT_027252f8;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) {
            return;
          }
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar4;
        if (iVar4 == 0) {
          return;
        }
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 == 0) {
          return;
        }
        if (*(char *)(lVar7 + 0x11) != '\0') {
          *(bool *)(param_1 + 0x158) = *(char *)(lVar7 + 0x38) == *(char *)(param_1 + 0x149);
        }
                    /* WARNING: Could not recover jumptable at 0x0119957c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
        return;
      }
      iVar9 = iVar4;
    } while (iVar4 != 0);
  }
  return;
}


