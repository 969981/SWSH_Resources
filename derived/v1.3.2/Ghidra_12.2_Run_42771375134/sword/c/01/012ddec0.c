/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ddec0; name: FUN_012ddec0
 */


void FUN_012ddec0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  plVar9 = (long *)(param_1 + 0xa0);
  plVar1 = plVar9;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar1 = (long *)(param_1 + 0xa8);
  }
  if (*plVar1 != -0x3572234a25b959fc) {
    lVar6 = FUN_012de5d0(param_1);
    if (lVar6 == 0) {
      iVar5 = FUN_006e5970(plVar9);
      if (iVar5 == 1) goto LAB_012ddf3c;
    }
    else {
      lVar6 = FUN_006e2f20(lVar6,plVar9);
      if (0 < lVar6) {
LAB_012ddf3c:
        plVar1 = (long *)(param_1 + 0x220);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar10 = *(undefined8 *)(param_1 + 0x100);
        uVar7 = FUN_012de5d0(param_1);
        FUN_00a8a490(&local_c0,*(undefined8 *)PTR_DAT_02710788,1,plVar9,0,uVar10,uVar7);
        if (*(long *)(param_1 + 0x248) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x248) = 0;
        }
        *(undefined1 **)(param_1 + 0x248) = local_c0;
        if (local_c0 != (undefined1 *)0x0) {
          plVar9 = (long *)(local_c0 + 0x48);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          if ((*(long *)(param_1 + 0x250) != 0) || (*(long *)(param_1 + 0x2d0) != 0)) {
            FUN_006e1e70(local_c0,param_1 + 0x240,1);
          }
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        local_c0 = &LAB_012dea50;
        local_b8 = FUN_012dea70;
        local_b0 = FUN_012dea80;
        local_a8 = &LAB_012dea90;
        pcVar8 = *(code **)(param_1 + 600);
        alStack_a0[0] = param_1;
        if (pcVar8 == (code *)0x0) {
LAB_012de04c:
          (*local_b0)(alStack_a0,param_1 + 0x270);
          *(undefined1 **)(param_1 + 0x268) = local_a8;
          *(code **)(param_1 + 600) = local_b8;
          *(code **)(param_1 + 0x260) = local_b0;
          *(undefined8 *)(param_1 + 0x250) = local_c0;
        }
        else {
          *(undefined8 *)(param_1 + 0x260) = 0;
          *(undefined8 *)(param_1 + 0x268) = 0;
          *(undefined8 *)(param_1 + 0x250) = 0;
          *(undefined8 *)(param_1 + 600) = 0;
          (*pcVar8)(param_1 + 0x270);
          if (local_b0 != (code *)0x0) goto LAB_012de04c;
        }
        lVar6 = *(long *)(param_1 + 0x248);
        if (lVar6 != 0) {
          plVar9 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_006e1e70(lVar6,param_1 + 0x240,1);
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        pcVar8 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (code *)0x0;
          local_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar8)(alStack_a0);
        }
      }
    }
  }
  plVar9 = (long *)(param_1 + 0xd0);
  plVar1 = plVar9;
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar1 = (long *)(param_1 + 0xd8);
  }
  if (*plVar1 == -0x3572234a25b959fc) {
    return;
  }
  lVar6 = FUN_012de5d0(param_1);
  if (lVar6 == 0) {
    iVar5 = FUN_006e5970(plVar9);
    if (iVar5 != 1) {
      return;
    }
  }
  else {
    lVar6 = FUN_006e2f20(lVar6,plVar9);
    if (lVar6 < 1) {
      return;
    }
  }
  plVar1 = (long *)(param_1 + 0x220);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = *(undefined8 *)(param_1 + 0x100);
  uVar7 = FUN_012de5d0(param_1);
  FUN_00c8ca30(&local_c0,*(undefined8 *)PTR_DAT_02710788,1,plVar9,0,uVar10,uVar7);
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  puVar4 = local_c0;
  *(undefined1 **)(param_1 + 0x358) = local_c0;
  if (local_c0 != (undefined1 *)0x0) {
    plVar9 = (long *)(local_c0 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if ((*(long *)(param_1 + 0x360) != 0) || (*(long *)(param_1 + 0x3e0) != 0)) {
      FUN_006e1e70(puVar4,param_1 + 0x350,1);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_c0 = &LAB_012deaa0;
  local_b8 = FUN_012deac0;
  local_b0 = FUN_012dead0;
  local_a8 = &LAB_012deae0;
  pcVar8 = *(code **)(param_1 + 0x368);
  alStack_a0[0] = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    (*pcVar8)(param_1 + 0x380);
    if (local_b0 == (code *)0x0) goto LAB_012de258;
  }
  (*local_b0)(alStack_a0,param_1 + 0x380);
  *(undefined1 **)(param_1 + 0x378) = local_a8;
  *(code **)(param_1 + 0x368) = local_b8;
  *(code **)(param_1 + 0x370) = local_b0;
  *(undefined8 *)(param_1 + 0x360) = local_c0;
LAB_012de258:
  lVar6 = *(long *)(param_1 + 0x358);
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_006e1e70(lVar6,param_1 + 0x350,1);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  return;
}


