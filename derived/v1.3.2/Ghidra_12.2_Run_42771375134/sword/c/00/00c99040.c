/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c99040; name: FUN_00c99040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c99040(long param_1,long param_2,long param_3,long *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  undefined1 *in_stack_00000000;
  long in_stack_00000008;
  long *in_stack_00000010;
  int *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000040;
  long local_390;
  undefined3 local_388;
  undefined5 uStack_385;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined2 uStack_378;
  undefined1 uStack_376;
  undefined5 uStack_375;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  undefined1 uStack_366;
  undefined5 uStack_365;
  undefined8 local_360;
  byte *pbStack_358;
  undefined8 local_350;
  long local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  long local_300 [3];
  long local_2e8;
  undefined8 local_290;
  undefined8 local_288;
  byte *local_280;
  byte *local_278;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  long local_1d0 [39];
  undefined3 uStack_98;
  undefined5 local_95;
  undefined3 uStack_90;
  undefined5 local_8d;
  undefined2 uStack_88;
  undefined1 uStack_86;
  long local_80;
  long local_78 [3];
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x20);
  lVar22 = *(long *)(param_2 + 0x18);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar22;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x30);
  uVar18 = *(undefined8 *)(param_2 + 0x38);
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0xc0) = uVar19;
  *(undefined8 *)(param_1 + 0xb0) = uVar18;
  lVar22 = *(long *)(param_2 + 0x60);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar22;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x2d4) = *(undefined1 *)(param_2 + 0x70);
  lVar22 = FUN_00ad95d0(local_1d0,*(undefined8 *)(param_1 + 0x68));
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(long *)(param_1 + 0x108) = lVar22;
  if (*(char *)(param_2 + 0x25) != '\0') {
    *(ulong *)(*(long *)(lVar22 + 0x170) + 0x138) =
         *(ulong *)(*(long *)(lVar22 + 0x170) + 0x138) | 1;
    lVar22 = *(long *)(*(long *)(param_1 + 0x108) + 0x178);
    *(ulong *)(lVar22 + 0x138) = *(ulong *)(lVar22 + 0x138) | 1;
    lVar22 = *(long *)(param_1 + 0x108);
  }
  local_78[0] = lVar22;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))((long *)(lVar22 + 0x48));
  }
  puVar9 = PTR_DAT_0271c220;
  puVar8 = PTR_DAT_0271c210;
  puVar7 = PTR_DAT_0271c208;
  lVar22 = *(long *)(param_1 + 200);
  if ((lVar22 == 0) || (*(int *)(lVar22 + 0x54) == 0)) {
    plVar28 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar22 + 0x54);
    iVar10 = *(int *)(lVar22 + 0x54);
    do {
      while( true ) {
        puVar25 = *(undefined8 **)(lVar22 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*PTR_DAT_0271c218 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_0271c218), iVar12 != 0)) {
            uVar18 = FUN_00c72b60();
            *(undefined8 *)puVar9 = uVar18;
            __cxa_guard_release(PTR_DAT_0271c218);
            *(undefined **)puVar8 = puVar9;
            __cxa_guard_release(puVar7);
          }
          else {
            *(undefined **)puVar8 = puVar9;
            __cxa_guard_release(puVar7);
          }
        }
        plVar28 = (long *)0x0;
        if (puVar25 == (undefined8 *)0x0) goto LAB_00c99294;
        while (puVar25 != (undefined8 *)puVar8) {
          puVar25 = (undefined8 *)*puVar25;
          if (puVar25 == (undefined8 *)0x0) {
            plVar28 = (long *)0x0;
            goto LAB_00c99294;
          }
        }
        iVar12 = *piVar1;
        if (iVar12 != iVar10) break;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar28 = (long *)0x0;
          if (*(long *)(lVar22 + 0x60) != 0) {
            plVar28 = (long *)(*(long *)(lVar22 + 0x60) + -0x50);
          }
          goto LAB_00c99294;
        }
        plVar28 = (long *)0x0;
        iVar10 = iVar12;
        if (iVar12 == 0) goto LAB_00c99294;
      }
      ClearExclusiveLocal();
      plVar28 = (long *)0x0;
      iVar10 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00c99294:
  (**(code **)(*plVar28 + 0x98))(local_1d0,plVar28);
  lVar22 = local_1d0[0];
  puVar8 = PTR_DAT_02715080;
  puVar7 = PTR_DAT_02715078;
  if ((local_1d0[0] == 0) || (*(int *)(local_1d0[0] + 0x54) == 0)) {
LAB_00c9934c:
    local_80 = 0;
  }
  else {
    piVar1 = (int *)(local_1d0[0] + 0x54);
    iVar10 = *(int *)(local_1d0[0] + 0x54);
    do {
      while( true ) {
        plVar27 = *(long **)(lVar22 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar18 = FUN_00a87090();
          *(undefined8 *)puVar8 = uVar18;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar27 == (long *)0x0) goto LAB_00c9934c;
          if (plVar27 == (long *)puVar8) break;
          plVar27 = (long *)*plVar27;
        }
        iVar12 = *piVar1;
        if (iVar12 != iVar10) break;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar22 = *(long *)(lVar22 + 0x60);
          local_80 = 0;
          if (lVar22 != 0) {
            local_80 = lVar22 + -0x50;
          }
          goto LAB_00c99350;
        }
        local_80 = 0;
        iVar10 = iVar12;
        if (iVar12 == 0) goto LAB_00c99350;
      }
      ClearExclusiveLocal();
      local_80 = 0;
      iVar10 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00c99350:
  FUN_01025980(local_78,&local_80,param_2 + 0x50);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_1d0[0] != 0) {
    (**(code **)(*(long *)(local_1d0[0] + 0x48) + 0x18))();
    local_1d0[0] = 0;
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(plVar28[9] + 0x18))(plVar28 + 9);
  }
  if (local_78[0] != 0) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    local_78[0] = 0;
  }
  local_8d = 0;
  uStack_88 = 0;
  uStack_86 = 0;
  local_95 = 0;
  uStack_90 = 0;
  lVar22 = *(long *)(param_1 + 0x70);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  uVar18 = *(undefined8 *)(param_1 + 0xb5);
  uStack_88 = *(undefined2 *)(param_1 + 0xc5);
  uStack_86 = *(undefined1 *)(param_1 + 199);
  uVar11 = *(undefined4 *)(param_1 + 0xb0);
  uVar23 = *(undefined1 *)(param_1 + 0xb4);
  uStack_98 = (undefined3)uVar18;
  local_95 = (undefined5)((ulong)uVar18 >> 0x18);
  uStack_90 = (undefined3)*(undefined8 *)(param_1 + 0xbd);
  local_8d = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xbd) >> 0x18);
  *(undefined4 *)(param_3 + 8) = 9;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0xb;
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_3 + 0x20);
  *(long *)(param_3 + 0x20) = lVar22;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_3 + 0x28) = uVar11;
  *(undefined1 *)(param_3 + 0x2c) = uVar23;
  *(undefined1 *)(param_3 + 0x3f) = uStack_86;
  *(undefined2 *)(param_3 + 0x3d) = uStack_88;
  *(ulong *)(param_3 + 0x35) = CONCAT53(local_8d,uStack_90);
  *(ulong *)(param_3 + 0x2d) = CONCAT53(local_95,uStack_98);
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined **)(param_1 + 0x290) = (&PTR_s_Waist_02640e68)[*(byte *)(param_1 + 0xb4)];
  if ((*(long *)(param_1 + 0x70) == 0) ||
     (puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar25 == (undefined8 *)0x0)) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar16 = puVar25 + -10;
    (**(code **)*puVar25)();
    uVar14 = FUN_00c953c0();
    if ((uVar14 & 1) == 0) {
      puVar16 = (undefined8 *)0x0;
    }
  }
  local_300[0] = *(long *)(param_1 + 0xc0);
  iVar10 = FUN_00c9ef80(local_1d0,puVar16,param_1 + 0xb0,local_300);
  if (iVar10 == 1) {
    memcpy(local_300,local_1d0,0x130);
    puVar7 = PTR_DAT_0271c258;
    if (local_280 == (byte *)0x0) {
      uVar23 = 0;
    }
    else {
      uStack_378 = 0;
      uStack_376 = 0;
      uStack_375 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      uStack_366 = 0;
      uStack_365 = 0;
      local_310 = 0;
      local_308 = 0;
      local_320 = 0;
      local_318 = 0;
      local_388 = SUB83(PTR_DAT_0271c258 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(PTR_DAT_0271c258 + 0x10) >> 0x18);
      local_380 = 7;
      local_330 = 0;
      local_328 = 0;
      local_340 = 0;
      local_338 = 0;
      local_350 = 0;
      local_348 = 0;
      local_360 = 0;
      pbStack_358 = (byte *)0x0;
      uVar18 = FUN_00c65240();
      uStack_378 = (undefined2)uVar18;
      uStack_376 = (undefined1)((ulong)uVar18 >> 0x10);
      uStack_375 = (undefined5)((ulong)uVar18 >> 0x18);
      uStack_370 = 8;
      lVar13 = *(long *)(param_1 + 0x70);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = CONCAT53(uStack_365,CONCAT12(uStack_366,uStack_368));
      uStack_368 = (undefined2)lVar13;
      uStack_366 = (undefined1)((ulong)lVar13 >> 0x10);
      uStack_365 = (undefined5)((ulong)lVar13 >> 0x18);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      }
      local_360 = local_290;
      pbStack_358 = local_280;
      local_350 = FUN_00c65260();
      FUN_00c9a820(in_stack_00000028,&local_388);
      local_388 = SUB83(puVar7 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(puVar7 + 0x10) >> 0x18);
      if (local_308 != 0) {
        (**(code **)(*(long *)(local_308 + 0x48) + 0x18))();
        local_308 = 0;
      }
      if (local_310 != 0) {
        (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
        local_310 = 0;
      }
      if (local_318 != 0) {
        (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
        local_318 = 0;
      }
      if (local_320 != 0) {
        (**(code **)(*(long *)(local_320 + 0x48) + 0x18))();
        local_320 = 0;
      }
      if (local_328 != 0) {
        (**(code **)(*(long *)(local_328 + 0x48) + 0x18))();
        local_328 = 0;
      }
      if (local_330 != 0) {
        (**(code **)(*(long *)(local_330 + 0x48) + 0x18))();
        local_330 = 0;
      }
      if (local_338 != 0) {
        (**(code **)(*(long *)(local_338 + 0x48) + 0x18))();
        local_338 = 0;
      }
      if (local_340 != 0) {
        (**(code **)(*(long *)(local_340 + 0x48) + 0x18))();
        local_340 = 0;
      }
      if (local_348 != 0) {
        (**(code **)(*(long *)(local_348 + 0x48) + 0x18))();
        local_348 = 0;
      }
      lVar13 = CONCAT53(uStack_365,CONCAT12(uStack_366,uStack_368));
      local_388 = SUB83(PTR_DAT_0271c260 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(PTR_DAT_0271c260 + 0x10) >> 0x18);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
        uStack_368 = 0;
        uStack_366 = 0;
        uStack_365 = 0;
      }
      uVar23 = 1;
    }
    if (local_2e8 == 0) {
      bVar6 = false;
      if (local_280 != (byte *)0x0) goto LAB_00c997c8;
LAB_00c999fc:
      uVar17 = 0;
    }
    else {
      uStack_36c = 0;
      uStack_368 = 0;
      uStack_366 = 0;
      uStack_375 = 0;
      uStack_370 = 0;
      uStack_37c = 0;
      uStack_378 = 0;
      uStack_376 = 0;
      uStack_385 = 0;
      local_380 = 0;
      lVar13 = *(long *)(param_1 + 0x70);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      uVar11 = *(undefined4 *)(param_1 + 0xb0);
      uVar17 = *(undefined1 *)(param_1 + 0xb4);
      uStack_378 = *(undefined2 *)(param_1 + 0xc5);
      uVar18 = *(undefined8 *)(param_1 + 0xb5);
      uStack_376 = *(undefined1 *)(param_1 + 199);
      local_388 = (undefined3)uVar18;
      uStack_385 = (undefined5)((ulong)uVar18 >> 0x18);
      local_380 = (undefined4)*(undefined8 *)(param_1 + 0xbd);
      uStack_37c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xbd) >> 0x20);
      *(undefined4 *)(in_stack_00000008 + 8) = 0xb;
      *(undefined8 *)(in_stack_00000008 + 0x10) = 0;
      *(undefined4 *)(in_stack_00000008 + 0x18) = 0xb;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(in_stack_00000008 + 0x20);
      *(long *)(in_stack_00000008 + 0x20) = lVar13;
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      }
      *(undefined4 *)(in_stack_00000008 + 0x28) = uVar11;
      *(undefined1 *)(in_stack_00000008 + 0x2c) = uVar17;
      *(ulong *)(in_stack_00000008 + 0x35) = CONCAT44(uStack_37c,local_380);
      *(ulong *)(in_stack_00000008 + 0x2d) = CONCAT53(uStack_385,local_388);
      *(undefined1 *)(in_stack_00000008 + 0x4f) = uStack_366;
      *(undefined2 *)(in_stack_00000008 + 0x4d) = uStack_368;
      *(ulong *)(in_stack_00000008 + 0x45) = CONCAT44(uStack_36c,uStack_370);
      *(ulong *)(in_stack_00000008 + 0x3d) = CONCAT53(uStack_375,CONCAT12(uStack_376,uStack_378));
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      bVar6 = true;
      if (local_280 == (byte *)0x0) goto LAB_00c999fc;
