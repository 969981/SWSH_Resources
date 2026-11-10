/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ba250; name: FUN_013ba250
 */


void FUN_013ba250(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    puVar6 = PTR_DAT_02729068;
    pbVar8 = PTR_DAT_02729060;
    iVar7 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar10 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02729060), pbVar8 = PTR_DAT_02729060,
           puVar6 = PTR_DAT_02729068, iVar4 != 0)) {
          uVar5 = FUN_009b7e90();
          *(undefined8 *)PTR_DAT_02729068 = uVar5;
          __cxa_guard_release(PTR_DAT_02729060);
          pbVar8 = PTR_DAT_02729060;
          puVar6 = PTR_DAT_02729068;
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_013ba380;
          if (plVar9 == (long *)puVar6) break;
          plVar9 = (long *)*plVar9;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar7) break;
        ClearExclusiveLocal();
        iVar7 = iVar4;
        if (iVar4 == 0) goto LAB_013ba380;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x60);
        if (lVar10 != 0) {
          FUN_013c00a0(lVar10 + -0x50);
                    /* WARNING: Could not recover jumptable at 0x013ba37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
          return;
        }
        break;
      }
      iVar7 = iVar4;
    } while (iVar4 != 0);
  }
LAB_013ba380:
  FUN_013c00a0(0);
  return;
}


