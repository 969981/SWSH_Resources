/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cc950; name: FUN_012cc950
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012cc950(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  byte *pbVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0 [13];
  undefined *local_148 [2];
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  char *local_e0 [13];
  long local_78;
  char local_6c [12];
  
  lVar13 = FUN_012cc840();
  FUN_01371750(param_1);
  puVar7 = PTR_DAT_02727758;
  puVar6 = PTR_DAT_02727750;
  puVar5 = PTR_DAT_0271df28;
  puVar4 = PTR_DAT_0271df20;
  local_6c[0] = '\0';
  lVar26 = *(long *)PTR_DAT_02727748;
  if ((lVar26 == 0) || (*(int *)(lVar26 + 0x54) == 0)) {
    lVar24 = 0;
  }
  else {
    piVar1 = (int *)(lVar26 + 0x54);
    iVar9 = *(int *)(lVar26 + 0x54);
    do {
      while( true ) {
        puVar23 = *(undefined8 **)(lVar26 + 0x58);
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar4), iVar12 != 0)) {
            uVar17 = FUN_00d3ff90();
            *(undefined8 *)puVar5 = uVar17;
            __cxa_guard_release(puVar4);
            *(undefined **)puVar7 = puVar5;
            __cxa_guard_release(puVar6);
          }
          else {
            *(undefined **)puVar7 = puVar5;
            __cxa_guard_release(puVar6);
          }
        }
        lVar24 = 0;
        if (puVar23 == (undefined8 *)0x0) goto LAB_012cca80;
        while (puVar23 != (undefined8 *)puVar7) {
          puVar23 = (undefined8 *)*puVar23;
          if (puVar23 == (undefined8 *)0x0) {
            lVar24 = 0;
            goto LAB_012cca80;
          }
        }
        iVar12 = *piVar1;
        if (iVar12 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar24 = 0;
          if (*(long *)(lVar26 + 0x60) != 0) {
            lVar24 = *(long *)(lVar26 + 0x60) + -0x50;
          }
          goto LAB_012cca80;
        }
        lVar24 = 0;
        iVar9 = iVar12;
        if (iVar12 == 0) goto LAB_012cca80;
      }
      ClearExclusiveLocal();
      lVar24 = 0;
      iVar9 = iVar12;
    } while (iVar12 != 0);
  }
