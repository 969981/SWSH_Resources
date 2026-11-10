/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df36e0; name: FUN_00df36e0
 */


undefined8 FUN_00df36e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long local_50;
  long local_48;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_38);
  local_48 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar5 = FUN_00e7c8b0(&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    uVar7 = 1;
    lVar8 = local_48;
    goto joined_r0x00df38d4;
  }
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
  if ((local_48 == 0) || (*(int *)(local_48 + 0x54) == 0)) {
LAB_00df3854:
    iVar9 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar9 + 1;
    if (iVar9 < 0x3d) goto LAB_00df38b4;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    local_50 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00e7b6b0(&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    uVar7 = 1;
  }
  else {
    if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar9 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar8 + 0x58);
          lVar6 = FUN_00c781c0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00df3848;
            if (plVar10 == (long *)lVar6) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              uVar5 = FUN_0069d340(lVar8 + -0x50);
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
              goto joined_r0x00df3840;
            }
            goto LAB_00df3848;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_00df3848;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00df3848:
    uVar5 = FUN_0069d340(0);
joined_r0x00df3840:
    if ((uVar5 & 1) == 0) goto LAB_00df3854;
LAB_00df38b4:
    uVar7 = 0;
  }
  lVar8 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
    lVar8 = local_48;
  }
joined_r0x00df38d4:
  local_48 = lVar8;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return uVar7;
}


