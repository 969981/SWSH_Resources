/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8a370; name: FUN_00e8a370
 */


void FUN_00e8a370(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_1 + 0x70);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  plVar11 = *(long **)(lVar8 + 0x1f0);
  *(undefined1 *)(lVar8 + 0xc0) = 1;
  *(undefined8 *)(lVar8 + 0xb8) = uVar12;
  *(ulong *)(lVar8 + 0xb0) = CONCAT44(*(undefined4 *)(lVar8 + 0xb4),(int)uVar9);
  *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)(param_1 + 0xe8);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined1 *)(lVar8 + 0xc0) = 1;
  *(undefined8 *)(lVar8 + 0xa0) = uVar9;
  plVar5 = *(long **)(lVar8 + 0x1e8);
  do {
    if (plVar5 == plVar11) {
      cVar2 = *(char *)(param_1 + 0x98);
      goto joined_r0x00e8a488;
    }
    lVar8 = *plVar5;
    uVar6 = FUN_00df2e00(lVar8 + 0x50);
    plVar5 = plVar5 + 1;
  } while ((uVar6 & 1) == 0);
  FUN_00df0870(lVar8);
  cVar2 = *(char *)(param_1 + 0x98);
joined_r0x00e8a488:
  if ((((cVar2 == '\0') && (lVar8 = *(long *)(*(long *)(param_1 + 0x70) + 0x298), lVar8 != 0)) &&
      (*(long *)(lVar8 + 0x80) != 0)) && (*(int *)(*(long *)(lVar8 + 0x80) + 0x54) != 0)) {
    lVar8 = *(long *)(lVar8 + 0x80);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar10 = *(int *)(lVar8 + 0x54);
      do {
        plVar11 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_006cbb10();
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00e8a464;
          if (plVar11 == (long *)lVar7) break;
          plVar11 = (long *)*plVar11;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar10) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              *(undefined1 *)(lVar8 + 0x10) = 1;
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
              lVar8 = *(long *)(param_1 + 0xc0);
              goto joined_r0x00e8a490;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00e8a464:
    DAT_00000060 = 1;
    lVar8 = *(long *)(param_1 + 0xc0);
  }
  else {
    lVar8 = *(long *)(param_1 + 0xc0);
  }
joined_r0x00e8a490:
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_00c781c0();
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00e8a540;
          if (plVar11 == (long *)lVar7) break;
          plVar11 = (long *)*plVar11;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar10) break;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          if (lVar8 != 0) {
            FUN_0069c580(lVar8 + -0x50,1);
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
            goto LAB_00e8a54c;
          }
          goto LAB_00e8a540;
        }
        iVar10 = iVar3;
        if (iVar3 == 0) goto LAB_00e8a540;
      }
      ClearExclusiveLocal();
      iVar10 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00e8a540:
  FUN_0069c580(0,1);
LAB_00e8a54c:
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


