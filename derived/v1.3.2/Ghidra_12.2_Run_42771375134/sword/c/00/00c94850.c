/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c94850; name: FUN_00c94850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c94850(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  long local_40;
  long *local_38;
  
  FUN_00c71060();
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar6 = 0;
  do {
    FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x2ef + lVar6));
    FUN_00c825a0(&local_38);
    if ((local_38 != (long *)0x0) && ((**(code **)(*local_38 + 0x100))(), local_38 != (long *)0x0))
    {
      (**(code **)(local_38[9] + 0x18))();
      local_38 = (long *)0x0;
    }
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0xb4);
  if (*(long *)(param_1 + 0x608) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x608) + 0x54) == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar9 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
        if ((uVar5 & 1) == 0) goto LAB_00c94930;
        iVar2 = *piVar1;
        if (iVar2 != iVar9) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = 0;
          if (*(long *)(lVar6 + 0x60) != 0) {
            lVar7 = *(long *)(lVar6 + 0x60) + -0x50;
          }
          plVar8 = *(long **)(param_1 + 0x608);
          goto joined_r0x00c9497c;
        }
        iVar9 = iVar2;
        if (iVar2 == 0) goto LAB_00c94930;
      }
      ClearExclusiveLocal();
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c94930:
  lVar7 = 0;
  plVar8 = *(long **)(param_1 + 0x608);
joined_r0x00c9497c:
  if ((plVar8 == (long *)0x0) ||
     ((**(code **)(plVar8[9] + 0x10))(), *(long *)(param_1 + 0x608) == 0)) {
    local_40 = 0;
    uVar10 = _DAT_00000070;
    local_38 = plVar8;
    if (plVar8 == (long *)0x0) goto LAB_00c949a0;
  }
  else {
    FUN_00c738a0(&local_40);
    uVar10 = *(undefined4 *)(local_40 + 0x70);
  }
  local_38 = plVar8;
  (**(code **)(plVar8[9] + 0x10))();
LAB_00c949a0:
  FUN_00ca9590(lVar7,0,&local_38,uVar10);
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x18))();
    local_38 = (long *)0x0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar6 = *(long *)(param_1 + 0x608);
  *(undefined8 *)(param_1 + 0x608) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


