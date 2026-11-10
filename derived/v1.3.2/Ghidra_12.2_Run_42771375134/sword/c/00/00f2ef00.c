/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2ef00; name: FUN_00f2ef00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f2ef00(void)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long local_68;
  
  FUN_00f2cfa0(&local_68);
  lVar8 = local_68;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  puVar7 = PTR_DAT_0271fc50;
  puVar6 = PTR_DAT_0271fc48;
  puVar5 = PTR_DAT_027194d8;
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar18 != plVar2) {
    bVar9 = false;
    do {
      uVar12 = (**(code **)(*(long *)*plVar18 + 0x88))();
      if ((uVar12 & 1) == 0) {
        lVar16 = *plVar18;
        puVar17 = (undefined8 *)(lVar16 + 0x50);
        plVar13 = (long *)(**(code **)*puVar17)(puVar17);
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar11 = FUN_01590f40();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)puVar7) {
            if (!bVar9) {
              lVar16 = *(long *)(lVar16 + 0x360);
              if (lVar16 == 0) {
                bVar9 = false;
              }
              else {
                lVar16 = *(long *)(lVar16 + 0x80);
                bVar9 = false;
                if (lVar16 != 0) {
                  plVar13 = (long *)(lVar16 + 0x48);
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  if (*(int *)(lVar16 + 0x54) == 0) {
                    bVar9 = false;
                  }
                  else {
                    puVar17 = *(undefined8 **)(lVar16 + 0x60);
                    plVar19 = (long *)(**(code **)*puVar17)(puVar17);
                    lVar16 = FUN_006cb2c0();
                    for (; plVar19 != (long *)lVar16; plVar19 = (long *)*plVar19) {
                    }
                    bVar9 = puVar17[0x22] != 0;
                  }
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                }
              }
            }
            break;
          }
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar2);
    if (bVar9) {
      FUN_00f2f3d0(*(undefined8 *)(lVar8 + 0x68));
    }
  }
  lVar16 = *(long *)puVar5;
  plVar18 = *(long **)(lVar16 + 0xb0);
  plVar2 = *(long **)(lVar16 + 0xb8);
  if (plVar18 == plVar2) {
    return;
  }
LAB_00f2f0cc:
  uVar12 = (**(code **)(*(long *)*plVar18 + 0x88))();
  if ((uVar12 & 1) == 0) {
    lVar15 = *plVar18;
    plVar13 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))((undefined8 *)(lVar15 + 0x50));
    lVar16 = FUN_00f30ed0();
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)lVar16) {
        if ((*(long *)(lVar15 + 0x360) != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar15 + 0x360) + 0x80), lVar16 != 0)) {
          plVar13 = (long *)(lVar16 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          piVar1 = (int *)(lVar16 + 0x54);
          if (*piVar1 == 0) goto LAB_00f2f218;
          iVar10 = *piVar1;
          goto joined_r0x00f2f148;
        }
        break;
      }
    }
  }
  goto LAB_00f2f228;
  while( true ) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar10 = iVar3;
    if (cVar4 == '\0') break;
joined_r0x00f2f148:
    cVar4 = DAT_00000060;
    if (iVar10 == 0) goto joined_r0x00f2f1bc;
    plVar19 = *(long **)(lVar16 + 0x58);
    lVar14 = FUN_006cb2c0();
    while( true ) {
      cVar4 = DAT_00000060;
      if (plVar19 == (long *)0x0) goto joined_r0x00f2f1bc;
      if (plVar19 == (long *)lVar14) break;
      plVar19 = (long *)*plVar19;
    }
    iVar3 = *piVar1;
    if (iVar3 != iVar10) {
      ClearExclusiveLocal();
      iVar10 = iVar3;
      goto joined_r0x00f2f148;
    }
  }
  lVar14 = *(long *)(lVar16 + 0x60);
  cVar4 = DAT_00000060;
  if (lVar14 != 0) {
    cVar4 = *(char *)(lVar14 + 0x10);
    (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
  }
joined_r0x00f2f1bc:
  if (cVar4 != '\0') {
    puVar17 = *(undefined8 **)(lVar16 + 0x60);
    plVar19 = (long *)(**(code **)*puVar17)(puVar17);
    lVar16 = FUN_006cb2c0();
    for (; plVar19 != (long *)lVar16; plVar19 = (long *)*plVar19) {
    }
    if (puVar17[0x22] != 0) {
      FUN_00f3efd0(*(undefined8 *)(lVar8 + 0x68),lVar15);
    }
  }
LAB_00f2f218:
  (**(code **)(*plVar13 + 0x18))(plVar13);
LAB_00f2f228:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar2) goto code_r0x00f2f234;
  goto LAB_00f2f0cc;
code_r0x00f2f234:
  lVar16 = *(long *)puVar5;
  plVar18 = *(long **)(lVar16 + 0xb0);
  plVar2 = *(long **)(lVar16 + 0xb8);
joined_r0x00f2f240:
  if (plVar18 == plVar2) {
    return;
  }
  uVar12 = (**(code **)(*(long *)*plVar18 + 0x88))();
  if ((uVar12 & 1) == 0) {
    lVar15 = *plVar18;
    puVar17 = (undefined8 *)(lVar15 + 0x50);
    plVar13 = (long *)(**(code **)*puVar17)(puVar17);
    lVar16 = FUN_00f317b0();
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)lVar16) {
        lVar16 = *(long *)(lVar15 + 0x360);
        if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x80), lVar16 != 0)) {
          plVar13 = (long *)(lVar16 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          piVar1 = (int *)(lVar16 + 0x54);
          if (*piVar1 == 0) goto LAB_00f2f38c;
          iVar10 = *piVar1;
          goto joined_r0x00f2f2c4;
        }
        break;
      }
    }
  }
  goto LAB_00f2f39c;
  while( true ) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar10 = iVar3;
    if (cVar4 == '\0') break;
joined_r0x00f2f2c4:
    cVar4 = DAT_00000060;
    if (iVar10 == 0) goto joined_r0x00f2f338;
    plVar19 = *(long **)(lVar16 + 0x58);
    lVar15 = FUN_006cb2c0();
    while( true ) {
      cVar4 = DAT_00000060;
      if (plVar19 == (long *)0x0) goto joined_r0x00f2f338;
      if (plVar19 == (long *)lVar15) break;
      plVar19 = (long *)*plVar19;
    }
    iVar3 = *piVar1;
    if (iVar3 != iVar10) {
      ClearExclusiveLocal();
      iVar10 = iVar3;
      goto joined_r0x00f2f2c4;
    }
  }
  lVar15 = *(long *)(lVar16 + 0x60);
  cVar4 = DAT_00000060;
  if (lVar15 != 0) {
    cVar4 = *(char *)(lVar15 + 0x10);
    (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
  }
joined_r0x00f2f338:
  if (cVar4 != '\0') {
    puVar17 = *(undefined8 **)(lVar16 + 0x60);
    plVar19 = (long *)(**(code **)*puVar17)(puVar17);
    lVar16 = FUN_006cb2c0();
    for (; plVar19 != (long *)lVar16; plVar19 = (long *)*plVar19) {
    }
    if (puVar17[0x22] != 0) {
      FUN_00f3f4f0(*(undefined8 *)(lVar8 + 0x68));
    }
  }
LAB_00f2f38c:
  (**(code **)(*plVar13 + 0x18))(plVar13);
LAB_00f2f39c:
  plVar18 = plVar18 + 1;
  goto joined_r0x00f2f240;
}


