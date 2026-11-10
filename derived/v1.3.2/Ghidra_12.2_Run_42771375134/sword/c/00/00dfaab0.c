/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfaab0; name: FUN_00dfaab0
 */


void FUN_00dfaab0(long param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int local_3dc;
  int local_3d8;
  undefined4 local_3d4;
  ulong local_3d0;
  ulong local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  long local_3a0;
  long local_398;
  long local_390;
  long local_388;
  long local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 uStack_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined4 local_330;
  int local_32c;
  int local_328;
  float fStack_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 local_2e0;
  long local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  int local_254;
  undefined8 local_250;
  long local_230 [45];
  long *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x54) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x290) == '\0') {
    return;
  }
  if (*(char *)(lVar3 + 0x291) == '\0') {
    return;
  }
  FUN_00a658b0(&local_c8);
  uVar2 = (**(code **)(*local_c8 + 0x188))();
  if ((uVar2 & 1) == 0) goto joined_r0x00dfaed0;
  local_230[0] = 0;
  local_230[6] = 0;
  local_230[0xc] = 0;
  local_230[0x12] = 0;
  local_230[0x18] = 0;
  local_230[0x1e] = 0;
  local_230[0x24] = 0;
  local_230[0x2a] = 0;
  local_254 = 0;
  local_284 = 0;
  local_28c = 0;
  uStack_288 = 0;
  local_294 = 0;
  uStack_290 = 0;
  local_29c = 0;
  uStack_298 = 0;
  local_2a4 = 0;
  uStack_2a0 = 0;
  local_2ac = 0;
  uStack_2a8 = 0;
  local_2b4 = 0;
  uStack_2b0 = 0;
  local_270 = 0;
  local_268 = 0;
  local_280 = 0;
  local_278 = 0;
  local_2c8 = *(long *)(param_1 + 0x80);
  lVar3 = local_c8[0x75];
  if (lVar3 == 0) goto joined_r0x00dfaed0;
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if (*(int *)(lVar3 + 0x54) != 0) {
    uVar11 = 0;
    uVar12 = 0;
    if ((local_c8[0x75] != 0) && (*(int *)(local_c8[0x75] + 0x54) != 0)) {
      FUN_00deff50(&local_3b0,local_c8 + 0x75);
      uVar12 = *(undefined8 *)(local_3b0 + 0xb8);
      uVar11 = *(undefined8 *)(local_3b0 + 0xb0);
      if (local_3b0 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_3b0 + 0x48) + 0x18))();
        local_3b0 = (undefined *)0x0;
      }
    }
    if (((float)uVar11 != (float)*(undefined8 *)(param_1 + 0x90)) ||
       ((float)uVar12 != (float)*(undefined8 *)(param_1 + 0x98))) {
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      puVar10 = (undefined *)0x0;
      uStack_3a8 = 0;
      if ((local_c8[0x75] != 0) && (*(int *)(local_c8[0x75] + 0x54) != 0)) {
        FUN_00deff50(&local_3b0,local_c8 + 0x75);
        uStack_3a8 = *(ulong *)(local_3b0 + 0xb8);
        puVar10 = *(undefined **)(local_3b0 + 0xb0);
        if (local_3b0 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_3b0 + 0x48) + 0x18))();
        }
      }
      local_3b0 = puVar10;
      local_254 = FUN_00e01360(uVar6,&local_3b0,&local_250);
      lVar3 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x98) = uVar12;
      *(undefined8 *)(param_1 + 0x90) = uVar11;
      if ((0 < *(int *)(lVar3 + 0x2d8)) ||
         (0 < (int)((ulong)(*(long *)(lVar3 + 0x2e8) - *(long *)(lVar3 + 0x2e0)) >> 3))) {
        FUN_00e016a0(lVar3,&local_250,&local_254);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if (((local_254 < 1) || (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x68), lVar3 == 0)) ||
         (*(char *)(lVar3 + 0x170) == '\0')) {
        uVar13 = 0;
        uVar5 = 0;
        local_3d4 = 0;
        local_3d0._0_4_ = 0;
        local_68._4_4_ = 0;
        local_68._0_4_ = 0;
        iVar9 = 0;
        local_3c0._0_4_ = 0.0;
        local_3d8 = 0;
        *(undefined8 *)(param_1 + 0x80) = 0xcbf29ce484222645;
        local_3dc = -1;
        uVar1 = 0;
        if (local_2c8 == -0x340d631b7bddd9bb) goto LAB_00dfaebc;
      }
      else {
        uVar2 = 0;
        uVar13 = 0;
        local_3d8 = 0;
        local_3c0 = 0;
        iVar9 = -100;
        uVar8 = 0xffffffff;
        local_68 = 0;
        plVar4 = &local_250;
        local_3d4 = 0;
        local_3d0 = 0;
        local_3dc = -1;
        do {
          if (7 < uVar2) goto LAB_00dfb1e0;
          local_c0 = *plVar4;
          local_b8 = plVar4[1];
          local_a0 = plVar4[4];
          local_98 = plVar4[5];
          local_b0 = plVar4[2];
          local_a8 = plVar4[3];
          FUN_00dff520(&local_3b0,*(undefined8 *)(param_1 + 0x78),&local_a0,&local_2c8);
          if (iVar9 <= uStack_3a8._4_4_) {
            local_3d8 = (int)local_3b0;
            local_3dc = local_3b0._4_4_;
            local_3c0 = uStack_3a8 & 0xffffffff;
            local_270 = local_390;
            local_268 = local_388;
            uVar8 = uVar2 & 0xffffffff;
            local_280 = local_3a0;
            local_278 = local_398;
            local_68 = local_380;
            local_3d0 = local_378 & 0xffffffff;
            local_3d4 = local_378._4_4_;
            uStack_2b0 = local_35c;
            local_2ac = uStack_358;
            uStack_2a8 = uStack_354;
            local_2a4 = uStack_350;
            local_2c0 = local_36c;
            local_2b4 = uStack_360;
            uStack_290 = local_33c;
            local_28c = uStack_338;
            uStack_288 = local_334;
            local_284 = local_330;
            uStack_2a0 = local_34c;
            local_29c = uStack_348;
            uStack_298 = uStack_344;
            local_294 = local_340;
            iVar9 = uStack_3a8._4_4_;
            uVar13 = (undefined4)local_320;
          }
          uVar5 = (undefined1)uVar13;
          uVar2 = uVar2 + 1;
          plVar4 = plVar4 + 6;
        } while ((long)uVar2 < (long)local_254);
        uVar7 = (uint)uVar8;
        if (7 < uVar7) {
LAB_00dfb1e0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = local_230[(long)(int)uVar7 * 6];
        uVar13 = *(undefined4 *)((long)local_230 + (long)(int)uVar7 * 0x30 + -0x1c);
        *(long *)(param_1 + 0x80) = lVar3;
        uVar1 = uVar5;
        if (lVar3 == local_2c8) {
LAB_00dfaebc:
          uVar5 = uVar1;
          if ((param_2 & 1) == 0) {
            FUN_00e8ff30(uVar13,local_c8);
            goto joined_r0x00dfaed0;
          }
        }
      }
      uStack_360 = (undefined4)local_280;
      local_35c = (undefined4)((ulong)local_280 >> 0x20);
      uStack_358 = (undefined4)local_278;
      uStack_354 = (undefined4)((ulong)local_278 >> 0x20);
      uStack_348 = (undefined4)local_268;
      uStack_344 = (undefined4)((ulong)local_268 >> 0x20);
      uStack_350 = (undefined4)local_270;
      local_34c = (undefined4)((ulong)local_270 >> 0x20);
      local_340 = (undefined4)local_68;
      local_33c = local_68._4_4_;
      uStack_338 = (undefined4)local_3d0;
      local_334 = local_3d4;
      local_32c = iVar9;
      local_328 = local_3dc;
      fStack_324 = (float)local_3c0;
      if (local_3d8 == 3) {
        local_3b0 = PTR_DAT_0271ee78 + 0x10;
        uStack_3a8 = CONCAT44(uStack_3a8._4_4_,3);
        local_3a0 = local_c8[0x9c];
        local_390 = local_c8[0x9e];
        local_398 = local_c8[0x9d];
        local_388 = local_c8[0x9f];
        local_378 = local_c8[0xa1];
        local_370 = (undefined4)local_c8[0xa2];
        local_380 = local_c8[0xa0];
        FUN_00e8f0b0(&local_c0);
        local_330 = local_90;
        local_320 = CONCAT71(local_320._1_7_,uVar5);
      }
      else if (local_3d8 == 2) {
        local_300 = 0;
        uStack_2f8 = 0;
        local_3b0 = PTR_DAT_0271ee80 + 0x10;
        local_320 = 0;
        uStack_318 = 0;
        uStack_3a8 = CONCAT44(uStack_3a8._4_4_,2);
        local_310 = 0;
        uStack_308 = 0;
        local_3a0 = local_c8[0x9c];
        local_390 = local_c8[0x9e];
        local_398 = local_c8[0x9d];
        local_378 = local_c8[0xa1];
        local_388 = local_c8[0x9f];
        local_370 = (undefined4)local_c8[0xa2];
        local_380 = local_c8[0xa0];
        FUN_00e8f0b0(&local_c0);
        local_330 = local_90;
        local_320 = CONCAT44(uStack_2b0,local_2b4);
        uStack_318 = CONCAT44(uStack_2a8,local_2ac);
        local_300 = CONCAT44(uStack_290,local_294);
        uStack_2f8 = CONCAT44(uStack_288,local_28c);
        local_310 = CONCAT44(uStack_2a0,local_2a4);
        uStack_308 = CONCAT44(uStack_298,local_29c);
        local_2e0 = uVar13;
        FUN_00e8f0b0(&local_c0,local_c8);
        local_2f0 = local_90;
      }
      else {
        if (local_3d8 == 1) {
          local_3b0 = PTR_DAT_0271ee70 + 0x10;
          uStack_3a8 = CONCAT44(uStack_3a8._4_4_,1);
          local_3a0 = local_c8[0x9c];
          local_390 = local_c8[0x9e];
          local_398 = local_c8[0x9d];
          local_388 = local_c8[0x9f];
          local_378 = local_c8[0xa1];
          local_370 = (undefined4)local_c8[0xa2];
          local_380 = local_c8[0xa0];
        }
        else {
          local_370 = 0;
          local_380 = 0;
          local_378 = 0;
          local_398 = 0;
          local_390 = 0;
          local_388 = 0;
          local_3b0 = PTR_DAT_0271ee70 + 0x10;
          uStack_3a8 = CONCAT44(uStack_3a8._4_4_,1);
          local_3a0 = 0;
          FUN_00e8f0b0(&local_c0,local_c8);
          local_268 = local_a8;
          local_278 = local_b8;
          local_270 = local_b0;
          local_280 = local_c0;
          local_3a0 = local_c8[0x9c];
          local_390 = local_c8[0x9e];
          local_398 = local_c8[0x9d];
          fStack_324 = *(float *)(local_c8[0x98] + 0xdc);
          local_378 = local_c8[0xa1];
          local_388 = local_c8[0x9f];
          local_370 = (undefined4)local_c8[0xa2];
          local_380 = local_c8[0xa0];
          local_328 = -(uint)(fStack_324 <= 0.0);
          uStack_360 = (undefined4)local_c0;
          local_35c = (undefined4)((ulong)local_c0 >> 0x20);
          uStack_358 = (undefined4)local_b8;
          uStack_354 = (undefined4)((ulong)local_b8 >> 0x20);
          uStack_348 = (undefined4)local_a8;
          uStack_344 = (undefined4)((ulong)local_a8 >> 0x20);
          uStack_350 = (undefined4)local_b0;
          local_34c = (undefined4)((ulong)local_b0 >> 0x20);
          local_340 = (undefined4)local_a0;
          local_33c = local_a0._4_4_;
          uStack_338 = (undefined4)local_98;
          local_334 = local_98._4_4_;
          if (fStack_324 <= 0.0) {
            fStack_324 = 0.0;
          }
          local_32c = 0;
        }
        FUN_00e8f0b0(&local_c0);
        local_330 = local_90;
      }
      FUN_00e8fdb0(local_c8,&local_3b0);
      goto joined_r0x00dfaed0;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4);
joined_r0x00dfaed0:
  if (local_c8 != (long *)0x0) {
    (**(code **)(local_c8[9] + 0x18))();
  }
  return;
}


