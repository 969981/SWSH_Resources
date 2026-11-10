/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd8b00; name: FUN_00fd8b00
 */


void FUN_00fd8b00(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined8 local_58;
  long local_48;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x54) == 0)) {
    return;
  }
  plVar9 = (long *)(param_1 + 0x30);
  lVar7 = *plVar9;
  lVar8 = *param_2;
  if (lVar8 == lVar7) goto LAB_00fd8c8c;
  plVar12 = (long *)(param_1 + 0x40);
  if (lVar8 == *plVar12) {
    plVar9 = plVar12;
    goto LAB_00fd8c8c;
  }
  plVar11 = (long *)(param_1 + 0x50);
  if (lVar8 == *plVar11) {
    plVar9 = plVar11;
    goto LAB_00fd8c8c;
  }
  plVar10 = (long *)(param_1 + 0x60);
  if (lVar8 == *plVar10) {
    plVar9 = plVar10;
    goto LAB_00fd8c8c;
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
LAB_00fd8c5c:
    lVar7 = *param_2;
    plVar10 = plVar9;
  }
  else if ((*plVar12 == 0) || (*(int *)(*plVar12 + 0x54) == 0)) {
    lVar7 = *param_2;
    plVar10 = plVar12;
  }
  else if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x54) == 0)) {
    lVar7 = *param_2;
    plVar10 = plVar11;
  }
  else {
    if (*plVar10 != 0) {
      if (*(int *)(*plVar10 + 0x54) != 0) {
        uVar5 = FUN_00fd9970(*(undefined8 *)(param_1 + 0x38));
        if ((uVar5 & 1) == 0) {
          uVar5 = FUN_00fd9970(*(undefined8 *)(param_1 + 0x48));
          plVar9 = plVar12;
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_00fd9970(*(undefined8 *)(param_1 + 0x58));
            plVar9 = plVar11;
            if ((uVar5 & 1) == 0) {
              uVar5 = FUN_00fd9970(*(undefined8 *)(param_1 + 0x68));
              plVar9 = plVar10;
              if ((uVar5 & 1) == 0) {
                return;
              }
            }
          }
        }
        goto LAB_00fd8c8c;
      }
      plVar9 = plVar10;
      goto LAB_00fd8c5c;
    }
    lVar7 = *param_2;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *plVar10;
  *plVar10 = lVar7;
  plVar9 = plVar10;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
LAB_00fd8c8c:
  lVar7 = *param_2;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar13 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        plVar12 = (long *)FUN_00fd8f80();
        lVar8 = 0;
        if (plVar11 == (long *)0x0) goto LAB_00fd8d4c;
        while (plVar11 != plVar12) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            lVar8 = 0;
            goto LAB_00fd8d4c;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar13) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar7 + 0x60) != 0) {
            lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
          }
          goto LAB_00fd8d4c;
        }
        lVar8 = 0;
        iVar13 = iVar2;
        if (iVar2 == 0) goto LAB_00fd8d4c;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar13 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00fd8d4c:
  FUN_00e59970(&local_48,lVar8);
  local_58 = FUN_00dc4400(lVar8);
  if (local_48 != 0) {
    FUN_0077eb10(local_48,&local_58,*(undefined8 *)(param_1 + 0x20));
    lVar7 = *param_2;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *plVar9;
    *plVar9 = lVar7;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    FUN_00fd9720(plVar9[1],*(undefined8 *)(param_1 + 0x20));
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


