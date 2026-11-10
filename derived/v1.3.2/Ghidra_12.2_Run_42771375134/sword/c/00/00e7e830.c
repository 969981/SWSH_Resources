/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e830; name: FUN_00e7e830
 */


void FUN_00e7e830(long *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  long local_68 [3];
  long local_50;
  long local_48;
  
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    plVar13 = (long *)*puVar2;
    plVar8 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    lVar9 = FUN_0156b190();
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)lVar9) {
        if ((plVar13[0x34] == *param_1) &&
           (uVar10 = (**(code **)(*(long *)*puVar2 + 0x88))(), (uVar10 & 1) == 0)) {
          plVar8 = plVar13 + 9;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          (**(code **)(*plVar13 + 0x10))(&local_48,plVar13);
          local_68[0] = local_48;
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
          }
          uVar10 = FUN_00e7cb20(local_68);
          if (local_68[0] != 0) {
            (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
            local_68[0] = 0;
          }
          lVar9 = local_48;
          if ((uVar10 & 1) != 0) {
            if (local_48 == 0) {
              puVar12 = &DAT_0265c178;
              goto LAB_00e7ebac;
            }
            (**(code **)(*(long *)(local_48 + 0x48) + 0x10))((long *)(local_48 + 0x48));
            FUN_006cf0a0(local_68,&DAT_0265c178);
            piVar1 = (int *)(lVar9 + 0x54);
            if (*piVar1 == 0) goto joined_r0x00e7ebb8;
            iVar7 = *piVar1;
            goto joined_r0x00e7e988;
          }
          if (local_48 == 0) {
            FUN_006cf0a0(local_68,&DAT_0265c190);
            goto joined_r0x00e7eab8;
          }
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))((long *)(local_48 + 0x48));
          FUN_006cf0a0(local_68,&DAT_0265c190);
          piVar1 = (int *)(lVar9 + 0x54);
          if (*piVar1 == 0) goto joined_r0x00e7eab8;
          iVar7 = *piVar1;
          goto joined_r0x00e7ea10;
        }
        break;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
    if (cVar5 == '\0') break;
joined_r0x00e7ea10:
    if (iVar7 == 0) {
LAB_00e7ea5c:
      plVar13 = (long *)0x0;
      goto LAB_00e7ea60;
    }
    plVar13 = *(long **)(lVar9 + 0x58);
    lVar11 = FUN_0156b190();
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00e7ea5c;
      if (plVar13 == (long *)lVar11) break;
      plVar13 = (long *)*plVar13;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7ea10;
    }
  }
  plVar13 = (long *)0x0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    plVar13 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
  }
LAB_00e7ea60:
  (**(code **)(*plVar13 + 0x188))(plVar13,local_68,0);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
joined_r0x00e7eab8:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  lVar9 = local_48;
  if (local_48 == 0) {
    puVar12 = &DAT_0265c190;
LAB_00e7ebac:
    lVar9 = local_48;
    FUN_006cf0a0(local_68,puVar12);
    goto joined_r0x00e7ebb8;
  }
  (**(code **)(*(long *)(local_48 + 0x48) + 0x10))((long *)(local_48 + 0x48));
  FUN_006cf0a0(local_68,&DAT_0265c190);
  piVar1 = (int *)(lVar9 + 0x54);
  if (*piVar1 == 0) goto joined_r0x00e7ebb8;
  iVar7 = *piVar1;
  do {
    while( true ) {
      if (iVar7 == 0) goto LAB_00e7eb68;
      plVar13 = *(long **)(lVar9 + 0x58);
      lVar11 = FUN_0156b190();
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_00e7eb68;
        if (plVar13 == (long *)lVar11) break;
        plVar13 = (long *)*plVar13;
      }
      iVar4 = *piVar1;
      if (iVar4 == iVar7) break;
      ClearExclusiveLocal();
      iVar7 = iVar4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
  } while (cVar5 != '\0');
  goto LAB_00e7ec0c;
LAB_00e7eb68:
  plVar13 = (long *)0x0;
  goto LAB_00e7eb6c;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
    if (cVar5 == '\0') break;
joined_r0x00e7e988:
    if (iVar7 == 0) goto LAB_00e7eb68;
    plVar13 = *(long **)(lVar9 + 0x58);
    lVar11 = FUN_0156b190();
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00e7eb68;
      if (plVar13 == (long *)lVar11) break;
      plVar13 = (long *)*plVar13;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7e988;
    }
  }
LAB_00e7ec0c:
  plVar13 = (long *)0x0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    plVar13 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
  }
LAB_00e7eb6c:
  (**(code **)(*plVar13 + 400))(plVar13,local_68,param_2);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
joined_r0x00e7ebb8:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*plVar8 + 0x18))(plVar8);
  return;
}


