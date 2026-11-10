/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e89fe0; name: FUN_00e89fe0
 */


undefined8 FUN_00e89fe0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar8 = *(long *)(param_1 + 0x70);
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar5 = local_38;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_50);
  local_48 = local_50;
  local_50 = 0;
  FUN_00c7a400(&local_40,lVar5,&local_48);
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  uVar6 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((*(long *)(param_1 + 0xc0) == 0) || (*(int *)(*(long *)(param_1 + 0xc0) + 0x54) == 0)) {
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(lVar8 + 0x298);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x80) != 0)) &&
       (*(int *)(*(long *)(lVar5 + 0x80) + 0x54) != 0)) {
      lVar5 = *(long *)(lVar5 + 0x80);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x54) != 0)) {
        piVar1 = (int *)(lVar5 + 0x54);
        iVar7 = *(int *)(lVar5 + 0x54);
        do {
          plVar9 = *(long **)(lVar5 + 0x58);
          lVar8 = FUN_006cbb10();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00e8a120;
            if (plVar9 == (long *)lVar8) break;
            plVar9 = (long *)*plVar9;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar5 = *(long *)(lVar5 + 0x60);
              if (lVar5 != 0) {
                *(undefined1 *)(lVar5 + 0x10) = 0;
                (**(code **)(*(long *)(lVar5 + -8) + 0x18))();
                uVar6 = 1;
                goto joined_r0x00e8a18c;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e8a120:
      DAT_00000060 = 0;
    }
    uVar6 = 1;
  }
joined_r0x00e8a18c:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return uVar6;
}


