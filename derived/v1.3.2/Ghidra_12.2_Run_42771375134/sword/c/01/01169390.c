/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01169390; name: FUN_01169390
 */


undefined8 FUN_01169390(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  lVar6 = FUN_01165ee0(param_1 + 0x90);
  if ((*(long *)(param_1 + 0x80) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x80) + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)0x0;
    lVar9 = FUN_011537b0(param_1 + 0x88);
    if (lVar6 != 0) goto LAB_011693f4;
LAB_0116942c:
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar10 = (long *)(**(code **)*puVar7)(puVar7);
      lVar6 = FUN_01153d60();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar6) goto LAB_01169748;
      }
    }
    goto LAB_01169468;
  }
  puVar12 = puVar7 + -10;
  (**(code **)*puVar7)();
  uVar8 = FUN_01168be0();
  if ((uVar8 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  lVar9 = FUN_011537b0(param_1 + 0x88);
  if (lVar6 == 0) goto LAB_0116942c;
LAB_011693f4:
  if ((puVar12 == (undefined8 *)0x0) || (lVar9 == 0)) goto LAB_0116942c;
  uVar8 = FUN_0119dd10(puVar12);
  if ((uVar8 & 1) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x98);
    pcVar11 = "AnyoneLeftNotice";
    goto LAB_01169474;
  }
  if (*(int *)(lVar6 + 0xb8) == 0xc) {
    lVar6 = FUN_01165ee0(param_1 + 0x90);
    local_48 = 0;
    local_58 = FUN_011645f0(*(undefined8 *)(param_1 + 0x98));
    local_50 = (undefined1)*(undefined4 *)(param_1 + 0x78);
    local_4c = *(undefined4 *)(lVar6 + 0x78);
    FUN_011646d0(*(undefined8 *)(param_1 + 0x98),&local_58);
    FUN_011645a0(*(undefined8 *)(param_1 + 0x98),"ConfirmQuit");
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
    uVar8 = FUN_011572a0(lVar6,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_01169860(param_1);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_01169950(param_1), (uVar8 & 1) != 0)) {
      FUN_011f2840(lVar9);
      lVar6 = *(long *)(param_1 + 0x80);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
        piVar1 = (int *)(lVar6 + 0x54);
        iVar5 = *(int *)(lVar6 + 0x54);
        do {
          uVar8 = FUN_01168be0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar8 & 1) == 0) break;
          iVar2 = *piVar1;
          if (iVar2 == iVar5) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar6 = *(long *)(lVar6 + 0x60);
              if (lVar6 != 0) {
                FUN_011983a0(lVar6 + -0x50);
                (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
                goto LAB_011695a0;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar5 = iVar2;
        } while (iVar2 != 0);
      }
      FUN_011983a0(0);
LAB_011695a0:
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 0;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar10 = (long *)(**(code **)*puVar7)(puVar7);
      lVar6 = FUN_01153d60();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar6) goto LAB_01169748;
      }
    }
    goto LAB_01169468;
  case 1:
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar5 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar8 = FUN_01168be0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar8 & 1) == 0) goto LAB_0116978c;
          iVar2 = *piVar1;
          if (iVar2 != iVar5) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              uVar8 = FUN_01198da0(lVar6 + -0x50);
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
              goto joined_r0x01169784;
            }
            goto LAB_0116978c;
          }
          iVar5 = iVar2;
          if (iVar2 == 0) goto LAB_0116978c;
        }
        ClearExclusiveLocal();
        iVar5 = iVar2;
      } while (iVar2 != 0);
    }
LAB_0116978c:
    uVar8 = FUN_01198da0(0);
joined_r0x01169784:
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 2;
      return 0;
    }
    break;
  case 2:
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar5 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar8 = FUN_01168be0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar8 & 1) == 0) goto LAB_011697cc;
          iVar2 = *piVar1;
          if (iVar2 != iVar5) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              FUN_01199630(lVar6 + -0x50);
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
              goto LAB_011697d4;
            }
            goto LAB_011697cc;
          }
          iVar5 = iVar2;
          if (iVar2 == 0) goto LAB_011697cc;
        }
        ClearExclusiveLocal();
        iVar5 = iVar2;
      } while (iVar2 != 0);
    }
LAB_011697cc:
    FUN_01199630(0);
LAB_011697d4:
    *(undefined4 *)(param_1 + 0x78) = 3;
    return 0;
  case 3:
    lVar6 = *(long *)(param_1 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar5 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar8 = FUN_01168be0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar8 & 1) == 0) goto LAB_01169814;
          iVar2 = *piVar1;
          if (iVar2 != iVar5) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              uVar8 = FUN_01199b40(lVar6 + -0x50);
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
              goto joined_r0x01169808;
            }
            goto LAB_01169814;
          }
          iVar5 = iVar2;
          if (iVar2 == 0) goto LAB_01169814;
        }
        ClearExclusiveLocal();
        iVar5 = iVar2;
      } while (iVar2 != 0);
    }
LAB_01169814:
    uVar8 = FUN_01199b40(0);
joined_r0x01169808:
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 4;
      return 0;
    }
    break;
  case 4:
    uVar8 = FUN_011f2660(lVar9);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    iVar5 = FUN_011f2680(lVar9);
    if (iVar5 != 2) {
      puVar7 = *(undefined8 **)(param_1 + 0x98);
      pcVar11 = "DetermineLeader";
      goto LAB_01169474;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar10 = (long *)(**(code **)*puVar7)(puVar7);
      lVar6 = FUN_01153d60();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar6) goto LAB_01169748;
      }
    }
LAB_01169468:
    puVar7 = (undefined8 *)0x0;
LAB_0116946c:
    pcVar11 = "Error";
LAB_01169474:
    FUN_011645a0(puVar7,pcVar11);
    return 1;
  }
  return 0;
LAB_01169748:
  puVar7 = puVar7 + -10;
  goto LAB_0116946c;
}


