/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8ae80; name: FUN_00e8ae80
 */


undefined8 FUN_00e8ae80(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar8 = *(long *)(param_1 + 0x70);
  FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar7 = local_48;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_60);
  local_58 = local_60;
  local_60 = 0;
  FUN_00c7a400(&local_50,lVar7,&local_58);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  uVar9 = local_50;
  local_50 = 0;
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if ((*(long *)(param_1 + 0x90) == 0) || (*(int *)(*(long *)(param_1 + 0x90) + 0x54) == 0)) {
    uVar9 = 0;
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x298);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x80) != 0)) &&
       (*(int *)(*(long *)(lVar7 + 0x80) + 0x54) != 0)) {
      lVar7 = *(long *)(lVar7 + 0x80);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
        piVar1 = (int *)(lVar7 + 0x54);
        iVar10 = *(int *)(lVar7 + 0x54);
        do {
          plVar11 = *(long **)(lVar7 + 0x58);
          lVar6 = FUN_006cbb10();
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00e8afc4;
            if (plVar11 == (long *)lVar6) break;
            plVar11 = (long *)*plVar11;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar7 = *(long *)(lVar7 + 0x60);
              if (lVar7 != 0) {
                *(undefined1 *)(lVar7 + 0x10) = 0;
                (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
                goto LAB_00e8afcc;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e8afc4:
      DAT_00000060 = 0;
    }
LAB_00e8afcc:
    bVar5 = FUN_00db6d60(lVar8);
    *(byte *)(param_1 + 0xb4) = bVar5 & 1;
    uVar9 = 1;
    FUN_00db6d40(lVar8,1);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar9;
}


