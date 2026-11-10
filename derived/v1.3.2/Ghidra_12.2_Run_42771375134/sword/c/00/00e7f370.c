/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7f370; name: FUN_00e7f370
 */


void FUN_00e7f370(long *param_1)

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
  long local_60 [3];
  long local_48;
  long local_38;
  
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
          (**(code **)(*plVar13 + 0x10))(&local_38,plVar13);
          local_60[0] = local_38;
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
          }
          uVar10 = FUN_00e7cb20(local_60);
          if (local_60[0] != 0) {
            (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
            local_60[0] = 0;
          }
          lVar9 = local_38;
          if ((uVar10 & 1) == 0) {
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x10))((long *)(local_38 + 0x48));
              FUN_006cf0a0(local_60,&DAT_0265c1c0);
              piVar1 = (int *)(lVar9 + 0x54);
              if (*piVar1 == 0) goto joined_r0x00e7f5ec;
              iVar7 = *piVar1;
              goto joined_r0x00e7f56c;
            }
            puVar12 = &DAT_0265c1c0;
          }
          else {
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x10))((long *)(local_38 + 0x48));
              FUN_006cf0a0(local_60,&DAT_0265c1a8);
              piVar1 = (int *)(lVar9 + 0x54);
              if (*piVar1 == 0) goto joined_r0x00e7f5ec;
              iVar7 = *piVar1;
              goto joined_r0x00e7f4c4;
            }
            puVar12 = &DAT_0265c1a8;
          }
          FUN_006cf0a0(local_60,puVar12);
          goto joined_r0x00e7f5ec;
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
joined_r0x00e7f56c:
    if (iVar7 == 0) {
LAB_00e7f5b8:
      plVar13 = (long *)0x0;
      goto LAB_00e7f5bc;
    }
    plVar13 = *(long **)(lVar9 + 0x58);
    lVar11 = FUN_0156b190();
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00e7f5b8;
      if (plVar13 == (long *)lVar11) break;
      plVar13 = (long *)*plVar13;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7f56c;
    }
  }
  plVar13 = (long *)0x0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    plVar13 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
  }
LAB_00e7f5bc:
  (**(code **)(*plVar13 + 400))(plVar13,local_60,1);
  goto joined_r0x00e7f5d4;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar4;
    if (cVar5 == '\0') break;
joined_r0x00e7f4c4:
    if (iVar7 == 0) {
LAB_00e7f510:
      plVar13 = (long *)0x0;
      goto LAB_00e7f514;
    }
    plVar13 = *(long **)(lVar9 + 0x58);
    lVar11 = FUN_0156b190();
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00e7f510;
      if (plVar13 == (long *)lVar11) break;
      plVar13 = (long *)*plVar13;
    }
    iVar4 = *piVar1;
    if (iVar4 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar4;
      goto joined_r0x00e7f4c4;
    }
  }
  plVar13 = (long *)0x0;
  if (*(long *)(lVar9 + 0x60) != 0) {
    plVar13 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
  }
LAB_00e7f514:
  (**(code **)(*plVar13 + 400))(plVar13,local_60,0);
joined_r0x00e7f5d4:
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
joined_r0x00e7f5ec:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  (**(code **)(*plVar8 + 0x18))(plVar8);
  return;
}


