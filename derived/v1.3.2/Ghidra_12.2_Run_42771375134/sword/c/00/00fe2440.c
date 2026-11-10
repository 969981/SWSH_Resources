/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe2440; name: FUN_00fe2440
 */


void FUN_00fe2440(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long local_48;
  
  (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_48);
  if (local_48 != 0) {
    piVar1 = (int *)(local_48 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar7 = iVar2, iVar2 != 0) {
        while( true ) {
          plVar8 = *(long **)(local_48 + 0x58);
          lVar6 = FUN_00d8bd10();
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_00fe24e8;
            if (plVar8 == (long *)lVar6) break;
            plVar8 = (long *)*plVar8;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar7) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar6 = 0;
            if (*(long *)(local_48 + 0x60) != 0) {
              lVar6 = *(long *)(local_48 + 0x60) + -0x50;
            }
            uVar3 = *(uint *)(param_1 + 0x14c);
            goto joined_r0x00fe2750;
          }
          iVar7 = iVar2;
          if (iVar2 == 0) goto LAB_00fe24e8;
        }
        ClearExclusiveLocal();
      }
LAB_00fe24e8:
      lVar6 = 0;
      uVar3 = *(uint *)(param_1 + 0x14c);
joined_r0x00fe2750:
      if (uVar3 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00fe2518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_02162338 + *(int *)(&DAT_02162338 + (ulong)uVar3 * 4)))();
        return;
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
  }
  return;
}


