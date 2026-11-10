/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01124840; name: FUN_01124840
 */


void FUN_01124840(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_3c0;
  char *pcStack_3b8;
  undefined8 local_3b0;
  long local_3a8;
  undefined1 local_3a0 [2];
  undefined4 local_39e;
  undefined2 local_39a;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 *puStack_280;
  undefined8 local_278;
  long local_270;
  undefined2 local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_25a;
  undefined8 local_254;
  undefined1 local_24c;
  char local_238;
  undefined1 uStack_237;
  undefined2 local_234;
  undefined4 local_230;
  undefined2 local_22c;
  undefined4 local_228;
  undefined2 local_224;
  undefined4 local_220;
  undefined2 local_21c;
  undefined4 local_218;
  undefined2 local_214;
  undefined4 local_210;
  undefined2 local_20c;
  undefined4 local_208;
  undefined2 local_204;
  undefined4 local_200;
  undefined2 local_1fc;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  undefined2 local_194;
  undefined4 local_190;
  undefined2 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined4 local_180;
  undefined2 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  undefined4 local_170;
  undefined2 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined4 local_150;
  undefined2 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined4 local_ad;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined1 local_94;
  undefined4 local_93;
  undefined1 local_8f;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long local_70;
  
  puVar3 = PTR_DAT_02710848;
  lVar17 = *(long *)(param_1 + 0x88);
  uVar15 = *(undefined8 *)PTR_DAT_02710848;
  plVar16 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_ae = 0;
  local_b0 = 0;
  local_ad = 0x301;
  local_a9 = 0;
  local_93 = 0;
  local_8f = 0;
  local_94 = 1;
  _local_238 = CONCAT11(*(undefined1 *)(lVar17 + 0x3aa),*(char *)(lVar17 + 0x3a8) + '\x01');
  local_234 = *(undefined2 *)(lVar17 + 0x70);
  local_230 = *(undefined4 *)(lVar17 + 0x74);
  local_22c = *(undefined2 *)(lVar17 + 0x78);
  local_228 = *(undefined4 *)(lVar17 + 0x7c);
  local_224 = *(undefined2 *)(lVar17 + 0x80);
  local_220 = *(undefined4 *)(lVar17 + 0x84);
  local_21c = *(undefined2 *)(lVar17 + 0x88);
  local_218 = *(undefined4 *)(lVar17 + 0x8c);
  local_214 = *(undefined2 *)(lVar17 + 0x90);
  local_210 = *(undefined4 *)(lVar17 + 0x94);
  local_20c = *(undefined2 *)(lVar17 + 0x98);
  local_208 = *(undefined4 *)(lVar17 + 0x9c);
  local_204 = *(undefined2 *)(lVar17 + 0xa0);
  local_200 = *(undefined4 *)(lVar17 + 0xa4);
  local_1fc = *(undefined2 *)(lVar17 + 0xa8);
  local_1f8 = *(undefined4 *)(lVar17 + 0xac);
  local_1f4 = *(undefined2 *)(lVar17 + 0xb0);
  local_1f0 = *(undefined4 *)(lVar17 + 0xb4);
  local_1ec = *(undefined2 *)(lVar17 + 0xb8);
  local_1e8 = *(undefined4 *)(lVar17 + 0xbc);
  local_1e4 = *(undefined2 *)(lVar17 + 0xc0);
  local_1e0 = *(undefined4 *)(lVar17 + 0xc4);
  local_1dc = *(undefined2 *)(lVar17 + 200);
  local_1d8 = *(undefined4 *)(lVar17 + 0xcc);
  local_1d4 = *(undefined2 *)(lVar17 + 0xd0);
  local_1d0 = *(undefined4 *)(lVar17 + 0xd4);
  local_1cc = *(undefined2 *)(lVar17 + 0xd8);
  local_1c8 = *(undefined4 *)(lVar17 + 0xdc);
  local_1c4 = *(undefined2 *)(lVar17 + 0xe0);
  local_1c0 = *(undefined4 *)(lVar17 + 0xe4);
  uVar6 = FUN_008783b0(*(undefined8 *)(lVar17 + 0x68));
  uVar7 = FUN_008783c0(*(undefined8 *)(lVar17 + 0x68));
  FUN_008e6d00((long)&local_b8 + 4,uVar6,uVar7,local_238);
  if (*(int *)(lVar17 + 0xe8) != 0) {
    local_b8 = CONCAT44(*(undefined4 *)(lVar17 + 0xf4),(undefined4)local_b8);
    local_b0 = CONCAT11(local_b0._1_1_,*(undefined1 *)(lVar17 + 0x100));
    local_ae = *(undefined1 *)(lVar17 + 0x101);
    local_ad = CONCAT13(*(undefined1 *)(lVar17 + 0x103),
                        CONCAT12(*(undefined1 *)(lVar17 + 0x102),(undefined2)local_ad));
    local_a9 = *(undefined1 *)(lVar17 + 0x104);
    local_a8 = *(undefined1 *)(lVar17 + 0xfe);
    local_a4 = (uint)*(ushort *)(lVar17 + 0xf8);
    local_9c = (uint)*(byte *)(lVar17 + 0xfc);
    local_a7 = *(undefined1 *)(lVar17 + 0xff);
    local_a0 = (uint)*(ushort *)(lVar17 + 0xfa);
    local_98 = (uint)*(byte *)(lVar17 + 0xfd);
    local_94 = *(undefined1 *)(lVar17 + 0x105);
    if (*(int *)(lVar17 + 0xe8) != 0) goto LAB_01124c2c;
  }
  cVar5 = FUN_00879760(*(undefined8 *)(lVar17 + 0x68));
  if ((cVar5 == '\x02') && (*(char *)(*(long *)(param_1 + 0x88) + 0x3ac) == '\0')) {
    local_93 = CONCAT31(local_93._1_3_,1);
    iVar8 = *(int *)(lVar17 + 0xe8);
  }
  else {
    iVar8 = *(int *)(lVar17 + 0xe8);
  }
  if ((iVar8 == 0) && (*(char *)(*(long *)(param_1 + 0x88) + 0x3ac) != '\0')) {
    local_94 = 0;
  }
LAB_01124c2c:
  local_3a0[0] = 0;
  local_288 = 0xcbf29ce484222645;
  puStack_280 = &DAT_01d38550;
  local_278 = 0;
  local_270 = 0;
  local_398 = 0;
  local_39a = 0;
  local_39e = 0;
  local_388 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_390 = 0;
  local_290 = 0xcbf29ce484222645;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02715198), puVar4 = PTR_DAT_027151a0, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar4 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar4,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_288 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_280 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_278 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar10 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_270 != 0) {
    plVar9 = (long *)(local_270 + 0x48);
    local_270 = lVar10;
    (**(code **)(*plVar9 + 0x18))();
    lVar10 = local_270;
  }
  local_270 = lVar10;
  local_88 = &DAT_cc7b5e39ed4396ae;
  pcStack_80 = "NONE_NONE";
  local_268 = 0;
  local_78 = 9;
  local_70 = 0;
  FUN_010011e0(&local_88,local_3a0);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  puVar4 = PTR_DAT_02710860;
  local_25a = 0;
  local_25c = 0;
  local_260 = 0;
  local_254 = 0;
  local_24c = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x90,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
    }
    FUN_00883c20(plVar9,plVar16);
    plVar9[1] = (long)plVar16;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0x90;
    plVar9[4] = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      (**(code **)(plVar9[9] + 0x10))();
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar10 + 0x80) < 0x10) {
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar16 + 0x10))(plVar16,0xb8,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar16 + 0xb8))(plVar16);
      }
      FUN_00866220(lVar11,plVar16,0,0,0);
      *(long **)(lVar11 + 8) = plVar16;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0xb8;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      FUN_008664b0(lVar11,*(long *)(param_1 + 0xb0) + 0xb8);
      (**(code **)(*plVar9 + 0x28))(plVar9,lVar11);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar10 + 0x80) < 0x10) {
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        plVar12 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x90,8);
        if (plVar12 == (long *)0x0) {
          (**(code **)(*plVar16 + 0xb8))(plVar16);
        }
        FUN_00883c20(plVar12,plVar16);
        plVar12[1] = (long)plVar16;
        plVar12[2] = (long)plVar12;
        plVar12[3] = 0x90;
        plVar12[4] = 8;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        if (plVar12 != (long *)0x0) {
          (**(code **)(plVar12[9] + 0x10))();
        }
        (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(lVar17 + 0x68));
        FUN_008e6f10(param_1 + 0x2c0);
        puVar13 = *(ulong **)(*(long *)puVar3 + 0x98);
        uVar1 = *puVar13;
        uVar2 = puVar13[1];
        uVar14 = uVar2 ^ uVar1;
        *puVar13 = uVar14 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar14 << 0x10;
        puVar13[1] = uVar14 >> 0x1b | uVar14 << 0x25;
        FUN_008e7960(param_1 + 0x2c0,uVar15,plVar9,plVar12,&local_238,local_3a0,uVar2 + uVar1,
                     *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x120),plVar16,plVar16);
        FUN_01001bc0(0xa7615fa1c676645b,param_1 + 0x5e0);
        local_3c0 = 0xf9d9dfdeabbf80d8;
        pcStack_3b8 = "a_btl37_wr03";
        local_3b0 = 0xc;
        local_3a8 = 0;
        FUN_010011e0(&local_3c0,param_1 + 0x480);
        if (local_3a8 != 0) {
          (**(code **)(*(long *)(local_3a8 + 0x48) + 0x18))();
          local_3a8 = 0;
        }
        *(undefined4 *)(param_1 + 0xfe4) = 1;
        (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
        }
        (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
        if (local_270 != 0) {
          (**(code **)(*(long *)(local_270 + 0x48) + 0x18))();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


