/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7b270; name: FUN_00c7b270
 */


void FUN_00c7b270(long *param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *local_4d8;
  undefined4 local_4b8 [2];
  undefined8 local_4b0;
  long lStack_4a8;
  long local_4a0;
  long local_498;
  long lStack_490;
  undefined8 local_488;
  undefined4 local_480;
  long local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  long local_438;
  long lStack_430;
  long local_428;
  long lStack_420;
  long local_418;
  long lStack_410;
  long local_408;
  long lStack_400;
  long local_3f8;
  long lStack_3f0;
  long local_3e8;
  long lStack_3e0;
  long local_3d8;
  long lStack_3d0;
  long local_3c8;
  long lStack_3c0;
  long local_3b8;
  long lStack_3b0;
  long local_3a8;
  long lStack_3a0;
  long local_398;
  long lStack_390;
  long local_388;
  long lStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined2 local_35c;
  undefined1 local_35a;
  undefined4 local_358;
  undefined1 local_354;
  undefined *local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined1 uStack_32b;
  undefined8 local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined6 uStack_2b8;
  undefined2 local_2b2;
  undefined6 uStack_2b0;
  undefined8 local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined6 uStack_258;
  undefined2 local_252;
  undefined6 uStack_250;
  undefined8 local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined6 uStack_1f8;
  undefined2 local_1f2;
  undefined6 uStack_1f0;
  undefined8 local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined6 uStack_198;
  undefined2 local_192;
  undefined6 uStack_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined6 uStack_138;
  undefined2 local_132;
  undefined6 uStack_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined6 uStack_d8;
  undefined2 local_d2;
  undefined6 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x6c));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00c7b2f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00c7b2f0:
  FUN_00c7b980(param_1,param_2,param_4);
  puVar4 = PTR_DAT_0271c220;
  puVar3 = PTR_DAT_0271c218;
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) {
    lVar10 = *param_1;
    if ((param_3 & 1) == 0) {
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        plVar11 = (long *)0x0;
      }
      else {
        piVar2 = (int *)(lVar10 + 0x54);
        iVar9 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            puVar15 = *(undefined8 **)(lVar10 + 0x58);
            if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
              uVar12 = FUN_00c72b60();
              *(undefined8 *)puVar4 = uVar12;
              __cxa_guard_release(puVar3);
            }
            plVar11 = (long *)0x0;
            if (puVar15 == (undefined8 *)0x0) goto LAB_00c7b488;
            while (puVar15 != (undefined8 *)puVar4) {
              puVar15 = (undefined8 *)*puVar15;
              if (puVar15 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00c7b488;
              }
            }
            iVar8 = *piVar2;
            if (iVar8 != iVar9) break;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
              }
              goto LAB_00c7b488;
            }
            plVar11 = (long *)0x0;
            iVar9 = iVar8;
            if (iVar8 == 0) goto LAB_00c7b488;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_00c7b488:
      (**(code **)(*plVar11 + 0x48))(plVar11,param_4);
    }
    else {
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        plVar11 = (long *)0x0;
      }
      else {
        piVar2 = (int *)(lVar10 + 0x54);
        iVar9 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            puVar15 = *(undefined8 **)(lVar10 + 0x58);
            if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
              uVar12 = FUN_00c72b60();
              *(undefined8 *)puVar4 = uVar12;
              __cxa_guard_release(puVar3);
            }
            plVar11 = (long *)0x0;
            if (puVar15 == (undefined8 *)0x0) goto LAB_00c7b468;
            while (puVar15 != (undefined8 *)puVar4) {
              puVar15 = (undefined8 *)*puVar15;
              if (puVar15 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00c7b468;
              }
            }
            iVar8 = *piVar2;
            if (iVar8 != iVar9) break;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
              }
              goto LAB_00c7b468;
            }
            plVar11 = (long *)0x0;
            iVar9 = iVar8;
            if (iVar8 == 0) goto LAB_00c7b468;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_00c7b468:
      (**(code **)(*plVar11 + 0x40))(plVar11,param_4);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
    if ((*(uint *)(param_4 + 8) & 0xfffffffe) == 0x10) {
      if ((*param_1 != 0) &&
         (local_4d8 = *(undefined8 **)(*param_1 + 0x60), local_4d8 != (undefined8 *)0x0)) {
        plVar11 = (long *)(**(code **)*local_4d8)(local_4d8);
        if (((*PTR_DAT_0271c218 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c218), iVar9 != 0)) {
          uVar12 = FUN_00c72b60();
          *(undefined8 *)PTR_DAT_0271c220 = uVar12;
          __cxa_guard_release(PTR_DAT_0271c218);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_0271c220) {
            local_4d8 = local_4d8 + -10;
            goto LAB_00c7b518;
          }
        }
      }
      local_4d8 = (undefined8 *)0x0;
