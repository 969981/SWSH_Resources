/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012efd50; name: FUN_012efd50
 */


void FUN_012efd50(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *local_90;
  undefined1 auStack_88 [8];
  long local_80;
  long lStack_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  local_70 = param_3;
  puVar9 = (undefined8 *)FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
  local_80 = param_1;
  lStack_78 = param_2;
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 0:
    plVar15 = *(long **)(param_1 + 8);
    puVar9 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,200,8);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012f0914;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    FUN_012fd4d0(puVar9);
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_90 = puVar9;
    FUN_0075efb0(auStack_88,plVar15,0,1);
    *(undefined4 *)(local_90 + 0x18) = 3;
    FUN_0075f0a0(auStack_88);
    lVar11 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x3a0 + lVar11);
      if ((lVar14 != 0) && (uVar10 = FUN_0130fe50(lVar14), (uVar10 & 1) != 0)) {
        FUN_012e5540(&local_90,lVar14);
        if (local_90 == (undefined8 *)0x0) {
          uVar12 = 0;
        }
        else {
          FUN_012d5170(local_90,auStack_68);
          uVar12 = FUN_013092c0();
          if (local_90 != (undefined8 *)0x0) {
            (**(code **)(local_90[9] + 0x18))();
          }
        }
        local_90 = puVar9;
        FUN_0075efb0(auStack_88,plVar15,0,1);
        puVar19 = local_90;
        piVar13 = (int *)local_90[0xe];
        if (piVar13 == (int *)0x0) {
          iVar16 = *(int *)((long)local_90 + 0x6c);
LAB_012f00e4:
          FUN_00824290(local_90 + 0xc,iVar16 + 1);
          piVar13 = (int *)puVar19[0xe];
          iVar16 = *piVar13;
LAB_012f00f8:
          *piVar13 = iVar16 + 1;
          lVar17 = FUN_012f4220(0,puVar19[0xc]);
          iVar16 = *(int *)(puVar19 + 0xd);
          *(int *)(puVar19 + 0xd) = iVar16 + 1;
          *(long *)(puVar19[0xe] + (long)iVar16 * 8 + 8) = lVar17;
        }
        else {
          iVar7 = *(int *)(local_90 + 0xd);
          iVar16 = *piVar13;
          if (iVar16 <= iVar7) {
            if (iVar16 == *(int *)((long)local_90 + 0x6c)) goto LAB_012f00e4;
            goto LAB_012f00f8;
          }
          *(int *)(local_90 + 0xd) = iVar7 + 1;
          lVar17 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
        }
        FUN_0075f0a0(auStack_88);
        uVar8 = FUN_012e4e90(lVar14);
        *(undefined4 *)(lVar17 + 0x20) = uVar8;
        *(undefined4 *)(lVar17 + 0x24) = 2;
        *(undefined8 *)(lVar17 + 0x18) = uVar12;
        puVar19 = (undefined8 *)FUN_012e3520(lVar14);
        FUN_012b65a0(*puVar19);
        uVar8 = FUN_0087b560();
        *(undefined4 *)(lVar17 + 0x28) = uVar8;
        local_90 = puVar9;
        FUN_0075efb0(auStack_88,plVar15,0,1);
        puVar19 = local_90;
        piVar13 = (int *)local_90[0xb];
        if (piVar13 == (int *)0x0) {
          iVar16 = *(int *)((long)local_90 + 0x54);
LAB_012f01b8:
          FUN_00824290(local_90 + 9,iVar16 + 1);
          piVar13 = (int *)puVar19[0xb];
          iVar16 = *piVar13;
LAB_012f01cc:
          *piVar13 = iVar16 + 1;
          lVar17 = FUN_012f42a0(0,puVar19[9]);
          iVar16 = *(int *)(puVar19 + 10);
          *(int *)(puVar19 + 10) = iVar16 + 1;
          *(long *)(puVar19[0xb] + (long)iVar16 * 8 + 8) = lVar17;
        }
        else {
          iVar7 = *(int *)(local_90 + 10);
          iVar16 = *piVar13;
          if (iVar16 <= iVar7) {
            if (iVar16 == *(int *)((long)local_90 + 0x54)) goto LAB_012f01b8;
            goto LAB_012f01cc;
          }
          *(int *)(local_90 + 10) = iVar7 + 1;
          lVar17 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
        }
        FUN_0075f0a0(auStack_88);
        uVar8 = FUN_012e4e90(lVar14);
        *(undefined4 *)(lVar17 + 0x14) = uVar8;
        puVar19 = (undefined8 *)FUN_012e3520(lVar14);
        uVar8 = FUN_012b6590(*puVar19);
        *(undefined4 *)(lVar17 + 0x18) = uVar8;
        puVar19 = (undefined8 *)FUN_012e3520(lVar14);
        uVar8 = FUN_012b67d0(*puVar19);
        *(undefined4 *)(lVar17 + 0x1c) = uVar8;
        puVar19 = (undefined8 *)FUN_012e3520(lVar14);
        uVar8 = FUN_012b68c0(*puVar19);
        *(undefined4 *)(lVar17 + 0x20) = uVar8;
        puVar19 = (undefined8 *)FUN_012e3520(lVar14);
        uVar8 = FUN_012ba900(*puVar19);
        *(undefined4 *)(lVar17 + 0x24) = uVar8;
      }
      lVar11 = lVar11 + 8;
    } while (lVar11 != 0x48);
    lVar11 = *(long *)(param_1 + 1000);
    if ((lVar11 != 0) && (uVar10 = FUN_0130fe50(lVar11), (uVar10 & 1) != 0)) {
      local_90 = puVar9;
      FUN_0075efb0(auStack_88,plVar15,0,1);
      puVar19 = local_90;
      piVar13 = (int *)local_90[0x17];
      if (piVar13 == (int *)0x0) {
        iVar16 = *(int *)((long)local_90 + 0xb4);
LAB_012f03c8:
        FUN_00824290(local_90 + 0x15,iVar16 + 1);
        piVar13 = (int *)puVar19[0x17];
        iVar16 = *piVar13;
LAB_012f03dc:
        *piVar13 = iVar16 + 1;
        lVar14 = FUN_012f4320(0,puVar19[0x15]);
        iVar16 = *(int *)(puVar19 + 0x16);
        *(int *)(puVar19 + 0x16) = iVar16 + 1;
        *(long *)(puVar19[0x17] + (long)iVar16 * 8 + 8) = lVar14;
      }
      else {
        iVar7 = *(int *)(local_90 + 0x16);
        iVar16 = *piVar13;
        if (iVar16 <= iVar7) {
          if (iVar16 == *(int *)((long)local_90 + 0xb4)) goto LAB_012f03c8;
          goto LAB_012f03dc;
        }
        *(int *)(local_90 + 0x16) = iVar7 + 1;
        lVar14 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
      }
      FUN_0075f0a0(auStack_88);
      *(undefined4 *)(lVar14 + 0x20) = 0;
      uVar12 = FUN_013092c0(lVar11);
      *(undefined8 *)(lVar14 + 0x18) = uVar12;
      uVar8 = FUN_0130a7e0(lVar11);
      *(undefined4 *)(lVar14 + 0x24) = uVar8;
    }
    lVar11 = *(long *)(param_1 + 0x3f0);
    if ((lVar11 != 0) && (uVar10 = FUN_0130fe50(lVar11), (uVar10 & 1) != 0)) {
      local_90 = puVar9;
      FUN_0075efb0(auStack_88,plVar15,0,1);
      puVar19 = local_90;
      piVar13 = (int *)local_90[0x17];
      if (piVar13 == (int *)0x0) {
        iVar16 = *(int *)((long)local_90 + 0xb4);
LAB_012f04a0:
        FUN_00824290(local_90 + 0x15,iVar16 + 1);
        piVar13 = (int *)puVar19[0x17];
        iVar16 = *piVar13;
LAB_012f04b4:
        *piVar13 = iVar16 + 1;
        lVar14 = FUN_012f4320(0,puVar19[0x15]);
        iVar16 = *(int *)(puVar19 + 0x16);
        *(int *)(puVar19 + 0x16) = iVar16 + 1;
        *(long *)(puVar19[0x17] + (long)iVar16 * 8 + 8) = lVar14;
      }
      else {
        iVar7 = *(int *)(local_90 + 0x16);
        iVar16 = *piVar13;
        if (iVar16 <= iVar7) {
          if (iVar16 == *(int *)((long)local_90 + 0xb4)) goto LAB_012f04a0;
          goto LAB_012f04b4;
        }
        *(int *)(local_90 + 0x16) = iVar7 + 1;
        lVar14 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
      }
      FUN_0075f0a0(auStack_88);
      *(undefined4 *)(lVar14 + 0x20) = 0;
      uVar12 = FUN_013092c0(lVar11);
      *(undefined8 *)(lVar14 + 0x18) = uVar12;
      uVar8 = FUN_0130a7e0(lVar11);
      *(undefined4 *)(lVar14 + 0x24) = uVar8;
    }
    lVar11 = *(long *)(param_1 + 0x3f8);
    if ((lVar11 != 0) && (uVar10 = FUN_0130fe50(lVar11), (uVar10 & 1) != 0)) {
      local_90 = puVar9;
      FUN_0075efb0(auStack_88,plVar15,0,1);
      puVar19 = local_90;
      piVar13 = (int *)local_90[0x17];
      if (piVar13 == (int *)0x0) {
        iVar16 = *(int *)((long)local_90 + 0xb4);
LAB_012f0578:
        FUN_00824290(local_90 + 0x15,iVar16 + 1);
        piVar13 = (int *)puVar19[0x17];
        iVar16 = *piVar13;
LAB_012f058c:
        *piVar13 = iVar16 + 1;
        lVar14 = FUN_012f4320(0,puVar19[0x15]);
        iVar16 = *(int *)(puVar19 + 0x16);
        *(int *)(puVar19 + 0x16) = iVar16 + 1;
        *(long *)(puVar19[0x17] + (long)iVar16 * 8 + 8) = lVar14;
      }
      else {
        iVar7 = *(int *)(local_90 + 0x16);
        iVar16 = *piVar13;
        if (iVar16 <= iVar7) {
          if (iVar16 == *(int *)((long)local_90 + 0xb4)) goto LAB_012f0578;
          goto LAB_012f058c;
        }
        *(int *)(local_90 + 0x16) = iVar7 + 1;
        lVar14 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
      }
      FUN_0075f0a0(auStack_88);
      *(undefined4 *)(lVar14 + 0x20) = 0;
      uVar12 = FUN_013092c0(lVar11);
      *(undefined8 *)(lVar14 + 0x18) = uVar12;
      uVar8 = FUN_0130a7e0(lVar11);
      *(undefined4 *)(lVar14 + 0x24) = uVar8;
    }
    lVar11 = *(long *)(param_1 + 0x400);
    if ((lVar11 != 0) && (uVar10 = FUN_0130fe50(lVar11), (uVar10 & 1) != 0)) {
      local_90 = puVar9;
      FUN_0075efb0(auStack_88,plVar15,0,1);
      puVar19 = local_90;
      piVar13 = (int *)local_90[0x17];
      if (piVar13 == (int *)0x0) {
        iVar16 = *(int *)((long)local_90 + 0xb4);
LAB_012f0650:
        FUN_00824290(local_90 + 0x15,iVar16 + 1);
        piVar13 = (int *)puVar19[0x17];
        iVar16 = *piVar13;
LAB_012f0664:
        *piVar13 = iVar16 + 1;
        lVar14 = FUN_012f4320(0,puVar19[0x15]);
        iVar16 = *(int *)(puVar19 + 0x16);
        *(int *)(puVar19 + 0x16) = iVar16 + 1;
        *(long *)(puVar19[0x17] + (long)iVar16 * 8 + 8) = lVar14;
      }
      else {
        iVar7 = *(int *)(local_90 + 0x16);
        iVar16 = *piVar13;
        if (iVar16 <= iVar7) {
          if (iVar16 == *(int *)((long)local_90 + 0xb4)) goto LAB_012f0650;
          goto LAB_012f0664;
        }
        *(int *)(local_90 + 0x16) = iVar7 + 1;
        lVar14 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
      }
      FUN_0075f0a0(auStack_88);
      *(undefined4 *)(lVar14 + 0x20) = 0;
      uVar12 = FUN_013092c0(lVar11);
      *(undefined8 *)(lVar14 + 0x18) = uVar12;
      uVar8 = FUN_0130a7e0(lVar11);
      *(undefined4 *)(lVar14 + 0x24) = uVar8;
    }
    local_90 = puVar9;
    FUN_0075efb0(auStack_88,plVar15,0,1);
    puVar19 = local_90;
    piVar13 = (int *)local_90[0x11];
    if (piVar13 == (int *)0x0) {
      iVar16 = *(int *)((long)local_90 + 0x84);
LAB_012f071c:
      FUN_00824290(local_90 + 0xf,iVar16 + 1);
      piVar13 = (int *)puVar19[0x11];
      iVar16 = *piVar13;
LAB_012f0730:
      *piVar13 = iVar16 + 1;
      lVar11 = FUN_012f43a0(0,puVar19[0xf]);
      iVar16 = *(int *)(puVar19 + 0x10);
      *(int *)(puVar19 + 0x10) = iVar16 + 1;
      *(long *)(puVar19[0x11] + (long)iVar16 * 8 + 8) = lVar11;
    }
    else {
      iVar7 = *(int *)(local_90 + 0x10);
      iVar16 = *piVar13;
      if (iVar16 <= iVar7) {
        if (iVar16 == *(int *)((long)local_90 + 0x84)) goto LAB_012f071c;
        goto LAB_012f0730;
      }
      *(int *)(local_90 + 0x10) = iVar7 + 1;
      lVar11 = *(long *)(piVar13 + (long)iVar7 * 2 + 2);
    }
    FUN_0075f0a0(auStack_88);
    FUN_012ba510(&local_90);
    uVar8 = FUN_012f7310(local_90);
    *(undefined4 *)(lVar11 + 0x14) = uVar8;
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (undefined8 *)0x0;
    }
    FUN_012ba360(&local_90);
    uVar8 = FUN_012c3620(local_90);
    *(undefined4 *)(lVar11 + 0x18) = uVar8;
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (undefined8 *)0x0;
    }
    lVar11 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x448);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x43c));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012f0808;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_012f0808:
    plVar2 = *(long **)(param_1 + 0xa0);
    if (plVar2 == *(long **)(param_1 + 0xa8)) {
      FUN_009ba660(param_1 + 0x98,&local_70);
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0xb0);
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_012f0914:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *plVar2 = local_70;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 8;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x43c));
    FUN_012f79b0(*(undefined8 *)(param_1 + 0x70),puVar9,local_70);
    FUN_0075efb0(&local_90,plVar15,0,1);
    (**(code **)*puVar9)(puVar9);
    (**(code **)(*plVar15 + 0x18))(plVar15,puVar9,200,8);
    FUN_0075f0a0(&local_90);
    break;
  case 1:
  case 4:
  case 5:
    if (puVar9 != (undefined8 *)0x0) {
      uVar10 = FUN_012e49d0(puVar9);
      if ((uVar10 & 1) != 0) {
        return;
      }
      uVar10 = FUN_0130fe90(puVar9);
      if ((uVar10 & 1) != 0) {
        return;
      }
    }
    uVar12 = 6;
    goto LAB_012f03ac;
  case 2:
    lVar11 = *(long *)(param_1 + 1000);
    if (lVar11 != 0) {
      lVar14 = FUN_013092c0(lVar11);
      if (lVar14 != param_3) {
        lVar11 = *(long *)(param_1 + 0x3f0);
        if (lVar11 == 0) goto LAB_012f03a0;
        lVar14 = FUN_013092c0(lVar11);
        if (lVar14 != param_3) {
          lVar11 = *(long *)(param_1 + 0x3f8);
          if (lVar11 == 0) goto LAB_012f03a0;
          lVar14 = FUN_013092c0(lVar11);
          if (lVar14 != param_3) {
            lVar11 = *(long *)(param_1 + 0x400);
            if (lVar11 == 0) goto LAB_012f03a0;
            lVar14 = FUN_013092c0(lVar11);
            if (lVar14 != param_3) {
              lVar11 = 0;
            }
          }
        }
      }
      puVar6 = PTR_DAT_02715080;
      puVar5 = PTR_DAT_02715078;
      if ((puVar9 != (undefined8 *)0x0) && (lVar11 != 0)) {
        lVar14 = *(long *)(lVar11 + 0x68);
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          piVar13 = (int *)(lVar14 + 0x54);
          iVar16 = *(int *)(lVar14 + 0x54);
          do {
            puVar18 = *(undefined8 **)(lVar14 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar12 = FUN_00a87090();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            puVar19 = (undefined8 *)0x0;
            if (puVar18 == (undefined8 *)0x0) break;
            while (puVar18 != (undefined8 *)puVar6) {
              puVar18 = (undefined8 *)*puVar18;
              if (puVar18 == (undefined8 *)0x0) {
                puVar19 = (undefined8 *)0x0;
                goto LAB_012f0358;
              }
            }
            iVar7 = *piVar13;
            if (iVar7 == iVar16) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar4) {
                *piVar13 = iVar16 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                puVar19 = (undefined8 *)0x0;
                if (*(long *)(lVar14 + 0x60) != 0) {
                  puVar19 = (undefined8 *)(*(long *)(lVar14 + 0x60) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            puVar19 = (undefined8 *)0x0;
            iVar16 = iVar7;
          } while (iVar7 != 0);
        }
LAB_012f0358:
        FUN_012e5540(&local_90,puVar9);
        puVar9 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          (**(code **)(local_90[9] + 0x18))();
          local_90 = (undefined8 *)0x0;
        }
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)(puVar19[9] + 0x18))();
        }
        if (puVar19 == puVar9) goto LAB_012f03a0;
      }
      if (lVar11 != 0) {
        return;
      }
    }
