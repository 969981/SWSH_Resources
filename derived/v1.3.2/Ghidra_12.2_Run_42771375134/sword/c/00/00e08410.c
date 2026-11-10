/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e08410; name: FUN_00e08410
 */


void FUN_00e08410(long param_1)

{
  char *__s;
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *__s_00;
  ulong uVar10;
  undefined8 local_390;
  char *local_388;
  undefined8 local_380;
  long local_378;
  undefined8 local_370;
  undefined *local_368;
  undefined8 uStack_360;
  long local_358;
  undefined8 local_350;
  undefined *puStack_348;
  undefined8 local_340;
  long local_338;
  undefined8 local_330;
  char *local_328;
  undefined8 local_320;
  long local_318;
  ulong local_310;
  byte *pbStack_308;
  undefined8 local_300;
  long local_2f8;
  undefined8 local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  long local_2d8;
  undefined8 local_2d0;
  char *local_2c8;
  undefined8 local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined8 local_290;
  undefined8 local_288;
  ulong local_280;
  char *pcStack_278;
  undefined8 local_270;
  long local_268;
  long local_260;
  undefined8 uStack_258;
  ulong local_250;
  byte *local_248;
  undefined8 local_240;
  long local_238;
  undefined8 local_230;
  undefined1 *local_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_170;
  undefined8 local_140;
  undefined8 local_110;
  undefined8 local_e0;
  undefined8 local_b0;
  undefined8 local_80;
  undefined8 local_50;
  
  lVar5 = *(long *)(param_1 + 0x50);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x290) != '\0')) && (*(char *)(lVar5 + 0x291) != '\0')) {
    uVar10 = 0xcbf29ce484222645;
    local_1a0 = 0;
    local_170 = 0;
    local_140 = 0;
    local_110 = 0;
    local_e0 = 0;
    local_b0 = 0;
    local_80 = 0;
    local_50 = 0;
    local_250 = 0xcbf29ce484222645;
    local_248 = &DAT_01d38550;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0xcbf29ce484222645;
    local_228 = &DAT_01d38550;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0xcbf29ce484222645;
    local_208 = "";
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0xcbf29ce484222645;
    local_1e8 = &DAT_01d38550;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    lVar5 = FUN_00e7e260();
    if (lVar5 != 0) {
      pbStack_308 = *(byte **)(lVar5 + 0xb8);
      local_310 = *(ulong *)(lVar5 + 0xb0);
      if (((float)local_310 != (float)*(ulong *)(param_1 + 0x70)) ||
         (SUB84(pbStack_308,0) != (float)*(undefined8 *)(param_1 + 0x78))) {
        iVar4 = FUN_00e098a0(*(undefined8 *)(param_1 + 0x50),&local_310,&local_1c0);
        *(ulong *)(param_1 + 0x70) = local_310;
        *(byte **)(param_1 + 0x78) = pbStack_308;
        lVar9 = *(long *)(param_1 + 0x60);
        lVar5 = -0x340d631b7bddd9bb;
        if (0 < iVar4) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x68);
          lVar5 = -0x340d631b7bddd9bb;
          if ((lVar6 != 0) && (lVar5 = -0x340d631b7bddd9bb, *(char *)(lVar6 + 0x170) != '\0')) {
            local_280 = local_1c0;
            pcStack_278 = pcStack_1b8;
            local_260 = local_1a0;
            uStack_258 = uStack_198;
            local_270 = local_1b0;
            local_268 = local_1a8;
            FUN_00e08e50(&local_310,*(long *)(param_1 + 0x58),&local_260);
            local_250 = local_310;
            local_248 = pbStack_308;
            local_240 = local_300;
            if (local_238 != 0) {
              (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
            }
            local_238 = local_2f8;
            local_2f8 = 0;
            local_230 = local_2f0;
            local_228 = local_2e8;
            local_220 = local_2e0;
            if (local_218 != 0) {
              (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
            }
            local_218 = local_2d8;
            local_2d8 = 0;
            local_210 = local_2d0;
            local_208 = local_2c8;
            local_200 = local_2c0;
            if (local_1f8 != 0) {
              (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
            }
            local_1f8 = local_2b8;
            local_2b8 = 0;
            local_1f0 = local_2b0;
            local_1e8 = local_2a8;
            local_1e0 = local_2a0;
            if (local_1d8 != 0) {
              (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
            }
            local_1d8 = local_298;
            local_298 = 0;
            local_1d0 = local_290;
            local_1c8 = local_288;
            if (local_2b8 != 0) {
              (**(code **)(*(long *)(local_2b8 + 0x48) + 0x18))();
              local_2b8 = 0;
            }
            if (local_2d8 != 0) {
              (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
              local_2d8 = 0;
            }
            if (local_2f8 != 0) {
              (**(code **)(*(long *)(local_2f8 + 0x48) + 0x18))();
              local_2f8 = 0;
            }
            lVar5 = local_260;
          }
        }
        if (lVar5 != lVar9) {
          *(long *)(param_1 + 0x60) = lVar5;
          __s_00 = (byte *)(param_1 + 0x80);
          bVar1 = *__s_00;
          local_310 = 0xcbf29ce484222645;
          if (bVar1 != 0) {
            uVar8 = (ulong)(uint)bVar1;
            local_310 = 0xcbf29ce484222645;
            pbVar7 = (byte *)(param_1 + 0x81);
            do {
              local_310 = (local_310 ^ uVar8) * 0x100000001b3;
              bVar2 = *pbVar7;
              uVar8 = (ulong)bVar2;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_300 = 0x7f;
          local_2f8 = 0;
          pbStack_308 = __s_00;
          if (bVar1 != 0) {
            FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_310);
          }
          bVar1 = *(byte *)(param_1 + 0x100);
          __s = (char *)(param_1 + 0x100);
          if (bVar1 != 0) {
            uVar8 = (ulong)(uint)bVar1;
            pbVar7 = (byte *)(param_1 + 0x101);
            do {
              uVar10 = (uVar10 ^ uVar8) * 0x100000001b3;
              bVar2 = *pbVar7;
              uVar8 = (ulong)bVar2;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_270 = 0x7f;
          local_268 = 0;
          local_280 = uVar10;
          pcStack_278 = __s;
          if (bVar1 != 0) {
            FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_280);
          }
          if (*local_248 != 0) {
            FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_250);
          }
          if (*local_208 != '\0') {
            FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_210);
          }
          puVar3 = PTR_DAT_027107a8;
          local_330 = 0xa1f95fa2db8b9317;
          local_328 = "Corridor";
          local_320 = 8;
          local_318 = 0;
          local_350 = 0x75fcb7bbfd48c632;
          puStack_348 = &DAT_01d3401f;
          local_370 = 0xe7b92b0f7719b81a;
          local_340 = 4;
          local_368 = &DAT_01d2cd4c;
          uStack_360 = 4;
          local_390 = 0xe9573e175fd45da7;
          local_388 = "Tight";
          local_380 = 5;
          local_378 = 0;
          local_338 = 0;
          local_358 = 0;
          FUN_00896380((float)(int)local_1c8,*(long *)PTR_DAT_027107a8 + 0x108,&local_330);
          FUN_00896380((float)(int)local_1d0,*(long *)puVar3 + 0x108,&local_350);
          FUN_00896380((float)local_1d0._4_4_,*(long *)puVar3 + 0x108,&local_370);
          FUN_00896380((float)local_1c8._4_4_,*(long *)puVar3 + 0x108,&local_390);
          if (local_378 != 0) {
            (**(code **)(*(long *)(local_378 + 0x48) + 0x18))();
            local_378 = 0;
          }
          if (local_358 != 0) {
            (**(code **)(*(long *)(local_358 + 0x48) + 0x18))();
            local_358 = 0;
          }
          if (local_338 != 0) {
            (**(code **)(*(long *)(local_338 + 0x48) + 0x18))();
            local_338 = 0;
          }
          if (local_318 != 0) {
            (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
            local_318 = 0;
          }
          snprintf((char *)__s_00,0x80,"%s",local_228);
          snprintf(__s,0x80,"%s",local_1e8);
          if (local_268 != 0) {
            (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
            local_268 = 0;
          }
          if (local_2f8 != 0) {
            (**(code **)(*(long *)(local_2f8 + 0x48) + 0x18))();
            local_2f8 = 0;
          }
        }
      }
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
    if (local_1f8 != 0) {
      (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
      local_1f8 = 0;
    }
    if (local_218 != 0) {
      (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
      local_218 = 0;
    }
    if (local_238 != 0) {
      (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    }
  }
  return;
}


