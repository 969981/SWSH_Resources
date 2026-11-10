/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec4980; name: FUN_00ec4980
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ec4980(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long local_68;
  
  puVar8 = PTR_DAT_02720310;
  puVar7 = PTR_DAT_02720308;
  puVar6 = PTR_DAT_02720088;
  puVar5 = PTR_DAT_02720080;
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar18 == plVar2) {
    return 0;
  }
  uVar15 = 0;
LAB_00ec4a2c:
  if (((*(byte *)(*plVar18 + 0x38e) & 1) != 0) &&
     (uVar12 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar12 & 1) == 0)) {
    plVar16 = (long *)*plVar18;
    plVar13 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar11 = FUN_00ec9d20();
      *(undefined8 *)puVar8 = uVar11;
      __cxa_guard_release(puVar7);
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)puVar8) {
        if ((plVar16[0x31] != -0x340d631b7bddd9bb) &&
           (uVar12 = (**(code **)(*plVar16 + 0x178))(), (uVar12 & 1) != 0)) {
          FUN_015c9a70(&local_68,plVar16[0x31],plVar16[0x34],0,0,0,0);
          lVar14 = FUN_00e7e260();
          lVar17 = local_68;
          if (local_68 == 0) goto LAB_00ec4be0;
          if (*(int *)(local_68 + 0x54) == 0) goto LAB_00ec4bc8;
          if ((local_68 == 0) || (*(int *)(local_68 + 0x54) == 0)) goto LAB_00ec4bac;
          piVar1 = (int *)(local_68 + 0x54);
          iVar9 = *(int *)(local_68 + 0x54);
          goto LAB_00ec4af0;
        }
        break;
      }
    }
  }
  goto LAB_00ec4be4;
LAB_00ec4af0:
  do {
    plVar13 = *(long **)(lVar17 + 0x58);
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      uVar15 = FUN_0156a3b0();
      *(undefined8 *)puVar6 = uVar15;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00ec4bac;
      if (plVar13 == (long *)puVar6) break;
      plVar13 = (long *)*plVar13;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar17 = *(long *)(lVar17 + 0x60);
        if (lVar17 != 0) {
          uVar12 = FUN_015cab70(lVar17 + -0x50);
          (**(code **)(*(long *)(lVar17 + -8) + 0x18))((long *)(lVar17 + -8));
          goto joined_r0x00ec4ba4;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
  } while (iVar10 != 0);
LAB_00ec4bac:
  uVar12 = FUN_015cab70(0);
joined_r0x00ec4ba4:
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)(lVar14 + 0x7e0) = 1;
  }
LAB_00ec4bc8:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
LAB_00ec4be0:
  uVar15 = 1;
LAB_00ec4be4:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar2) {
    return uVar15;
  }
  goto LAB_00ec4a2c;
}


