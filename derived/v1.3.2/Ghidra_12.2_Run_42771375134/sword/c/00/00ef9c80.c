/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef9c80; name: FUN_00ef9c80
 */


void FUN_00ef9c80(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  
  lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_00ef9ed0(param_1,lVar14);
  puVar6 = PTR_DAT_027206b0;
  lVar10 = *param_1;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x54) == 0) {
LAB_00ef9dbc:
      lVar10 = *param_2;
      goto joined_r0x00ef9dd4;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    puVar12 = PTR_DAT_027206b8;
    iVar13 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar15 = *(long **)(lVar10 + 0x58);
        if (((*puVar6 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(puVar6), puVar12 = PTR_DAT_027206b8, iVar7 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_027206b8 = uVar8;
          __cxa_guard_release(puVar6);
          puVar12 = PTR_DAT_027206b8;
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00ef9dbc;
          if (plVar15 == (long *)puVar12) break;
          plVar15 = (long *)*plVar15;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar13) break;
        ClearExclusiveLocal();
        iVar13 = iVar7;
        if (iVar7 == 0) goto LAB_00ef9dd0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar10 + 0x60) != 0) {
          lVar2 = *(long *)(lVar10 + 0x60) + -0x50;
        }
        lVar10 = *param_2;
        goto joined_r0x00ef9ec0;
      }
      iVar13 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ef9dd0:
  lVar10 = *param_2;
joined_r0x00ef9dd4:
  lVar2 = 0;
joined_r0x00ef9ec0:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar2 + 0x90);
  *(long *)(lVar2 + 0x90) = lVar10;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  *(int *)(lVar2 + 0x98) = (int)param_2[1];
  pcVar11 = *(code **)(lVar2 + 0xa8);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(long *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    (*pcVar11)(lVar2 + 0xc0);
  }
  if ((code *)param_2[4] != (code *)0x0) {
    (*(code *)param_2[4])(param_2 + 6,lVar2 + 0xc0);
    lVar10 = param_2[2];
    lVar9 = param_2[3];
    lVar3 = param_2[5];
    *(long *)(lVar2 + 0xb0) = param_2[4];
    *(long *)(lVar2 + 0xb8) = lVar3;
    *(long *)(lVar2 + 0xa0) = lVar10;
    *(long *)(lVar2 + 0xa8) = lVar9;
  }
  lVar10 = param_2[0x12];
  *(undefined1 *)(lVar2 + 0x124) = *(undefined1 *)((long)param_2 + 0x94);
  *(int *)(lVar2 + 0x120) = (int)lVar10;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (lVar14 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef9e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  return;
}