LAB_00c997c8:
      puVar7 = PTR_DAT_0271c258;
      if (local_278 == (byte *)0x0) goto LAB_00c999fc;
      bVar3 = *local_280;
      uVar14 = 0xcbf29ce484222645;
      uVar20 = 0xcbf29ce484222645;
      if (bVar3 != 0) {
        uVar20 = 0xcbf29ce484222645;
        do {
          local_280 = local_280 + 1;
          uVar20 = (uVar20 ^ bVar3) * 0x100000001b3;
          bVar3 = *local_280;
        } while (bVar3 != 0);
      }
      bVar3 = *local_278;
      pbVar21 = local_278;
      while (bVar3 != 0) {
        pbVar21 = pbVar21 + 1;
        uVar14 = (uVar14 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar21;
      }
      if (uVar20 == uVar14) goto LAB_00c999fc;
      uStack_378 = 0;
      uStack_376 = 0;
      uStack_375 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      uStack_366 = 0;
      uStack_365 = 0;
      local_388 = SUB83(PTR_DAT_0271c258 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(PTR_DAT_0271c258 + 0x10) >> 0x18);
      local_310 = 0;
      local_308 = 0;
      local_380 = 7;
      local_320 = 0;
      local_318 = 0;
      local_330 = 0;
      local_328 = 0;
      local_340 = 0;
      local_338 = 0;
      local_350 = 0;
      local_348 = 0;
      local_360 = 0;
      pbStack_358 = (byte *)0x0;
      uVar18 = FUN_00c65240();
      uStack_378 = (undefined2)uVar18;
      uStack_376 = (undefined1)((ulong)uVar18 >> 0x10);
      uStack_375 = (undefined5)((ulong)uVar18 >> 0x18);
      uStack_370 = 8;
      lVar13 = *(long *)(param_1 + 0x70);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = CONCAT53(uStack_365,CONCAT12(uStack_366,uStack_368));
      uStack_368 = (undefined2)lVar13;
      uStack_366 = (undefined1)((ulong)lVar13 >> 0x10);
      uStack_365 = (undefined5)((ulong)lVar13 >> 0x18);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      }
      local_360 = local_288;
      pbStack_358 = local_278;
      local_350 = FUN_00c65260();
      FUN_00c9a820(in_stack_00000038,&local_388);
      local_388 = SUB83(puVar7 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(puVar7 + 0x10) >> 0x18);
      if (local_308 != 0) {
        (**(code **)(*(long *)(local_308 + 0x48) + 0x18))();
        local_308 = 0;
      }
      if (local_310 != 0) {
        (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
        local_310 = 0;
      }
      if (local_318 != 0) {
        (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
        local_318 = 0;
      }
      if (local_320 != 0) {
        (**(code **)(*(long *)(local_320 + 0x48) + 0x18))();
        local_320 = 0;
      }
      if (local_328 != 0) {
        (**(code **)(*(long *)(local_328 + 0x48) + 0x18))();
        local_328 = 0;
      }
      if (local_330 != 0) {
        (**(code **)(*(long *)(local_330 + 0x48) + 0x18))();
        local_330 = 0;
      }
      if (local_338 != 0) {
        (**(code **)(*(long *)(local_338 + 0x48) + 0x18))();
        local_338 = 0;
      }
      if (local_340 != 0) {
        (**(code **)(*(long *)(local_340 + 0x48) + 0x18))();
        local_340 = 0;
      }
      if (local_348 != 0) {
        (**(code **)(*(long *)(local_348 + 0x48) + 0x18))();
        local_348 = 0;
      }
      lVar13 = CONCAT53(uStack_365,CONCAT12(uStack_366,uStack_368));
      local_388 = SUB83(PTR_DAT_0271c260 + 0x10,0);
      uStack_385 = (undefined5)((ulong)(PTR_DAT_0271c260 + 0x10) >> 0x18);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
        uStack_368 = 0;
        uStack_366 = 0;
        uStack_365 = 0;
      }
      uVar17 = 1;
    }
    *(bool *)in_stack_00000020 = bVar6;
    *in_stack_00000030 = uVar23;
    *in_stack_00000040 = uVar17;
    *(undefined8 *)(param_1 + 0x250) = local_220;
    *(undefined8 *)(param_1 + 0x260) = local_210;
    *(undefined8 *)(param_1 + 0x268) = uStack_208;
    *(undefined8 *)(param_1 + 0x270) = local_200;
    *(undefined8 *)(param_1 + 0x288) = local_1e8;
    *(undefined8 *)(param_1 + 0x280) = local_1f0;
    *(undefined4 *)(param_1 + 0x2d0) = local_1e0;
    *(undefined8 *)(param_1 + 0x2a8) = local_248;
    *(undefined8 *)(param_1 + 0x2c8) = local_228;
    *(undefined8 *)(param_1 + 0x2b8) = local_238;
    *(undefined8 *)(param_1 + 0x2a0) = local_250;
    *(undefined8 *)(param_1 + 0x2c0) = local_230;
    *(undefined8 *)(param_1 + 0x2b0) = local_240;
  }
  else {
    bVar6 = false;
  }
  *in_stack_00000000 = 0;
  local_300[0] = 0;
  local_390 = 0;
  local_388 = 0;
  uStack_385 = 0;
  FUN_00c9aa50(param_1,local_300,&local_388,&local_390);
  lVar13 = local_300[0];
  if ((*(int *)(param_1 + 0x78) == 6) && (*(char *)(param_1 + 0xb4) != '\x0f')) {
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
  FUN_00c9abe0(local_1d0,param_1,local_300[0],9,uVar18);
  if (*(long *)(param_1 + 0xd0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  *(long *)(param_1 + 0xd0) = local_1d0[0];
  lVar15 = local_1d0[0];
  if (bVar6) {
    FUN_00c9afa0(local_1d0,param_1,local_390,0xb,uVar18);
    if (*(long *)(param_1 + 0xe0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    *(long *)(param_1 + 0xe0) = local_1d0[0];
    lVar15 = *(long *)(param_1 + 0xd0);
  }
  if (lVar15 == 0) {
LAB_00c99b4c:
    *param_4 = lVar13;
    iVar10 = FUN_00c9b360(lVar13);
    *param_5 = iVar10;
    lVar15 = *(long *)(lVar13 + 0x10);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    if ((-1 < iVar10) && (iVar10 < *(int *)(lVar13 + 8))) {
      uVar14 = (ulong)iVar10;
      if (*(ulong *)(*(long *)(lVar13 + 0x38) + 0x48) <= uVar14) goto LAB_00c9a290;
      lVar26 = *(long *)(*(long *)(lVar13 + 0x38) + 0x40);
      plVar28 = (long *)(lVar26 + uVar14 * 0x28 + 0x10);
      lVar24 = *plVar28;
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = *plVar28;
      *plVar28 = lVar13;
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      }
      lVar26 = lVar26 + uVar14 * 0x28;
      *(undefined1 *)(lVar26 + 0x18) = 0;
      *(undefined8 *)(lVar26 + 0x1c) = 0;
      lVar15 = lVar24;
    }
    if ((lVar15 != 0) && (piVar1 = (int *)(lVar15 + 0x54), *piVar1 != 0)) {
      lVar26 = *(long *)(param_1 + 0x70);
      lVar13 = 0;
      if (lVar26 != 0) {
        if (*(int *)(lVar26 + 0x54) != 0) {
          piVar2 = (int *)(lVar26 + 0x54);
          iVar10 = *(int *)(lVar26 + 0x54);
          do {
            while( true ) {
              uVar14 = FUN_00c953c0(*(undefined8 *)(lVar26 + 0x58));
              if ((uVar14 & 1) == 0) goto LAB_00c99c84;
              iVar12 = *piVar2;
              if (iVar12 != iVar10) break;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar13 = 0;
                if (*(long *)(lVar26 + 0x60) != 0) {
                  lVar13 = *(long *)(lVar26 + 0x60) + -0x50;
                }
                goto LAB_00c99c88;
              }
              iVar10 = iVar12;
              if (iVar12 == 0) goto LAB_00c99c84;
            }
            ClearExclusiveLocal();
            iVar10 = iVar12;
          } while (iVar12 != 0);
        }
LAB_00c99c84:
        lVar13 = 0;
      }
LAB_00c99c88:
      plVar28 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar28 + 0x10))(plVar28);
      puVar7 = PTR_DAT_0271c2b8;
      if (*(int *)(lVar15 + 0x54) == 0) {
        lVar26 = 0;
        uVar11 = _DAT_00000070;
      }
      else {
        pbVar21 = PTR_DAT_0271c2b0;
        iVar10 = *(int *)(lVar15 + 0x54);
        do {
          while( true ) {
            plVar27 = *(long **)(lVar15 + 0x58);
            if ((*pbVar21 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(pbVar21);
              pbVar21 = PTR_DAT_0271c2b0;
              if (iVar12 != 0) {
                uVar18 = FUN_00c72b60();
                *(undefined8 *)puVar7 = uVar18;
                __cxa_guard_release(PTR_DAT_0271c2b0);
                pbVar21 = PTR_DAT_0271c2b0;
              }
            }
            while( true ) {
              if (plVar27 == (long *)0x0) goto LAB_00c99d44;
              if (plVar27 == (long *)puVar7) break;
              plVar27 = (long *)*plVar27;
            }
            iVar12 = *piVar1;
            if (iVar12 != iVar10) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar26 = 0;
              if (*(long *)(lVar15 + 0x60) != 0) {
                lVar26 = *(long *)(lVar15 + 0x60) + -0x50;
              }
              goto LAB_00c99d48;
            }
            iVar10 = iVar12;
            if (iVar12 == 0) goto LAB_00c99d44;
          }
          ClearExclusiveLocal();
          iVar10 = iVar12;
        } while (iVar12 != 0);
LAB_00c99d44:
        lVar26 = 0;
LAB_00c99d48:
        uVar11 = *(undefined4 *)(lVar26 + 0x70);
      }
      local_1d0[0] = lVar15;
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))(plVar28);
      FUN_00ca9590(lVar13,0,local_1d0,uVar11);
      if (local_1d0[0] != 0) {
        (**(code **)(*(long *)(local_1d0[0] + 0x48) + 0x18))();
        local_1d0[0] = 0;
      }
      if (lVar26 != 0) {
        (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
      }
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
    }
    lVar13 = local_300[0];
    iVar10 = *param_5;
    if ((iVar10 < 0) || (*(int *)(local_300[0] + 8) <= iVar10)) {
      uVar18 = 0;
    }
    else {
      if (*(ulong *)(*(long *)(local_300[0] + 0x38) + 0x48) <= (ulong)(long)iVar10)
      goto LAB_00c9a290;
      uVar18 = *(undefined8 *)
                (*(long *)(*(long *)(local_300[0] + 0x38) + 0x40) + (long)iVar10 * 0x28);
    }
    *(undefined8 *)(param_3 + 0x10) = uVar18;
    uVar11 = FUN_00c84470(*(undefined8 *)(param_1 + 0xa8));
    *(undefined4 *)(param_3 + 0x18) = uVar11;
    iVar10 = *param_5;
    if ((iVar10 < 0) || (*(int *)(lVar13 + 8) <= iVar10)) {
      *(undefined8 *)(param_3 + 0x40) = 0;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x38);
      if (*(ulong *)(lVar13 + 0x48) <= (ulong)(long)iVar10) goto LAB_00c9a290;
      *(undefined8 *)(param_3 + 0x40) =
           *(undefined8 *)(*(long *)(lVar13 + 0x40) + (long)iVar10 * 0x28 + 8);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
  }
  else if (*(int *)(lVar15 + 0x54) == 0) {
    lVar13 = local_300[0];
    goto LAB_00c99b4c;
  }
  lVar13 = local_390;
  if ((bVar6) &&
     ((*(long *)(param_1 + 0xe0) == 0 || (*(int *)(*(long *)(param_1 + 0xe0) + 0x54) == 0)))) {
    *in_stack_00000010 = local_390;
    iVar10 = FUN_00c9b360(local_390);
    *in_stack_00000018 = iVar10;
    lVar15 = *(long *)(lVar13 + 0x10);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    if ((-1 < iVar10) && (iVar10 < *(int *)(lVar13 + 8))) {
      uVar14 = (ulong)iVar10;
      if (*(ulong *)(*(long *)(lVar13 + 0x38) + 0x48) <= uVar14) goto LAB_00c9a290;
      lVar26 = *(long *)(*(long *)(lVar13 + 0x38) + 0x40);
      plVar28 = (long *)(lVar26 + uVar14 * 0x28 + 0x10);
      lVar24 = *plVar28;
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = *plVar28;
      *plVar28 = lVar13;
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      }
      lVar26 = lVar26 + uVar14 * 0x28;
      *(undefined1 *)(lVar26 + 0x18) = 0;
      *(undefined8 *)(lVar26 + 0x1c) = 0;
      lVar15 = lVar24;
    }
    if ((lVar15 != 0) && (piVar1 = (int *)(lVar15 + 0x54), *piVar1 != 0)) {
      lVar26 = *(long *)(param_1 + 0x70);
      lVar13 = 0;
      if (lVar26 != 0) {
        if (*(int *)(lVar26 + 0x54) != 0) {
          piVar2 = (int *)(lVar26 + 0x54);
          iVar10 = *(int *)(lVar26 + 0x54);
          do {
            while( true ) {
              uVar14 = FUN_00c953c0(*(undefined8 *)(lVar26 + 0x58));
              if ((uVar14 & 1) == 0) goto LAB_00c99fe4;
              iVar12 = *piVar2;
              if (iVar12 != iVar10) break;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar13 = 0;
                if (*(long *)(lVar26 + 0x60) != 0) {
                  lVar13 = *(long *)(lVar26 + 0x60) + -0x50;
                }
                goto LAB_00c99fe8;
              }
              iVar10 = iVar12;
              if (iVar12 == 0) goto LAB_00c99fe4;
            }
            ClearExclusiveLocal();
            iVar10 = iVar12;
          } while (iVar12 != 0);
        }
LAB_00c99fe4:
        lVar13 = 0;
      }
