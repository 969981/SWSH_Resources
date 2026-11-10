/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102f030; name: FUN_0102f030
 */


void FUN_0102f030(long *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = *(long *)(param_1[0xc] + 0xa0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
LAB_0102f06c:
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar5 = *(int *)(lVar8 + 0x54);
      do {
        plVar10 = *(long **)(lVar8 + 0x58);
        lVar6 = FUN_01031780();
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_0102f210;
          if (plVar10 == (long *)lVar6) break;
          plVar10 = (long *)*plVar10;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar5) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0102f0cc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar5 = iVar2;
        if (iVar2 == 0) break;
      } while( true );
    }
    goto LAB_0102f210;
  }
  lVar6 = 0;
  bVar4 = true;
LAB_0102f238:
  do {
    lVar8 = param_1[0xc];
    uVar7 = 3;
    switch(*(undefined4 *)(lVar8 + 0x40)) {
    case 1:
      iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar5 == 1) {
        lVar8 = param_1[0xc];
        uVar7 = 2;
LAB_0102f2cc:
        *(undefined4 *)(lVar8 + 0x40) = uVar7;
      }
    default:
switchD_0102f258_default:
joined_r0x0102f2a4:
      if (bVar4) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0102f304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      return;
    case 3:
      if (*(int *)(lVar8 + 0x44) != 1) goto switchD_0102f258_default;
      (**(code **)(*param_1 + 0x40))(param_1);
      goto joined_r0x0102f2a4;
    case 4:
      uVar7 = 5;
    case 2:
      *(undefined4 *)(lVar8 + 0x40) = uVar7;
      break;
    case 5:
      iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar5 != 1) goto switchD_0102f258_default;
      lVar8 = param_1[0xc];
      uVar7 = 6;
      goto LAB_0102f2cc;
    }
  } while( true );
LAB_0102f0cc:
  if (*(long *)(lVar8 + 0x60) == 0) {
LAB_0102f210:
    bVar4 = false;
    lVar6 = lVar8;
    goto LAB_0102f238;
  }
  (**(code **)(*(long *)(*(long *)(lVar8 + 0x60) + -8) + 0x18))();
  iVar5 = *piVar1;
  do {
    while( true ) {
      if (iVar5 == 0) goto LAB_0102f130;
      plVar10 = *(long **)(lVar8 + 0x58);
      lVar6 = FUN_01031780();
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_0102f130;
        if (plVar10 == (long *)lVar6) break;
        plVar10 = (long *)*plVar10;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) break;
      ClearExclusiveLocal();
      iVar5 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar5 = iVar2;
  } while (cVar3 != '\0');
  lVar6 = *(long *)(lVar8 + 0x60);
  if (lVar6 == 0) {
LAB_0102f130:
    FUN_0102f030(0,param_2 + 1);
  }
  else {
    FUN_0102f030(lVar6 + -0x50,param_2 + 1);
    (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
  }
  iVar5 = *piVar1;
  do {
    while( true ) {
      plVar10 = *(long **)(lVar8 + 0x58);
      lVar6 = FUN_01031780();
      for (; plVar10 != (long *)lVar6; plVar10 = (long *)*plVar10) {
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) break;
      ClearExclusiveLocal();
      iVar5 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar5 = iVar2;
  } while (cVar3 != '\0');
  lVar9 = *(long *)(lVar8 + 0x60);
  lVar6 = 0;
  if (lVar9 != 0) {
    lVar6 = lVar9 + -0x50;
  }
  lVar11 = *(long *)(*(long *)(lVar6 + 0x60) + 0x98);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar6 = 0;
  bVar4 = true;
  lVar8 = lVar11;
  if (lVar11 == 0) goto LAB_0102f238;
  goto LAB_0102f06c;
}


