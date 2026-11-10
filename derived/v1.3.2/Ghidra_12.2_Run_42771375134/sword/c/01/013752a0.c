/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013752a0; name: FUN_013752a0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000070 : 0x013753e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_013752a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long alStack_720 [12];
  undefined8 local_6c0;
  code *local_6b8;
  undefined1 *local_6b0;
  undefined1 *local_6a8;
  long alStack_6a0 [12];
  undefined1 *local_640;
  code *local_638;
  undefined1 *local_630;
  undefined1 *local_628;
  long alStack_620 [13];
  long local_5b8;
  undefined *local_5b0;
  long local_5a8;
  undefined8 local_5a0;
  code *local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [96];
  undefined8 local_520;
  code *local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 auStack_500 [96];
  undefined *local_4a0;
  long local_498;
  undefined8 local_490;
  code *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined1 auStack_470 [96];
  undefined8 local_410;
  code *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 auStack_3f0 [96];
  undefined *local_390;
  long local_388;
  undefined8 local_380;
  code *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 auStack_360 [96];
  undefined8 local_300;
  code *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 auStack_2e0 [96];
  undefined *local_280;
  long local_278;
  undefined8 local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 auStack_250 [96];
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [96];
  undefined *local_170;
  long local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [96];
  long *local_58;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar12)(puVar12);
    lVar8 = FUN_0132d9a0();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)lVar8) {
        puVar15 = puVar12 + -10;
        puVar13 = puVar12 + 8;
        lVar8 = puVar12[0x6e];
        goto joined_r0x01375ccc;
      }
    }
  }
  puVar15 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)&DAT_00000090;
  lVar8 = _DAT_000003c0;
joined_r0x01375ccc:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar9 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
  iVar5 = FUN_0132a4a0(puVar13,uVar9);
  lVar10 = FUN_00ad95d0(&local_5b0,*(undefined8 *)(param_1 + 8));
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x298) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  *(long *)(param_1 + 0x298) = lVar10;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_02717528), iVar6 != 0)) {
      uVar9 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar9;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_02717530) {
        puVar13 = puVar12 + -10;
        puVar4 = (undefined *)puVar12[4];
        goto joined_r0x01375cdc;
      }
    }
  }
  puVar13 = (undefined8 *)0x0;
  puVar4 = _DAT_00000070;
joined_r0x01375cdc:
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  lVar16 = puVar13[0xf];
  if (lVar16 != 0) {
    plVar7 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))();
  }
  local_5b0 = puVar4;
  local_5a8 = lVar16;
  FUN_010257f0(lVar10,&local_5b0);
  uVar9 = DAT_02a70698;
  lVar10 = *(long *)(param_1 + 0x298);
  *(undefined8 *)(lVar10 + 0xb0) = DAT_02a70690;
  *(undefined8 *)(lVar10 + 0xb8) = uVar9;
  *(undefined1 *)(lVar10 + 0xc0) = 1;
  lVar10 = *(long *)(param_1 + 0x298);
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_02717528), iVar6 != 0)) {
      uVar9 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar9;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_02717530) {
        puVar13 = puVar12 + -10;
        puVar4 = (undefined *)puVar12[4];
        goto joined_r0x01375cec;
      }
    }
  }
  puVar13 = (undefined8 *)0x0;
  puVar4 = _DAT_00000070;
