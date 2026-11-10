/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebdca0; name: FUN_00ebdca0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ebdca0(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  byte bVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [96];
  long local_70 [2];
  
  puVar9 = PTR_DAT_02719500;
  puVar8 = PTR_DAT_027194f8;
  puVar7 = PTR_DAT_02715080;
  puVar6 = PTR_DAT_02715078;
  if ((*(long *)(param_1 + 0x770) == 0) || (*(int *)(*(long *)(param_1 + 0x770) + 0x54) == 0))
  goto LAB_00ebe1e0;
  lVar19 = *(long *)(param_1 + 0x770);
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
    piVar1 = (int *)(lVar19 + 0x54);
    iVar20 = *(int *)(lVar19 + 0x54);
    do {
      while( true ) {
        plVar25 = *(long **)(lVar19 + 0x58);
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_00a87090();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
            *(undefined **)puVar9 = puVar7;
            __cxa_guard_release(puVar8);
          }
          else {
            *(undefined **)puVar9 = puVar7;
            __cxa_guard_release(puVar8);
          }
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_00ebddec;
          if (plVar25 == (long *)puVar9) break;
          plVar25 = (long *)*plVar25;
        }
        iVar11 = *piVar1;
        if (iVar11 != iVar20) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar19 = *(long *)(lVar19 + 0x60);
          if (lVar19 != 0) {
            lVar13 = FUN_00e813b0(lVar19);
            (**(code **)(*(long *)(lVar19 + -8) + 0x18))((long *)(lVar19 + -8));
            cVar3 = *(char *)(lVar13 + 0x7f0);
            goto joined_r0x00ebdde4;
          }
          goto LAB_00ebddec;
        }
        iVar20 = iVar11;
        if (iVar11 == 0) goto LAB_00ebddec;
      }
      ClearExclusiveLocal();
      iVar20 = iVar11;
    } while (iVar11 != 0);
  }
LAB_00ebddec:
  lVar13 = FUN_00e813b0(0x50);
  cVar3 = *(char *)(lVar13 + 0x7f0);
