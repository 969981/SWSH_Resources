/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01462e20; name: FUN_01462e20
 */


/* WARNING: Removing unreachable block (ram,0x01463314) */

void FUN_01462e20(long param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  code *pcVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int param3;
  int param3_00;
  char acStack_360 [6];
  char local_35a [2];
  char acStack_358 [6];
  undefined8 local_352;
  undefined8 uStack_34a;
  undefined8 local_342;
  undefined8 uStack_33a;
  undefined8 local_332;
  undefined8 uStack_32a;
  undefined8 local_322;
  undefined8 uStack_31a;
  undefined8 local_312;
  undefined6 uStack_30a;
  undefined2 local_304;
  undefined6 uStack_302;
  ulong local_2f8 [12];
  undefined4 local_298;
  ulong local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  ulong local_228;
  code *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  ulong local_1c0 [12];
  undefined4 local_160;
  long local_158 [12];
  undefined4 local_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  FUN_01463860();
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  local_160 = 0;
  local_1c0[0xb] = 0;
  local_1c0[10] = 0;
  local_1c0[9] = 0;
  local_1c0[8] = 0;
  local_1c0[7] = 0;
  lVar17 = 0;
  param3 = 0;
  uVar16 = 0xcbf29ce484222645;
  local_1c0[6] = 0;
  local_1c0[5] = 0;
  local_1c0[4] = 0;
  local_1c0[3] = 0;
  local_1c0[2] = 0;
  local_1c0[1] = 0;
  local_1c0[0] = 0;
  lVar11 = *(long *)(param_1 + 0x4c8);
  do {
    lVar15 = param_2 + lVar17 * 8;
    if (*(int *)(lVar15 + 0x54) == 0) {
      uVar3 = *(undefined2 *)(lVar15 + 0x5a);
      uVar4 = *(undefined2 *)(lVar15 + 0x58);
      local_298 = 0;
      local_2f8[10] = 0;
      local_2f8[0xb] = 0;
      local_2f8[8] = 0;
      local_2f8[9] = 0;
      local_2f8[6] = 0;
      local_2f8[7] = 0;
      local_2f8[4] = 0;
      local_2f8[5] = 0;
      local_2f8[2] = 0;
      local_2f8[3] = 0;
      local_2f8[0] = 0;
      local_2f8[1] = 0;
      snprintf((char *)local_2f8,100,"L_icon_%02d",param3);
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      if ((char)local_1c0[0] == '\0') {
        if ((char)local_2f8[0] != '\0') {
          puVar10 = local_2f8;
          goto LAB_01462fe8;
        }
        local_230 = 0;
        local_240 = 0;
        local_238 = 0;
        local_250 = 0;
        local_248 = 0;
        local_260 = 0;
        local_258 = 0;
        local_270 = 0;
        local_268 = 0;
        local_280 = 0;
        local_278 = 0;
        local_290 = 0;
        local_288 = (code *)0x0;
        uVar12 = local_2f8[0];
      }
      else {
        puVar10 = local_1c0;
        if ((char)local_2f8[0] == '\0') {
LAB_01462fe8:
          snprintf((char *)local_158,100,"%s",puVar10);
        }
        else {
          snprintf((char *)local_158,100,"%s_%s",(char *)puVar10,(char *)local_2f8);
        }
        local_90 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        snprintf((char *)&local_f0,100,"%s",local_158);
        local_290 = local_f0;
        local_270 = local_d0;
        local_278 = local_d8;
        local_280 = local_e0;
        local_288 = local_e8;
        local_250 = local_b0;
        local_258 = local_b8;
        local_260 = local_c0;
        local_268 = local_c8;
        local_230 = local_90;
        local_238 = local_98;
        local_240 = local_a0;
        local_248 = local_a8;
        uVar12 = local_f0;
      }
      uStack_302 = 0;
      local_312 = 0;
      uStack_30a = 0;
      local_304 = 0;
      local_322 = 0;
      uStack_31a = 0;
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      local_332 = 0;
      uStack_32a = 0;
      local_342 = 0;
      uStack_33a = 0;
      local_352 = 0;
      uStack_34a = 0;
      acStack_358[0] = s_L_pokeicon_00_01d33c94[8];
      acStack_358[1] = s_L_pokeicon_00_01d33c94[9];
      acStack_358[2] = s_L_pokeicon_00_01d33c94[10];
      acStack_358[3] = s_L_pokeicon_00_01d33c94[0xb];
      acStack_358[4] = s_L_pokeicon_00_01d33c94[0xc];
      acStack_358[5] = s_L_pokeicon_00_01d33c94[0xd];
      acStack_360[0] = s_L_pokeicon_00_01d33c94[0];
      acStack_360[1] = s_L_pokeicon_00_01d33c94[1];
      acStack_360[2] = s_L_pokeicon_00_01d33c94[2];
      acStack_360[3] = s_L_pokeicon_00_01d33c94[3];
      acStack_360[4] = s_L_pokeicon_00_01d33c94[4];
      acStack_360[5] = s_L_pokeicon_00_01d33c94[5];
      local_35a[0] = s_L_pokeicon_00_01d33c94[6];
      local_35a[1] = s_L_pokeicon_00_01d33c94[7];
      if ((uVar12 & 0xff) == 0) {
        snprintf((char *)local_158,100,"%s",acStack_360);
      }
      else {
        snprintf((char *)local_158,100,"%s_%s",(char *)&local_290,acStack_360);
      }
      local_90 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      snprintf((char *)&local_f0,100,"%s",local_158);
      local_228 = local_f0;
      local_208 = local_d0;
      local_210 = local_d8;
      local_218 = local_e0;
      local_220 = local_e8;
      local_1e8 = local_b0;
      local_1f0 = local_b8;
      local_1f8 = local_c0;
      local_200 = local_c8;
      local_1c8 = local_90;
      local_1d0 = local_98;
      local_1d8 = local_a0;
      local_1e0 = local_a8;
      lVar15 = *(long *)(param_1 + 0x2b0);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      uVar12 = 0xcbf29ce484222645;
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      if ((char)local_228 != '\0') {
        snprintf((char *)local_158,100,"pane_%s",(char *)&local_228);
        uVar12 = 0xcbf29ce484222645;
        if ((byte)local_158[0] != 0) {
          uVar12 = 0xcbf29ce484222645;
          pbVar13 = (byte *)((ulong)local_158 | 1);
          bVar2 = (byte)local_158[0];
          do {
            uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar2 != 0);
        }
      }
      local_f0 = uVar12;
      FUN_0167b9b0(lVar15,&local_f0,1);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      FUN_01505f50(local_158,lVar14,uVar4,uVar3,*(undefined8 *)(param_1 + 8));
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      FUN_0168c890(lVar11 + (long)param3 * 0x3e0,local_158[0],0,0,&local_f0);
      pcVar9 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar9)(&local_d0);
      }
      param3 = param3 + 1;
      if (local_158[0] != 0) {
        (**(code **)(*(long *)(local_158[0] + 0x48) + 0x18))();
        local_158[0] = 0;
      }
    }
    uVar7 = s_L_pokeicon_00_01d33c94._8_6_;
    uVar3 = s_L_pokeicon_00_01d33c94._6_2_;
    uVar5 = s_L_pokeicon_00_01d33c94._0_6_;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x1e);
  if (param3 < 0x1e) {
    param3_00 = param3;
    do {
      local_298 = 0;
      local_2f8[10] = 0;
      local_2f8[0xb] = 0;
      local_2f8[8] = 0;
      local_2f8[9] = 0;
      local_2f8[6] = 0;
      local_2f8[7] = 0;
      local_2f8[4] = 0;
      local_2f8[5] = 0;
      local_2f8[2] = 0;
      local_2f8[3] = 0;
      local_2f8[0] = 0;
      local_2f8[1] = 0;
      snprintf((char *)local_2f8,100,"L_icon_%02d",param3_00);
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      if ((char)local_1c0[0] == '\0') {
        if ((char)local_2f8[0] != '\0') {
          puVar10 = local_2f8;
          goto LAB_01463458;
        }
        local_230 = 0;
        local_240 = 0;
        local_238 = 0;
        local_250 = 0;
        local_248 = 0;
        local_260 = 0;
        local_258 = 0;
        local_270 = 0;
        local_268 = 0;
        local_280 = 0;
        local_278 = 0;
        local_290 = 0;
        local_288 = (code *)0x0;
        uVar12 = local_2f8[0];
      }
      else {
        puVar10 = local_1c0;
        if ((char)local_2f8[0] == '\0') {
LAB_01463458:
          snprintf((char *)local_158,100,"%s",puVar10);
        }
        else {
          snprintf((char *)local_158,100,"%s_%s",(char *)puVar10,(char *)local_2f8);
        }
        local_90 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        snprintf((char *)&local_f0,100,"%s",local_158);
        local_290 = local_f0;
        local_270 = local_d0;
        local_278 = local_d8;
        local_280 = local_e0;
        local_288 = local_e8;
        local_250 = local_b0;
        local_258 = local_b8;
        local_260 = local_c0;
        local_268 = local_c8;
        local_230 = local_90;
        local_238 = local_98;
        local_240 = local_a0;
        local_248 = local_a8;
        uVar12 = local_f0;
      }
      uVar8 = s_L_pokeicon_00_01d33c94._8_6_;
      uVar4 = s_L_pokeicon_00_01d33c94._6_2_;
      uVar6 = s_L_pokeicon_00_01d33c94._0_6_;
      uStack_302 = 0;
      local_312 = 0;
      uStack_30a = 0;
      local_304 = 0;
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      local_322 = 0;
      uStack_31a = 0;
      local_332 = 0;
      uStack_32a = 0;
      local_342 = 0;
      uStack_33a = 0;
      local_352 = 0;
      uStack_34a = 0;
      s_L_pokeicon_00_01d33c94[8] = (char)uVar7;
      s_L_pokeicon_00_01d33c94[9] = SUB61(uVar7,1);
      s_L_pokeicon_00_01d33c94[10] = SUB61(uVar7,2);
      s_L_pokeicon_00_01d33c94[0xb] = SUB61(uVar7,3);
      s_L_pokeicon_00_01d33c94[0xc] = SUB61(uVar7,4);
      s_L_pokeicon_00_01d33c94[0xd] = SUB61(uVar7,5);
      acStack_358[0] = s_L_pokeicon_00_01d33c94[8];
      acStack_358[1] = s_L_pokeicon_00_01d33c94[9];
      acStack_358[2] = s_L_pokeicon_00_01d33c94[10];
      acStack_358[3] = s_L_pokeicon_00_01d33c94[0xb];
      acStack_358[4] = s_L_pokeicon_00_01d33c94[0xc];
      acStack_358[5] = s_L_pokeicon_00_01d33c94[0xd];
      s_L_pokeicon_00_01d33c94[0] = (char)uVar5;
      s_L_pokeicon_00_01d33c94[1] = SUB61(uVar5,1);
      s_L_pokeicon_00_01d33c94[2] = SUB61(uVar5,2);
      s_L_pokeicon_00_01d33c94[3] = SUB61(uVar5,3);
      s_L_pokeicon_00_01d33c94[4] = SUB61(uVar5,4);
      s_L_pokeicon_00_01d33c94[5] = SUB61(uVar5,5);
      acStack_360[0] = s_L_pokeicon_00_01d33c94[0];
      acStack_360[1] = s_L_pokeicon_00_01d33c94[1];
      acStack_360[2] = s_L_pokeicon_00_01d33c94[2];
      acStack_360[3] = s_L_pokeicon_00_01d33c94[3];
      acStack_360[4] = s_L_pokeicon_00_01d33c94[4];
      acStack_360[5] = s_L_pokeicon_00_01d33c94[5];
      s_L_pokeicon_00_01d33c94[6] = (char)uVar3;
      s_L_pokeicon_00_01d33c94[7] = SUB21(uVar3,1);
      local_35a[0] = s_L_pokeicon_00_01d33c94[6];
      local_35a[1] = s_L_pokeicon_00_01d33c94[7];
      s_L_pokeicon_00_01d33c94._0_6_ = uVar6;
      s_L_pokeicon_00_01d33c94._6_2_ = uVar4;
      s_L_pokeicon_00_01d33c94._8_6_ = uVar8;
      if ((uVar12 & 0xff) == 0) {
        snprintf((char *)local_158,100,"%s",acStack_360);
      }
      else {
        snprintf((char *)local_158,100,"%s_%s",(char *)&local_290,acStack_360);
      }
      local_90 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      snprintf((char *)&local_f0,100,"%s",local_158);
      local_228 = local_f0;
      local_208 = local_d0;
      local_210 = local_d8;
      local_218 = local_e0;
      local_220 = local_e8;
      local_1e8 = local_b0;
      local_1f0 = local_b8;
      local_1f8 = local_c0;
      local_200 = local_c8;
      local_1c8 = local_90;
      local_1d0 = local_98;
      local_1d8 = local_a0;
      local_1e0 = local_a8;
      lVar17 = *(long *)(param_1 + 0x2b0);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
      }
      uVar12 = 0xcbf29ce484222645;
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      if ((char)local_228 != '\0') {
        snprintf((char *)local_158,100,"pane_%s",(char *)&local_228);
        uVar12 = 0xcbf29ce484222645;
        if ((byte)local_158[0] != 0) {
          uVar12 = 0xcbf29ce484222645;
          pbVar13 = (byte *)((ulong)local_158 | 1);
          bVar2 = (byte)local_158[0];
          do {
            uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar2 != 0);
        }
      }
      local_f0 = uVar12;
      FUN_0167b9b0(lVar17,&local_f0,0);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      bVar1 = param3_00 < 0x1d;
      param3_00 = param3_00 + 1;
    } while (bVar1);
    if (param3 < 2) {
      local_f8 = 0;
      local_158[0xb] = 0;
      local_158[10] = 0;
      local_158[9] = 0;
      local_158[8] = 0;
      local_158[7] = 0;
      local_158[6] = 0;
      local_158[5] = 0;
      local_158[4] = 0;
      local_158[3] = 0;
      local_158[2] = 0;
      local_158[1] = 0;
      local_158[0] = 0;
      snprintf((char *)local_158,100,"pane_%s","T_title_00");
      if ((byte)local_158[0] != 0) {
        pbVar13 = (byte *)((ulong)local_158 | 1);
        do {
          uVar16 = (uVar16 ^ (byte)local_158[0]) * 0x100000001b3;
          local_158[0]._0_1_ = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while ((byte)local_158[0] != 0);
      }
      local_158[0] = -0x3ebf18349699489d;
      local_f0 = uVar16;
      goto LAB_01463810;
    }
  }
  local_f8 = 0;
  local_158[0xb] = 0;
  local_158[10] = 0;
  local_158[9] = 0;
  local_158[8] = 0;
  local_158[7] = 0;
  local_158[6] = 0;
  local_158[5] = 0;
  local_158[4] = 0;
  local_158[3] = 0;
  local_158[2] = 0;
  local_158[1] = 0;
  local_158[0] = 0;
  snprintf((char *)local_158,100,"pane_%s","T_title_00");
  if ((byte)local_158[0] != 0) {
    pbVar13 = (byte *)((ulong)local_158 | 1);
    do {
      uVar16 = (uVar16 ^ (byte)local_158[0]) * 0x100000001b3;
      local_158[0]._0_1_ = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while ((byte)local_158[0] != 0);
  }
  local_158[0] = 0x633acbd76464d365;
  local_f0 = uVar16;
LAB_01463810:
  FUN_014618d0(param_1,&local_f0,local_158,0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  return;
}


