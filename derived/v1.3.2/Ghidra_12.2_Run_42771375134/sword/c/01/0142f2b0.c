/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142f2b0; name: FUN_0142f2b0
 */


void FUN_0142f2b0(long param_1)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar18 == (undefined8 *)0x0)) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    plVar11 = (long *)(**(code **)*puVar18)(puVar18);
    plVar12 = (long *)FUN_01410b60();
    puVar19 = (undefined8 *)0x0;
    if (plVar11 != (long *)0x0) {
      do {
        if (plVar11 == plVar12) {
          puVar19 = puVar18 + -10;
          goto LAB_0142f30c;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      puVar19 = (undefined8 *)0x0;
    }
  }
LAB_0142f30c:
  uVar13 = FUN_0140ce50(puVar19);
  puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar11 = (long *)(**(code **)*puVar18)(puVar18);
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_02717528), iVar10 != 0)) {
    uVar14 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar14;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar11 != (long *)PTR_DAT_02717530; plVar11 = (long *)*plVar11) {
  }
  FUN_00ff86a0(&local_38,puVar18[0xd],0);
  FUN_014160a0(uVar13,&local_38);
  puVar7 = PTR_DAT_02727758;
  puVar6 = PTR_DAT_02727750;
  lVar16 = *(long *)PTR_DAT_02727760;
  if (lVar16 != 0) {
    if (*(int *)(lVar16 + 0x54) == 0) {
LAB_0142f49c:
      plVar11 = (long *)FUN_0130a5d0(0);
      lVar16 = *plVar11;
      goto joined_r0x0142f4c4;
    }
    piVar1 = (int *)(lVar16 + 0x54);
    iVar10 = *(int *)(lVar16 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar16 + 0x58);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar9 != 0)) {
            uVar14 = FUN_00d3ff90();
            *(undefined8 *)PTR_DAT_0271df28 = uVar14;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          *(undefined **)puVar7 = PTR_DAT_0271df28;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0142f49c;
          if (plVar11 == (long *)puVar7) break;
          plVar11 = (long *)*plVar11;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar9;
        if (iVar9 == 0) goto LAB_0142f4b8;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar16 + 0x60) != 0) {
          lVar2 = *(long *)(lVar16 + 0x60) + -0x50;
        }
        plVar11 = (long *)FUN_0130a5d0(lVar2);
        lVar16 = *plVar11;
        goto joined_r0x0142f6b4;
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0142f4b8:
  plVar11 = (long *)FUN_0130a5d0(0);
  lVar16 = *plVar11;
joined_r0x0142f4c4:
  lVar2 = 0;
joined_r0x0142f6b4:
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  uVar14 = FUN_01416420(uVar13);
  FUN_014c9030(uVar14,0,lVar16);
  FUN_0140e5a0(&local_40,puVar19);
  uVar15 = FUN_01329820(local_40);
  pcVar17 = "msg_pokecamp_end_00";
  if ((uVar15 & 1) == 0) {
    pcVar17 = "msg_pokecamp_end_01";
  }
  bVar3 = *pcVar17;
  local_c0 = (undefined1 *)0xcbf29ce484222645;
  while (bVar3 != 0) {
    pcVar17 = pcVar17 + 1;
    local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *pcVar17;
  }
  FUN_01416100(uVar13,&local_c0);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  local_c0 = (undefined1 *)0x61378d59fd0dec00;
  FUN_01416460(uVar13,&local_c0);
  local_c0 = (undefined1 *)0x61378e59fd0dedb3;
  FUN_01416460(uVar13,&local_c0);
  FUN_014166d0(uVar13,1);
  FUN_01416510(DAT_01d4bcd8,DAT_01d4c268,uVar13);
  local_c0 = &LAB_0142f930;
  local_b8 = FUN_0142fa60;
  local_b0 = &LAB_0142fa70;
  local_a8 = &LAB_0142fa80;
  local_a0 = puVar19;
  uStack_98 = uVar13;
  FUN_01416b60(uVar13,&local_c0);
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(&local_a0);
  }
  FUN_01416760(uVar13);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


