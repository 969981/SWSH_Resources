/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c27f10; name: FUN_00c27f10
 */


ulong FUN_00c27f10(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  
  lVar14 = *(long *)(param_1 + 0x88);
  cVar5 = DAT_00000070;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        cVar5 = DAT_00000070;
        if ((uVar10 & 1) == 0) goto joined_r0x00c27fa0;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        cVar5 = DAT_00000070;
        if (cVar4 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar5 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
          }
          goto joined_r0x00c27fa0;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto joined_r0x00c27fa0;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
joined_r0x00c27fa0:
  if (cVar5 == '\x0e') {
    return 0x32;
  }
  lVar14 = *(long *)(param_1 + 0x88);
  cVar5 = DAT_00000070;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        cVar5 = DAT_00000070;
        if ((uVar10 & 1) == 0) goto joined_r0x00c2802c;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        cVar5 = DAT_00000070;
        if (cVar4 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar5 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
          }
          goto joined_r0x00c2802c;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto joined_r0x00c2802c;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
joined_r0x00c2802c:
  if (cVar5 == '\r') {
    return 0x1d;
  }
  if (*(char *)(param_1 + 0x2b7c) == '\0') goto LAB_00c28404;
  lVar14 = *(long *)(param_1 + 0x88);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        if ((uVar10 & 1) == 0) goto LAB_00c280cc;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar5 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
            lVar14 = *(long *)(param_1 + 0x88);
            goto joined_r0x00c280c4;
          }
          goto LAB_00c280cc;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto LAB_00c280cc;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00c280cc:
  lVar14 = *(long *)(param_1 + 0x88);
  cVar5 = DAT_00000070;
joined_r0x00c280c4:
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        if ((uVar10 & 1) == 0) goto LAB_00c2814c;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar4 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
            lVar14 = *(long *)(param_1 + 0x88);
            goto joined_r0x00c28144;
          }
          goto LAB_00c2814c;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto LAB_00c2814c;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00c2814c:
  lVar14 = *(long *)(param_1 + 0x88);
  cVar4 = DAT_00000070;
joined_r0x00c28144:
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        if ((uVar10 & 1) == 0) goto LAB_00c281cc;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar6 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
            lVar14 = *(long *)(param_1 + 0x88);
            goto joined_r0x00c281c4;
          }
          goto LAB_00c281cc;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto LAB_00c281cc;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00c281cc:
  lVar14 = *(long *)(param_1 + 0x88);
  cVar6 = DAT_00000070;
joined_r0x00c281c4:
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        uVar10 = FUN_00c1bcf0(*(undefined8 *)(lVar14 + 0x58));
        if ((uVar10 & 1) == 0) goto LAB_00c28358;
        iVar3 = *piVar1;
        if (iVar3 != iVar15) break;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            cVar7 = *(char *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
            uVar2 = *(uint *)(param_1 + 0x2b80);
            goto joined_r0x00c28248;
          }
          goto LAB_00c28358;
        }
        iVar15 = iVar3;
        if (iVar3 == 0) goto LAB_00c28358;
      }
      ClearExclusiveLocal();
      iVar15 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00c28358:
  uVar2 = *(uint *)(param_1 + 0x2b80);
  cVar7 = DAT_00000070;
joined_r0x00c28248:
  if (uVar2 < 8) {
    lVar14 = (long)(int)uVar2 * 8;
    uVar10 = *(ulong *)(&DAT_0215cbd0 + lVar14);
    uVar12 = *(ulong *)(&DAT_0215cc10 + lVar14);
    uVar13 = *(ulong *)(&DAT_0215cc50 + lVar14);
    uVar11 = *(ulong *)(&DAT_0215cc90 + lVar14);
    bVar8 = true;
    uVar9 = *(ulong *)(&DAT_0215cb90 + lVar14);
    if (cVar5 != '\x0f') goto LAB_00c283b8;
LAB_00c2826c:
    uVar10 = uVar9;
    if (!bVar8 && (uVar10 & 0xff) == 0) goto LAB_00c28404;
  }
  else {
    bVar8 = false;
    uVar10 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    if (cVar5 == '\x0f') goto LAB_00c2826c;
LAB_00c283b8:
    if (cVar4 == '\x10') {
      if ((uVar10 & 0xff) == 0 && !bVar8) goto LAB_00c28404;
    }
    else {
      if (cVar6 == '\x11') {
        uVar11 = uVar13 | uVar12;
        uVar10 = uVar12;
      }
      else {
        uVar10 = uVar11;
        if (cVar7 != '\x12') goto LAB_00c28404;
      }
      if ((uVar11 & 0xff) == 0) goto LAB_00c28404;
    }
  }
  if ((uint)(uVar10 >> 0x20) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00c2829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)((long)&DAT_0215cb78 + (long)(int)(&DAT_0215cb78)[uVar10 >> 0x20]))(0x2d);
    return uVar10;
  }
LAB_00c28404:
  return (ulong)*(uint *)(param_1 + 0x98);
}


