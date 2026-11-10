/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee5f90; name: FUN_00ee5f90
 */


void FUN_00ee5f90(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  byte *pbVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  
  FUN_00ee3ff0(*param_2);
  lVar13 = *param_1;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
LAB_00ee60a8:
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar9 = PTR_DAT_02720060;
    pbVar10 = PTR_DAT_02720058;
    iVar11 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar13 + 0x58);
        if ((*pbVar10 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_02720058);
          pbVar10 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          if (iVar6 != 0) {
            uVar7 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar7;
            __cxa_guard_release(PTR_DAT_02720058);
            pbVar10 = PTR_DAT_02720058;
            puVar9 = PTR_DAT_02720060;
          }
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee60a8;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar11) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar8 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_00ee60ac;
        }
        lVar8 = 0;
        iVar11 = iVar6;
        if (iVar6 == 0) goto LAB_00ee60ac;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee60ac:
  *(undefined4 *)(lVar8 + 300) = 7;
  *(undefined8 *)(lVar8 + 0x88) = *param_3;
  uVar7 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[4];
  *(undefined8 *)(lVar8 + 0xa0) = param_3[3];
  *(undefined8 *)(lVar8 + 0xa8) = uVar3;
  *(undefined8 *)(lVar8 + 0x90) = uVar7;
  *(undefined8 *)(lVar8 + 0x98) = uVar2;
  *(undefined4 *)(lVar8 + 0x138) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(lVar8 + 0x140) = 1;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ee60f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  return;
}


