/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00538780; name: FUN_00538780
 */


undefined8 FUN_00538780(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_628;
  float local_620;
  float fStack_61c;
  undefined8 local_618;
  long lStack_610;
  float local_608 [2];
  undefined8 local_600;
  undefined8 local_5f8;
  float local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  float local_5d8;
  long local_5d0;
  undefined8 uStack_5c8;
  undefined4 local_5c0;
  long local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  long local_5a0;
  undefined8 uStack_598;
  undefined4 local_590;
  long local_588;
  undefined8 uStack_580;
  undefined4 local_578;
  long local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  float local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  float local_398;
  undefined8 local_390;
  undefined8 local_388;
  float local_380;
  undefined8 local_378;
  undefined8 local_370;
  float local_368;
  undefined8 local_360;
  undefined8 local_358;
  float local_350;
  undefined8 local_348;
  undefined8 local_340;
  float local_338;
  undefined8 local_330;
  undefined8 local_328;
  float local_320;
  undefined8 local_318;
  undefined8 local_310;
  float local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  float local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d0;
  long local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  long local_280;
  undefined4 local_278;
  undefined8 local_270;
  long local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  float local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  undefined8 local_220;
  float local_218;
  long local_210;
  undefined8 local_208;
  float local_200;
  long local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  long local_198;
  undefined8 local_190;
  float local_188;
  long local_180;
  undefined8 local_178;
  float local_170;
  long local_168;
  undefined8 local_160;
  float local_158;
  long local_150;
  undefined8 local_148;
  float local_140;
  long local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*PTR_DAT_02713ab0 == '\0') {
    return 0;
  }
  DAT_0275ca04 = DAT_0275ca04 + 1;
  if ((DAT_0275ca04 % 100 == 0x19) &&
     (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x8958);
    FUN_00517ae0("Debug code: CPostEffect::DrawDebugBuffers().\n");
  }
  puVar1 = PTR_DAT_027139b0;
  fVar9 = *(float *)(param_1 + 0x7f8);
  fVar8 = *(float *)(param_1 + 0x8c0);
  fVar10 = fVar9;
  if (*(char *)(param_1 + 0x59a) != '\0') {
    fVar10 = fVar8 * *(float *)(param_1 + 0x7fc);
  }
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
    if (plVar5 != (long *)0x0) goto LAB_00538888;
LAB_0053890c:
    iVar3 = 0;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar5 == (long *)0x0) goto LAB_0053890c;
