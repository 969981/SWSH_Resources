/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efaf70; name: FUN_00efaf70
 */


void FUN_00efaf70(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  
  lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_00efb1d0(param_1,lVar14);
  puVar6 = PTR_DAT_027206d0;
  puVar5 = PTR_DAT_027206c8;
  lVar10 = *param_1;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x54) == 0) {
LAB_00efb09c:
      lVar10 = *param_2;
      goto joined_r0x00efb0b4;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    iVar12 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar10 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00efb09c;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar7;
        if (iVar7 == 0) goto LAB_00efb0b0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar10 + 0x60) != 0) {
          lVar2 = *(long *)(lVar10 + 0x60) + -0x50;
        }
        lVar10 = *param_2;
        goto joined_r0x00efb1c4;
      }
      iVar12 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00efb0b0:
  lVar10 = *param_2;
joined_r0x00efb0b4:
  lVar2 = 0;
joined_r0x00efb1c4:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar2 + 0x88);
  *(long *)(lVar2 + 0x88) = lVar10;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar2 + 0x90);
  *(long *)(lVar2 + 0x90) = lVar10;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  *(long *)(lVar2 + 0x98) = param_2[2];
  lVar11 = param_2[5];
  lVar10 = param_2[3];
  lVar9 = param_2[4];
  *(undefined8 *)(lVar2 + 0xb6) = *(undefined8 *)((long)param_2 + 0x2e);
  *(long *)(lVar2 + 0xa8) = lVar9;
  *(long *)(lVar2 + 0xb0) = lVar11;
  *(long *)(lVar2 + 0xa0) = lVar10;
  lVar10 = param_2[7];
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar2 + 0xc0);
  *(long *)(lVar2 + 0xc0) = lVar10;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar10 = param_2[9];
  *(long *)(lVar2 + 200) = param_2[8];
  *(long *)(lVar2 + 0xd0) = lVar10;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (lVar14 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00efb198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  return;
}


