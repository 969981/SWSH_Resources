/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a47f60; name: FUN_00a47f60
 */


void FUN_00a47f60(long *param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_268 [24];
  long local_250;
  long local_248;
  undefined1 local_240;
  long local_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined4 local_1ec;
  undefined *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined4 local_19c;
  undefined *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  undefined1 local_176;
  undefined4 local_174;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined4 local_124;
  long local_120;
  undefined5 uStack_118;
  undefined3 local_113;
  undefined5 uStack_110;
  long local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  long local_f0;
  undefined5 uStack_e8;
  undefined3 local_e3;
  undefined5 uStack_e0;
  long local_d8;
  undefined5 uStack_d0;
  undefined3 local_cb;
  undefined5 uStack_c8;
  long local_c0;
  undefined5 uStack_b8;
  undefined3 local_b3;
  undefined5 uStack_b0;
  long local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_8a;
  undefined8 local_82;
  undefined8 local_7a;
  undefined8 local_72;
  undefined2 local_6a;
  long local_68;
  
  lVar3 = *param_1;
  uStack_110 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_113 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_fb = 0;
  uStack_e0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e3 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_cb = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b3 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_9b = 0;
  local_72 = 0;
  local_7a = 0;
  local_82 = 0;
  local_8a = 0;
  local_210 = PTR_DAT_02718ea0 + 0x10;
  local_6a = 0;
  local_1ec = 0;
  local_1ee = 0;
  local_1f0 = 0;
  local_1c4 = 0;
  local_1c6 = 0;
  local_1c8 = 0;
  local_19c = 0;
  local_19e = 0;
  local_1a0 = 0;
  local_174 = 0;
  local_176 = 0;
  local_178 = 0;
  local_14c = 0;
  local_14e = 0;
  local_150 = 0;
  local_124 = 0;
  local_126 = 0;
  local_128 = 0;
  local_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1e8 = local_210;
  local_1c0 = local_210;
  local_198 = local_210;
  local_170 = local_210;
  local_148 = local_210;
  FUN_00a48300(lVar3,&local_120,&local_210,param_1[1],param_3,param_4 & 1);
  FUN_01042330(*(long *)(lVar3 + 0x5d8) + (long)param_2 * 0x1a0,5,&local_120);
  local_218 = 0;
  local_228 = 0;
  local_220 = 0;
  local_248 = param_1[1];
  local_240 = (undefined1)param_3;
  local_238 = param_1[2];
  local_230 = FUN_00a48810(param_2);
  FUN_006cf0a0(auStack_268,&DAT_0262eeb8);
  uVar2 = FUN_00ff93c0(lVar3);
  FUN_00ff8620(&local_68,uVar2,auStack_268,10);
  lVar5 = *(long *)(local_68 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  local_228 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_250 != 0) {
    (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
    local_250 = 0;
  }
  local_220 = 0x726a5378426bd71f;
  local_218 = 0;
  FUN_00a0a600(&local_248);
  lVar5 = 0;
  plVar7 = (long *)(lVar3 + (long)(param_2 * 6) * 0x10 + 0x680);
  ppuVar4 = &local_210;
  do {
    lVar6 = *(long *)(lVar3 + 0x5f8) + (long)(param_2 * 6) * 0xd8 + lVar5;
    if (ppuVar4[1] == (undefined *)0x0) {
      FUN_00a12a40(lVar6);
      lVar6 = *plVar7;
      bVar1 = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    else {
      FUN_00a127a0(lVar6,ppuVar4);
      FUN_00a12a20(lVar6);
      lVar6 = *(long *)(param_1[2] + 0x430);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      bVar1 = FUN_016a6c90(lVar6,ppuVar4[1],plVar7[1],0,0);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      lVar6 = *plVar7;
      bVar1 = *(byte *)(lVar6 + 0x58) & 0xfe | bVar1 & 1;
    }
    lVar5 = lVar5 + 0xd8;
    ppuVar4 = ppuVar4 + 5;
    plVar7 = plVar7 + 2;
    *(byte *)(lVar6 + 0x58) = bVar1;
  } while (lVar5 != 0x510);
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
  }
  return;
}


