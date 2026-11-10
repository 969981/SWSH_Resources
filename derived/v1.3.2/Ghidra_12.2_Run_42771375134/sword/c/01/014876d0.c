/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014876d0; name: FUN_014876d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_014876d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long local_48;
  
  uVar9 = FUN_01487040();
  if ((uVar9 & 1) == 0) {
    if (*param_1 == 2) {
      lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      puVar6 = PTR_DAT_02710798;
      lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      iVar8 = FUN_0150b350(lVar10);
      (**(code **)(**(long **)(*(long *)puVar6 + 0x1d0) + 0x10))(&local_48);
      iVar3 = _DAT_00000314;
      iVar2 = _DAT_00000310;
      if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
        piVar1 = (int *)(local_48 + 0x54);
        iVar12 = *(int *)(local_48 + 0x54);
        do {
          while( true ) {
            plVar13 = *(long **)(local_48 + 0x58);
            lVar11 = FUN_00d8bd10();
            while( true ) {
              iVar3 = _DAT_00000314;
              iVar2 = _DAT_00000310;
              if (plVar13 == (long *)0x0) goto joined_r0x01487810;
              if (plVar13 == (long *)lVar11) break;
              plVar13 = (long *)*plVar13;
            }
            iVar4 = *piVar1;
            if (iVar4 != iVar12) break;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            iVar3 = _DAT_00000314;
            iVar2 = _DAT_00000310;
            if (cVar5 == '\0') {
              lVar11 = *(long *)(local_48 + 0x60);
              if (lVar11 != 0) {
                iVar2 = *(int *)(lVar11 + 0x2c0);
                iVar3 = *(int *)(lVar11 + 0x2c4);
                (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
              }
              goto joined_r0x01487810;
            }
            iVar12 = iVar4;
            if (iVar4 == 0) goto joined_r0x01487810;
          }
          ClearExclusiveLocal();
          iVar12 = iVar4;
        } while (iVar4 != 0);
      }
joined_r0x01487810:
      if ((iVar8 == iVar2) && (param_1[1] == iVar3)) {
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
        }
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
        goto LAB_014876f4;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
    }
    bVar7 = (char)param_1[0xc] != '\0';
  }
  else {
LAB_014876f4:
    bVar7 = true;
  }
  return bVar7;
}


