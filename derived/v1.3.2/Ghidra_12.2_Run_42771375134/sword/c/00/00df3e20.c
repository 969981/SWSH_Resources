/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df3e20; name: FUN_00df3e20
 */


bool FUN_00df3e20(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long local_50;
  long local_48;
  long local_38;
  
  plVar7 = *(long **)(param_1 + 0x70);
  uVar4 = FUN_015772a0(plVar7 + 10);
  if ((plVar7 == (long *)0x0) || ((uVar4 & 1) == 0)) {
LAB_00df3efc:
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return true;
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_48);
  local_38 = local_48;
  local_48 = 0;
  uVar4 = FUN_00e7c3a0(&local_38,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if ((uVar4 & 1) != 0) goto LAB_00df3efc;
  }
  else {
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_38);
  local_50 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00e7b880(&local_48,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar8 = local_48;
  if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
    if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar9 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar8 + 0x58);
          lVar5 = FUN_00c781c0();
          while( true ) {
            if (plVar7 == (long *)0x0) goto LAB_00df405c;
            if (plVar7 == (long *)lVar5) break;
            plVar7 = (long *)*plVar7;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              uVar4 = FUN_0069d340(lVar8 + -0x50);
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
              goto joined_r0x00df3ff8;
            }
            goto LAB_00df405c;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_00df405c;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00df405c:
    uVar4 = FUN_0069d340(0);
joined_r0x00df3ff8:
    if ((uVar4 & 1) != 0) {
      bVar6 = false;
      goto joined_r0x00df4014;
    }
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  bVar6 = 0x3c < iVar2;
  iVar9 = 0;
  if (iVar2 < 0x3d) {
    iVar9 = iVar2 + 1;
  }
  *(int *)(param_1 + 0xe0) = iVar9;
joined_r0x00df4014:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return bVar6;
}


