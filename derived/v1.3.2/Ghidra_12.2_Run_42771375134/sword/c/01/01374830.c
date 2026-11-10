/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01374830; name: FUN_01374830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01374830(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_6f0;
  code *local_6e8;
  undefined1 *local_6e0;
  undefined1 *local_6d8;
  long local_6d0 [12];
  undefined8 local_670;
  undefined4 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined8 local_640;
  undefined4 local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined4 local_530;
  undefined8 local_52c;
  undefined8 local_524;
  undefined8 local_51c;
  undefined1 local_514;
  undefined4 local_510;
  undefined1 local_50c;
  undefined4 local_508;
  undefined1 local_504;
  undefined4 local_500;
  undefined1 local_4fc;
  undefined4 local_4f0;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  long *local_3c0;
  long local_3b8;
  long local_3b0;
  undefined *local_3a0;
  long local_398;
  undefined8 local_390;
  code *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 auStack_370 [96];
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [96];
  long local_290;
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
  long local_60;
  long local_48;
  
  local_668 = 0xffffffff;
  local_658 = 0xffffffff;
  local_648 = 0xffffffff;
  local_638 = 0xffffffff;
  local_628 = 0xffffffff;
  local_618 = 0xffffffff;
  local_608 = 0xffffffff;
  local_5f8 = 0xffffffff;
  local_670 = 0;
  local_660 = 0;
  local_650 = 0;
  local_640 = 0;
  local_630 = 0;
  local_620 = 0;
  local_610 = 0;
  local_600 = 0;
  local_530 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_550 = 0;
  uStack_548 = 0;
  local_560 = 0;
  uStack_558 = 0;
  local_570 = 0;
  uStack_568 = 0;
  local_580 = 0;
  uStack_578 = 0;
  local_590 = 0;
  uStack_588 = 0;
  local_5a0 = 0;
  uStack_598 = 0;
  local_5b0 = 0;
  uStack_5a8 = 0;
  local_5c0 = 0;
  uStack_5b8 = 0;
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_5e0 = 0;
  uStack_5d8 = 0;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_52c = 0x100000002;
  local_510 = 0;
  local_50c = 0;
  local_508 = 0;
  local_504 = 0;
  local_500 = 0;
  local_4fc = 0;
  local_4f0 = 0;
  local_4d0 = 0;
  local_4d8 = 0;
  local_4e0 = 0;
  local_4b0 = 0;
  local_4b8 = 0;
  local_4c0 = 0;
  local_490 = 0;
  local_498 = 0;
  local_4a0 = 0;
  local_470 = 0;
  local_478 = 0;
  local_480 = 0;
  local_450 = 0;
  local_458 = 0;
  local_460 = 0;
  local_430 = 0;
  local_438 = 0;
  local_440 = 0;
  local_410 = 0;
  local_418 = 0;
  local_420 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_51c = 0;
  local_524 = 0;
  local_514 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (code *)0x0;
  local_310 = 0;
  local_378 = 0;
  local_380 = 0;
  local_388 = (code *)0x0;
  local_390 = 0;
  local_398 = 0;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3a0 = PTR_DAT_02715b00 + 0x10;
  local_3c0 = (long *)0x0;
  local_290 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = (code *)0x0;
  local_1f0 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = (code *)0x0;
  local_270 = 0;
  local_278 = 0;
  local_280 = PTR_DAT_027164d8 + 0x10;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (code *)0x0;
  local_160 = 0;
  local_168 = 0;
  local_60 = 0;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  local_170 = local_280;
  if (puVar10 != (undefined8 *)0x0) {
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    lVar7 = FUN_0132d9a0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar10 = puVar10 + -10;
        goto LAB_01374a58;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_01374a58:
  lVar7 = *(long *)(param_1 + 0x68);
  memcpy(&local_670,puVar10 + 0x12,0x2a4);
  puVar10 = *(undefined8 **)(lVar7 + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  plVar6 = (long *)puVar10[0x60];
  if (plVar6 == (long *)0x0) {
    lVar7 = *(long *)(param_1 + 0x60);
  }
  else {
    lVar7 = *(long *)((long)plVar6 + 0x58);
    if (*(long *)(lVar7 + 0x58) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x60))();
      *(undefined8 *)(lVar7 + 0x58) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_3c0 != (long *)0x0) {
      lVar7 = local_3c0[0xb];
      piVar1 = (int *)(lVar7 + 0x54);
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
        *(undefined8 *)(lVar7 + 0x60) = 0;
        (**(code **)(*local_3c0 + 0x18))();
      }
    }
    lVar7 = *(long *)(param_1 + 0x60);
  }
  if ((lVar7 != 0) && (puVar10 = *(undefined8 **)(lVar7 + 0x60), puVar10 != (undefined8 *)0x0)) {
    local_3c0 = plVar6;
    plVar9 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = local_3c0;
    if ((*PTR_DAT_02717528 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_02717528);
      plVar6 = local_3c0;
      if (iVar5 != 0) {
        uVar8 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar8;
        __cxa_guard_release(PTR_DAT_02717528);
        plVar6 = local_3c0;
      }
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_02717530) {
        puVar11 = puVar10 + -10;
        lVar7 = puVar10[4];
        local_3c0 = plVar6;
        goto joined_r0x01375264;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
  lVar7 = _DAT_00000070;
  local_3c0 = plVar6;
joined_r0x01375264:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar13 = puVar11[0xf];
  if (lVar13 != 0) {
    plVar6 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  local_3b8 = lVar7;
  local_3b0 = lVar13;
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar7 + 0x3f8);
  lVar13 = *(long *)(lVar12 + 0x238);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_398 != 0) {
    plVar6 = (long *)(local_398 + 0x48);
    local_398 = lVar13;
    (**(code **)(*plVar6 + 0x18))();
    lVar13 = local_398;
  }
  local_398 = lVar13;
  pcVar4 = local_388;
  if (local_388 != (code *)0x0) {
    local_380 = 0;
    local_378 = 0;
    local_390 = 0;
    local_388 = (code *)0x0;
    (*pcVar4)(auStack_370);
  }
  if (*(code **)(lVar12 + 0x250) != (code *)0x0) {
    (**(code **)(lVar12 + 0x250))(lVar12 + 0x260,auStack_370);
    local_390 = *(undefined8 *)(lVar12 + 0x240);
    local_388 = *(code **)(lVar12 + 0x248);
    local_380 = *(undefined8 *)(lVar12 + 0x250);
    local_378 = *(undefined8 *)(lVar12 + 600);
  }
  pcVar4 = local_308;
  if (local_308 != (code *)0x0) {
    local_300 = 0;
    local_2f8 = 0;
    local_310 = 0;
    local_308 = (code *)0x0;
    (*pcVar4)(auStack_2f0);
  }
  if (*(code **)(lVar12 + 0x2d0) != (code *)0x0) {
    (**(code **)(lVar12 + 0x2d0))(lVar12 + 0x2e0,auStack_2f0);
    local_310 = *(undefined8 *)(lVar12 + 0x2c0);
    local_308 = *(code **)(lVar12 + 0x2c8);
    local_300 = *(undefined8 *)(lVar12 + 0x2d0);
    local_2f8 = *(undefined8 *)(lVar12 + 0x2d8);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar7 + 400);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_290 != 0) {
    (**(code **)(*(long *)(local_290 + 0x48) + 0x18))();
  }
  local_290 = lVar13;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar7 + 0x458);
  lVar13 = *(long *)(lVar12 + 0x18);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_278 != 0) {
    plVar6 = (long *)(local_278 + 0x48);
    local_278 = lVar13;
    (**(code **)(*plVar6 + 0x18))();
    lVar13 = local_278;
  }
  local_278 = lVar13;
  pcVar4 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = 0;
    local_258 = 0;
    local_270 = 0;
    local_268 = (code *)0x0;
    (*pcVar4)(auStack_250);
  }
  if (*(code **)(lVar12 + 0x30) != (code *)0x0) {
    (**(code **)(lVar12 + 0x30))(lVar12 + 0x40,auStack_250);
    local_270 = *(undefined8 *)(lVar12 + 0x20);
    local_268 = *(code **)(lVar12 + 0x28);
    local_260 = *(undefined8 *)(lVar12 + 0x30);
    local_258 = *(undefined8 *)(lVar12 + 0x38);
  }
  pcVar4 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar4)(auStack_1d0);
  }
  if (*(code **)(lVar12 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar12 + 0xb0))(lVar12 + 0xc0,auStack_1d0);
    local_1f0 = *(undefined8 *)(lVar12 + 0xa0);
    local_1e8 = *(code **)(lVar12 + 0xa8);
    local_1e0 = *(undefined8 *)(lVar12 + 0xb0);
    local_1d8 = *(undefined8 *)(lVar12 + 0xb8);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar7 + 0x458);
  lVar13 = *(long *)(lVar12 + 0x238);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_168 != 0) {
    plVar6 = (long *)(local_168 + 0x48);
    local_168 = lVar13;
    (**(code **)(*plVar6 + 0x18))();
    lVar13 = local_168;
  }
  local_168 = lVar13;
  pcVar4 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar4)(auStack_140);
  }
  if (*(code **)(lVar12 + 0x250) != (code *)0x0) {
    (**(code **)(lVar12 + 0x250))(lVar12 + 0x260,auStack_140);
    local_160 = *(undefined8 *)(lVar12 + 0x240);
    local_158 = *(code **)(lVar12 + 0x248);
    local_150 = *(undefined8 *)(lVar12 + 0x250);
    local_148 = *(undefined8 *)(lVar12 + 600);
  }
  pcVar4 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(auStack_c0);
  }
  if (*(code **)(lVar12 + 0x2d0) != (code *)0x0) {
    (**(code **)(lVar12 + 0x2d0))(lVar12 + 0x2e0,auStack_c0);
    local_e0 = *(undefined8 *)(lVar12 + 0x2c0);
    local_d8 = *(code **)(lVar12 + 0x2c8);
    local_d0 = *(undefined8 *)(lVar12 + 0x2d0);
    local_c8 = *(undefined8 *)(lVar12 + 0x2d8);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar7 + 0x198);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = lVar13;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = FUN_00ad95d0(&local_48,*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x290) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x290) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  *(long *)(param_1 + 0x290) = lVar7;
  FUN_010257f0(lVar7,&local_3b8);
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  lVar13 = *(long *)(param_1 + 0x290);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  lVar7 = FUN_0132d9a0();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  lVar7 = puVar10[0x6e];
  if (lVar7 == 0) {
    *(undefined8 *)(lVar13 + 0xb8) = _DAT_000000b8;
    *(undefined8 *)(lVar13 + 0xb0) = _DAT_000000b0;
    *(undefined1 *)(lVar13 + 0xc0) = 1;
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar7 + 0xb8);
    *(undefined8 *)(lVar13 + 0xb0) = *(undefined8 *)(lVar7 + 0xb0);
    *(undefined1 *)(lVar13 + 0xc0) = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  lVar13 = *(long *)(param_1 + 0x290);
  lVar7 = FUN_0137a9a0(&local_48,*(undefined8 *)(lVar13 + 8));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_48 = lVar7;
  FUN_006d9640(lVar13,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_01399f90(lVar7,&local_670);
  local_6f0 = &LAB_0137aa80;
  local_6e8 = FUN_0137aad0;
  local_6e0 = &LAB_0137aae0;
  local_6d8 = &LAB_0137aaf0;
  local_6d0[0] = param_1;
  FUN_0139ac50(lVar7,&local_6f0);
  pcVar4 = local_6e8;
  if (local_6e8 != (code *)0x0) {
    local_6e0 = (undefined1 *)0x0;
    local_6d8 = (undefined1 *)0x0;
    local_6f0 = (undefined1 *)0x0;
    local_6e8 = (code *)0x0;
    (*pcVar4)(local_6d0);
  }
  FUN_01377130(&local_670);
  return;
}


