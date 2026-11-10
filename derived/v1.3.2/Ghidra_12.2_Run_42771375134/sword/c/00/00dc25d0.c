/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc25d0; name: FUN_00dc25d0
 */


void FUN_00dc25d0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_38 [8];
  
  puVar4 = PTR_DAT_02715078;
  lVar11 = *param_2;
  lVar13 = *(long *)(lVar11 + 0x68);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
LAB_00dc26d8:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar8 = PTR_DAT_02715080;
    iVar9 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar13 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar4);
          puVar8 = PTR_DAT_02715080;
          if (iVar6 != 0) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00dc26d8;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar12 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_00dc26dc;
        }
        lVar12 = 0;
        iVar9 = iVar6;
        if (iVar6 == 0) goto LAB_00dc26dc;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00dc26dc:
  lVar13 = FUN_007959b0(lVar12,auStack_38);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x4c8) & 1) != 0)) {
    bVar5 = FUN_0069c820(*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],lVar11,param_1[1]);
    *(byte *)*param_1 = *(byte *)*param_1 & bVar5;
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
  }
  return;
}