LAB_00538888:
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      FUN_005b9b10(uVar6,plVar5);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar3;
  fVar8 = fVar8 / fVar10;
  lVar2 = FUN_00518ee0();
  if (*(int *)(lVar2 + 0x30) < 1) {
    local_618 = 0;
  }
  else {
    local_618 = **(undefined8 **)(lVar2 + 0x38);
  }
  lStack_610 = 0;
  local_608[0] = fVar8;
  lVar2 = FUN_00518ee0();
  local_600 = 0;
  if (1 < *(int *)(lVar2 + 0x30)) {
    local_600 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 8);
  }
  local_5f8 = 0;
  local_5f0 = fVar8;
  lVar2 = FUN_00518ee0();
  local_5e8 = 0;
  if (2 < *(int *)(lVar2 + 0x30)) {
    local_5e8 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x10);
  }
  uStack_5e0 = 0;
  local_5d0 = plVar5[0x5364];
  local_5c0 = 0x3f800000;
  uStack_5c8 = 0;
  local_5b8 = plVar5[0x5365];
  uStack_5b0 = 0;
  local_5a8 = 0x3f800000;
  local_5a0 = plVar5[0x5367];
  local_590 = 0x3f800000;
  uStack_598 = 0;
  local_588 = plVar5[0x536a];
  uStack_580 = 0;
  local_578 = 0x3f800000;
  local_570 = plVar5[0x5369];
  local_560 = 0x3f800000;
  uStack_568 = 0;
  local_5d8 = fVar8;
  lVar2 = FUN_00518ed0();
  local_558 = *(undefined8 *)(lVar2 + 0x1f8);
  uStack_550 = 0;
  local_548 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_540 = *(undefined8 *)(lVar2 + 0x208);
  uStack_538 = 0;
  local_530 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_528 = 0;
  if (*(long *)(lVar2 + 0xd70) != 0) {
    lVar2 = FUN_00518ed0();
    local_528 = *(undefined8 *)(lVar2 + 0xd70);
  }
  uStack_520 = 0;
  local_518 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_510 = *(undefined8 *)
               (*(long *)(*(long *)(lVar2 + 0x2a0) + (long)*(int *)(lVar2 + 0x298) * 0x78 + 0x70) +
               0x48);
  uStack_508 = 0;
  local_500 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_4f8 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(lVar2 + 0x2a0) + (long)*(int *)(lVar2 + 0x298) * 0x78
                                   + 0x70) + 0x40) + 0x88);
  uStack_4f0 = 0;
  local_4e8 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_4e0 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(lVar2 + 0x2a0) + (long)*(int *)(lVar2 + 0x298) * 0x78
                                   + 0x70) + 0x40) + 0x30);
  uStack_4d8 = 0;
  local_4d0 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_4c8 = *(undefined8 *)
               (*(long *)(*(long *)(lVar2 + 0x2a8) + (long)*(int *)(lVar2 + 0x298) * 0x50 + 0x48) +
               0x48);
  uStack_4c0 = 0;
  local_4b8 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_4b0 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(lVar2 + 0x2a8) + (long)*(int *)(lVar2 + 0x298) * 0x50
                                   + 0x48) + 0x40) + 0x88);
  uStack_4a8 = 0;
  local_4a0 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_498 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(lVar2 + 0x2a8) + (long)*(int *)(lVar2 + 0x298) * 0x50
                                   + 0x48) + 0x40) + 0x30);
  uStack_490 = 0;
  local_488 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_480 = 0;
  if (*(long *)(lVar2 + 0x570) != 0) {
    local_480 = *(undefined8 *)(*(long *)(lVar2 + 0x570) + (long)*(int *)(lVar2 + 0x298) * 8);
  }
  uStack_478 = 0;
  local_470 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_468 = 0;
  if (*(undefined8 **)(lVar2 + 0x578) != (undefined8 *)0x0) {
    if (*(int *)(lVar2 + 0x580) < 1) {
      local_468 = 0;
    }
    else {
      local_468 = **(undefined8 **)(lVar2 + 0x578);
    }
  }
  uStack_460 = 0;
  local_458 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_450 = 0;
  if (*(long *)(lVar2 + 0x578) != 0) {
    if (*(int *)(lVar2 + 0x580) < 2) {
      local_450 = 0;
    }
    else {
      local_450 = *(undefined8 *)(*(long *)(lVar2 + 0x578) + 8);
    }
  }
  uStack_448 = 0;
  local_440 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_438 = 0;
  if (*(long *)(lVar2 + 0x578) != 0) {
    if (*(int *)(lVar2 + 0x580) < 3) {
      local_438 = 0;
    }
    else {
      local_438 = *(undefined8 *)(*(long *)(lVar2 + 0x578) + 0x10);
    }
  }
  uStack_430 = 0;
  local_428 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_420 = 0;
  if (*(long *)(lVar2 + 0x578) != 0) {
    local_420 = *(undefined8 *)(*(long *)(lVar2 + 0x578) + (long)*(int *)(lVar2 + 0x580) * 8 + -8);
  }
  local_418 = 0;
  local_410 = 0x3f800000;
  lVar2 = FUN_00518ed0();
  local_408 = 0;
  if ((*(long *)(lVar2 + 0x588) != 0) &&
     (local_408 = 0, *(long *)(*(long *)(lVar2 + 0x588) + (long)*(int *)(lVar2 + 0x298) * 8) != 0))
  {
    lVar2 = FUN_00518ed0();
    local_408 = *(undefined8 *)
                 (*(long *)(*(long *)(lVar2 + 0x588) + (long)*(int *)(lVar2 + 0x298) * 8) + 0x48);
  }
  local_400 = 0;
  local_3f8 = 0x3f800000;
  lVar2 = FUN_00518ef0();
  if (*(int *)(*(long *)(lVar2 + 0x2f0) + 0x30) < 1) {
    local_3f0 = 0;
  }
  else {
    local_3f0 = **(undefined8 **)(*(long *)(lVar2 + 0x2f0) + 0x38);
  }
  local_3e8 = 0;
  local_3e0 = fVar8;
  lVar2 = FUN_00518ef0();
  local_3d8 = 0;
  if (1 < *(int *)(*(long *)(lVar2 + 0x2f0) + 0x30)) {
    local_3d8 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x2f0) + 0x38) + 8);
  }
  local_3d0 = 0;
  local_3c8 = 0x40800000;
  lVar2 = FUN_00518ef0();
  local_3c0 = 0;
  if (2 < *(int *)(*(long *)(lVar2 + 0x2f0) + 0x30)) {
    local_3c0 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x2f0) + 0x38) + 0x10);
  }
  local_3b8 = 0;
  local_3b0 = 0x40800000;
  lVar2 = FUN_00518ef0();
  local_398 = fVar9 * DAT_01d4c404;
  local_3a8 = *(undefined8 *)(lVar2 + 0x3c0);
  local_3a0 = 0;
  lVar2 = FUN_00518ef0();
  fVar9 = fVar9 * 10.0;
  local_390 = *(undefined8 *)(lVar2 + 0x3d0);
  local_388 = 0;
  local_380 = fVar9;
  lVar2 = FUN_00518ef0();
  local_378 = *(undefined8 *)(lVar2 + 0x318);
  local_370 = 0;
  local_368 = fVar9;
  lVar2 = FUN_00518ef0();
  local_360 = *(undefined8 *)(lVar2 + 0x330);
  local_358 = 0;
  local_350 = fVar9;
  lVar2 = FUN_00518ef0();
  local_348 = *(undefined8 *)(lVar2 + 0x338);
  local_340 = 0;
  local_338 = fVar9;
  lVar2 = FUN_00518ef0();
  lVar2 = *(long *)(lVar2 + 0x340);
  local_330 = 0;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) < 1) {
      local_330 = 0;
    }
    else {
      local_330 = **(undefined8 **)(lVar2 + 0x38);
    }
  }
  local_328 = 0;
  local_320 = fVar9;
  lVar2 = FUN_00518ef0();
  local_318 = 0;
  if (*(long *)(lVar2 + 0x350) != 0) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x350) + (ulong)*(uint *)(lVar2 + 0x2ec) * 8);
    if (*(int *)(lVar2 + 0x90) < *(int *)(lVar2 + 0x30)) {
      local_318 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + (long)*(int *)(lVar2 + 0x90) * 8);
    }
    else {
      local_318 = 0;
    }
  }
  local_310 = 0;
  local_308 = fVar9;
  lVar2 = FUN_00518ef0();
  local_300 = *(undefined8 *)(lVar2 + 0x398);
  local_2f8 = 0;
  local_2f0 = fVar9;
  lVar2 = FUN_00518ef0();
  local_2e8 = *(undefined8 *)(lVar2 + 0x420);
  local_2e0 = 0;
  local_2d8 = fVar9;
  FUN_00518ed0();
  iVar3 = *(int *)puVar1;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
    if (plVar5 != (long *)0x0) goto LAB_00538ddc;
