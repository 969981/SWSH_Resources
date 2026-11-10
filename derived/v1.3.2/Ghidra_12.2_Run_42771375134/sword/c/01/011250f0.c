/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011250f0; name: FUN_011250f0
 */


void FUN_011250f0(long param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 local_3d0;
  char *pcStack_3c8;
  undefined8 local_3c0;
  long local_3b8;
  long local_3b0;
  undefined8 local_3a8;
  char *local_3a0;
  undefined8 local_398;
  long local_390;
  undefined4 local_388;
  undefined2 local_384;
  undefined4 local_380;
  undefined2 local_37c;
  undefined4 local_378;
  undefined2 local_374;
  undefined4 local_370;
  undefined2 local_36c;
  undefined4 local_368;
  undefined2 local_364;
  undefined4 local_360;
  undefined2 local_35c;
  undefined4 local_358;
  undefined2 local_354;
  undefined4 local_350;
  undefined2 local_34c;
  undefined4 local_348;
  undefined2 local_344;
  undefined4 local_340;
  undefined2 local_33c;
  undefined4 local_338;
  undefined2 local_334;
  undefined4 local_330;
  undefined2 local_32c;
  undefined4 local_328;
  undefined2 local_324;
  undefined4 local_320;
  undefined2 local_31c;
  undefined4 local_318;
  undefined2 local_314;
  undefined4 local_310;
  undefined2 local_30c;
  undefined4 local_308;
  undefined2 local_304;
  undefined4 local_300;
  undefined2 local_2fc;
  undefined4 local_2f8;
  undefined2 local_2f4;
  undefined4 local_2f0;
  undefined2 local_2ec;
  undefined4 local_2e8;
  undefined2 local_2e4;
  undefined4 local_2e0;
  undefined2 local_2dc;
  undefined4 local_2d8;
  undefined2 local_2d4;
  undefined4 local_2d0;
  undefined2 local_2cc;
  undefined4 local_2c8;
  undefined2 local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined4 local_2b8;
  undefined2 local_2b4;
  undefined4 local_2b0;
  undefined2 local_2ac;
  undefined4 local_2a8;
  undefined2 local_2a4;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined4 local_298;
  undefined2 local_294;
  undefined4 local_290;
  undefined2 local_28c;
  undefined4 local_288;
  undefined2 local_284;
  undefined4 local_280;
  undefined2 local_27c;
  undefined4 local_278;
  undefined2 local_274;
  undefined4 local_270;
  undefined2 local_26c;
  undefined4 local_268;
  undefined2 local_264;
  undefined4 local_260;
  undefined2 local_25c;
  undefined4 local_258;
  undefined2 local_254;
  undefined4 local_250;
  undefined2 local_24c;
  undefined4 local_248;
  undefined2 local_244;
  undefined4 local_240;
  undefined2 local_23c;
  undefined4 local_238;
  undefined2 local_234;
  undefined4 local_230;
  undefined2 local_22c;
  undefined8 local_228;
  undefined2 local_220;
  undefined1 local_21e;
  undefined4 local_21d;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 local_217;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  undefined1 local_204;
  undefined4 local_203;
  undefined1 local_1ff;
  long local_1f8 [4];
  long *local_1d8;
  undefined1 local_1d0 [2];
  undefined4 local_1ce;
  undefined2 local_1ca;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined2 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_8a;
  undefined8 local_84;
  undefined1 local_7c;
  
  uVar26 = *(undefined8 *)PTR_DAT_02710848;
  plVar19 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar24 = *(long *)(param_1 + 0xb0);
  uVar13 = *(undefined8 *)PTR_DAT_027185f8;
  lVar14 = FUN_0120e640();
  uVar9 = FUN_007b5850();
  cVar3 = *(char *)(*(long *)(param_1 + 0x88) + 0x3ad);
  local_b0 = &DAT_01d38550;
  local_a0 = 0;
  local_a8 = 0;
  local_1d0[0] = 0;
  local_1c8 = 0;
  uVar8 = (undefined1)uVar9;
  local_b8 = 0xcbf29ce484222645;
  local_1ca = 0;
  local_1ce = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_c0 = 0xcbf29ce484222645;
  if ((*PTR_DAT_02715198 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_02715198);
    puVar6 = PTR_DAT_027151a0;
    if (iVar12 != 0) {
      *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
      *(undefined1 **)(puVar6 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      FUN_001001c0(PTR_LAB_027151a8,puVar6,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715198);
    }
  }
  local_b8 = *(undefined8 *)PTR_DAT_027151a0;
  local_b0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_a8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar20 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    plVar15 = (long *)(local_a0 + 0x48);
    local_a0 = lVar20;
    (**(code **)(*plVar15 + 0x18))();
    lVar20 = local_a0;
  }
  local_a0 = lVar20;
  local_3a8 = &DAT_cc7b5e39ed4396ae;
  local_3a0 = "NONE_NONE";
  local_98 = 0;
  local_398 = 9;
  local_390 = 0;
  FUN_010011e0(&local_3a8,local_1d0);
  if (local_390 != 0) {
    (**(code **)(*(long *)(local_390 + 0x48) + 0x18))();
    local_390 = 0;
  }
  local_8a = 0;
  local_8c = 0;
  local_90 = 0;
  local_84 = 0;
  local_7c = 0;
  local_1d8 = (long *)0x0;
  local_1f8[3] = 0;
  local_1f8[2] = 0;
  local_1f8[1] = 0;
  local_1f8[0] = 0;
  plVar15 = *(long **)(lVar24 + 0x470);
  if (plVar15 != (long *)0x0) {
    plVar25 = (long *)(lVar24 + 0x498);
    uVar23 = 0;
    do {
      lVar20 = *plVar25;
      if (lVar20 != 0) {
        plVar28 = (long *)*plVar15;
        plVar2 = (long *)plVar15[1];
        if ((plVar28 != plVar2) && (*plVar28 != lVar20)) {
          do {
            plVar28 = plVar28 + 0x2c;
            if (plVar2 == plVar28) goto LAB_01125538;
          } while (*plVar28 != lVar20);
        }
        if ((uVar23 < 4) && (plVar28 != plVar2)) {
          uVar1 = uVar23;
          if (lVar14 != lVar20) {
            uVar1 = uVar9;
          }
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01126090;
          *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar19;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          lVar16 = (**(code **)(*plVar19 + 0x10))(plVar19,0x90,8);
          if (lVar16 == 0) {
            (**(code **)(*plVar19 + 0xb8))(plVar19);
          }
          FUN_00883c20(lVar16,plVar19);
          *(long **)(lVar16 + 8) = plVar19;
          *(long *)(lVar16 + 0x10) = lVar16;
          *(undefined8 *)(lVar16 + 0x18) = 0x90;
          *(undefined8 *)(lVar16 + 0x20) = 8;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          if (local_1f8[uVar23] != 0) {
            (**(code **)(*(long *)(local_1f8[uVar23] + 0x48) + 0x18))();
            local_1f8[uVar23] = 0;
          }
          local_1f8[uVar23] = lVar16;
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01126090;
          *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar19;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          lVar16 = (**(code **)(*plVar19 + 0x10))(plVar19,0xb8,8);
          if (lVar16 == 0) {
            (**(code **)(*plVar19 + 0xb8))(plVar19);
          }
          FUN_00866220(lVar16,plVar19,0,0,0);
          *(long **)(lVar16 + 8) = plVar19;
          *(long *)(lVar16 + 0x10) = lVar16;
          *(undefined8 *)(lVar16 + 0x18) = 0xb8;
          *(undefined8 *)(lVar16 + 0x20) = 8;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          FUN_008664b0(lVar16,plVar28 + 1);
          (**(code **)(*(long *)local_1f8[uVar23] + 0x28))((long *)local_1f8[uVar23],lVar16);
          uVar23 = uVar23 + 1;
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          uVar9 = uVar1;
        }
      }
LAB_01125538:
      uVar8 = (undefined1)uVar9;
      plVar25 = plVar25 + 1;
    } while (plVar25 != (long *)(lVar24 + 0x4b8));
  }
  puVar6 = PTR_DAT_02710860;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_01126090;
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar19;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  lVar20 = (**(code **)(*plVar19 + 0x10))(plVar19,0xb8,8);
  if (lVar20 == 0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
  }
  FUN_00866220(lVar20,plVar19,0,0,0);
  *(long **)(lVar20 + 8) = plVar19;
  *(long *)(lVar20 + 0x10) = lVar20;
  *(undefined8 *)(lVar20 + 0x18) = 0xb8;
  *(undefined8 *)(lVar20 + 0x20) = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  FUN_008664b0(lVar20,lVar24 + 0x4d0);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_01126090;
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar19;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x90,8);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
  }
  FUN_00883c20(plVar15,plVar19);
  plVar15[1] = (long)plVar19;
  plVar15[2] = (long)plVar15;
  plVar15[3] = 0x90;
  plVar15[4] = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (plVar15 != (long *)0x0) {
    (**(code **)(plVar15[9] + 0x10))();
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(local_1d8[9] + 0x18))();
  }
  local_1d8 = plVar15;
  (**(code **)(*plVar15 + 0x28))(plVar15,lVar20);
  uVar4 = (undefined2)((ulong)local_3a8 >> 0x30);
  local_3a8._0_4_ = (uint)local_3a8 & 0xffff0000;
  local_3a8._0_6_ = (uint6)(uint)local_3a8;
  uVar5 = CONCAT26(uVar4,(uint6)local_3a8);
  local_32c = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  local_31c = 0;
  local_318 = 0;
  local_314 = 0;
  local_310 = 0;
  local_30c = 0;
  local_308 = 0;
  local_304 = 0;
  local_300 = 0;
  local_2fc = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2f0 = 0;
  local_2ec = 0;
  local_2e8 = 0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c8 = 0;
  local_2c4 = 0;
  local_2c0 = 0;
  local_2bc = 0;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_294 = 0;
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_27c = 0;
  local_278 = 0;
  local_274 = 0;
  local_270 = 0;
  local_26c = 0;
  local_268 = 0;
  local_264 = 0;
  local_260 = 0;
  local_25c = 0;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_21e = 0;
  local_220 = 0;
  local_21d = 0x301;
  local_219 = 0;
  local_203 = 0;
  local_1ff = 0;
  local_204 = 1;
  local_3a8._2_6_ = (undefined6)((ulong)uVar5 >> 0x10);
  local_3a8._0_2_ =
       CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3aa),
                *(char *)(*(long *)(param_1 + 0x88) + 0x3a8) + '\x01');
  local_3a8._0_6_ = CONCAT24((short)*(undefined4 *)(lVar24 + 0x62c),(uint)local_3a8);
  local_3a8 = (undefined1 *)CONCAT26(uVar4,(uint6)local_3a8);
  local_3a0 = (char *)CONCAT26((short)((ulong)local_3a0 >> 0x30),*(undefined6 *)(lVar24 + 0x630));
  local_398 = CONCAT26((short)((ulong)local_398 >> 0x30),*(undefined6 *)(lVar24 + 0x638));
  local_390 = CONCAT26((short)((ulong)local_390 >> 0x30),*(undefined6 *)(lVar24 + 0x640));
  local_388 = *(undefined4 *)(lVar24 + 0x648);
  local_384 = (undefined2)*(undefined4 *)(lVar24 + 0x64c);
  local_380 = *(undefined4 *)(lVar24 + 0x650);
  local_37c = (undefined2)*(undefined4 *)(lVar24 + 0x654);
  local_378 = *(undefined4 *)(lVar24 + 0x658);
  local_374 = (undefined2)*(undefined4 *)(lVar24 + 0x65c);
  local_370 = *(undefined4 *)(lVar24 + 0x660);
  local_36c = (undefined2)*(undefined4 *)(lVar24 + 0x664);
  local_368 = *(undefined4 *)(lVar24 + 0x668);
  local_364 = (undefined2)*(undefined4 *)(lVar24 + 0x66c);
  local_360 = *(undefined4 *)(lVar24 + 0x670);
  local_35c = (undefined2)*(undefined4 *)(lVar24 + 0x674);
  local_358 = *(undefined4 *)(lVar24 + 0x678);
  local_354 = (undefined2)*(undefined4 *)(lVar24 + 0x67c);
  local_350 = *(undefined4 *)(lVar24 + 0x680);
  local_34c = (undefined2)*(undefined4 *)(lVar24 + 0x684);
  local_348 = *(undefined4 *)(lVar24 + 0x688);
  local_344 = (undefined2)*(undefined4 *)(lVar24 + 0x68c);
  local_340 = *(undefined4 *)(lVar24 + 0x690);
  local_33c = (undefined2)*(undefined4 *)(lVar24 + 0x694);
  local_338 = *(undefined4 *)(lVar24 + 0x698);
  local_334 = (undefined2)*(undefined4 *)(lVar24 + 0x69c);
  local_330 = *(undefined4 *)(lVar24 + 0x6a0);
  uVar10 = FUN_008783b0(lVar20);
  uVar11 = FUN_008783c0(lVar20);
  FUN_008e6d00((long)&local_228 + 4,uVar10,uVar11,(ulong)local_3a8 & 0xff);
  if (cVar3 == '\0') {
    cVar7 = FUN_00879760(lVar20);
    cVar3 = *(char *)(*(long *)(param_1 + 0x88) + 0x3ac);
    if (cVar7 == '\x02') {
      if (cVar3 != '\0') goto LAB_01125a70;
      local_203 = CONCAT31(local_203._1_3_,1);
    }
    else if (cVar3 != '\0') {
LAB_01125a70:
      local_204 = 0;
    }
  }
  else {
    local_228 = CONCAT44(*(undefined4 *)(lVar24 + 0x4bc),(undefined4)local_228);
    local_220 = CONCAT11(local_220._1_1_,*(undefined1 *)(lVar24 + 0x4c8));
    local_21e = *(undefined1 *)(lVar24 + 0x4c9);
    local_21d = CONCAT13(*(undefined1 *)(lVar24 + 0x4cb),
                         CONCAT12(*(undefined1 *)(lVar24 + 0x4ca),(undefined2)local_21d));
    local_219 = *(undefined1 *)(lVar24 + 0x4cc);
    local_218 = *(undefined1 *)(lVar24 + 0x4c6);
    local_214 = (uint)*(ushort *)(lVar24 + 0x4c0);
    local_20c = (uint)*(byte *)(lVar24 + 0x4c4);
    local_217 = *(undefined1 *)(lVar24 + 0x4c7);
    local_210 = (uint)*(ushort *)(lVar24 + 0x4c2);
    local_208 = (uint)*(byte *)(lVar24 + 0x4c5);
    lVar14 = 0x4cd;
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x3ac) == '\0') {
      lVar14 = 0x4ce;
    }
    local_204 = *(undefined1 *)(lVar24 + lVar14);
  }
  uVar17 = FUN_01209320(*(undefined8 *)PTR_DAT_02710880);
  uVar22 = 1;
  if ((uVar17 & 1) == 0) {
    uVar22 = 2;
  }
  FUN_008e7c50(param_1 + 0x2c0,uVar26,local_1f8[0],local_1f8[1],local_1f8[2],local_1f8[3],local_1d8,
               &local_3a8,local_1d0,uVar22,uVar8,*(undefined8 *)(lVar24 + 0x6b0),
               *(undefined1 *)(lVar24 + 0x6b8),plVar19);
  puVar27 = (undefined8 *)PTR_DAT_02718f20;
  FUN_011ffbe0(&local_3b0,*(undefined8 *)PTR_DAT_02718f20,*(undefined8 *)(lVar24 + 0x498));
  if (local_3b0 == 0) {
    uVar17 = 0;
  }
  else {
    lVar14 = *(long *)(local_3b0 + 8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    uVar9 = FUN_01524ed0();
    pvVar18 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,(ulong)uVar9,1);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01126090;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar19;
    lVar21 = *(long *)(lVar16 + 0x80);
    *(long *)(lVar16 + 0x80) = lVar21 + 1;
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar18,0,(ulong)uVar9);
    }
    *(long *)(lVar16 + 0x80) = lVar21;
    FUN_01524ee0(lVar14,pvVar18);
    FUN_01524f20(*(undefined8 *)(param_1 + 0xca0),pvVar18);
    if (pvVar18 != (void *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pvVar18,0,1);
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    uVar17 = 1;
    puVar27 = (undefined8 *)PTR_DAT_02718f20;
  }
  FUN_011ffbe0(&local_3b0,*puVar27,*(undefined8 *)(lVar24 + 0x4a0));
  if (local_3b0 != 0) {
    lVar14 = *(long *)(local_3b0 + 8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    uVar9 = FUN_01524ed0();
    pvVar18 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,(ulong)uVar9,1);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01126090;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar19;
    lVar21 = *(long *)(lVar16 + 0x80);
    *(long *)(lVar16 + 0x80) = lVar21 + 1;
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar18,0,(ulong)uVar9);
    }
    *(long *)(lVar16 + 0x80) = lVar21;
    FUN_01524ee0(lVar14,pvVar18);
    FUN_01524f20(*(undefined8 *)(param_1 + uVar17 * 8 + 0xca0),pvVar18);
    uVar17 = (ulong)((int)uVar17 + 1);
    if (pvVar18 != (void *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pvVar18,0,1);
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    puVar27 = (undefined8 *)PTR_DAT_02718f20;
  }
  FUN_011ffbe0(&local_3b0,*puVar27,*(undefined8 *)(lVar24 + 0x4a8));
  if (local_3b0 != 0) {
    lVar14 = *(long *)(local_3b0 + 8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    uVar9 = FUN_01524ed0();
    pvVar18 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,(ulong)uVar9,1);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01126090;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar19;
    lVar21 = *(long *)(lVar16 + 0x80);
    *(long *)(lVar16 + 0x80) = lVar21 + 1;
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar18,0,(ulong)uVar9);
    }
    *(long *)(lVar16 + 0x80) = lVar21;
    FUN_01524ee0(lVar14,pvVar18);
    FUN_01524f20(*(undefined8 *)(param_1 + uVar17 * 8 + 0xca0),pvVar18);
    uVar17 = (ulong)((int)uVar17 + 1);
    if (pvVar18 != (void *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pvVar18,0,1);
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    puVar27 = (undefined8 *)PTR_DAT_02718f20;
  }
  FUN_011ffbe0(&local_3b0,*puVar27,*(undefined8 *)(lVar24 + 0x4b0));
  if (local_3b0 != 0) {
    lVar14 = *(long *)(local_3b0 + 8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    uVar9 = FUN_01524ed0();
    pvVar18 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,(ulong)uVar9,1);
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_01126090:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar19;
    lVar16 = *(long *)(lVar24 + 0x80);
    *(long *)(lVar24 + 0x80) = lVar16 + 1;
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pvVar18,0,(ulong)uVar9);
    }
    *(long *)(lVar24 + 0x80) = lVar16;
    FUN_01524ee0(lVar14,pvVar18);
    FUN_01524f20(*(undefined8 *)(param_1 + uVar17 * 8 + 0xca0),pvVar18);
    if (pvVar18 != (void *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pvVar18,0,1);
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  plVar19 = *(long **)(param_1 + 0x6f8);
  if ((plVar19 != (long *)0x0) && (lVar14 = (**(code **)(*plVar19 + 0x50))(plVar19,0), lVar14 != 0))
  {
    uVar8 = FUN_008d3750();
    FUN_00878170(lVar14,uVar8);
    FUN_00878310(lVar14);
  }
  FUN_01001bc0(0xa7615fa1c676645b,param_1 + 0x5e0);
  local_3d0 = 0xf9d9dfdeabbf80d8;
  pcStack_3c8 = "a_btl37_wr03";
  local_3c0 = 0xc;
  local_3b8 = 0;
  FUN_010011e0(&local_3d0,param_1 + 0x480);
  if (local_3b8 != 0) {
    (**(code **)(*(long *)(local_3b8 + 0x48) + 0x18))();
    local_3b8 = 0;
  }
  *(undefined2 *)(param_1 + 0xd1e) = 0x2d;
  uVar10 = FUN_0120e820(uVar13);
  *(undefined4 *)(param_1 + 0xfe4) = uVar10;
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(local_1d8[9] + 0x18))();
    local_1d8 = (long *)0x0;
  }
  if (local_1f8[3] != 0) {
    (**(code **)(*(long *)(local_1f8[3] + 0x48) + 0x18))();
    local_1f8[3] = 0;
  }
  if (local_1f8[2] != 0) {
    (**(code **)(*(long *)(local_1f8[2] + 0x48) + 0x18))();
    local_1f8[2] = 0;
  }
  if (local_1f8[1] != 0) {
    (**(code **)(*(long *)(local_1f8[1] + 0x48) + 0x18))();
    local_1f8[1] = 0;
  }
  if (local_1f8[0] != 0) {
    (**(code **)(*(long *)(local_1f8[0] + 0x48) + 0x18))();
    local_1f8[0] = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  return;
}


