/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c42880; name: FUN_00c42880
 */


undefined4 FUN_00c42880(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  lVar6 = *(long *)(param_1 + 0x98);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        uVar5 = FUN_00c1bcf0(*(undefined8 *)(lVar6 + 0x58));
        if ((uVar5 & 1) == 0) goto LAB_00c4291c;
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            cVar3 = *(char *)(lVar6 + 0x20);
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            if (cVar3 == '\x0e') {
              return 0x36;
            }
            goto LAB_00c42940;
          }
          goto LAB_00c4291c;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_00c4291c;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c4291c:
  if (DAT_00000070 == '\x0e') {
    return 0x36;
  }
LAB_00c42940:
  lVar6 = *(long *)(param_1 + 0x98);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        uVar5 = FUN_00c1bcf0(*(undefined8 *)(lVar6 + 0x58));
        if ((uVar5 & 1) == 0) goto LAB_00c429c8;
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            cVar3 = *(char *)(lVar6 + 0x20);
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            if (cVar3 == '\x0f') {
              return 0x13;
            }
            goto LAB_00c429ec;
          }
          goto LAB_00c429c8;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_00c429c8;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c429c8:
  if (DAT_00000070 == '\x0f') {
    return 0x13;
  }
LAB_00c429ec:
  lVar6 = *(long *)(param_1 + 0x98);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        uVar5 = FUN_00c1bcf0(*(undefined8 *)(lVar6 + 0x58));
        if ((uVar5 & 1) == 0) goto LAB_00c42a74;
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            cVar3 = *(char *)(lVar6 + 0x20);
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            if (cVar3 == '\x10') {
              return 9;
            }
            goto LAB_00c42a98;
          }
          goto LAB_00c42a74;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_00c42a74;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c42a74:
  if (DAT_00000070 == '\x10') {
    return 9;
  }
LAB_00c42a98:
  return *(undefined4 *)(param_1 + 0x88);
}


