/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4540; name: FUN_00df4540
 */


void FUN_00df4540(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar8 = local_38;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_58);
  local_50 = local_58;
  local_58 = 0;
  FUN_00c7a400(&local_48,lVar8,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar8 = local_48;
  if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
    if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar9 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar8 + 0x58);
          lVar6 = FUN_00c781c0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00df4680;
            if (plVar10 == (long *)lVar6) break;
            plVar10 = (long *)*plVar10;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar9) break;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              FUN_0069c580(lVar8 + -0x50,1);
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
              cVar2 = *(char *)(param_1 + 0x109);
              goto joined_r0x00df4678;
            }
            goto LAB_00df4680;
          }
          iVar9 = iVar3;
          if (iVar3 == 0) goto LAB_00df4680;
        }
        ClearExclusiveLocal();
        iVar9 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00df4680:
    FUN_0069c580(0,1);
  }
  cVar2 = *(char *)(param_1 + 0x109);
joined_r0x00df4678:
  if (cVar2 != '\0') {
    plVar10 = *(long **)(*(long *)(param_1 + 0x70) + 0x1f0);
    plVar5 = *(long **)(*(long *)(param_1 + 0x70) + 0x1e8);
    do {
      if (plVar5 == plVar10) goto joined_r0x00df4714;
      lVar8 = *plVar5;
      uVar7 = FUN_00df2e00(lVar8 + 0x50);
      plVar5 = plVar5 + 1;
    } while ((uVar7 & 1) == 0);
    FUN_00df0870(lVar8);
  }
joined_r0x00df4714:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


