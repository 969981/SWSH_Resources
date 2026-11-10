/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773730; name: FUN_00773730
 */


void FUN_00773730(undefined1 param_1 [16],long param_2)

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
  float fVar12;
  
  lVar7 = *(long *)(param_2 + 0x68);
  *(long *)(param_2 + 0x1e8) = param_1._8_8_;
  *(long *)(param_2 + 0x1e0) = param_1._0_8_;
  puVar4 = PTR_DAT_02715078;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_00773834:
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
          if (plVar10 == (long *)0x0) goto LAB_00773834;
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
          goto LAB_00773838;
        }
        lVar11 = 0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00773838;
      }
      ClearExclusiveLocal();
      lVar11 = 0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00773838:
  fVar12 = (float)FUN_00773600(param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x1e0);
  *(ulong *)(lVar11 + 0xd8) = (ulong)(uint)(fVar12 * (float)*(undefined8 *)(param_2 + 0x1e8));
  *(ulong *)(lVar11 + 0xd0) = CONCAT44(fVar12 * (float)((ulong)uVar6 >> 0x20),fVar12 * (float)uVar6)
  ;
  *(undefined1 *)(lVar11 + 0xc0) = 1;
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00773888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  return;
}


