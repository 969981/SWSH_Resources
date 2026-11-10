/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c94080; name: FUN_00c94080
 */


void FUN_00c94080(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *local_50;
  long local_48;
  
  if (*(long *)(param_1 + 0x270) == 0) {
    lVar9 = *(long *)(param_1 + 0x70);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar5 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar6 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar6 & 1) == 0) goto LAB_00c94148;
          iVar3 = *piVar1;
          if (iVar3 != iVar5) break;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            local_48 = *(long *)(param_1 + 0x2d0);
            goto joined_r0x00c9428c;
          }
          iVar5 = iVar3;
          if (iVar3 == 0) goto LAB_00c94148;
        }
        ClearExclusiveLocal();
        iVar5 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00c94148:
    lVar8 = 0;
    local_48 = *(long *)(param_1 + 0x2d0);
joined_r0x00c9428c:
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    uVar6 = FUN_00cae840(lVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uVar6 & 1) != 0) {
      FUN_00c961e0(&local_50,*(undefined8 *)(param_1 + 0x2d0));
      FUN_00c81e70(local_50[0x11],param_1 + 0x2a8);
      if (local_50 != (long *)0x0) {
        (**(code **)(local_50[9] + 0x18))();
        local_50 = (long *)0x0;
      }
      *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x2a8);
      *(undefined1 *)(*(long *)(param_1 + 0x2a8) + 0x50) = 1;
      cVar2 = *(char *)(param_1 + 0x2d8);
      goto joined_r0x00c941e8;
    }
    if ((param_2 & 1) == 0) {
      return;
    }
LAB_00c942a0:
    *(undefined4 *)(param_1 + 0x3a4) = 1;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2d8);
joined_r0x00c941e8:
    if (cVar2 == '\0') {
      return;
    }
    FUN_00c93f00(param_1);
    uVar6 = FUN_00c94410(param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    FUN_00c93c70(param_1);
    if ((*(long *)(param_1 + 0x2c8) == 0) || (*(int *)(*(long *)(param_1 + 0x2c8) + 0x54) == 0)) {
      if (*(long *)(param_1 + 0x2a8) == 0) {
        uVar6 = 0;
        puVar11 = (undefined1 *)(param_1 + 0x2e3);
        bVar4 = true;
        do {
          while ((*(uint *)(param_1 + 0x5b0 + uVar6 * 4) | 2) == 2) {
            uVar6 = uVar6 + 1;
            puVar11 = puVar11 + 0xc;
            if (0xf < uVar6) goto LAB_00c94298;
          }
          FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),*puVar11);
          plVar7 = (long *)FUN_00c82550();
          iVar5 = (**(code **)(*plVar7 + 0x68))();
          if (iVar5 != 0) {
            bVar4 = false;
            break;
          }
          uVar6 = uVar6 + 1;
          puVar11 = puVar11 + 0xc;
        } while (uVar6 < 0x10);
LAB_00c94298:
        if (!bVar4) goto LAB_00c9429c;
      }
    }
    else if (*(long *)(param_1 + 0x268) == 0) {
LAB_00c9429c:
      if ((param_2 & 1) != 0) goto LAB_00c942a0;
    }
    FUN_00c93dc0(param_1);
    lVar9 = 0;
    if ((param_2 & 1) == 0) {
      puVar11 = (undefined1 *)(param_1 + 0x2e3);
      do {
        if (*(long *)(param_1 + 0x3b0 + lVar9) != 0) {
          FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),*puVar11);
          FUN_00c825f0(&local_50);
          (**(code **)(*local_50 + 0x48))(local_50,*(undefined8 *)(param_1 + 0x3b0 + lVar9));
          if (local_50 != (long *)0x0) {
            (**(code **)(local_50[9] + 0x18))();
            local_50 = (long *)0x0;
          }
        }
        lVar9 = lVar9 + 0x20;
        puVar11 = puVar11 + 0xc;
      } while (lVar9 != 0x200);
    }
    else {
      plVar7 = (long *)(param_1 + 0x3b0);
      do {
        if (*plVar7 != 0) {
          FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x2e3 + lVar9));
          FUN_00c825f0(&local_50);
          (**(code **)(*local_50 + 0x40))(local_50,*plVar7);
          if (local_50 != (long *)0x0) {
            (**(code **)(local_50[9] + 0x18))();
            local_50 = (long *)0x0;
          }
        }
        lVar9 = lVar9 + 0xc;
        plVar7 = plVar7 + 4;
      } while (lVar9 != 0xc0);
    }
    lVar9 = 0;
    do {
      lVar8 = param_1 + lVar9;
      puVar10 = *(undefined8 **)(lVar8 + 0x3d0);
      *(undefined8 *)(lVar8 + 0x3d0) = 0;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10);
        (**(code **)(**(long **)(lVar8 + 0x3d8) + 0x18))
                  (*(long **)(lVar8 + 0x3d8),puVar10,*(undefined8 *)(lVar8 + 0x3e0),
                   *(undefined8 *)(lVar8 + 1000));
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0x1e0);
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x3a4) = 3;
      *(undefined1 *)(param_1 + 0x600) = 0;
      if (*(char *)(param_1 + 0x39c) != '\0') {
        FUN_00c8ff20(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3a4) = 2;
    }
  }
  return;
}


