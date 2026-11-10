/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013da870; name: FUN_013da870
 */


void FUN_013da870(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  tm *ptVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long local_150 [13];
  undefined *local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  long local_c8;
  long local_c0;
  time_t local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [28];
  undefined4 local_8c;
  undefined8 local_88;
  char local_80;
  char local_7f;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  
  local_88 = 0;
  puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar18)(puVar18);
  lVar10 = FUN_0132d9a0();
  for (; plVar9 != (long *)lVar10; plVar9 = (long *)*plVar9) {
  }
  uVar17 = (ulong)*(uint *)((long)puVar18 + 0x184);
  uVar2 = *(undefined4 *)(puVar18 + 0x31);
  iVar8 = *(int *)((long)puVar18 + 0xec);
  if (*(int *)(puVar18 + 0x18) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00888c50(*(int *)(puVar18 + 0x18),0x15);
    iVar6 = iVar6 + 1;
  }
  local_b0 = FUN_006c5800();
  local_b8 = FUN_006c5880(&local_b0);
  ptVar11 = localtime(&local_b8);
  puVar5 = PTR_DAT_02715078;
  local_7e = (undefined1)ptVar11->tm_mday;
  iVar16 = ptVar11->tm_year;
  local_80 = (char)iVar16 +
             ((char)((ulong)((long)iVar16 * 0x51eb851f) >> 0x25) - (char)(iVar16 >> 0x1f)) * -100;
  local_7f = (char)ptVar11->tm_mon + '\x01';
  lVar10 = *(long *)(param_1 + 0x568);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
    lVar15 = 0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0x54);
    puVar18 = (undefined8 *)PTR_DAT_02715080;
    iVar16 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        puVar20 = *(undefined8 **)(lVar10 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(puVar5);
          puVar18 = (undefined8 *)PTR_DAT_02715080;
          if (iVar7 != 0) {
            uVar12 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar12;
            __cxa_guard_release(puVar5);
            puVar18 = (undefined8 *)PTR_DAT_02715080;
          }
        }
        lVar15 = 0;
        if (puVar20 == (undefined8 *)0x0) goto LAB_013daa1c;
        while (puVar20 != puVar18) {
          puVar20 = (undefined8 *)*puVar20;
          if (puVar20 == (undefined8 *)0x0) {
            lVar15 = 0;
            goto LAB_013daa1c;
          }
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar16) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = 0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lVar15 = *(long *)(lVar10 + 0x60) + -0x50;
          }
          goto LAB_013daa1c;
        }
        lVar15 = 0;
        iVar16 = iVar7;
        if (iVar7 == 0) goto LAB_013daa1c;
      }
      ClearExclusiveLocal();
      lVar15 = 0;
      iVar16 = iVar7;
    } while (iVar7 != 0);
  }
LAB_013daa1c:
  uVar12 = FUN_00d3fd50(lVar15,local_150);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  puVar18 = (undefined8 *)FUN_012e3520(uVar12);
  FUN_012b65a0(*puVar18);
  local_8c = FUN_0087da50();
  puVar18 = (undefined8 *)FUN_012e3520(uVar12);
  uVar13 = FUN_012b65a0(*puVar18);
  FUN_0087d220(uVar13,auStack_a8,0xd);
  puVar18 = (undefined8 *)FUN_012e3520(uVar12);
  FUN_012b65a0(*puVar18);
  local_7c = FUN_00878a50();
  puVar18 = (undefined8 *)FUN_012e3520(uVar12);
  FUN_012b65a0(*puVar18);
  local_78 = FUN_0087ccf0();
  local_74 = (undefined1)*(undefined4 *)(param_1 + 0x570);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar18 != (undefined8 *)0x0)) {
    plVar9 = (long *)(**(code **)*puVar18)(puVar18);
    lVar10 = FUN_0132d9a0();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar10) {
        puVar18 = puVar18 + -10;
        goto LAB_013daaf0;
      }
    }
  }
  puVar18 = (undefined8 *)0x0;
LAB_013daaf0:
  uVar19 = (long)iVar8 + (long)iVar6 * 6;
  FUN_0132f7f0(local_150,puVar18);
  local_88 = FUN_01329850(local_150[0]);
  if (local_150[0] != 0) {
    (**(code **)(*(long *)(local_150[0] + 0x48) + 0x18))();
    local_150[0] = 0;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  uVar14 = FUN_0152a8f0(lVar10,uVar19 & 0xffffffff);
  FUN_0152a980(lVar10,uVar19 & 0xffffffff,uVar2,uVar17,auStack_a8);
  FUN_01528a20(0x22);
  if ((uVar14 & 1) == 0) {
    FUN_01528a20(0x2a);
  }
  iVar8 = FUN_0152a8b0(lVar10);
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar18 == (undefined8 *)0x0) goto LAB_013dabcc;
    plVar9 = (long *)(**(code **)*puVar18)(puVar18);
    lVar15 = FUN_0132d9a0();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar15) {
        puVar18 = puVar18 + -10;
        goto LAB_013dabcc;
      }
    }
  }
  puVar18 = (undefined8 *)0x0;
LAB_013dabcc:
  FUN_0132f7f0(local_150,puVar18);
  uVar14 = FUN_013298d0(local_150[0]);
  if (local_150[0] != 0) {
    (**(code **)(*(long *)(local_150[0] + 0x48) + 0x18))();
    local_150[0] = 0;
  }
  if ((uVar14 & 1) != 0) {
    FUN_010348f0(local_e8,*(undefined8 *)(param_1 + 8));
    local_e8[0] = PTR_DAT_027293b8 + 0x10;
    local_d8 = uVar17;
    uStack_d0 = uVar19;
    local_c8 = (long)iVar6;
    local_c0 = (long)iVar8;
    FUN_01034150(local_150,local_e8);
    FUN_01034430(local_150);
    FUN_01031e00(local_150);
  }
  FUN_0132f7f0(local_150,puVar18);
  uVar14 = FUN_013298f0(local_150[0]);
  if (local_150[0] != 0) {
    (**(code **)(*(long *)(local_150[0] + 0x48) + 0x18))();
    local_150[0] = 0;
  }
  if ((uVar14 & 1) != 0) {
    FUN_010348f0(local_e8,*(undefined8 *)(param_1 + 8));
    local_e8[0] = PTR_DAT_027293c0 + 0x10;
    local_d8 = uVar17;
    uStack_d0 = uVar19;
    local_c8 = (long)iVar6;
    local_c0 = (long)iVar8;
    FUN_01034150(local_150,local_e8);
    FUN_01034430(local_150);
    FUN_01031e00(local_150);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