joined_r0x01375cec:
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  lVar16 = puVar13[0xf];
  if (lVar16 != 0) {
    plVar7 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))();
  }
  iVar6 = 0;
  if (iVar5 != -1) {
    iVar6 = iVar5;
  }
  local_6c0 = (undefined1 *)CONCAT44(local_6c0._4_4_,iVar6);
  local_5b0 = puVar4;
  local_5a8 = lVar16;
  lVar16 = FUN_0137ab00(lVar10,*(undefined8 *)(lVar10 + 8),&local_5b0,&local_6c0);
  local_508 = 0;
  local_510 = 0;
  local_518 = (code *)0x0;
  local_520 = 0;
  local_590 = 0;
  uStack_588 = 0;
  local_5a0 = 0;
  local_598 = (code *)0x0;
  local_5b0 = PTR_DAT_027164d8 + 0x10;
  local_3f8 = 0;
  local_400 = 0;
  local_408 = (code *)0x0;
  local_410 = 0;
  local_478 = 0;
  local_480 = 0;
  local_488 = (code *)0x0;
  local_490 = 0;
  local_498 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = (code *)0x0;
  local_300 = 0;
  local_368 = 0;
  local_370 = 0;
  local_378 = (code *)0x0;
  local_380 = 0;
  local_388 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = (code *)0x0;
  local_1f0 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = (code *)0x0;
  local_270 = 0;
  local_278 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (code *)0x0;
  local_160 = 0;
  local_168 = 0;
  local_5a8 = 0;
  lVar14 = *(long *)(lVar8 + 0x458);
  lVar10 = *(long *)(lVar14 + 0x1338);
  local_4a0 = local_5b0;
  local_390 = local_5b0;
  local_280 = local_5b0;
  local_170 = local_5b0;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    if (local_5a8 != 0) {
      plVar7 = (long *)(local_5a8 + 0x48);
      local_5a8 = lVar10;
      (**(code **)(*plVar7 + 0x18))();
      lVar10 = local_5a8;
    }
    local_5a8 = lVar10;
    pcVar11 = local_598;
    lVar10 = local_5a8;
    if (local_598 != (code *)0x0) {
      local_590 = 0;
      uStack_588 = 0;
      local_5a0 = 0;
      local_598 = (code *)0x0;
      (*pcVar11)(auStack_580);
      lVar10 = local_5a8;
    }
  }
  local_5a8 = lVar10;
  if (*(code **)(lVar14 + 0x1350) != (code *)0x0) {
    (**(code **)(lVar14 + 0x1350))(lVar14 + 0x1360,auStack_580);
    local_5a0 = *(undefined8 *)(lVar14 + 0x1340);
    local_598 = *(code **)(lVar14 + 0x1348);
    local_590 = *(undefined8 *)(lVar14 + 0x1350);
    uStack_588 = *(undefined8 *)(lVar14 + 0x1358);
  }
  pcVar11 = local_518;
  if (local_518 != (code *)0x0) {
    local_510 = 0;
    local_508 = 0;
    local_520 = 0;
    local_518 = (code *)0x0;
    (*pcVar11)(auStack_500);
  }
  if (*(code **)(lVar14 + 0x13d0) != (code *)0x0) {
    (**(code **)(lVar14 + 0x13d0))(lVar14 + 0x13e0,auStack_500);
    local_520 = *(undefined8 *)(lVar14 + 0x13c0);
    local_518 = *(code **)(lVar14 + 0x13c8);
    local_510 = *(undefined8 *)(lVar14 + 0x13d0);
    local_508 = *(undefined8 *)(lVar14 + 0x13d8);
  }
  lVar14 = *(long *)(lVar8 + 0x458);
  lVar10 = *(long *)(lVar14 + 0x1448);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_498 != 0) {
    plVar7 = (long *)(local_498 + 0x48);
    local_498 = lVar10;
    (**(code **)(*plVar7 + 0x18))();
    lVar10 = local_498;
  }
  local_498 = lVar10;
  pcVar11 = local_488;
  if (local_488 != (code *)0x0) {
    local_480 = 0;
    local_478 = 0;
    local_490 = 0;
    local_488 = (code *)0x0;
    (*pcVar11)(auStack_470);
  }
  if (*(code **)(lVar14 + 0x1460) != (code *)0x0) {
    (**(code **)(lVar14 + 0x1460))(lVar14 + 0x1470,auStack_470);
    local_490 = *(undefined8 *)(lVar14 + 0x1450);
    local_488 = *(code **)(lVar14 + 0x1458);
    local_480 = *(undefined8 *)(lVar14 + 0x1460);
    local_478 = *(undefined8 *)(lVar14 + 0x1468);
  }
  pcVar11 = local_408;
  if (local_408 != (code *)0x0) {
    local_400 = 0;
    local_3f8 = 0;
    local_410 = 0;
    local_408 = (code *)0x0;
    (*pcVar11)(auStack_3f0);
  }
  if (*(code **)(lVar14 + 0x14e0) != (code *)0x0) {
    (**(code **)(lVar14 + 0x14e0))(lVar14 + 0x14f0,auStack_3f0);
    local_410 = *(undefined8 *)(lVar14 + 0x14d0);
    local_408 = *(code **)(lVar14 + 0x14d8);
    local_400 = *(undefined8 *)(lVar14 + 0x14e0);
    local_3f8 = *(undefined8 *)(lVar14 + 0x14e8);
  }
  lVar14 = *(long *)(lVar8 + 0x458);
  lVar10 = *(long *)(lVar14 + 0x1558);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_388 != 0) {
    plVar7 = (long *)(local_388 + 0x48);
    local_388 = lVar10;
    (**(code **)(*plVar7 + 0x18))();
    lVar10 = local_388;
  }
  local_388 = lVar10;
  pcVar11 = local_378;
  if (local_378 != (code *)0x0) {
    local_370 = 0;
    local_368 = 0;
    local_380 = 0;
    local_378 = (code *)0x0;
    (*pcVar11)(auStack_360);
  }
  if (*(code **)(lVar14 + 0x1570) != (code *)0x0) {
    (**(code **)(lVar14 + 0x1570))(lVar14 + 0x1580,auStack_360);
    local_380 = *(undefined8 *)(lVar14 + 0x1560);
    local_378 = *(code **)(lVar14 + 0x1568);
    local_370 = *(undefined8 *)(lVar14 + 0x1570);
    local_368 = *(undefined8 *)(lVar14 + 0x1578);
  }
  pcVar11 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = 0;
    local_2e8 = 0;
    local_300 = 0;
    local_2f8 = (code *)0x0;
    (*pcVar11)(auStack_2e0);
  }
  if (*(code **)(lVar14 + 0x15f0) != (code *)0x0) {
    (**(code **)(lVar14 + 0x15f0))(lVar14 + 0x1600,auStack_2e0);
    local_300 = *(undefined8 *)(lVar14 + 0x15e0);
    local_2f8 = *(code **)(lVar14 + 0x15e8);
    local_2f0 = *(undefined8 *)(lVar14 + 0x15f0);
    local_2e8 = *(undefined8 *)(lVar14 + 0x15f8);
  }
  lVar14 = *(long *)(lVar8 + 0x458);
  lVar10 = *(long *)(lVar14 + 0x678);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_278 != 0) {
    plVar7 = (long *)(local_278 + 0x48);
    local_278 = lVar10;
    (**(code **)(*plVar7 + 0x18))();
    lVar10 = local_278;
  }
  local_278 = lVar10;
  pcVar11 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = 0;
    local_258 = 0;
    local_270 = 0;
    local_268 = (code *)0x0;
    (*pcVar11)(auStack_250);
  }
  if (*(code **)(lVar14 + 0x690) != (code *)0x0) {
    (**(code **)(lVar14 + 0x690))(lVar14 + 0x6a0,auStack_250);
    local_270 = *(undefined8 *)(lVar14 + 0x680);
    local_268 = *(code **)(lVar14 + 0x688);
    local_260 = *(undefined8 *)(lVar14 + 0x690);
    local_258 = *(undefined8 *)(lVar14 + 0x698);
  }
  pcVar11 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar11)(auStack_1d0);
  }
  if (*(code **)(lVar14 + 0x710) != (code *)0x0) {
    (**(code **)(lVar14 + 0x710))(lVar14 + 0x720,auStack_1d0);
    local_1f0 = *(undefined8 *)(lVar14 + 0x700);
    local_1e8 = *(code **)(lVar14 + 0x708);
    local_1e0 = *(undefined8 *)(lVar14 + 0x710);
    local_1d8 = *(undefined8 *)(lVar14 + 0x718);
  }
  lVar14 = *(long *)(lVar8 + 0x458);
  lVar10 = *(long *)(lVar14 + 0xef8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_168 != 0) {
    plVar7 = (long *)(local_168 + 0x48);
    local_168 = lVar10;
    (**(code **)(*plVar7 + 0x18))();
    lVar10 = local_168;
  }
  local_168 = lVar10;
  pcVar11 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar11)(auStack_140);
  }
  if (*(code **)(lVar14 + 0xf10) != (code *)0x0) {
    (**(code **)(lVar14 + 0xf10))(lVar14 + 0xf20,auStack_140);
    local_160 = *(undefined8 *)(lVar14 + 0xf00);
    local_158 = *(code **)(lVar14 + 0xf08);
    local_150 = *(undefined8 *)(lVar14 + 0xf10);
    local_148 = *(undefined8 *)(lVar14 + 0xf18);
  }
  pcVar11 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar11)(auStack_c0);
  }
  if (*(code **)(lVar14 + 0xf90) != (code *)0x0) {
    (**(code **)(lVar14 + 0xf90))(lVar14 + 4000,auStack_c0);
    local_e0 = *(undefined8 *)(lVar14 + 0xf80);
    local_d8 = *(code **)(lVar14 + 0xf88);
    local_d0 = *(undefined8 *)(lVar14 + 0xf90);
    local_c8 = *(undefined8 *)(lVar14 + 0xf98);
  }
  local_58 = (long *)puVar15[0x6a];
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar10 = puVar15[0x78];
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_5b8 = *(long *)(lVar10 + 0x198);
  if (local_5b8 != 0) {
    (**(code **)(*(long *)(local_5b8 + 0x48) + 0x10))();
  }
  FUN_013a1210(lVar16,&local_58,&local_5b8,&local_5b0);
  if (local_5b8 != 0) {
    (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
    local_5b8 = 0;
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x60) = 0;
      (**(code **)(*local_58 + 0x18))();
    }
    local_58 = (long *)0x0;
  }
  local_6c0 = &LAB_0137ac10;
  local_6b8 = FUN_0137ac20;
  local_6b0 = &LAB_0137ac30;
  local_6a8 = &LAB_0137ac40;
  local_640 = &LAB_0137ac50;
  local_638 = FUN_0137ad30;
  local_630 = &LAB_0137ad40;
  local_628 = &LAB_0137ad50;
  alStack_6a0[0] = lVar16;
  alStack_620[0] = param_1;
  FUN_013a2570(lVar16,&local_6c0);
  pcVar11 = *(code **)(lVar16 + 0xf28);
  alStack_720[0] = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar16 + 0xf30) = 0;
    *(undefined8 *)(lVar16 + 0xf38) = 0;
    *(undefined8 *)(lVar16 + 0xf20) = 0;
    *(undefined8 *)(lVar16 + 0xf28) = 0;
    (*pcVar11)(lVar16 + 0xf40);
  }
  FUN_0137b060(alStack_720,lVar16 + 0xf40);
  *(undefined1 **)(lVar16 + 0xf38) = &LAB_0137b070;
  *(code **)(lVar16 + 0xf28) = FUN_0137b010;
  *(code **)(lVar16 + 0xf30) = FUN_0137b060;
  *(undefined8 *)(lVar16 + 0xf20) = &LAB_0137ad60;
  FUN_0137b010(alStack_720);
  pcVar11 = local_638;
  if (local_638 != (code *)0x0) {
    local_630 = (undefined1 *)0x0;
    local_628 = (undefined1 *)0x0;
    local_640 = (undefined1 *)0x0;
    local_638 = (code *)0x0;
    (*pcVar11)(alStack_620);
  }
  pcVar11 = local_6b8;
  if (local_6b8 != (code *)0x0) {
    local_6b0 = (undefined1 *)0x0;
    local_6a8 = (undefined1 *)0x0;
    local_6c0 = (undefined1 *)0x0;
    local_6b8 = (code *)0x0;
    (*pcVar11)(alStack_6a0);
  }
  FUN_01377390(&local_5b0);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


