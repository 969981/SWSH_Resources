/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e437f0; name: FUN_00e437f0
 */


void FUN_00e437f0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_28 [8];
  
  puVar4 = PTR_DAT_02715078;
  lVar7 = *(long *)(param_1 + 0x68);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_00e438f0:
    lVar11 = 0;
  }
  else {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02715080;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar7 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00e438f0;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar11 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          goto LAB_00e438f4;
        }
        lVar11 = 0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00e438f4;
      }
      ClearExclusiveLocal();
      lVar11 = 0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00e438f4:
  uVar6 = FUN_007959b0(lVar11,auStack_28);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