LAB_012cca80:
  local_e0[0] = local_6c;
  local_100 = &LAB_012d2e60;
  local_f8 = FUN_012d2ed0;
  local_f0 = &LAB_012d2ee0;
  local_e8 = &LAB_012d2ef0;
  FUN_0130a080(&local_78,lVar24,&local_100);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  pcVar8 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(local_e0);
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  puVar4 = PTR_DAT_02710848;
  uVar19 = 1;
  if (local_6c[0] != '\0') {
    uVar19 = 2;
  }
  *(undefined4 *)(lVar13 + 0x78) = uVar19;
  lVar26 = *(long *)(*(long *)puVar4 + 0x90);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  plVar21 = *(long **)(lVar26 + 0x58);
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  iVar9 = FUN_00884820(plVar21);
  if (((iVar9 == 0) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,0), lVar26 == 0)) ||
     (uVar14 = FUN_0087d610(lVar26,2), (uVar14 & 1) != 0)) {
    local_1b8 = 0;
    uVar10 = FUN_00884820(plVar21);
  }
  else {
    local_1b8 = FUN_008783b0(lVar26);
    local_1b8 = local_1b8 & 0xffffffff;
    uVar10 = FUN_00884820(plVar21);
  }
  if (((uVar10 < 2) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,1), lVar26 == 0)) ||
     (uVar14 = FUN_0087d610(lVar26,2), (uVar14 & 1) != 0)) {
    local_1c0 = 0;
    uVar10 = FUN_00884820(plVar21);
  }
  else {
    local_1c0 = FUN_008783b0(lVar26);
    local_1c0 = local_1c0 & 0xffffffff;
    uVar10 = FUN_00884820(plVar21);
  }
  if (((uVar10 < 3) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,2), lVar26 == 0)) ||
     (uVar14 = FUN_0087d610(lVar26,2), (uVar14 & 1) != 0)) {
    local_1c8 = 0;
    uVar10 = FUN_00884820(plVar21);
  }
  else {
    local_1c8 = FUN_008783b0(lVar26);
    local_1c8 = local_1c8 & 0xffffffff;
    uVar10 = FUN_00884820(plVar21);
  }
  if (((uVar10 < 4) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,3), lVar26 == 0)) ||
     (uVar14 = FUN_0087d610(lVar26,2), (uVar14 & 1) != 0)) {
    local_1d0 = 0;
    uVar10 = FUN_00884820(plVar21);
  }
  else {
    local_1d0 = FUN_008783b0(lVar26);
    local_1d0 = local_1d0 & 0xffffffff;
    uVar10 = FUN_00884820(plVar21);
  }
  if (((uVar10 < 5) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,4), lVar26 == 0)) ||
     (uVar14 = FUN_0087d610(lVar26,2), (uVar14 & 1) != 0)) {
    uVar14 = 0;
    uVar10 = FUN_00884820(plVar21);
  }
  else {
    uVar14 = FUN_008783b0(lVar26);
    uVar14 = uVar14 & 0xffffffff;
    uVar10 = FUN_00884820(plVar21);
  }
  if (((uVar10 < 6) || (lVar26 = (**(code **)(*plVar21 + 0x50))(plVar21,5), lVar26 == 0)) ||
     (uVar15 = FUN_0087d610(lVar26,2), (uVar15 & 1) != 0)) {
    uVar15 = 0;
    lVar26 = *(long *)PTR_DAT_02727760;
    pbVar20 = PTR_DAT_02727750;
    puVar23 = (undefined8 *)PTR_DAT_02727758;
  }
  else {
    uVar15 = FUN_008783b0(lVar26);
    uVar15 = uVar15 & 0xffffffff;
    lVar26 = *(long *)PTR_DAT_02727760;
    pbVar20 = PTR_DAT_02727750;
    puVar23 = (undefined8 *)PTR_DAT_02727758;
  }
  PTR_DAT_02727750 = pbVar20;
  PTR_DAT_02727758 = (undefined *)puVar23;
  if (lVar26 == 0) {
    uVar16 = FUN_0130a720(0);
  }
  else {
    if (*(int *)(lVar26 + 0x54) != 0) {
      piVar1 = (int *)(lVar26 + 0x54);
      iVar9 = *(int *)(lVar26 + 0x54);
      do {
        while( true ) {
          puVar22 = *(undefined8 **)(lVar26 + 0x58);
          if ((*pbVar20 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(PTR_DAT_02727750);
            pbVar20 = PTR_DAT_02727750;
            if (iVar12 != 0) {
              if (((*PTR_DAT_0271df20 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar12 != 0)) {
                uVar17 = FUN_00d3ff90();
                *(undefined8 *)PTR_DAT_0271df28 = uVar17;
                __cxa_guard_release(PTR_DAT_0271df20);
              }
              *puVar23 = PTR_DAT_0271df28;
              __cxa_guard_release(PTR_DAT_02727750);
              pbVar20 = PTR_DAT_02727750;
            }
          }
          while( true ) {
            if (puVar22 == (undefined8 *)0x0) goto LAB_012cd0b8;
            if (puVar22 == puVar23) break;
            puVar22 = (undefined8 *)*puVar22;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar12;
          if (iVar12 == 0) goto LAB_012cd0b8;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar24 = 0;
          if (*(long *)(lVar26 + 0x60) != 0) {
            lVar24 = *(long *)(lVar26 + 0x60) + -0x50;
          }
          uVar16 = FUN_0130a720(lVar24);
          goto joined_r0x012cd0fc;
        }
        iVar9 = iVar12;
      } while (iVar12 != 0);
    }
LAB_012cd0b8:
    uVar16 = FUN_0130a720(0);
  }
  lVar24 = 0;
joined_r0x012cd0fc:
  if ((uVar16 & 1) == 0) {
    puVar23 = (undefined8 *)FUN_0130a5f0(lVar24);
    plVar25 = (long *)*puVar23;
    if (plVar25 != (long *)0x0) {
      (**(code **)(plVar25[9] + 0x10))();
    }
    iVar9 = FUN_00884820(plVar25);
    uVar10 = 0;
    if (iVar9 != 0) {
      do {
        uVar17 = (**(code **)(*plVar25 + 0x50))(plVar25,uVar10);
        uVar16 = FUN_0087b180();
        if ((uVar16 & 1) == 0) {
          uVar16 = FUN_008783b0(uVar17);
          uVar16 = uVar16 & 0xffffffff;
          goto joined_r0x012ccf7c;
        }
        uVar10 = uVar10 + 1;
        uVar11 = FUN_00884820(plVar25);
      } while (uVar10 < uVar11);
    }
    uVar16 = 0;
joined_r0x012ccf7c:
    if (plVar25 != (long *)0x0) {
      (**(code **)(plVar25[9] + 0x18))(plVar25 + 9);
    }
  }
  else {
    uVar16 = 0;
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  FUN_0132f7f0(local_1b0,lVar13);
  uVar18 = FUN_013298d0(local_1b0[0]);
  if (local_1b0[0] != 0) {
    (**(code **)(*(long *)(local_1b0[0] + 0x48) + 0x18))();
    local_1b0[0] = 0;
  }
  if ((uVar18 & 1) != 0) {
    FUN_010348f0(local_148,*(undefined8 *)(param_1 + 8));
    local_148[0] = PTR_DAT_02727768 + 0x10;
    local_138 = local_1b8;
    local_130 = local_1c0;
    local_128 = local_1c8;
    local_120 = local_1d0;
    uStack_118 = uVar14;
    local_110 = uVar15;
    local_108 = uVar16;
    FUN_01034150(local_1b0,local_148);
    FUN_01034430(local_1b0);
    FUN_01031e00(local_1b0);
  }
  FUN_0132f7f0(local_1b0,lVar13);
  uVar18 = FUN_013298d0(local_1b0[0]);
  if (local_1b0[0] != 0) {
    (**(code **)(*(long *)(local_1b0[0] + 0x48) + 0x18))();
    local_1b0[0] = 0;
  }
  if ((uVar18 & 1) != 0) {
    FUN_010348f0(local_148,*(undefined8 *)(param_1 + 8));
    local_148[0] = PTR_DAT_02727770 + 0x10;
    local_138 = local_1b8;
    local_130 = local_1c0;
    local_128 = local_1c8;
    local_120 = local_1d0;
    uStack_118 = uVar14;
    local_110 = uVar15;
    local_108 = uVar16;
    FUN_01034150(local_1b0,local_148);
    FUN_01034430(local_1b0);
    FUN_01031e00(local_1b0);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  return;
}


