/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef2ca0; name: FUN_00ef2ca0
 */


void FUN_00ef2ca0(long *param_1,void *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_00ef3180(param_1,lVar12);
  puVar5 = PTR_DAT_02720640;
  puVar4 = PTR_DAT_02720638;
  lVar9 = *param_1;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_00ef2dcc:
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ef2dcc;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB_00ef2dd0;
        }
        lVar13 = 0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ef2dd0;
      }
      ClearExclusiveLocal();
      lVar13 = 0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ef2dd0:
  memcpy((void *)(lVar13 + 0x90),param_2,0xd0);
  *(undefined8 *)(lVar13 + 0x160) = *(undefined8 *)((long)param_2 + 0xd0);
  *(undefined8 *)(lVar13 + 0x168) = *(undefined8 *)((long)param_2 + 0xd8);
  *(undefined8 *)(lVar13 + 0x170) = *(undefined8 *)((long)param_2 + 0xe0);
  lVar9 = *(long *)((long)param_2 + 0xe8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar13 + 0x178);
  *(long *)(lVar13 + 0x178) = lVar9;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(undefined1 *)(lVar13 + 0x180) = *(undefined1 *)((long)param_2 + 0xf0);
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef2e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