joined_r0x00ebdde4:
  if (cVar3 != '\0') {
    plVar21 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
    for (plVar25 = *(long **)(*(long *)(param_1 + 200) + 0xb0); plVar25 != plVar21;
        plVar25 = plVar25 + 1) {
      uVar14 = (**(code **)(*(long *)*plVar25 + 0x88))();
      if ((((uVar14 & 1) == 0) && (*(long *)(*plVar25 + 0x290) != 0)) &&
         (lVar19 = *(long *)(*(long *)(*plVar25 + 0x290) + 0x80), lVar19 != 0)) {
        plVar16 = (long *)(lVar19 + 0x48);
        (**(code **)(*plVar16 + 0x10))(plVar16);
        piVar1 = (int *)(lVar19 + 0x54);
        if (*piVar1 != 0) {
          iVar20 = *piVar1;
          while (iVar23 = iVar20, iVar11 = _DAT_00000090, iVar20 != 0) {
            while( true ) {
              plVar24 = *(long **)(lVar19 + 0x58);
              lVar15 = FUN_006cb2c0();
              while( true ) {
                iVar11 = _DAT_00000090;
                if (plVar24 == (long *)0x0) goto joined_r0x00ebded4;
                if (plVar24 == (long *)lVar15) break;
                plVar24 = (long *)*plVar24;
              }
              iVar20 = *piVar1;
              if (iVar20 != iVar23) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar23 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              iVar11 = _DAT_00000090;
              if (cVar3 == '\0') {
                lVar15 = *(long *)(lVar19 + 0x60);
                if (lVar15 != 0) {
                  iVar11 = *(int *)(lVar15 + 0x40);
                  (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
                }
                goto joined_r0x00ebded4;
              }
              iVar23 = iVar20;
              if (iVar20 == 0) goto joined_r0x00ebded4;
            }
            ClearExclusiveLocal();
          }
joined_r0x00ebded4:
          if (iVar11 == 1) {
            iVar20 = *piVar1;
            while (iVar11 = iVar20, iVar20 != 0) {
              while( true ) {
                plVar24 = *(long **)(lVar19 + 0x58);
                lVar15 = FUN_006cb2c0();
                while( true ) {
                  if (plVar24 == (long *)0x0) goto LAB_00ebdf64;
                  if (plVar24 == (long *)lVar15) break;
                  plVar24 = (long *)*plVar24;
                }
                iVar20 = *piVar1;
                if (iVar20 != iVar11) break;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar19 = *(long *)(lVar19 + 0x60);
                  if (lVar19 == 0) goto LAB_00ebdf64;
                  *(undefined1 *)(lVar19 + 0x10) = 1;
                  (**(code **)(*(long *)(lVar19 + -8) + 0x18))();
                  goto LAB_00ebdf70;
                }
                iVar11 = iVar20;
                if (iVar20 == 0) goto LAB_00ebdf64;
              }
              ClearExclusiveLocal();
            }
LAB_00ebdf64:
            DAT_00000060 = 1;
          }
        }
LAB_00ebdf70:
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    if (*(long *)(lVar13 + 0x298) == 0) {
      local_70[0] = 0;
    }
    else {
      local_70[0] = *(long *)(*(long *)(lVar13 + 0x298) + 0x80);
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
      }
    }
    local_f0 = &LAB_00ec08e0;
    local_e8 = FUN_00ec08f0;
    local_e0 = &LAB_00ec0900;
    puStack_d8 = &LAB_00ec0910;
    uVar14 = FUN_006c7630(param_1 + 0x110,local_70,&local_f0,0);
    pcVar10 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    if ((uVar14 & 1) == 0) {
      *(undefined1 *)(lVar13 + 0x7f0) = 0;
      uVar5 = 1;
      plVar25 = *(long **)(*(long *)(param_1 + 200) + 0xb0);
      plVar21 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
      if (plVar25 != plVar21) goto LAB_00ebe074;
    }
    else {
      uVar5 = 0;
      plVar25 = *(long **)(*(long *)(param_1 + 200) + 0xb0);
      plVar21 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
      if (plVar25 != plVar21) {
LAB_00ebe074:
        do {
          uVar14 = (**(code **)(*(long *)*plVar25 + 0x88))();
          if ((((uVar14 & 1) == 0) && (*(long *)(*plVar25 + 0x290) != 0)) &&
             (lVar19 = *(long *)(*(long *)(*plVar25 + 0x290) + 0x80), lVar19 != 0)) {
            plVar16 = (long *)(lVar19 + 0x48);
            (**(code **)(*plVar16 + 0x10))(plVar16);
            piVar1 = (int *)(lVar19 + 0x54);
            if (*piVar1 != 0) {
              iVar20 = _DAT_00000090;
              if (*piVar1 != 0) {
                iVar11 = *piVar1;
                do {
                  while( true ) {
                    plVar24 = *(long **)(lVar19 + 0x58);
                    lVar15 = FUN_006cb2c0();
                    while( true ) {
                      iVar20 = _DAT_00000090;
                      if (plVar24 == (long *)0x0) goto joined_r0x00ebe138;
                      if (plVar24 == (long *)lVar15) break;
                      plVar24 = (long *)*plVar24;
                    }
                    iVar23 = *piVar1;
                    if (iVar23 != iVar11) break;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar11 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    iVar20 = _DAT_00000090;
                    if (cVar3 == '\0') {
                      lVar15 = *(long *)(lVar19 + 0x60);
                      if (lVar15 != 0) {
                        iVar20 = *(int *)(lVar15 + 0x40);
                        (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
                      }
                      goto joined_r0x00ebe138;
                    }
                    iVar11 = iVar23;
                    if (iVar23 == 0) goto joined_r0x00ebe138;
                  }
                  ClearExclusiveLocal();
                  iVar11 = iVar23;
                } while (iVar23 != 0);
              }
joined_r0x00ebe138:
              if (iVar20 == 1) {
                iVar20 = *piVar1;
                do {
                  while( true ) {
                    plVar24 = *(long **)(lVar19 + 0x58);
                    lVar15 = FUN_006cb2c0();
                    for (; plVar24 != (long *)lVar15; plVar24 = (long *)*plVar24) {
                    }
                    iVar11 = *piVar1;
                    if (iVar11 == iVar20) break;
                    ClearExclusiveLocal();
                    iVar20 = iVar11;
                  }
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar20 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  iVar20 = iVar11;
                } while (cVar3 != '\0');
                lVar15 = *(long *)(lVar19 + 0x60);
                lVar19 = 0;
                if (lVar15 != 0) {
                  lVar19 = lVar15 + -0x50;
                }
                *(undefined1 *)(lVar19 + 0x60) = uVar5;
                if (lVar15 != 0) {
                  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
                }
              }
            }
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
          plVar25 = plVar25 + 1;
        } while (plVar25 != plVar21);
      }
    }
  }
  FUN_00e9f5c0(lVar13);
LAB_00ebe1e0:
  FUN_006c7490(param_1 + 0x110);
  uVar18 = 0;
  do {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    for (puVar17 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar17 != puVar2;
        puVar17 = puVar17 + 1) {
      uVar14 = (**(code **)(*(long *)*puVar17 + 0x88))();
      if ((uVar14 & 1) == 0) {
        plVar25 = (long *)*puVar17;
        uVar14 = (**(code **)(*plVar25 + 0x70))(plVar25);
        if ((uVar14 & 1) != 0) {
          (**(code **)(*plVar25 + 0xa8))(plVar25);
        }
      }
    }
    FUN_006c72e0(param_1 + 0x110);
    puVar17 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0);
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    if (puVar17 == puVar2) goto LAB_00ebe320;
    bVar22 = 0;
    do {
      uVar14 = (**(code **)(*(long *)*puVar17 + 0x88))();
      if ((uVar14 & 1) == 0) {
        plVar25 = (long *)*puVar17;
        uVar14 = (**(code **)(*plVar25 + 0x70))(plVar25);
        if ((uVar14 & 1) != 0) {
          (**(code **)(*plVar25 + 0xb0))(plVar25);
          bVar22 = *(byte *)((long)plVar25 + 0x351) | bVar22;
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar2 != puVar17);
  } while ((bVar22 != 0) && (uVar18 = uVar18 + 1, uVar18 < 3));
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
  for (puVar17 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar17 != puVar2;
      puVar17 = puVar17 + 1) {
    uVar14 = (**(code **)(*(long *)*puVar17 + 0x88))();
    if ((uVar14 & 1) == 0) {
      plVar25 = (long *)*puVar17;
      uVar14 = (**(code **)(*plVar25 + 0x70))(plVar25);
      if ((uVar14 & 1) != 0) {
        (**(code **)(*plVar25 + 0xb8))(plVar25);
      }
    }
  }
LAB_00ebe320:
  FUN_006c72e0(param_1 + 0x228);
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
  if (puVar17 != puVar2) {
    do {
      uVar14 = (**(code **)(*(long *)*puVar17 + 0x88))();
      if ((uVar14 & 1) == 0) {
        plVar25 = (long *)*puVar17;
        uVar14 = (**(code **)(*plVar25 + 0x70))(plVar25);
        if ((uVar14 & 1) != 0) {
          (**(code **)(*plVar25 + 0xc0))(plVar25);
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar2 != puVar17);
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    for (puVar17 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar17 != puVar2;
        puVar17 = puVar17 + 1) {
      uVar14 = (**(code **)(*(long *)*puVar17 + 0x88))();
      if ((uVar14 & 1) == 0) {
        (**(code **)(*(long *)*puVar17 + 0xd0))();
      }
    }
  }
  return;
}


