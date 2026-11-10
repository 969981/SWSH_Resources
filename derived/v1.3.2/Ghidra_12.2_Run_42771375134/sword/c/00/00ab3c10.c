/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab3c10; name: FUN_00ab3c10
 */


void FUN_00ab3c10(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_027198a8;
  *param_1 = (long)(PTR_DAT_027198a8 + 0x10);
  param_1[9] = (long)(puVar4 + 0x60);
  param_1[10] = (long)(puVar4 + 0xa0);
  lVar6 = *param_2;
  param_1[0x10] = lVar6;
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = param_4;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar6 = param_1[0x10];
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = param_4;
    *(undefined1 *)(param_1 + 0x12) = 0;
    puVar4 = PTR_DAT_02719548;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      puVar8 = PTR_DAT_02719550;
      iVar9 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar6 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar8 = PTR_DAT_02719550, iVar5 != 0)) {
            uVar7 = FUN_00a8c390();
            *(undefined8 *)PTR_DAT_02719550 = uVar7;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02719550;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ab3d60;
            if (plVar10 == (long *)puVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00ab3d60;
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
            FUN_00ad53c0(lVar6 + -0x50,param_3);
                    /* WARNING: Could not recover jumptable at 0x00ab3dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
            return;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
  }
LAB_00ab3d60:
  FUN_00ad53c0(0,param_3);
  return;
}