LAB_00c99fe8:
      plVar28 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar28 + 0x10))(plVar28);
      puVar8 = PTR_DAT_0271c2b8;
      puVar7 = PTR_DAT_0271c2b0;
      iVar10 = *(int *)(lVar15 + 0x54);
      if (iVar10 == 0) {
        lVar26 = 0;
        uVar11 = _DAT_00000070;
      }
      else {
        do {
          while( true ) {
            plVar27 = *(long **)(lVar15 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
              uVar18 = FUN_00c72b60();
              *(undefined8 *)puVar8 = uVar18;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar27 == (long *)0x0) goto LAB_00c9a08c;
              if (plVar27 == (long *)puVar8) break;
              plVar27 = (long *)*plVar27;
            }
            iVar12 = *piVar1;
            if (iVar12 != iVar10) break;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar26 = 0;
              if (*(long *)(lVar15 + 0x60) != 0) {
                lVar26 = *(long *)(lVar15 + 0x60) + -0x50;
              }
              goto LAB_00c9a090;
            }
            iVar10 = iVar12;
            if (iVar12 == 0) goto LAB_00c9a08c;
          }
          ClearExclusiveLocal();
          iVar10 = iVar12;
        } while (iVar12 != 0);
LAB_00c9a08c:
        lVar26 = 0;
