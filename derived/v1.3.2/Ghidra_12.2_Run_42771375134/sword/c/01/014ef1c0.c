/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ef1c0; name: FUN_014ef1c0
 */


void FUN_014ef1c0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  char *param4;
  char *param4_00;
  ulong uVar11;
  byte *pbVar12;
  char *param3;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  ulong local_348;
  char acStack_340 [8];
  undefined2 local_338;
  undefined8 local_336;
  undefined8 local_32e;
  undefined8 local_326;
  undefined8 local_31e;
  undefined8 local_316;
  undefined8 local_30e;
  undefined8 local_306;
  undefined8 local_2fe;
  undefined8 local_2f6;
  undefined8 local_2ee;
  undefined2 local_2e6;
  char local_2e4 [8];
  char local_2dc [8];
  undefined2 local_2d4;
  undefined8 local_2d2;
  undefined8 local_2ca;
  undefined8 local_2c2;
  undefined8 local_2ba;
  undefined8 local_2b2;
  undefined8 local_2aa;
  undefined8 local_2a2;
  undefined8 local_29a;
  undefined8 local_292;
  undefined8 local_28a;
  undefined2 local_282;
  char local_280 [8];
  char acStack_278 [8];
  undefined2 local_270;
  undefined8 local_26e;
  undefined8 local_266;
  undefined8 local_25e;
  undefined8 local_256;
  undefined8 local_24e;
  undefined8 local_246;
  undefined8 local_23e;
  undefined8 local_236;
  undefined8 local_22e;
  undefined8 local_226;
  undefined2 local_21e;
  char local_21c [8];
  char local_214 [8];
  undefined2 local_20c;
  undefined8 local_20a;
  undefined8 local_202;
  undefined8 local_1fa;
  undefined8 local_1f2;
  undefined8 local_1ea;
  undefined8 local_1e2;
  undefined8 local_1da;
  undefined8 local_1d2;
  undefined8 local_1ca;
  undefined8 local_1c2;
  undefined2 local_1ba;
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
  undefined4 local_150;
  long local_148;
  undefined8 local_140;
  ulong local_138;
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
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar2 = *param_2;
  uVar8 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  uVar2 = param_2[4];
  uVar8 = param_2[5];
  uVar3 = param_2[7];
  *(undefined8 *)(param_1 + 0x48) = param_2[6];
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar2 = param_2[8];
  uVar8 = param_2[9];
  uVar3 = param_2[0xb];
  *(undefined8 *)(param_1 + 0x68) = param_2[10];
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  uVar2 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar3 = param_2[0xf];
  *(undefined8 *)(param_1 + 0x88) = param_2[0xe];
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  lVar13 = param_2[0x10];
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar13;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xa0) = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar8 = param_2[0x13];
  uVar3 = param_2[0x15];
  *(undefined8 *)(param_1 + 0xb8) = param_2[0x14];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar8;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_348 = 0xcbf29ce484222645;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  pcVar14 = (char *)(param_1 + 0x20);
  if (*pcVar14 != '\0') {
    snprintf((char *)&local_138,100,"pane_%s",pcVar14);
    local_348 = 0xcbf29ce484222645;
    if ((byte)local_138 != 0) {
      local_348 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_138 | 1);
      bVar5 = (byte)local_138;
      do {
        local_348 = (local_348 ^ bVar5) * 0x100000001b3;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
    }
  }
  uVar8 = FUN_0167b6b0(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
  *(undefined8 *)(param_1 + 200) = uVar8;
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
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","P_typeicon_00");
    if ((byte)local_138 != 0) goto LAB_014ef3b4;
LAB_014ef3e0:
    uVar8 = 0;
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",pcVar14,"P_typeicon_00");
    if ((byte)local_138 == 0) goto LAB_014ef3e0;
LAB_014ef3b4:
    uVar11 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_138 | 1);
    bVar5 = (byte)local_138;
    do {
      uVar11 = (uVar11 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar5 != 0);
    if (uVar11 == 0xcbf29ce484222645 || uVar11 == 0) goto LAB_014ef3e0;
    local_348 = uVar11;
    uVar8 = FUN_0103bd80(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
  }
  *(undefined8 *)(param_1 + 0xd0) = uVar8;
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
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","P_typeicon_01");
    if ((byte)local_138 != 0) goto LAB_014ef488;
LAB_014ef4b4:
    uVar8 = 0;
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",pcVar14,"P_typeicon_01");
    if ((byte)local_138 == 0) goto LAB_014ef4b4;
LAB_014ef488:
    uVar11 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_138 | 1);
    bVar5 = (byte)local_138;
    do {
      uVar11 = (uVar11 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar5 != 0);
    if (uVar11 == 0xcbf29ce484222645 || uVar11 == 0) goto LAB_014ef4b4;
    local_348 = uVar11;
    uVar8 = FUN_0103bd80(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
  }
  *(undefined8 *)(param_1 + 0xd8) = uVar8;
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
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","A_alignment_00");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",pcVar14,"A_alignment_00");
  }
  local_348 = 0xcbf29ce484222645;
  if ((byte)local_138 != '\0') {
    uVar11 = local_138 & 0xff;
    local_348 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_138 | 1);
    do {
      local_348 = (local_348 ^ uVar11) * 0x100000001b3;
      bVar5 = *pbVar12;
      uVar11 = (ulong)bVar5;
      pbVar12 = pbVar12 + 1;
    } while (bVar5 != 0);
  }
  uVar8 = FUN_00a0e830(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
  *(undefined8 *)(param_1 + 0xe0) = uVar8;
  if (*(long *)(param_1 + 0x88) != 0) {
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
    if (*pcVar14 == '\0') {
      snprintf((char *)&local_138,100,"pane_%s","L_rental_icon_00_P_pokeIcon_00");
      bVar5 = (byte)local_138;
      uVar11 = local_348;
    }
    else {
      snprintf((char *)&local_138,100,"pane_%s_%s",pcVar14,"L_rental_icon_00_P_pokeIcon_00");
      bVar5 = (byte)local_138;
      uVar11 = local_348;
    }
    if (bVar5 == 0) goto LAB_014f0190;
    local_348 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_138 | 1);
    do {
      local_348 = (local_348 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar5 != 0);
    if (local_348 == 0xcbf29ce484222645 || local_348 == 0) goto LAB_014f0190;
    lVar7 = FUN_0103bd80(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
    uVar11 = local_348;
    if (lVar7 == 0) goto LAB_014f0190;
    FUN_0168b110(*(undefined8 *)(param_1 + 0x88),uVar2,lVar7,0);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
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
    if (*pcVar14 == '\0') {
      snprintf((char *)&local_138,100,"pane_%s","P_rental_icon_00");
      bVar5 = (byte)local_138;
      uVar11 = local_348;
    }
    else {
      snprintf((char *)&local_138,100,"pane_%s_%s",pcVar14,"P_rental_icon_00");
      bVar5 = (byte)local_138;
      uVar11 = local_348;
    }
    if (bVar5 == 0) {
LAB_014f0190:
      local_348 = uVar11;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_348 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_138 | 1);
    do {
      local_348 = (local_348 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar5 != 0);
    if (local_348 == 0xcbf29ce484222645 || local_348 == 0) goto LAB_014f0190;
    lVar13 = FUN_0103bd80(*(undefined8 *)(lVar13 + 0x1b0),&local_348);
    uVar11 = local_348;
    if (lVar13 == 0) goto LAB_014f0190;
    FUN_0168b110(*(undefined8 *)(param_1 + 0x90),uVar2,lVar13,0);
  }
  plVar9 = (long *)FUN_00ff93d0(param_1);
  plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x2a0,8);
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar9;
  puVar6 = PTR_DAT_0272a680;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = puVar6 + 0x10;
  *(undefined4 *)(plVar10 + 0x10) = 0;
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[2] = lVar4;
  plVar10[3] = 0;
  *plVar10 = (long)puVar1;
  plVar10[1] = lVar7;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(plVar10 + 0x25) = 0;
  plVar10[0x23] = 0;
  plVar10[0x24] = 0;
  plVar10[0x15] = (long)puVar1;
  plVar10[0x16] = lVar7;
  plVar10[0x21] = 0;
  plVar10[0x22] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x17] = lVar4;
  plVar10[0x18] = 0;
  plVar10[0x28] = 0;
  plVar10[0x29] = 0;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(plVar10 + 0x3a) = 0;
  plVar10[0x2a] = (long)puVar1;
  plVar10[0x2b] = lVar7;
  plVar10[0x38] = 0;
  plVar10[0x39] = 0;
  plVar10[0x36] = 0;
  plVar10[0x37] = 0;
  plVar10[0x34] = 0;
  plVar10[0x35] = 0;
  plVar10[0x32] = 0;
  plVar10[0x33] = 0;
  plVar10[0x30] = 0;
  plVar10[0x31] = 0;
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  plVar10[0x2c] = lVar4;
  plVar10[0x2d] = 0;
  plVar10[0x3d] = 0;
  plVar10[0x3e] = 0;
  plVar10[0x3b] = 0;
  plVar10[0x3c] = 0;
  lVar7 = *(long *)(param_1 + 8);
  plVar10[0x41] = *(long *)(param_1 + 0x10);
  *(undefined4 *)(plVar10 + 0x4f) = 0;
  plVar10[0x4e] = 0;
  plVar10[0x4d] = 0;
  plVar10[0x4c] = 0;
  plVar10[0x4b] = 0;
  plVar10[0x4a] = 0;
  plVar10[0x49] = 0;
  plVar10[0x48] = 0;
  plVar10[0x47] = 0;
  plVar10[0x46] = 0;
  plVar10[0x45] = 0;
  plVar10[0x44] = 0;
  plVar10[0x43] = 0;
  plVar10[0x42] = 0;
  plVar10[0x53] = 0;
  plVar10[0x52] = 0;
  plVar10[0x51] = 0;
  plVar10[0x50] = 0;
  plVar10[0x3f] = (long)puVar1;
  plVar10[0x40] = lVar7;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = *(long *)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar10;
  if (lVar13 != 0) {
    uVar11 = *(ulong *)(param_1 + 0xf8);
    if (0xa7 < uVar11) {
      uVar15 = 0;
      plVar10 = (long *)(lVar13 + 0x88);
      do {
        plVar10[-0x11] = (long)(puVar6 + 0x10);
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          *plVar10 = 0;
        }
        uVar15 = uVar15 + 1;
        plVar10 = plVar10 + 0x15;
      } while (uVar15 < uVar11 / 0xa8);
      uVar11 = *(ulong *)(param_1 + 0xf8);
    }
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),lVar13,uVar11,*(undefined8 *)(param_1 + 0x100));
  }
  *(long **)(param_1 + 0xf0) = plVar9;
  *(undefined8 *)(param_1 + 0xf8) = 0x2a0;
  *(undefined8 *)(param_1 + 0x100) = 8;
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
  local_1b8 = *param_2;
  local_1b0 = 0;
  lVar13 = param_2[0x10];
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  param3 = (char *)(param_2 + 1);
  local_140 = param_2[0x15];
  local_2ee = 0;
  local_2f6 = 0;
  local_2fe = 0;
  local_306 = 0;
  local_30e = 0;
  local_316 = 0;
  local_31e = 0;
  local_326 = 0;
  local_32e = 0;
  pcVar14 = local_2e4;
  local_2e6 = 0;
  local_336 = 0;
  local_282 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_338 = 0x30;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_348._0_1_ = s_L_rental_skill_00_01ce96de[0];
  local_348._1_1_ = s_L_rental_skill_00_01ce96de[1];
  local_348._2_1_ = s_L_rental_skill_00_01ce96de[2];
  local_348._3_1_ = s_L_rental_skill_00_01ce96de[3];
  local_348._4_1_ = s_L_rental_skill_00_01ce96de[4];
  local_348._5_1_ = s_L_rental_skill_00_01ce96de[5];
  local_348._6_1_ = s_L_rental_skill_00_01ce96de[6];
  local_348._7_1_ = s_L_rental_skill_00_01ce96de[7];
  acStack_340[0] = s_L_rental_skill_00_01ce96de[8];
  acStack_340[1] = s_L_rental_skill_00_01ce96de[9];
  acStack_340[2] = s_L_rental_skill_00_01ce96de[10];
  acStack_340[3] = s_L_rental_skill_00_01ce96de[0xb];
  acStack_340[4] = s_L_rental_skill_00_01ce96de[0xc];
  acStack_340[5] = s_L_rental_skill_00_01ce96de[0xd];
  acStack_340[6] = s_L_rental_skill_00_01ce96de[0xe];
  acStack_340[7] = s_L_rental_skill_00_01ce96de[0xf];
  local_28a = 0;
  local_292 = 0;
  local_29a = 0;
  local_2a2 = 0;
  local_2aa = 0;
  local_2b2 = 0;
  local_2ba = 0;
  local_2c2 = 0;
  local_2ca = 0;
  local_2d2 = 0;
  local_2d4 = 0x31;
  local_24e = 0;
  local_2dc[0] = s_L_rental_skill_01_01d01910[8];
  local_2dc[1] = s_L_rental_skill_01_01d01910[9];
  local_2dc[2] = s_L_rental_skill_01_01d01910[10];
  local_2dc[3] = s_L_rental_skill_01_01d01910[0xb];
  local_2dc[4] = s_L_rental_skill_01_01d01910[0xc];
  local_2dc[5] = s_L_rental_skill_01_01d01910[0xd];
  local_2dc[6] = s_L_rental_skill_01_01d01910[0xe];
  local_2dc[7] = s_L_rental_skill_01_01d01910[0xf];
  local_2e4[0] = s_L_rental_skill_01_01d01910[0];
  local_2e4[1] = s_L_rental_skill_01_01d01910[1];
  local_2e4[2] = s_L_rental_skill_01_01d01910[2];
  local_2e4[3] = s_L_rental_skill_01_01d01910[3];
  local_2e4[4] = s_L_rental_skill_01_01d01910[4];
  local_2e4[5] = s_L_rental_skill_01_01d01910[5];
  local_2e4[6] = s_L_rental_skill_01_01d01910[6];
  local_2e4[7] = s_L_rental_skill_01_01d01910[7];
  local_226 = 0;
  local_22e = 0;
  local_236 = 0;
  local_23e = 0;
  local_246 = 0;
  local_256 = 0;
  local_25e = 0;
  local_266 = 0;
  local_26e = 0;
  param4_00 = local_21c;
  local_1ba = 0;
  local_270 = 0x32;
  local_21e = 0;
  local_280[0] = s_L_rental_skill_02_01d18c12[0];
  local_280[1] = s_L_rental_skill_02_01d18c12[1];
  local_280[2] = s_L_rental_skill_02_01d18c12[2];
  local_280[3] = s_L_rental_skill_02_01d18c12[3];
  local_280[4] = s_L_rental_skill_02_01d18c12[4];
  local_280[5] = s_L_rental_skill_02_01d18c12[5];
  local_280[6] = s_L_rental_skill_02_01d18c12[6];
  local_280[7] = s_L_rental_skill_02_01d18c12[7];
  acStack_278[0] = s_L_rental_skill_02_01d18c12[8];
  acStack_278[1] = s_L_rental_skill_02_01d18c12[9];
  acStack_278[2] = s_L_rental_skill_02_01d18c12[10];
  acStack_278[3] = s_L_rental_skill_02_01d18c12[0xb];
  acStack_278[4] = s_L_rental_skill_02_01d18c12[0xc];
  acStack_278[5] = s_L_rental_skill_02_01d18c12[0xd];
  acStack_278[6] = s_L_rental_skill_02_01d18c12[0xe];
  acStack_278[7] = s_L_rental_skill_02_01d18c12[0xf];
  local_1c2 = 0;
  local_1ca = 0;
  local_1d2 = 0;
  local_1da = 0;
  local_1e2 = 0;
  local_1ea = 0;
  local_1f2 = 0;
  local_1fa = 0;
  local_20a = 0;
  local_202 = 0;
  local_214[0] = s_L_rental_skill_03_01d2dbea[8];
  local_214[1] = s_L_rental_skill_03_01d2dbea[9];
  local_214[2] = s_L_rental_skill_03_01d2dbea[10];
  local_214[3] = s_L_rental_skill_03_01d2dbea[0xb];
  local_214[4] = s_L_rental_skill_03_01d2dbea[0xc];
  local_214[5] = s_L_rental_skill_03_01d2dbea[0xd];
  local_214[6] = s_L_rental_skill_03_01d2dbea[0xe];
  local_214[7] = s_L_rental_skill_03_01d2dbea[0xf];
  local_21c[0] = s_L_rental_skill_03_01d2dbea[0];
  local_21c[1] = s_L_rental_skill_03_01d2dbea[1];
  local_21c[2] = s_L_rental_skill_03_01d2dbea[2];
  local_21c[3] = s_L_rental_skill_03_01d2dbea[3];
  local_21c[4] = s_L_rental_skill_03_01d2dbea[4];
  local_21c[5] = s_L_rental_skill_03_01d2dbea[5];
  local_21c[6] = s_L_rental_skill_03_01d2dbea[6];
  local_21c[7] = s_L_rental_skill_03_01d2dbea[7];
  local_20c = 0x33;
  local_148 = lVar13;
  if (*param3 == '\0') {
    snprintf((char *)&local_138,100,"%s",&local_348);
  }
  else {
    snprintf((char *)&local_138,100,"%s_%s",param3,(char *)&local_348);
  }
  local_70 = 0;
  param4 = local_280;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  snprintf((char *)&local_d0,100,"%s",&local_138);
  local_1a0 = local_c0;
  local_198 = local_b8;
  local_1b0 = local_d0;
  local_1a8 = local_c8;
  local_180 = local_a0;
  local_178 = local_98;
  local_190 = local_b0;
  local_188 = local_a8;
  local_150 = local_70;
  local_160 = local_80;
  local_158 = local_78;
  local_170 = local_90;
  local_168 = local_88;
  FUN_014eed30(*(undefined8 *)(param_1 + 0xe8),&local_1b8);
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
  if (*param3 == '\0') {
    if (local_2e4[0] != '\0') goto LAB_014efd18;
    local_350 = 0;
    local_360 = 0;
    local_358 = 0;
    local_370 = 0;
    local_368 = 0;
    local_380 = 0;
    local_378 = 0;
    local_390 = 0;
    local_388 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
  }
  else {
    if (local_2e4[0] == '\0') {
      pcVar14 = param3;
LAB_014efd18:
      snprintf((char *)&local_138,100,"%s",pcVar14);
    }
    else {
      snprintf((char *)&local_138,100,"%s_%s",param3,pcVar14);
    }
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    snprintf((char *)&local_d0,100,"%s",&local_138);
    local_3b0 = local_d0;
    local_390 = local_b0;
    local_398 = local_b8;
    local_3a0 = local_c0;
    local_3a8 = local_c8;
    local_370 = local_90;
    local_378 = local_98;
    local_380 = local_a0;
    local_388 = local_a8;
    local_350 = local_70;
    local_358 = local_78;
    local_360 = local_80;
    local_368 = local_88;
  }
  local_1a0 = local_3a0;
  local_198 = local_398;
  local_1b0 = local_3b0;
  local_1a8 = local_3a8;
  local_180 = local_380;
  local_178 = local_378;
  local_190 = local_390;
  local_188 = local_388;
  local_150 = local_350;
  local_160 = local_360;
  local_158 = local_358;
  local_170 = local_370;
  local_168 = local_368;
  FUN_014eed30(*(long *)(param_1 + 0xe8) + 0xa8,&local_1b8);
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
  if (*param3 == '\0') {
    if (local_280[0] != '\0') goto LAB_014efe94;
    local_350 = 0;
    local_360 = 0;
    local_358 = 0;
    local_370 = 0;
    local_368 = 0;
    local_380 = 0;
    local_378 = 0;
    local_390 = 0;
    local_388 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
  }
  else {
    if (local_280[0] == '\0') {
      param4 = param3;
LAB_014efe94:
      snprintf((char *)&local_138,100,"%s",param4);
    }
    else {
      snprintf((char *)&local_138,100,"%s_%s",param3,param4);
    }
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    snprintf((char *)&local_d0,100,"%s",&local_138);
    local_3b0 = local_d0;
    local_390 = local_b0;
    local_398 = local_b8;
    local_3a0 = local_c0;
    local_3a8 = local_c8;
    local_370 = local_90;
    local_378 = local_98;
    local_380 = local_a0;
    local_388 = local_a8;
    local_350 = local_70;
    local_358 = local_78;
    local_360 = local_80;
    local_368 = local_88;
  }
  local_1a0 = local_3a0;
  local_198 = local_398;
  local_1b0 = local_3b0;
  local_1a8 = local_3a8;
  local_180 = local_380;
  local_178 = local_378;
  local_190 = local_390;
  local_188 = local_388;
  local_150 = local_350;
  local_160 = local_360;
  local_158 = local_358;
  local_170 = local_370;
  local_168 = local_368;
  FUN_014eed30(*(long *)(param_1 + 0xe8) + 0x150,&local_1b8);
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
  if (*param3 == '\0') {
    if (local_21c[0] == '\0') {
      local_350 = 0;
      local_360 = 0;
      local_358 = 0;
      local_370 = 0;
      local_368 = 0;
      local_380 = 0;
      local_378 = 0;
      local_390 = 0;
      local_388 = 0;
      local_3a0 = 0;
      local_398 = 0;
      local_3b0 = 0;
      local_3a8 = 0;
      goto LAB_014f00b0;
    }
LAB_014f0010:
    snprintf((char *)&local_138,100,"%s",param4_00);
  }
  else {
    if (local_21c[0] == '\0') {
      param4_00 = param3;
      goto LAB_014f0010;
    }
    snprintf((char *)&local_138,100,"%s_%s",param3,param4_00);
  }
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  snprintf((char *)&local_d0,100,"%s",&local_138);
  local_3b0 = local_d0;
  local_390 = local_b0;
  local_398 = local_b8;
  local_3a0 = local_c0;
  local_3a8 = local_c8;
  local_370 = local_90;
  local_378 = local_98;
  local_380 = local_a0;
  local_388 = local_a8;
  local_350 = local_70;
  local_358 = local_78;
  local_360 = local_80;
  local_368 = local_88;
LAB_014f00b0:
  local_1a0 = local_3a0;
  local_198 = local_398;
  local_1b0 = local_3b0;
  local_1a8 = local_3a8;
  local_180 = local_380;
  local_178 = local_378;
  local_190 = local_390;
  local_188 = local_388;
  local_150 = local_350;
  local_160 = local_360;
  local_158 = local_358;
  local_170 = local_370;
  local_168 = local_368;
  FUN_014eed30(*(long *)(param_1 + 0xe8) + 0x1f8,&local_1b8);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


