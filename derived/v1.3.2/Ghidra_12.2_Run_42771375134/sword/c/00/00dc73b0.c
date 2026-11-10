/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc73b0; name: FUN_00dc73b0
 */


void FUN_00dc73b0(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  long *plVar10;
  
  if ((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 0x54) != 0)) {
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      puVar7 = PTR_DAT_02715288;
      pbVar9 = PTR_DAT_02715280;
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar6 + 0x58);
          if (((*pbVar9 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), pbVar9 = PTR_DAT_02715280,
             puVar7 = PTR_DAT_02715288, iVar4 != 0)) {
            uVar5 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715288 = uVar5;
            __cxa_guard_release(PTR_DAT_02715280);
            pbVar9 = PTR_DAT_02715280;
            puVar7 = PTR_DAT_02715288;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00dc74f4;
            if (plVar10 == (long *)puVar7) break;
            plVar10 = (long *)*plVar10;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar4;
          if (iVar4 == 0) goto LAB_00dc74f4;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 0x10) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00dc74f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            return;
          }
          break;
        }
        iVar8 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00dc74f4:
    DAT_00000060 = param_2 & 1;
  }
  return;
}