LAB_00c9a090:
        uVar11 = *(undefined4 *)(lVar26 + 0x70);
      }
      local_1d0[0] = lVar15;
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))(plVar28);
      FUN_00ca9590(lVar13,0,local_1d0,uVar11);
      if (local_1d0[0] != 0) {
        (**(code **)(*(long *)(local_1d0[0] + 0x48) + 0x18))();
        local_1d0[0] = 0;
      }
      if (lVar26 != 0) {
        (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
      }
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
    }
    lVar13 = local_390;
    iVar10 = *in_stack_00000018;
    if ((iVar10 < 0) || (*(int *)(local_390 + 8) <= iVar10)) {
      uVar18 = 0;
    }
    else {
      if (*(ulong *)(*(long *)(local_390 + 0x38) + 0x48) <= (ulong)(long)iVar10) goto LAB_00c9a290;
      uVar18 = *(undefined8 *)(*(long *)(*(long *)(local_390 + 0x38) + 0x40) + (long)iVar10 * 0x28);
    }
    *(undefined8 *)(in_stack_00000008 + 0x10) = uVar18;
    uVar11 = FUN_00c84470(*(undefined8 *)(param_1 + 0xa8));
    *(undefined4 *)(in_stack_00000008 + 0x18) = uVar11;
    iVar10 = *in_stack_00000018;
    if ((iVar10 < 0) || (*(int *)(lVar13 + 8) <= iVar10)) {
      *(undefined8 *)(in_stack_00000008 + 0x40) = 0;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x38);
      if (*(ulong *)(lVar13 + 0x48) <= (ulong)(long)iVar10) {
LAB_00c9a290:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(in_stack_00000008 + 0x40) =
           *(undefined8 *)(*(long *)(lVar13 + 0x40) + (long)iVar10 * 0x28 + 8);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
  }
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  }
  return;
}