LAB_00538e60:
    iVar3 = 0;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar5 == (long *)0x0) goto LAB_00538e60;
LAB_00538ddc:
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      FUN_005b9b10(uVar6,plVar5);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar3;
  local_2c8 = plVar5[0x534e];
  local_2d0 = 0;
  local_2c0 = 0x3f800000;
  FUN_00518ed0();
  iVar3 = *(int *)puVar1;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
    if (plVar5 != (long *)0x0) goto LAB_00538eb4;
LAB_00538f38:
    iVar3 = 0;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar5 == (long *)0x0) goto LAB_00538f38;
LAB_00538eb4:
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      FUN_005b9b10(uVar6,plVar5);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar3;
  local_2b0 = plVar5[0x5357];
  local_2b8 = 0;
  local_2a8 = 0x3f800000;
  lVar2 = FUN_00518ef0();
  local_298 = *(undefined8 *)(lVar2 + 0x348);
  local_2a0 = 0;
  local_290 = 0x3f800000;
  FUN_00518ed0();
  iVar3 = *(int *)puVar1;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
    if (plVar5 != (long *)0x0) goto LAB_00538fa0;
LAB_00539024:
    iVar3 = 0;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar3 + 1;
    if (iVar3 + 1 < 2) {
      if (plVar5 == (long *)0x0) goto LAB_00539024;
LAB_00538fa0:
      uVar6 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      FUN_005b9b10(uVar6,plVar5);
      iVar3 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar3;
  local_280 = plVar5[0x5359];
  local_288 = 0;
  local_278 = 0x3f800000;
  FUN_00518ed0();
  iVar3 = *(int *)puVar1;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar3 + 1;
    if (1 < iVar3 + 1) goto LAB_00539100;
  }
  if (plVar5 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    FUN_005b9b10(uVar6,plVar5);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_00539100:
  *(int *)puVar1 = iVar3;
  local_268 = plVar5[0x5358];
  local_270 = 0;
  local_260 = 0x3f800000;
  lVar2 = FUN_00518f00();
  if (*(int *)(lVar2 + 0x3f8) < 1) {
    local_258 = 0;
  }
  else {
    lVar2 = FUN_00518f00();
    local_258 = **(undefined8 **)(lVar2 + 0x438);
  }
  local_250 = 0;
  local_248 = fVar8;
  lVar2 = FUN_00518f00();
  local_240 = 0;
  if (1 < *(int *)(lVar2 + 0x3f8)) {
    lVar2 = FUN_00518f00();
    local_240 = *(undefined8 *)(*(long *)(lVar2 + 0x438) + 8);
  }
  local_238 = 0;
  local_230 = fVar8;
  lVar2 = FUN_00518f00();
  local_228 = 0;
  if (2 < *(int *)(lVar2 + 0x3f8)) {
    lVar2 = FUN_00518f00();
    local_228 = *(undefined8 *)(*(long *)(lVar2 + 0x438) + 0x10);
  }
  local_220 = 0;
  local_218 = fVar8;
  lVar2 = FUN_00518f00();
  local_210 = 0;
  if (2 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_210 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x2c8);
    if (local_210 == 0) {
      local_210 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x2b8);
    }
  }
  local_208 = 0;
  local_200 = fVar8;
  lVar2 = FUN_00518f00();
  local_1f8 = 0;
  if (3 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_1f8 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x3d0);
    if (local_1f8 == 0) {
      local_1f8 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x3c0);
    }
  }
  local_1f0 = 0;
  local_1e8 = fVar8;
  lVar2 = FUN_00518f00();
  local_1e0 = 0;
  if (4 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_1e0 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x4d8);
    if (local_1e0 == 0) {
      local_1e0 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x4c8);
    }
  }
  local_1d8 = 0;
  local_1d0 = fVar8;
  lVar2 = FUN_00518f00();
  local_1c8 = 0;
  if (5 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_1c8 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x5e0);
    if (local_1c8 == 0) {
      local_1c8 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x5d0);
    }
  }
  local_1c0 = 0;
  local_1b8 = fVar8;
  lVar2 = FUN_00518f00();
  local_1b0 = 0;
  if (6 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_1b0 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x6e8);
    if (local_1b0 == 0) {
      local_1b0 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x6d8);
    }
  }
  local_1a8 = 0;
  local_1a0 = fVar8;
  lVar2 = FUN_00518f00();
  local_198 = 0;
  if (2 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_198 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x2c0);
    if (local_198 == 0) {
      local_198 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x2b0);
    }
  }
  local_190 = 0;
  local_188 = fVar8;
  lVar2 = FUN_00518f00();
  local_180 = 0;
  if (3 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_180 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x3c8);
    if (local_180 == 0) {
      local_180 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x3b8);
    }
  }
  local_178 = 0;
  local_170 = fVar8;
  lVar2 = FUN_00518f00();
  local_168 = 0;
  if (4 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_168 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x4d0);
    if (local_168 == 0) {
      local_168 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x4c0);
    }
  }
  local_160 = 0;
  local_158 = fVar8;
  lVar2 = FUN_00518f00();
  local_150 = 0;
  if (5 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_150 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x5d8);
    if (local_150 == 0) {
      local_150 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x5c8);
    }
  }
  local_148 = 0;
  local_140 = fVar8;
  lVar2 = FUN_00518f00();
  local_138 = 0;
  if (6 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = FUN_00518f00();
    local_138 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x6e0);
    if (local_138 == 0) {
      local_138 = *(long *)(*(long *)(lVar2 + 0x4a8) + 0x6d0);
    }
  }
  local_130 = 0;
  local_128 = fVar8;
  lVar2 = FUN_00518f00();
  if (*(int *)(lVar2 + 0x3f8) < 1) {
    local_120 = 0;
  }
  else {
    uVar6 = FUN_00518f00();
    local_120 = FUN_005b3650(uVar6,0,0);
  }
  local_118 = 0;
  local_110 = fVar8;
  lVar2 = FUN_00518f00();
  local_108 = 0;
  if (1 < *(int *)(lVar2 + 0x3f8)) {
    uVar6 = FUN_00518f00();
    local_108 = FUN_005b3650(uVar6,0,1);
  }
  local_100 = 0;
  local_f8 = fVar8;
  lVar2 = FUN_00518f00();
  local_f0 = 0;
  if (2 < *(int *)(lVar2 + 0x3f8)) {
    uVar6 = FUN_00518f00();
    local_f0 = FUN_005b3650(uVar6,0,2);
  }
  local_e8 = 0;
  local_e0 = fVar8;
  lVar2 = FUN_00518f00();
  if (*(int *)(lVar2 + 0x3f8) < 1) {
    local_d8 = 0;
  }
  else {
    uVar6 = FUN_00518f00();
    local_d8 = FUN_005b3650(uVar6,1,0);
  }
  local_d0 = 0;
  local_c8 = fVar8;
  lVar2 = FUN_00518f00();
  local_c0 = 0;
  if (1 < *(int *)(lVar2 + 0x3f8)) {
    uVar6 = FUN_00518f00();
    local_c0 = FUN_005b3650(uVar6,1,1);
  }
  local_b8 = 0;
  local_b0 = fVar8;
  lVar2 = FUN_00518f00();
  local_a8 = 0;
  if (2 < *(int *)(lVar2 + 0x3f8)) {
    uVar6 = FUN_00518f00();
    local_a8 = FUN_005b3650(uVar6,1,2);
  }
  puVar1 = PTR_DAT_02713ab8;
  fVar10 = DAT_01d4bb64;
  local_a0 = 0;
  local_98 = fVar8;
  local_88 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x228);
  local_80 = 0x3f800000;
  local_78 = *(undefined8 *)(param_1 + 0x230);
  local_68 = 0x3f800000;
  uVar4 = 0;
  local_70 = 0;
  pfVar7 = local_608;
  do {
    while( true ) {
      local_620 = (float)((uint)uVar4 & 0xf);
      fStack_61c = (float)((uint)(uVar4 >> 4) & 0xfffffff);
      if (*(long *)(pfVar7 + -4) == 0) break;
      local_620 = local_620 * fVar10;
      fStack_61c = fStack_61c * fVar10;
      local_628 = 0x3d8000003d800000;
      FUN_005a6b00(*pfVar7 * *(float *)puVar1,*(undefined8 *)(param_1 + 0x1168),
                   *(long *)(pfVar7 + -4),0,&local_628,0,3);
      uVar4 = uVar4 + 1;
      pfVar7 = pfVar7 + 6;
      if (uVar4 == 0x3d) goto LAB_005395e8;
    }
    if (*(long *)(pfVar7 + -2) != 0) {
      local_620 = local_620 * fVar10;
      fStack_61c = fStack_61c * fVar10;
      local_628 = 0x3d8000003d800000;
      FUN_005a6b50(*pfVar7 * *(float *)puVar1,0x3f800000,0x3f800000,
                   *(undefined8 *)(param_1 + 0x1168),*(long *)(pfVar7 + -2),0,&local_628,0,3);
    }
    uVar4 = uVar4 + 1;
    pfVar7 = pfVar7 + 6;
  } while (uVar4 != 0x3d);
LAB_005395e8:
  puVar1 = PTR_DAT_02713ac0;
  uVar4 = 0;
  plVar5 = &lStack_610;
  do {
    while( true ) {
      local_620 = (float)((uint)uVar4 & 0xf);
      fStack_61c = (float)((uint)(uVar4 >> 4) & 0xfffffff) + 4.0;
      if (plVar5[-1] == 0) break;
      local_620 = local_620 * fVar10;
      fStack_61c = fStack_61c * fVar10;
      local_628 = 0x3d8000003d800000;
      FUN_005a6b00(*(undefined4 *)puVar1,*(undefined8 *)(param_1 + 0x1168),plVar5[-1],0x15,
                   &local_628,0,3);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 3;
      if (uVar4 == 0x3d) {
        return 0;
      }
    }
    if (*plVar5 != 0) {
      local_620 = local_620 * fVar10;
      fStack_61c = fStack_61c * fVar10;
      local_628 = 0x3d8000003d800000;
      FUN_005a6b50(*(undefined4 *)puVar1,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x1168),
                   *plVar5,0x15,&local_628,0,3);
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 3;
  } while (uVar4 != 0x3d);
  return 0;
}


