/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec4640; name: FUN_00ec4640
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ec4640(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long local_68;
  
  puVar6 = PTR_DAT_02720108;
  puVar5 = PTR_DAT_02720100;
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar18 == plVar2) {
    return 0;
  }
  uVar13 = 0;
  plVar17 = (long *)PTR_DAT_02710848;
LAB_00ec46dc:
  if (((*(byte *)(*plVar18 + 0x38d) >> 6 & 1) != 0) &&
     (uVar10 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar10 & 1) == 0)) {
    plVar15 = (long *)*plVar18;
    plVar11 = (long *)(**(code **)plVar15[10])(plVar15 + 10);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_00ec9d20();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar6) {
        if ((((*(uint *)((long)plVar15 + 0x38c) & 0x10840) == 0) &&
            (plVar15[0x31] != -0x340d631b7bddd9bb)) &&
           (uVar10 = (**(code **)(*plVar15 + 0x178))(), (uVar10 & 1) != 0)) {
          lVar16 = *(long *)(*plVar17 + 0x90);
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          iVar7 = FUN_015114c0(lVar14,plVar15[0x7c]);
          plVar17 = (long *)PTR_DAT_02710848;
          if (iVar7 != (int)plVar15[0x7d]) goto LAB_00ec4938;
          FUN_015c9a70(&local_68,plVar15[0x31],plVar15[0x34],0,0,0,0);
          lVar12 = FUN_00e7e260();
          lVar16 = local_68;
          *(undefined1 *)(lVar12 + 0x6ba) = 1;
          if (local_68 == 0) goto LAB_00ec4934;
          if (*(int *)(local_68 + 0x54) == 0) goto LAB_00ec4914;
          if ((local_68 == 0) || (*(int *)(local_68 + 0x54) == 0)) goto LAB_00ec4900;
          piVar1 = (int *)(local_68 + 0x54);
          iVar7 = *(int *)(local_68 + 0x54);
          goto LAB_00ec4828;
        }
        break;
      }
    }
  }
  goto LAB_00ec494c;
LAB_00ec4828:
  do {
    plVar17 = *(long **)(lVar16 + 0x58);
    if (((*PTR_DAT_02720080 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_02720080), iVar8 != 0)) {
      uVar13 = FUN_0156a3b0();
      *(undefined8 *)PTR_DAT_02720088 = uVar13;
      __cxa_guard_release(PTR_DAT_02720080);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_00ec4900;
      if (plVar17 == (long *)PTR_DAT_02720088) break;
      plVar17 = (long *)*plVar17;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar16 = *(long *)(lVar16 + 0x60);
        if (lVar16 != 0) {
          uVar10 = FUN_015cab70(lVar16 + -0x50);
          (**(code **)(*(long *)(lVar16 + -8) + 0x18))((long *)(lVar16 + -8));
          goto joined_r0x00ec48f8;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar8;
  } while (iVar8 != 0);
LAB_00ec4900:
  uVar10 = FUN_015cab70(0);
joined_r0x00ec48f8:
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(lVar12 + 0x7e0) = 1;
  }
LAB_00ec4914:
  plVar17 = (long *)PTR_DAT_02710848;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
LAB_00ec4934:
  uVar13 = 1;
LAB_00ec4938:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
LAB_00ec494c:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar2) {
    return uVar13;
  }
  goto LAB_00ec46dc;
}


