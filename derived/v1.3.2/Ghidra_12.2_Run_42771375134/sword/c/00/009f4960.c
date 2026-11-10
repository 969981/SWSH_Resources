/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f4960; name: FUN_009f4960
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_009f4960(long param_1)

{
  uint param3;
  byte bVar1;
  char cVar2;
  uint extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  char local_2c8 [8];
  char acStack_2c0 [7];
  char local_2b9;
  char acStack_2b8 [7];
  undefined8 local_2b1;
  undefined8 local_2a9;
  undefined8 local_2a1;
  undefined8 local_299;
  undefined8 local_291;
  undefined8 local_289;
  undefined8 local_281;
  undefined8 local_279;
  undefined5 uStack_271;
  undefined3 local_26c;
  undefined5 uStack_269;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
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
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long lStack_118;
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
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  FUN_016b4cf0(*(undefined8 *)(param_1 + 0x5e8));
  local_128 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x84);
  local_120 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x8c);
  lStack_118 = param_1;
  FUN_016b8190(*(undefined8 *)(param_1 + 0x5d8));
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar7 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN_009f4fe0(&lStack_118,0x361d3c66029e2152);
  param3 = extraout_var & 0xff;
  if (param3 == (int)(char)local_128) {
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
    uVar4 = local_128;
  }
  else {
    uVar4 = local_128;
  }
  if (param3 == (int)local_128._1_1_) {
    local_128 = uVar4;
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
    uVar4 = local_128;
  }
  else {
    local_128._2_1_ = (char)((ulong)uVar4 >> 0x10);
  }
  if (param3 == (int)local_128._2_1_) {
    local_128 = uVar4;
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
    uVar4 = local_128;
  }
  else {
    local_128._3_1_ = (char)((ulong)uVar4 >> 0x18);
  }
  if (param3 == (int)local_128._3_1_) {
    local_128 = uVar4;
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
    uVar4 = local_128;
  }
  else {
    local_128._4_1_ = (char)((ulong)uVar4 >> 0x20);
  }
  if (param3 == (int)local_128._4_1_) {
    local_128 = uVar4;
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
    uVar4 = local_128;
    cVar2 = local_128._5_1_;
  }
  else {
    local_128._5_1_ = (char)((ulong)uVar4 >> 0x28);
    cVar2 = local_128._5_1_;
  }
  local_128 = uVar4;
  if (param3 == (int)cVar2) {
    FUN_009f4fe0(&lStack_118,0x361d3b66029e1f9f);
  }
  local_130 = 0;
  local_140 = 0;
  local_138 = 0;
  local_198 = 0;
  local_150 = 0;
  local_148 = 0;
  local_160 = 0;
  local_158 = 0;
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  local_178 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  snprintf((char *)&local_1f8,100,"pokelist_%02d",param3);
  local_2b1 = 0;
  acStack_2b8[0] = s_L_pselect_temochi_00_L_01d47c24[0x10];
  acStack_2b8[1] = s_L_pselect_temochi_00_L_01d47c24[0x11];
  acStack_2b8[2] = s_L_pselect_temochi_00_L_01d47c24[0x12];
  acStack_2b8[3] = s_L_pselect_temochi_00_L_01d47c24[0x13];
  acStack_2b8[4] = s_L_pselect_temochi_00_L_01d47c24[0x14];
  acStack_2b8[5] = s_L_pselect_temochi_00_L_01d47c24[0x15];
  acStack_2b8[6] = s_L_pselect_temochi_00_L_01d47c24[0x16];
  uStack_269 = 0;
  uStack_271 = 0;
  local_26c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_279 = 0;
  local_281 = 0;
  local_289 = 0;
  local_291 = 0;
  local_299 = 0;
  local_2a1 = 0;
  local_2a9 = 0;
  local_48 = 0;
  local_2c8[0] = s_L_pselect_temochi_00_L_01d47c24[0];
  local_2c8[1] = s_L_pselect_temochi_00_L_01d47c24[1];
  local_2c8[2] = s_L_pselect_temochi_00_L_01d47c24[2];
  local_2c8[3] = s_L_pselect_temochi_00_L_01d47c24[3];
  local_2c8[4] = s_L_pselect_temochi_00_L_01d47c24[4];
  local_2c8[5] = s_L_pselect_temochi_00_L_01d47c24[5];
  local_2c8[6] = s_L_pselect_temochi_00_L_01d47c24[6];
  local_2c8[7] = s_L_pselect_temochi_00_L_01d47c24[7];
  acStack_2c0[0] = s_L_pselect_temochi_00_L_01d47c24[8];
  acStack_2c0[1] = s_L_pselect_temochi_00_L_01d47c24[9];
  acStack_2c0[2] = s_L_pselect_temochi_00_L_01d47c24[10];
  acStack_2c0[3] = s_L_pselect_temochi_00_L_01d47c24[0xb];
  acStack_2c0[4] = s_L_pselect_temochi_00_L_01d47c24[0xc];
  acStack_2c0[5] = s_L_pselect_temochi_00_L_01d47c24[0xd];
  acStack_2c0[6] = s_L_pselect_temochi_00_L_01d47c24[0xe];
  local_2b9 = s_L_pselect_temochi_00_L_01d47c24[0xf];
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if ((char)local_1f8 == '\0') {
    snprintf((char *)&local_a8,100,"%s",local_2c8);
  }
  else {
    snprintf((char *)&local_a8,100,"%s_%s",local_2c8,(char *)&local_1f8);
  }
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  snprintf((char *)&local_110,100,"%s",&local_a8);
  local_260 = local_110;
  local_58 = 0;
  uStack_50 = 0;
  local_240 = local_f0;
  local_248 = local_f8;
  local_68 = 0;
  uStack_60 = 0;
  local_250 = local_100;
  local_258 = local_108;
  local_78 = 0;
  uStack_70 = 0;
  local_220 = local_d0;
  local_228 = local_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_230 = local_e0;
  local_238 = local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_200 = local_b0;
  local_208 = local_b8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_210 = local_c0;
  local_218 = local_c8;
  local_190 = local_110;
  uVar4 = local_190;
  local_170 = local_f0;
  local_178 = local_f8;
  local_180 = local_100;
  local_188 = local_108;
  local_150 = local_d0;
  local_158 = local_d8;
  local_160 = local_e0;
  local_168 = local_e8;
  local_130 = local_b0;
  local_138 = local_b8;
  local_140 = local_c0;
  local_148 = local_c8;
  local_190._0_1_ = (char)local_110;
  local_48 = 0;
  local_190 = uVar4;
  if ((char)local_190 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","N_cursor");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)&local_190,"N_cursor");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    bVar1 = (byte)local_a8;
    do {
      uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x5d0) + 8);
  uVar3 = FUN_016b8190(*(undefined8 *)(param_1 + 0x5d8));
  uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar3 >> 0x20 & 0xff);
  uVar3 = FUN_0087d610(uVar4,2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x5e8);
    local_2e0 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar4,0,&local_2e0);
    if (local_2e0 != 0) {
      (**(code **)(*(long *)(local_2e0 + 0x48) + 0x18))();
      local_2e0 = 0;
    }
    FUN_009f4fe0(&lStack_118,0x361d3a66029e1dec);
    uVar4 = *(undefined8 *)(param_1 + 0x5e8);
    local_2e8 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar4,1,&local_2e8);
    if (local_2e8 != 0) {
      (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
      local_2e8 = 0;
    }
    FUN_009f4fe0(&lStack_118,0x361d3966029e1c39);
    uVar4 = *(undefined8 *)(param_1 + 0x5e8);
    local_2f0 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar4,2,&local_2f0);
    if (local_2f0 != 0) {
      (**(code **)(*(long *)(local_2f0 + 0x48) + 0x18))();
      local_2f0 = 0;
    }
    FUN_016b4ac0(*(undefined8 *)(param_1 + 0x5e8),2,&DAT_0214deb8,1);
    FUN_016b4e20(*(undefined8 *)(param_1 + 0x5e8),uVar8,3);
  }
  else {
    FUN_009f4fe0(&lStack_118,0x361d3a66029e1dec);
    uVar4 = *(undefined8 *)(param_1 + 0x5e8);
    local_2d0 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar4,0,&local_2d0);
    if (local_2d0 != 0) {
      (**(code **)(*(long *)(local_2d0 + 0x48) + 0x18))();
      local_2d0 = 0;
    }
    FUN_009f4fe0(&lStack_118,0x361d3966029e1c39);
    uVar4 = *(undefined8 *)(param_1 + 0x5e8);
    local_2d8 = lVar6;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar4,1,&local_2d8);
    if (local_2d8 != 0) {
      (**(code **)(*(long *)(local_2d8 + 0x48) + 0x18))();
      local_2d8 = 0;
    }
    FUN_016b4ac0(*(undefined8 *)(param_1 + 0x5e8),1,&DAT_0214deb8,1);
    FUN_016b4e20(*(undefined8 *)(param_1 + 0x5e8),uVar8,2);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


