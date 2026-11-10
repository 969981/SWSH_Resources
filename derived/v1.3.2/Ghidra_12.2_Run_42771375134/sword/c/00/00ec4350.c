/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec4350; name: FUN_00ec4350
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ec4350(void)

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
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long local_68;
  
  puVar8 = PTR_DAT_02720088;
  puVar7 = PTR_DAT_02720080;
  puVar6 = PTR_DAT_0271fbc0;
  puVar5 = PTR_DAT_0271fbb8;
  plVar19 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar19 == plVar2) {
    return 0;
  }
  uVar16 = 0;
LAB_00ec45b8:
  do {
    if (((*(byte *)(*plVar19 + 0x38d) >> 3 & 1) != 0) &&
       (uVar14 = (**(code **)(*(long *)*plVar19 + 0x88))(), (uVar14 & 1) == 0)) {
      plVar18 = (long *)*plVar19;
      plVar15 = (long *)(**(code **)plVar18[10])(plVar18 + 10);
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        uVar13 = FUN_00ec9d20();
        *(undefined8 *)puVar6 = uVar13;
        __cxa_guard_release(puVar5);
      }
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        if (plVar15 == (long *)puVar6) {
          uVar14 = (**(code **)(*plVar18 + 0x178))(plVar18);
          if ((uVar14 & 1) != 0) {
            *(undefined1 *)((long)plVar18 + 0x3ec) = 1;
            goto joined_r0x00ec43e8;
          }
          if ((*(char *)((long)plVar18 + 0x3ec) != '\0') && (plVar18[0x31] != -0x340d631b7bddd9bb))
          {
            FUN_015c9a70(&local_68,plVar18[0x31],plVar18[0x34],0,0,0,0);
            lVar12 = FUN_00e7e260();
            lVar17 = local_68;
            if (local_68 == 0) goto LAB_00ec4578;
            if (*(int *)(local_68 + 0x54) == 0) goto LAB_00ec4560;
            if ((local_68 == 0) || (*(int *)(local_68 + 0x54) == 0)) goto LAB_00ec4534;
            piVar1 = (int *)(local_68 + 0x54);
            iVar11 = *(int *)(local_68 + 0x54);
            goto LAB_00ec446c;
          }
          *(undefined1 *)((long)plVar18 + 0x3ec) = 0;
          break;
        }
      }
    }
    plVar19 = plVar19 + 1;
    if (plVar19 == plVar2) {
      return uVar16;
    }
  } while( true );
LAB_00ec446c:
  do {
    plVar15 = *(long **)(lVar17 + 0x58);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar16 = FUN_0156a3b0();
      *(undefined8 *)puVar8 = uVar16;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_00ec4534;
      if (plVar15 == (long *)puVar8) break;
      plVar15 = (long *)*plVar15;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar17 = *(long *)(lVar17 + 0x60);
        if (lVar17 != 0) {
          uVar10 = FUN_015cab70(lVar17 + -0x50);
          (**(code **)(*(long *)(lVar17 + -8) + 0x18))((long *)(lVar17 + -8));
          if ((uVar10 & 1) == 0) goto LAB_00ec4560;
          goto LAB_00ec4558;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar9;
  } while (iVar9 != 0);
LAB_00ec4534:
  uVar14 = FUN_015cab70(0);
  if ((uVar14 & 1) != 0) {
LAB_00ec4558:
    *(undefined1 *)(lVar12 + 0x7e0) = 1;
  }
LAB_00ec4560:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
LAB_00ec4578:
  uVar16 = 1;
  *(undefined1 *)((long)plVar18 + 0x3ec) = 0;
joined_r0x00ec43e8:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar2) {
    return uVar16;
  }
  goto LAB_00ec45b8;
}


