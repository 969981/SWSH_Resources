/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a7ff0; name: FUN_014a7ff0
 */


float FUN_014a7ff0(float param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_38 [8];
  
  puVar4 = PTR_DAT_02715078;
  lVar11 = *(long *)(param_2 + 0x68);
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_014a80fc:
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar7 = PTR_DAT_02715080;
    iVar8 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar11 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar7 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(puVar4);
            puVar7 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_014a80fc;
          if (plVar9 == (long *)puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar8) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar10 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB_014a8100;
        }
        lVar10 = 0;
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_014a8100;
      }
      ClearExclusiveLocal();
      lVar10 = 0;
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_014a8100:
  uVar6 = FUN_00c89da0(lVar10,auStack_38);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  fVar12 = *(float *)(*(long *)(param_2 + 0x270) + 0x70);
  fVar14 = *(float *)(*(long *)(param_2 + 0x270) + 0xf0);
  fVar13 = (float)FUN_00773540(uVar6,1);
  return ((param_1 / fVar12) * fVar14) / fVar13;
}


