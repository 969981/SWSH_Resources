/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc84d0; name: FUN_00dc84d0
 */


void FUN_00dc84d0(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  if (*(int *)(param_1 + 0x78) == 2) {
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      puVar8 = PTR_DAT_02715288;
      pbVar10 = PTR_DAT_02715280;
      iVar9 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar6 + 0x58);
          if (((*pbVar10 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), pbVar10 = PTR_DAT_02715280,
             puVar8 = PTR_DAT_02715288, iVar4 != 0)) {
            uVar5 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715288 = uVar5;
            __cxa_guard_release(PTR_DAT_02715280);
            pbVar10 = PTR_DAT_02715280;
            puVar8 = PTR_DAT_02715288;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00dc873c;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar4;
          if (iVar4 == 0) goto LAB_00dc873c;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x164) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00dc8738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            return;
          }
          break;
        }
        iVar9 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00dc873c:
    puVar7 = (undefined4 *)&DAT_000001b4;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 1) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      puVar8 = PTR_DAT_02715298;
      pbVar10 = PTR_DAT_02715290;
      iVar9 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar6 + 0x58);
          if (((*pbVar10 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), pbVar10 = PTR_DAT_02715290,
             puVar8 = PTR_DAT_02715298, iVar4 != 0)) {
            uVar5 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715298 = uVar5;
            __cxa_guard_release(PTR_DAT_02715290);
            pbVar10 = PTR_DAT_02715290;
            puVar8 = PTR_DAT_02715298;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00dc8714;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar4;
          if (iVar4 == 0) goto LAB_00dc8714;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x160) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00dc8710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            return;
          }
          break;
        }
        iVar9 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00dc8714:
    puVar7 = (undefined4 *)&DAT_000001b0;
  }
  *puVar7 = param_2;
  return;
}


