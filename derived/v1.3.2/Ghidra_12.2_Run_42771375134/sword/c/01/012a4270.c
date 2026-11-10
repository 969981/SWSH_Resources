/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a4270; name: FUN_012a4270
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_012a4270(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_450;
  uint local_448;
  undefined4 uStack_444;
  uint uStack_440;
  undefined4 local_43c;
  uint uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  char local_428;
  undefined1 uStack_427;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined6 local_416;
  undefined2 uStack_410;
  undefined3 local_40e;
  undefined3 uStack_40b;
  undefined2 uStack_408;
  undefined2 uStack_406;
  uint local_404;
  undefined8 uStack_400;
  undefined8 local_3f8;
  uint local_3f0;
  undefined4 local_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined4 local_3dc;
  undefined4 uStack_3d8;
  undefined4 local_3d4;
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  undefined4 uStack_3c0;
  undefined4 local_3bc;
  undefined4 uStack_3b8;
  uint local_3b4;
  undefined1 local_3b0 [8];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined8 local_384;
  undefined8 local_37c;
  undefined5 uStack_374;
  undefined3 local_36f;
  undefined5 uStack_36c;
  char local_360;
  char local_2a0;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined4 local_254;
  char local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  char local_1f0 [8];
  undefined8 local_1e8;
  char local_1e0;
  undefined8 local_1de;
  undefined8 local_1d6;
  undefined8 local_1ce;
  undefined8 local_1c6;
  char local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined6 local_190;
  undefined2 uStack_18a;
  undefined6 local_188;
  undefined2 uStack_182;
  char local_180;
  undefined1 local_17c;
  char local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined5 uStack_140;
  undefined3 local_13b;
  undefined5 uStack_138;
  char local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  char local_e0;
  undefined8 local_dc;
  char local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  char local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  if ((((*(char *)(param_1 + 0x1a0) != '\0') && (lVar5 = *(long *)PTR_DAT_02727290, lVar5 != 0)) &&
      (lVar6 = *(long *)PTR_DAT_02710958, lVar6 != 0)) &&
     (uVar2 = FUN_012a89e0(lVar5), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    FUN_01210ee0(lVar6);
    FUN_01211940(&local_450,lVar6);
    local_1f0[0] = (uStack_438 & 0xff) != 0;
    if ((bool)local_1f0[0]) {
      local_1e8 = CONCAT44(uStack_42c,local_430);
    }
    local_1e0 = local_428 != '\0';
    if ((bool)local_1e0) {
      local_1c6 = CONCAT26(uStack_408,CONCAT33(uStack_40b,local_40e));
      local_1de = CONCAT26(uStack_420,uStack_426);
      local_1ce = CONCAT26(uStack_410,local_416);
      local_1d6 = CONCAT26(uStack_418,uStack_41e);
    }
    local_1bc = (local_3f0 & 0xff) != 0;
    if ((bool)local_1bc) {
      local_1a8 = CONCAT44(uStack_3d8,local_3dc);
      local_1b0 = CONCAT44(uStack_3e0,local_3e4);
      local_1b8 = CONCAT44(uStack_3e8,local_3ec);
      local_188 = (undefined6)CONCAT44(uStack_3b8,local_3bc);
      uStack_182 = (undefined2)((uint)uStack_3b8 >> 0x10);
      local_190 = (undefined6)CONCAT44(uStack_3c0,local_3c4);
      uStack_18a = (undefined2)((uint)uStack_3c0 >> 0x10);
      local_198 = CONCAT44(uStack_3c8,local_3cc);
      local_1a0 = CONCAT44(uStack_3d0,local_3d4);
    }
    local_180 = '\0';
    if ((local_3b4 & 0xff) != 0) {
      local_17c = local_3b0[0];
      local_178 = local_3b0[4] != '\0';
      if ((bool)local_178) {
        local_15c = local_390;
        local_164 = local_398;
        local_16c = local_3a0;
        local_174 = local_3a8;
      }
      local_158 = CONCAT44(uStack_388,local_38c);
      local_150 = local_384;
      uStack_138 = uStack_36c;
      uStack_140 = uStack_374;
      local_13b = local_36f;
      local_148 = local_37c;
      local_180 = '\x01';
    }
    local_130 = local_2a0 != '\0';
    if ((bool)local_130) {
      local_ec = local_25c;
      local_12c = local_29c;
      local_124 = local_294;
      local_114 = local_284;
      local_e4 = local_254;
      local_104 = local_274;
      local_10c = local_27c;
      local_11c = local_28c;
      local_fc = local_26c;
      local_f4 = local_264;
    }
    local_e0 = '\0';
    local_d0 = local_250 != '\0';
    if ((bool)local_d0) {
      local_c8 = local_248;
      local_a8 = local_228;
      local_b0 = local_230;
      local_b8 = local_238;
      local_c0 = local_240;
      local_250 = '\0';
    }
    if (local_2a0 != '\0') {
      local_2a0 = '\0';
    }
    if (local_360 != '\0') {
      local_360 = '\0';
    }
    if ((local_3b4 & 0xff) != 0) {
      if (local_3b0[4] != '\0') {
        local_3b0[4] = 0;
      }
      local_3b4 = local_3b4 & 0xffffff00;
    }
    if ((local_3f0 & 0xff) != 0) {
      local_3f0 = local_3f0 & 0xffffff00;
    }
    if ((char)local_404 != '\0') {
      local_404 = local_404 & 0xffffff00;
    }
    if (local_428 != '\0') {
      local_428 = '\0';
    }
    if ((uStack_438 & 0xff) != 0) {
      uStack_438 = uStack_438 & 0xffffff00;
    }
    if ((char)uStack_440 != '\0') {
      uStack_440 = uStack_440 & 0xffffff00;
    }
    uVar2 = FUN_01218830();
    if (local_e0 == '\0') {
      local_e0 = '\x01';
      local_450 = (ulong)local_450._1_7_ << 8;
      local_dc = uVar2;
      if (local_180 == '\0') goto LAB_012a4698;
LAB_012a4544:
      local_450._0_5_ = CONCAT14(local_17c,(undefined4)local_450);
      uVar1 = local_448 >> 8;
      local_448 = local_448 & 0xffffff00;
      if (local_178 != '\0') {
        uStack_42c = local_15c;
        local_43c = (undefined4)local_16c;
        uStack_438 = (uint)((ulong)local_16c >> 0x20);
        uStack_444 = (undefined4)local_174;
        uStack_440 = (uint)((ulong)local_174 >> 0x20);
        uStack_434 = (undefined4)local_164;
        local_430 = (undefined4)((ulong)local_164 >> 0x20);
        local_448 = CONCAT31((int3)uVar1,1);
      }
      local_428 = (char)local_158;
      uStack_427 = (undefined1)((ulong)local_158 >> 8);
      uStack_426 = (undefined6)((ulong)local_158 >> 0x10);
      uStack_408 = (undefined2)uStack_138;
      uStack_406 = (undefined2)((uint5)uStack_138 >> 0x10);
      local_404._0_1_ = (char)((uint5)uStack_138 >> 0x20);
      uStack_418 = (undefined2)local_148;
      local_416 = (undefined6)((ulong)local_148 >> 0x10);
      uStack_410 = (undefined2)uStack_140;
      local_40e = (undefined3)((uint5)uStack_140 >> 0x10);
      uStack_420 = (undefined2)local_150;
      uStack_41e = (undefined6)((ulong)local_150 >> 0x10);
      local_450 = CONCAT71(local_450._1_7_,1);
      uVar2 = FUN_0121bc60((ulong)&local_450 | 4);
      uVar7 = uVar2 & 0xffffffff;
      if ((char)local_450 != '\0') {
        if ((char)local_448 != '\0') {
          local_448 = local_448 & 0xffffff00;
        }
        local_450 = local_450 & 0xffffffffffffff00;
      }
      if (local_d0 != '\0') goto LAB_012a45dc;
LAB_012a46a4:
      uVar1 = (uint)uVar2;
      bVar4 = false;
    }
    else {
      local_dc._0_6_ = (undefined6)uVar2;
      local_450 = (ulong)local_450._1_7_ << 8;
      if (local_180 != '\0') goto LAB_012a4544;
LAB_012a4698:
      uVar7 = 0;
      if (local_d0 == '\0') goto LAB_012a46a4;
LAB_012a45dc:
      uVar1 = (uint)uVar2;
      if (local_e0 == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        if (((local_130 != '\0') && (local_180 != '\0')) &&
           ((local_1bc != '\0' && ((local_1e0 != '\0' && (bVar4 = false, local_1f0[0] != '\0'))))))
        {
          if ((uVar7 & 1) == 0) {
            uVar1 = FUN_012a5e30(local_1f0,param_1 + 0x50);
            if ((uVar1 & 1) != 0) {
              bVar4 = false;
              goto code_r0x012a46a8;
            }
            cVar3 = local_1f0[0];
            if (*(char *)(param_1 + 0x50) == '\0') goto LAB_012a46f0;
LAB_012a4624:
            if (cVar3 == '\0') {
              *(undefined1 *)(param_1 + 0x50) = 0;
LAB_012a4718:
              cVar3 = *(char *)(param_1 + 0x60);
            }
            else {
              *(undefined8 *)(param_1 + 0x58) = local_1e8;
              cVar3 = *(char *)(param_1 + 0x60);
            }
            if (cVar3 == '\0') goto LAB_012a463c;
LAB_012a4724:
            if (local_1e0 == '\0') {
              *(undefined1 *)(param_1 + 0x60) = 0;
              goto LAB_012a47a0;
            }
            *(undefined8 *)(param_1 + 0x7a) = local_1c6;
            *(undefined8 *)(param_1 + 0x72) = local_1ce;
            *(undefined8 *)(param_1 + 0x6a) = local_1d6;
            *(undefined8 *)(param_1 + 0x62) = local_1de;
            cVar3 = *(char *)(param_1 + 0x84);
            uVar2 = local_dc;
          }
          else {
            cVar3 = '\x01';
            if (*(char *)(param_1 + 0x50) != '\0') goto LAB_012a4624;
LAB_012a46f0:
            if (cVar3 == '\0') goto LAB_012a4718;
            *(undefined8 *)(param_1 + 0x58) = local_1e8;
            *(undefined1 *)(param_1 + 0x50) = 1;
            if (*(char *)(param_1 + 0x60) != '\0') goto LAB_012a4724;
LAB_012a463c:
            if (local_1e0 == '\0') {
LAB_012a47a0:
              cVar3 = *(char *)(param_1 + 0x84);
              uVar2 = local_dc;
            }
            else {
              *(undefined8 *)(param_1 + 0x62) = local_1de;
              *(undefined8 *)(param_1 + 0x7a) = local_1c6;
              *(undefined8 *)(param_1 + 0x72) = local_1ce;
              *(undefined8 *)(param_1 + 0x6a) = local_1d6;
              *(undefined1 *)(param_1 + 0x60) = 1;
              cVar3 = *(char *)(param_1 + 0x84);
              uVar2 = local_dc;
            }
          }
          if (cVar3 == '\0') {
            if (local_1bc != '\0') {
              *(undefined8 *)(param_1 + 0x90) = local_1b0;
              *(undefined8 *)(param_1 + 0x98) = local_1a8;
              *(undefined8 *)(param_1 + 0x88) = local_1b8;
              *(undefined8 *)(param_1 + 0xa0) = local_1a0;
              *(undefined8 *)(param_1 + 0xa8) = local_198;
              *(ulong *)(param_1 + 0xb0) = CONCAT26(uStack_18a,local_190);
              *(ulong *)(param_1 + 0xb8) = CONCAT26(uStack_182,local_188);
              *(undefined1 *)(param_1 + 0x84) = 1;
              cVar3 = *(char *)(param_1 + 0xc0);
              goto joined_r0x012a47e8;
            }
LAB_012a4870:
            if (*(char *)(param_1 + 0xc0) == '\0') goto LAB_012a47ec;
LAB_012a487c:
            if (local_180 == '\0') {
              if (*(char *)(param_1 + 200) != '\0') {
                *(undefined1 *)(param_1 + 200) = 0;
              }
              *(undefined1 *)(param_1 + 0xc0) = 0;
              cVar3 = *(char *)(param_1 + 0x110);
              goto joined_r0x012a4864;
            }
            *(undefined1 *)(param_1 + 0xc4) = local_17c;
            if (*(char *)(param_1 + 200) == '\0') {
              if (local_178 != '\0') {
                *(undefined8 *)(param_1 + 0xcc) = local_174;
                *(undefined4 *)(param_1 + 0xe4) = local_15c;
                *(undefined8 *)(param_1 + 0xdc) = local_164;
                *(undefined8 *)(param_1 + 0xd4) = local_16c;
                *(undefined1 *)(param_1 + 200) = 1;
              }
            }
            else if (local_178 == '\0') {
              *(undefined1 *)(param_1 + 200) = 0;
            }
            else {
              *(undefined1 *)(param_1 + 0xe4) = (undefined1)local_15c;
              *(undefined8 *)(param_1 + 0xdc) = local_164;
              *(undefined8 *)(param_1 + 0xd4) = local_16c;
              *(undefined8 *)(param_1 + 0xcc) = local_174;
            }
            *(undefined8 *)(param_1 + 0xe8) = local_158;
            *(undefined8 *)(param_1 + 0xf0) = local_150;
            *(undefined8 *)(param_1 + 0xf8) = local_148;
            *(ulong *)(param_1 + 0x100) = CONCAT35(local_13b,uStack_140);
            *(ulong *)(param_1 + 0x105) = CONCAT53(uStack_138,local_13b);
LAB_012a49cc:
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_012a49d8;
LAB_012a48d8:
            if (local_130 != '\0') {
              *(undefined8 *)(param_1 + 0x11c) = local_124;
              *(undefined8 *)(param_1 + 0x114) = local_12c;
              *(undefined8 *)(param_1 + 0x13c) = local_104;
              *(undefined8 *)(param_1 + 0x134) = local_10c;
              *(undefined8 *)(param_1 + 300) = local_114;
              *(undefined8 *)(param_1 + 0x124) = local_11c;
              *(undefined4 *)(param_1 + 0x15c) = local_e4;
              *(undefined8 *)(param_1 + 0x154) = local_ec;
              *(undefined8 *)(param_1 + 0x14c) = local_f4;
              *(undefined8 *)(param_1 + 0x144) = local_fc;
              *(undefined1 *)(param_1 + 0x110) = 1;
              cVar3 = *(char *)(param_1 + 0x160);
              goto joined_r0x012a4a60;
            }
LAB_012a4a98:
            if (*(char *)(param_1 + 0x160) == '\0') goto LAB_012a4a64;
LAB_012a4aa4:
            if (local_e0 != '\0') {
              local_dc._0_4_ = (undefined4)uVar2;
              local_dc._4_2_ = (undefined2)(uVar2 >> 0x20);
              *(undefined2 *)(param_1 + 0x168) = local_dc._4_2_;
              *(undefined4 *)(param_1 + 0x164) = (undefined4)local_dc;
              cVar3 = *(char *)(param_1 + 0x170);
              goto joined_r0x012a4a8c;
            }
            *(undefined1 *)(param_1 + 0x160) = 0;
LAB_012a4afc:
            if (*(char *)(param_1 + 0x170) != '\0') goto LAB_012a4b08;
LAB_012a4ac4:
            bVar4 = true;
            if (local_d0 != '\0') {
              *(undefined8 *)(param_1 + 0x178) = local_c8;
              *(undefined1 *)(param_1 + 0x170) = 1;
              bVar4 = false;
              *(undefined8 *)(param_1 + 400) = local_b0;
              *(undefined8 *)(param_1 + 0x198) = local_a8;
              *(undefined8 *)(param_1 + 0x180) = local_c0;
              *(undefined8 *)(param_1 + 0x188) = local_b8;
            }
          }
          else {
            if (local_1bc == '\0') {
              *(undefined1 *)(param_1 + 0x84) = 0;
              goto LAB_012a4870;
            }
            *(undefined8 *)(param_1 + 0x90) = local_1b0;
            *(undefined8 *)(param_1 + 0x98) = local_1a8;
            *(undefined8 *)(param_1 + 0x88) = local_1b8;
            *(ulong *)(param_1 + 0xb6) = CONCAT62(local_188,uStack_18a);
            *(undefined8 *)(param_1 + 0xa0) = local_1a0;
            *(undefined8 *)(param_1 + 0xa8) = local_198;
            *(ulong *)(param_1 + 0xb0) = CONCAT26(uStack_18a,local_190);
            cVar3 = *(char *)(param_1 + 0xc0);
joined_r0x012a47e8:
            if (cVar3 != '\0') goto LAB_012a487c;
LAB_012a47ec:
            if (local_180 == '\0') goto LAB_012a49cc;
            *(undefined1 *)(param_1 + 0xc4) = local_17c;
            *(undefined1 *)(param_1 + 200) = 0;
            if (local_178 != '\0') {
              *(undefined8 *)(param_1 + 0xcc) = local_174;
              *(undefined4 *)(param_1 + 0xe4) = local_15c;
              *(undefined8 *)(param_1 + 0xdc) = local_164;
              *(undefined8 *)(param_1 + 0xd4) = local_16c;
              *(undefined1 *)(param_1 + 200) = 1;
            }
            *(undefined8 *)(param_1 + 0xe8) = local_158;
            *(undefined8 *)(param_1 + 0xf8) = local_148;
            *(ulong *)(param_1 + 0x100) = CONCAT35(local_13b,uStack_140);
            *(ulong *)(param_1 + 0x105) = CONCAT53(uStack_138,local_13b);
            *(undefined8 *)(param_1 + 0xf0) = local_150;
            *(undefined1 *)(param_1 + 0xc0) = 1;
            cVar3 = *(char *)(param_1 + 0x110);
joined_r0x012a4864:
            if (cVar3 == '\0') goto LAB_012a48d8;
LAB_012a49d8:
            if (local_130 == '\0') {
              *(undefined1 *)(param_1 + 0x110) = 0;
              goto LAB_012a4a98;
            }
            *(undefined8 *)(param_1 + 0x11c) = local_124;
            *(undefined8 *)(param_1 + 0x114) = local_12c;
            *(undefined8 *)(param_1 + 0x13c) = local_104;
            *(undefined8 *)(param_1 + 0x134) = local_10c;
            *(undefined8 *)(param_1 + 300) = local_114;
            *(undefined8 *)(param_1 + 0x124) = local_11c;
            *(undefined4 *)(param_1 + 0x15c) = local_e4;
            *(undefined8 *)(param_1 + 0x14c) = local_f4;
            *(undefined8 *)(param_1 + 0x154) = local_ec;
            *(undefined8 *)(param_1 + 0x144) = local_fc;
            cVar3 = *(char *)(param_1 + 0x160);
joined_r0x012a4a60:
            if (cVar3 != '\0') goto LAB_012a4aa4;
LAB_012a4a64:
            if (local_e0 == '\0') goto LAB_012a4afc;
            *(ulong *)(param_1 + 0x164) = uVar2;
            *(undefined1 *)(param_1 + 0x160) = 1;
            cVar3 = *(char *)(param_1 + 0x170);
joined_r0x012a4a8c:
            if (cVar3 == '\0') goto LAB_012a4ac4;
LAB_012a4b08:
            if (local_d0 == '\0') {
              *(undefined1 *)(param_1 + 0x170) = 0;
              bVar4 = true;
            }
            else {
              *(undefined8 *)(param_1 + 0x178) = local_c8;
              bVar4 = false;
              *(undefined8 *)(param_1 + 400) = local_b0;
              *(undefined8 *)(param_1 + 0x198) = local_a8;
              *(undefined8 *)(param_1 + 0x180) = local_c0;
              *(undefined8 *)(param_1 + 0x188) = local_b8;
            }
          }
          local_450 = 0;
          uStack_98 = 200;
          local_80 = &local_90;
          local_398 = 0;
          local_390 = 0;
          local_38c = 0;
          local_88 = 0;
          local_90 = 0;
          local_3a8 = 0;
          local_3a0 = 0;
          uStack_3b8 = 0;
          local_3b4 = 0;
          local_3b0 = (undefined1  [8])0x0;
          uStack_3c8 = 0;
          local_3c4 = 0;
          uStack_3c0 = 0;
          local_3bc = 0;
          uStack_3d8 = 0;
          local_3d4 = 0;
          uStack_3d0 = 0;
          local_3cc = 0;
          uStack_3e8 = 0;
          local_3e4 = 0;
          uStack_3e0 = 0;
          local_3dc = 0;
          local_3f8 = 0;
          local_3f0 = 0;
          local_3ec = 0;
          uStack_408 = 0;
          uStack_406 = 0;
          local_404 = 0;
          uStack_400 = 0;
          uStack_418 = 0;
          local_416 = 0;
          uStack_410 = 0;
          local_40e = 0;
          uStack_40b = 0;
          local_428 = 0;
          uStack_427 = 0;
          uStack_426 = 0;
          uStack_420 = 0;
          uStack_41e = 0;
          uStack_438 = 0;
          uStack_434 = 0;
          local_430 = 0;
          uStack_42c = 0;
          local_448 = 0;
          uStack_444 = 0;
          uStack_440 = 0;
          local_43c = 0;
          uStack_78 = 0;
          local_dc = uVar2;
          local_a0 = (undefined1 *)&local_450;
          if (!bVar4) {
            local_60 = 0x28;
            local_58 = 0;
            local_70 = '\x01';
            uStack_48 = 0;
            local_a0 = (undefined1 *)&local_450;
            local_68 = (undefined1 *)&local_450;
            local_50 = local_80;
            FUN_0121b010(param_1 + 0x178,&local_68);
            if (local_70 != '\0') {
              local_70 = '\0';
            }
          }
          FUN_012a60a0(param_1 + 0x50,&local_a0);
          uVar1 = FUN_012a8a50(lVar5,&local_450,200,(uint)uVar7 & 1);
          bVar4 = true;
        }
      }
    }
code_r0x012a46a8:
    if (bVar4) goto LAB_012a4c58;
  }
  uVar1 = 0;
LAB_012a4c58:
  return uVar1 & 1;
}


