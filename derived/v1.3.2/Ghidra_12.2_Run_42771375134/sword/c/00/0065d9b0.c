/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065d9b0; name: FUN_0065d9b0
 */


void FUN_0065d9b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *local_208;
  ulong local_200;
  ulong local_1f8;
  ulong uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  ulong local_b4;
  undefined4 local_ac;
  long *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,2,1);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_62 = 0;
    local_64 = 0;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_208 = &local_178;
    local_200 = 4;
    local_1f8 = 4;
    local_118 = 0;
    local_110 = 0x100000004;
    local_100 = &local_208;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"BlackTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,2,2);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_178 = CONCAT44(local_178._4_4_,0xffffffff);
    local_208 = &local_178;
    local_62 = 0;
    local_64 = 0;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_200 = 4;
    local_1f8 = 4;
    local_100 = &local_208;
    local_118 = 0;
    local_110 = 0x100000004;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"WhiteTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,2,3);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_178 = CONCAT44(local_178._4_4_,0x80808080);
    local_208 = &local_178;
    local_62 = 0;
    local_64 = 0;
    local_200 = 4;
    local_1f8 = 4;
    local_118 = 0;
    local_110 = 0x100000004;
    local_100 = &local_208;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"GreyTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,2,4);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_178 = CONCAT44(local_178._4_4_,0xffff8080);
    local_208 = &local_178;
    local_62 = 0;
    local_64 = 0;
    local_200 = 4;
    local_1f8 = 4;
    local_118 = 0;
    local_110 = 0x100000004;
    local_100 = &local_208;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"FlatNormalTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,*(undefined8 *)(param_1 + 8),4,5);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_208 = &local_178;
    local_1d8 = &local_170;
    local_1a8 = &uStack_168;
    uStack_1f0 = (ulong)local_208 | 4;
    local_200 = 4;
    local_62 = 0;
    local_64 = 0;
    local_118 = 0;
    local_178 = 0;
    local_198 = 4;
    uStack_194 = 0;
    local_180 = 4;
    uStack_1d0 = 4;
    lStack_1c0 = (long)&local_170 + 4;
    local_190 = (long)&uStack_168 + 4;
    uStack_188 = 4;
    local_110 = 0x600000018;
    uStack_1a0 = 4;
    local_100 = &local_208;
    local_170 = 0;
    uStack_168 = 0;
    local_1f8 = 4;
    local_1e8 = 4;
    uStack_1e0 = 4;
    local_1c8 = 4;
    local_1b8 = 4;
    uStack_1b0 = 4;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"BlackCubeTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,4,6);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_70 = 0xffffffff;
    local_78 = 0xffffffff00000000;
    local_6c = 0xffffffff;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_178 = 0xffffffffffffffff;
    local_62 = 0;
    local_64 = 0;
    local_118 = 0;
    local_198 = 4;
    uStack_194 = 0;
    local_180 = 4;
    local_170 = 0xffffffffffffffff;
    uStack_168 = 0xffffffffffffffff;
    local_208 = &local_178;
    local_1d8 = &local_170;
    local_1a8 = &uStack_168;
    uStack_1f0 = (ulong)local_208 | 4;
    local_200 = 4;
    uStack_1d0 = 4;
    lStack_1c0 = (long)&local_170 + 4;
    local_190 = (long)&uStack_168 + 4;
    uStack_188 = 4;
    local_110 = 0x600000018;
    uStack_1a0 = 4;
    local_100 = &local_208;
    local_1f8 = 4;
    local_1e8 = 4;
    uStack_1e0 = 4;
    local_1c8 = 4;
    local_1b8 = 4;
    uStack_1b0 = 4;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"WhiteCubeTexture");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,2,7);
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)FUN_005f4440(0x200,0x200,8,0);
    puVar5 = (ulong *)(**(code **)(*plVar4 + 0x88))(plVar4,0,0);
    local_160 = 0x3d;
    uStack_158 = 0;
    local_150 = 0x20000000200;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar3 = FUN_005bc6f0();
    }
    else {
      uVar3 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar3;
    local_d4 = (undefined4)((ulong)uVar3 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_62 = 0;
    local_64 = 0;
    local_118 = 0;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_208 = (undefined8 *)*puVar5;
    local_200 = puVar5[1];
    local_100 = &local_208;
    local_1f8 = (ulong)*(uint *)((long)puVar5 + 0x1c);
    local_110 = CONCAT44(1,(int)local_200);
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"PerlinNoiseTexture");
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((local_b4 & 0x100000000) == 0) {
      if ((CONCAT44(local_cc,uStack_d0) != 0) &&
         (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,CONCAT44(local_cc,uStack_d0),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uStack_d0 = 0;
      local_cc = 0;
    }
  }
  plVar1 = (long *)FUN_0065d770(param_1,uVar6,5,8);
  if (plVar1 != (long *)0x0) {
    local_160 = 0x1c;
    uStack_158 = 0;
    local_150 = 0x100000001;
    local_f8 = 0;
    uStack_f0 = 0;
    local_148 = 0x100000000;
    local_120 = 0;
    local_110 = 0;
    local_ac = 0;
    local_140 = 1;
    uStack_138 = 0;
    local_130 = 0x800000001;
    uStack_128 = 0;
    local_e8 = 0x3f800000;
    local_108 = 0;
    local_100 = (undefined8 **)0x0;
    local_b4 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    local_d4 = 0;
    uStack_d0 = 0;
    local_dc = 0;
    uStack_d8 = 0;
    local_e4 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      uVar6 = FUN_005bc6f0();
    }
    else {
      uVar6 = FUN_005bc740();
    }
    uStack_d8 = (undefined4)uVar6;
    local_d4 = (undefined4)((ulong)uVar6 >> 0x20);
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      local_a8 = (long *)FUN_005bc6f0();
    }
    else {
      local_a8 = (long *)FUN_005bc740();
    }
    local_78 = 0xffffffff00000000;
    local_100 = &local_208;
    local_178 = local_178 & 0xffffffff00000000;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_62 = 0;
    local_64 = 0;
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_208 = &local_178;
    local_200 = 4;
    local_1f8 = 4;
    local_118 = 0;
    local_110 = 0x100000004;
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_160);
    (**(code **)(*plVar1 + 0x168))(plVar1,"BlackTextureArray");
    if ((local_80 & 1) == 0) {
      if ((local_a0 != 0) && (local_a8 != (long *)0x0)) {
        (**(code **)(*local_a8 + 0x48))
                  (local_a8,local_a0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      local_a0 = 0;
    }
    if ((((local_b4 & 0x100000000) == 0) && (CONCAT44(local_cc,uStack_d0) != 0)) &&
       (plVar1 = (long *)CONCAT44(local_d4,uStack_d8), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,CONCAT44(local_cc,uStack_d0),"../../../../Include\\SiCore/SiCore_String.inl"
                 ,0xe1);
    }
  }
  return;
}


