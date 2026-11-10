/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9a2a0; name: FUN_00c9a2a0
 */


void FUN_00c9a2a0(long param_1,long param_2,char *param_3,long param_4,char *param_5,long *param_6,
                 long *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long local_70;
  long local_68;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        uVar4 = FUN_00c953c0(*(undefined8 *)(lVar8 + 0x58));
        if ((uVar4 & 1) == 0) goto LAB_00c9a32c;
        iVar2 = *piVar1;
        if (iVar2 != iVar10) break;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar9 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          local_68 = *param_6;
          goto joined_r0x00c9a564;
        }
        iVar10 = iVar2;
        if (iVar2 == 0) goto LAB_00c9a32c;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00c9a32c:
  lVar9 = 0;
  local_68 = *param_6;
joined_r0x00c9a564:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar4 = FUN_00cae840(lVar9,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if ((*param_7 == 0) || (*(int *)(*param_7 + 0x54) == 0)) {
    uVar3 = 1;
    cVar7 = *param_3;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x70);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar10 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar8 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c9a3ec;
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            lVar9 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar9 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            local_70 = *param_7;
            goto joined_r0x00c9a584;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00c9a3ec;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c9a3ec:
    lVar9 = 0;
    local_70 = *param_7;
joined_r0x00c9a584:
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    uVar3 = FUN_00cae840(lVar9,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar3 = uVar3 & 1;
    cVar7 = *param_3;
  }
  if (cVar7 != '\0') {
    if ((uVar4 & 1) == 0) {
      lVar8 = *param_6;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(param_2 + 0x40);
      *(long *)(param_2 + 0x40) = lVar8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      bVar6 = true;
      cVar7 = *param_5;
    }
    else {
      bVar6 = false;
      cVar7 = *param_5;
    }
    if ((uVar3 == 0) && (cVar7 == '\0')) {
      lVar8 = *param_7;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
    }
    else {
      if (bVar6) goto LAB_00c9a4ec;
      *param_3 = '\0';
    }
  }
  cVar7 = *param_5;
LAB_00c9a4ec:
  if (cVar7 != '\0') {
    if (uVar3 == 0) {
      lVar8 = *param_7;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(param_4 + 0x48);
      *(long *)(param_4 + 0x48) = lVar8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
    }
    else {
      *param_5 = '\0';
    }
  }
  return;
}