LAB_00c7b518:
      puVar3 = PTR_DAT_0271c280 + 0x10;
      uVar14 = 0;
      plVar11 = (long *)(param_4 + 0xd8);
      puVar4 = PTR_DAT_0271c288 + 0x10;
      do {
        lVar10 = plVar11[-8];
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        lVar5 = plVar11[-5];
        local_88 = plVar11[-4];
        local_70 = (undefined4)plVar11[-1];
        local_80 = plVar11[-3];
        local_78 = plVar11[-2];
        lVar16 = *plVar11;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        lVar13 = *(long *)PTR_DAT_02719748;
        if (lVar5 != lVar13) {
          uStack_32b = 0;
          local_340 = 0;
          local_328 = 0;
          local_300 = *(undefined8 *)PTR_DAT_0271c2f8;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2d8 = 1;
          uStack_2b0 = 0;
          local_2c0 = 0;
          uStack_2b8 = 0;
          local_2b2 = 0;
          local_2a8 = 0;
          local_2c8 = 0xf;
          local_280 = 6;
          local_278 = 0;
          uStack_250 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_252 = 0;
          local_248 = 0;
          local_268 = 0xf;
          local_220 = 6;
          local_218 = 0;
          uStack_1f0 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          local_1f2 = 0;
          local_1e8 = 0;
          local_208 = 0xf;
          local_1c0 = 6;
          local_1b8 = 0;
          uStack_190 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_192 = 0;
          local_188 = 0;
          local_1a8 = 0xf;
          local_160 = 6;
          local_158 = 0;
          uStack_130 = 0;
          local_140 = 0;
          uStack_138 = 0;
          local_132 = 0;
          local_128 = 0;
          local_148 = 0xf;
          local_100 = 6;
          local_f8 = 0;
          uStack_d0 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_d2 = 0;
          local_c8 = 0;
          local_e8 = 0xf;
          local_a0 = 6;
          local_98 = 0;
          local_8c = 0x101;
          local_90 = 0x1010101;
          local_348 = 0x10;
          local_4b0 = *(undefined8 *)(param_4 + 0x10);
          local_4b8[0] = 0;
          local_4a0 = local_88;
          local_498 = local_80;
          lStack_490 = local_78;
          local_488 = *(undefined8 *)(param_4 + 0x50);
          local_480 = 1;
          local_478 = 0;
          local_470 = *(undefined8 *)(param_4 + 0x60);
          uStack_468 = *(undefined8 *)(param_4 + 0x68);
          local_460 = 0;
          local_458 = 0;
          local_450 = 0;
          uStack_448 = 0;
          local_440 = 1;
          local_35a = 0;
          local_358 = 0;
          local_354 = 0;
          local_378 = 0;
          local_370 = 0;
          uStack_368 = 0;
          local_35c = 0x101;
          local_360 = 0x1010101;
          lStack_4a8 = lVar5;
          local_438 = lVar13;
          lStack_430 = lVar13;
          local_428 = lVar13;
          lStack_420 = lVar13;
          local_418 = lVar13;
          lStack_410 = lVar13;
          local_408 = lVar13;
          lStack_400 = lVar13;
          local_3f8 = lVar13;
          lStack_3f0 = lVar13;
          local_3e8 = lVar13;
          lStack_3e0 = lVar13;
          local_3d8 = lVar13;
          lStack_3d0 = lVar13;
          local_3c8 = lVar13;
          lStack_3c0 = lVar13;
          local_3b8 = lVar13;
          lStack_3b0 = lVar13;
          local_3a8 = lVar13;
          lStack_3a0 = lVar13;
          local_398 = lVar13;
          lStack_390 = lVar13;
          local_388 = lVar13;
          lStack_380 = lVar13;
          local_350 = puVar3;
          local_320 = lVar13;
          local_318 = lVar13;
          local_310 = lVar13;
          local_308 = lVar13;
          local_2d0 = puVar4;
          local_2a0 = lVar13;
          local_298 = lVar13;
          local_290 = lVar13;
          local_288 = lVar13;
          local_270 = puVar4;
          local_240 = lVar13;
          local_238 = lVar13;
          local_230 = lVar13;
          local_228 = lVar13;
          local_210 = puVar4;
          local_1e0 = lVar13;
          local_1d8 = lVar13;
          local_1d0 = lVar13;
          local_1c8 = lVar13;
          local_1b0 = puVar4;
          local_180 = lVar13;
          local_178 = lVar13;
          local_170 = lVar13;
          local_168 = lVar13;
          local_150 = puVar4;
          local_120 = lVar13;
          local_118 = lVar13;
          local_110 = lVar13;
          local_108 = lVar13;
          local_f0 = puVar4;
          local_c0 = lVar13;
          local_b8 = lVar13;
          local_b0 = lVar13;
          local_a8 = lVar13;
          FUN_00c7bb40(param_2,&local_350,local_4b8);
          if (local_478 != 0) {
            (**(code **)(*(long *)(local_478 + 0x48) + 0x18))();
            local_478 = 0;
          }
          uStack_32b = *(undefined1 *)(param_4 + 0x25);
          FUN_00c71170(local_4d8,param_3 & 1,uVar14 & 0xffffffff,&local_350);
          FUN_00c71750(&local_350);
        }
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
        }
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
        uVar14 = uVar14 + 1;
        plVar11 = plVar11 + 0xc;
      } while (uVar14 != 6);
    }
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x6c));
  return;
}


