/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc54d0; name: FUN_00cc54d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cc54d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long local_48;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    FUN_00cc5730(&local_48,0);
    lVar8 = local_48;
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_00cc5730(&local_48,lVar8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = local_48;
  }
  uVar5 = param_2;
  lVar7 = lVar8;
  if ((lVar8 != 0) && (uVar5 = param_2, *(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    local_48 = lVar8;
    do {
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        lVar6 = FUN_00cc60b0();
        while( true ) {
          uVar5 = param_2;
          lVar7 = local_48;
          if (plVar9 == (long *)0x0) goto joined_r0x00cc5634;
          if (plVar9 == (long *)lVar6) break;
          plVar9 = (long *)*plVar9;
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
          lVar8 = *(long *)(lVar8 + 0x60);
          uVar5 = param_2;
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x38) = param_2;
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
            uVar5 = _DAT_00000088;
            lVar7 = local_48;
          }
          goto joined_r0x00cc5634;
        }
        iVar10 = iVar2;
        uVar5 = param_2;
        if (iVar2 == 0) goto joined_r0x00cc5634;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
      uVar5 = param_2;
    } while (iVar2 != 0);
  }
joined_r0x00cc5634:
  _DAT_00000088 = uVar5;
  uVar5 = param_3;
  lVar8 = lVar7;
  if ((lVar7 != 0) && (uVar5 = param_3, *(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    local_48 = lVar7;
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar6 = FUN_00cc60b0();
        while( true ) {
          uVar5 = param_3;
          lVar8 = local_48;
          if (plVar9 == (long *)0x0) goto joined_r0x00cc5658;
          if (plVar9 == (long *)lVar6) break;
          plVar9 = (long *)*plVar9;
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
          lVar7 = *(long *)(lVar7 + 0x60);
          uVar5 = param_3;
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x40) = param_3;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            uVar5 = _DAT_00000090;
            lVar8 = local_48;
          }
          goto joined_r0x00cc5658;
        }
        iVar10 = iVar2;
        uVar5 = param_3;
        if (iVar2 == 0) goto joined_r0x00cc5658;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
      uVar5 = param_3;
    } while (iVar2 != 0);
  }
joined_r0x00cc5658:
  _DAT_00000090 = uVar5;
  uVar5 = param_4;
  local_48 = lVar8;
  if ((lVar8 != 0) && (uVar5 = param_4, *(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_00cc60b0();
        while( true ) {
          uVar5 = param_4;
          if (plVar9 == (long *)0x0) goto joined_r0x00cc56ec;
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
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
          lVar8 = *(long *)(lVar8 + 0x60);
          uVar5 = param_4;
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x50) = param_4;
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
            uVar5 = _DAT_000000a0;
          }
          goto joined_r0x00cc56ec;
        }
        iVar10 = iVar2;
        uVar5 = param_4;
        if (iVar2 == 0) goto joined_r0x00cc56ec;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
      uVar5 = param_4;
    } while (iVar2 != 0);
  }
joined_r0x00cc56ec:
  _DAT_000000a0 = uVar5;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


