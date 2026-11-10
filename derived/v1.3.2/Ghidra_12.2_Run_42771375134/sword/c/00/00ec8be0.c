/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec8be0; name: FUN_00ec8be0
 */


undefined4 FUN_00ec8be0(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  long *plVar21;
  long local_68;
  
  lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  plVar18 = *(long **)(lVar17 + 0x58);
  if (plVar18 != (long *)0x0) {
    (**(code **)(plVar18[9] + 0x10))();
  }
  iVar9 = FUN_00884820(plVar18);
  puVar7 = PTR_DAT_0271fc50;
  puVar6 = PTR_DAT_0271fc48;
  uVar20 = 0;
  if (iVar9 == 0) goto joined_r0x00ec8f5c;
  bVar4 = false;
  iVar11 = 0;
  do {
    uVar12 = (**(code **)(*plVar18 + 0x50))(plVar18,iVar11);
    iVar10 = FUN_008783b0();
    if ((iVar10 == 0x364) && (uVar8 = FUN_008787f0(uVar12), 0x454 < uVar8)) {
      uVar8 = FUN_008787f0(uVar12);
      bVar4 = (bool)(bVar4 | uVar8 < 0x45c);
    }
    if ((iVar11 == 0) && (bVar4)) {
      plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
      for (plVar21 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar21 != plVar2;
          plVar21 = plVar21 + 1) {
        lVar19 = *plVar21;
        plVar15 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x50))((undefined8 *)(lVar19 + 0x50))
        ;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar12 = FUN_01590f40();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
          if (plVar15 == (long *)puVar7) {
            if ((*(char *)(lVar19 + 0xd58) != '\0') &&
               (iVar10 = FUN_00eaa240(lVar19), iVar10 == 0x364)) {
              FUN_00e62360(lVar19);
              uVar13 = (**(code **)(*(long *)*plVar21 + 0x88))();
              if ((uVar13 & 1) == 0) goto LAB_00ec8d84;
            }
            break;
          }
        }
      }
    }
LAB_00ec8d84:
    iVar11 = iVar11 + 1;
  } while (iVar11 != iVar9);
  if (!bVar4) {
    uVar20 = 0;
    goto joined_r0x00ec8f5c;
  }
  lVar19 = *(long *)(*param_2 + 0x68);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar14 = FUN_00e7e260();
  puVar7 = PTR_DAT_0271ed40;
  puVar6 = PTR_DAT_0271ed38;
  plVar2 = *(long **)(lVar14 + 0x1f0);
  for (plVar21 = *(long **)(lVar14 + 0x1e8); plVar21 != plVar2; plVar21 = plVar21 + 1) {
    lVar14 = *plVar21;
    plVar15 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x50))((undefined8 *)(lVar14 + 0x50));
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      uVar12 = FUN_00e32f80();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar7) {
        FUN_00ec9730(&local_68,lVar19);
        lVar5 = local_68;
        puVar7 = PTR_DAT_02720320;
        puVar6 = PTR_DAT_02720318;
        if (local_68 == 0) goto joined_r0x00ec8fac;
        if (*(int *)(local_68 + 0x54) == 0) goto LAB_00ec8ef8;
        piVar1 = (int *)(local_68 + 0x54);
        iVar9 = *(int *)(local_68 + 0x54);
        goto LAB_00ec8e80;
      }
    }
  }
joined_r0x00ec8fac:
  uVar20 = 0;
  goto joined_r0x00ec8f38;
  while (iVar9 = iVar11, iVar11 != 0) {
LAB_00ec8e80:
    plVar21 = *(long **)(lVar5 + 0x58);
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      uVar12 = FUN_0156a3b0();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar21 == (long *)0x0) goto LAB_00ec8ef8;
      if (plVar21 == (long *)puVar7) break;
      plVar21 = (long *)*plVar21;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar16 = *(long *)(lVar5 + 0x60);
        lVar5 = 0;
        if (lVar16 != 0) {
          lVar5 = lVar16 + -0x50;
        }
        goto joined_r0x00ec8fc8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_00ec8ef8:
  lVar5 = 0;
joined_r0x00ec8fc8:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar5 == 0) goto joined_r0x00ec8fac;
  uVar20 = *(undefined4 *)(lVar14 + 0x18c);
  *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(lVar14 + 0x1ac);
  *(undefined4 *)(lVar5 + 0x90) = uVar20;
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  uVar20 = 1;
joined_r0x00ec8f38:
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
joined_r0x00ec8f5c:
  if (plVar18 != (long *)0x0) {
    (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return uVar20;
}


