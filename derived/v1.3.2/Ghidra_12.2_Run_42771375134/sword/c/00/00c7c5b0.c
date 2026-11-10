/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7c5b0; name: FUN_00c7c5b0
 */


uint FUN_00c7c5b0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_0271c218;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x54) == 0)) {
    uVar6 = 0;
  }
  else {
    lVar11 = *param_2;
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_00c7c6c0:
      plVar10 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0x54);
      puVar8 = PTR_DAT_0271c220;
      iVar9 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar11 + 0x58);
          if ((*puVar4 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(puVar4);
            puVar8 = PTR_DAT_0271c220;
            if (iVar5 != 0) {
              uVar7 = FUN_00c72b60();
              *(undefined8 *)PTR_DAT_0271c220 = uVar7;
              __cxa_guard_release(puVar4);
              puVar8 = PTR_DAT_0271c220;
            }
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00c7c6c0;
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
            plVar10 = (long *)0x0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              plVar10 = (long *)(*(long *)(lVar11 + 0x60) + -0x50);
            }
            goto LAB_00c7c6c4;
          }
          plVar10 = (long *)0x0;
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00c7c6c4;
        }
        ClearExclusiveLocal();
        plVar10 = (long *)0x0;
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00c7c6c4:
    uVar6 = (**(code **)(*plVar10 + 0x80))(plVar10,param_3);
    if (plVar10 != (long *)0x0) {
      (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
    }
  }
  return uVar6 & 1;
}


