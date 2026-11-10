/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9a590; name: FUN_00c9a590
 */


void FUN_00c9a590(undefined8 param_1,ulong param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_0271c2b0;
  if ((*param_3 != 0) && (*(int *)(*param_3 + 0x54) != 0)) {
    lVar7 = *param_3;
    if ((param_2 & 1) == 0) {
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_00c9a7ac:
        plVar11 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar7 + 0x54);
        puVar9 = PTR_DAT_0271c2b8;
        iVar10 = *(int *)(lVar7 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar7 + 0x58);
            if ((*puVar4 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar4);
              puVar9 = PTR_DAT_0271c2b8;
              if (iVar5 != 0) {
                uVar6 = FUN_00c72b60();
                *(undefined8 *)PTR_DAT_0271c2b8 = uVar6;
                __cxa_guard_release(puVar4);
                puVar9 = PTR_DAT_0271c2b8;
              }
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00c9a7ac;
              if (plVar11 == (long *)puVar9) break;
              plVar11 = (long *)*plVar11;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar10) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar7 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar7 + 0x60) + -0x50);
              }
              goto LAB_00c9a7b0;
            }
            plVar11 = (long *)0x0;
            iVar10 = iVar5;
            if (iVar5 == 0) goto LAB_00c9a7b0;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar10 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00c9a7b0:
      pcVar8 = *(code **)(*plVar11 + 0x50);
    }
    else {
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_00c9a6ac:
        plVar11 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar7 + 0x54);
        puVar9 = PTR_DAT_0271c2b8;
        iVar10 = *(int *)(lVar7 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar7 + 0x58);
            if ((*puVar4 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar4);
              puVar9 = PTR_DAT_0271c2b8;
              if (iVar5 != 0) {
                uVar6 = FUN_00c72b60();
                *(undefined8 *)PTR_DAT_0271c2b8 = uVar6;
                __cxa_guard_release(puVar4);
                puVar9 = PTR_DAT_0271c2b8;
              }
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00c9a6ac;
              if (plVar11 == (long *)puVar9) break;
              plVar11 = (long *)*plVar11;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar10) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar7 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar7 + 0x60) + -0x50);
              }
              goto LAB_00c9a6b0;
            }
            plVar11 = (long *)0x0;
            iVar10 = iVar5;
            if (iVar5 == 0) goto LAB_00c9a6b0;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar10 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00c9a6b0:
      pcVar8 = *(code **)(*plVar11 + 0x48);
    }
    (*pcVar8)(plVar11,param_4,param_5);
    if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c9a7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
      return;
    }
  }
  return;
}