LAB_012f03a0:
    uVar12 = 6;
    param_3 = 0;
    goto LAB_012f03ac;
  case 3:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    uVar10 = FUN_012e49d0(puVar9);
    if ((uVar10 & 1) != 0) {
      return;
    }
  case 7:
    uVar12 = 0;
LAB_012f03ac:
    FUN_012f16a0(&local_80,param_3,uVar12);
    break;
  case 6:
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = puVar9 + 9;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      local_90 = puVar9;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_012f2f60(5,&local_90,1,PTR_DAT_02715088);
      if (local_90 != (undefined8 *)0x0) {
        (**(code **)(local_90[9] + 0x18))();
        local_90 = (undefined8 *)0x0;
      }
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    break;
  case 8:
    lVar11 = nn::os::GetCurrentThread();
    plVar15 = (long *)(param_1 + 0x460);
    do {
      if (*plVar15 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x454));
          while (*plVar15 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar4) {
              *plVar15 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012f02f8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_012f02f8:
    lVar14 = *(long *)(param_1 + 0x130);
    lVar11 = param_1 + 0x128;
    if (lVar11 != lVar14) {
      do {
        if (*(int *)(lVar14 + 0x14) == *(int *)(param_2 + 0x18)) {
          if (lVar11 != lVar14) {
            FUN_012f1940(lVar14 + 0x18,&local_70);
          }
          break;
        }
        lVar14 = *(long *)(lVar14 + 8);
      } while (lVar11 != lVar14);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x454));
  }
  return;
}


