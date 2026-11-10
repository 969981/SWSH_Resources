/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef83f0; name: FUN_00ef83f0
 */


void FUN_00ef83f0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_00ef8580(param_1,lVar6);
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar9 + 0x58);
        lVar5 = FUN_00ef8d90();
        while( true ) {
          if (plVar8 == (long *)0x0) goto joined_r0x00ef84c8;
          if (plVar8 == (long *)lVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar5 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar5 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto joined_r0x00ef856c;
        }
        iVar10 = iVar2;
        if (iVar2 == 0) goto joined_r0x00ef84c8;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
joined_r0x00ef84c8:
  lVar5 = 0;
joined_r0x00ef856c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar5 + 0x88);
  *(long *)(lVar5 + 0x88) = lVar7;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef8538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


