/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8e780; name: FUN_00c8e780
 */


void FUN_00c8e780(long param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined6 uStack_300;
  undefined2 local_2fa;
  undefined4 uStack_2f8;
  undefined1 uStack_2f4;
  undefined1 uStack_2f3;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  undefined1 local_2a0;
  undefined *local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined6 uStack_280;
  undefined2 local_27a;
  undefined6 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined *puStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined6 uStack_220;
  undefined2 local_21a;
  undefined6 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined *puStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined6 uStack_1c0;
  undefined2 local_1ba;
  undefined6 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined6 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined6 uStack_100;
  undefined2 local_fa;
  undefined6 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x20);
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar6;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x28);
  __dest = (void *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x50);
  memcpy(__dest,(void *)(param_2 + 0x2d8),0x90);
  *(undefined1 *)(param_1 + 0x5fa) = *(undefined1 *)(param_2 + 0x2c6);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined1 *)(param_1 + 0x600) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x601) = *(undefined1 *)(param_2 + 0x2cc);
  FUN_00c8ed90(param_1);
  if (*(char *)(param_1 + 0x601) == '\0') {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60), puVar2 == (undefined8 *)0x0)) {
      uVar4 = FUN_00c963b0(__dest,0);
    }
    else {
      puVar7 = puVar2 + -10;
      (**(code **)*puVar2)();
      uVar4 = FUN_00c953c0();
      if ((uVar4 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      uVar4 = FUN_00c963b0(__dest,puVar7);
    }
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 600);
      local_318 = (undefined *)((ulong)local_318 & 0xffffffffffffff00);
      FUN_00cc1c90(__dest,param_1 + 0x260,__dest,&local_318);
      plVar3 = (long *)FUN_00cbd3c0();
      if (lVar6 == *plVar3) {
        *(long *)(param_1 + 600) = lVar6;
      }
    }
  }
  FUN_00c8ee80(param_1,param_2);
  FUN_00c8f260(param_1);
  uStack_2f4 = 0;
  uStack_2f3 = 0;
  uStack_300 = 0;
  local_2fa = 0;
  local_2f0 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_318 = PTR_DAT_0271c280 + 0x10;
  local_2e8 = *(undefined8 *)PTR_DAT_02719748;
  local_2c8 = *(undefined8 *)PTR_DAT_0271c2f8;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2a0 = 1;
  uStack_278 = 0;
  local_270 = 0;
  local_290 = 0xf;
  local_288 = 0;
  uStack_280 = 0;
  local_27a = 0;
  local_298 = PTR_DAT_0271c288 + 0x10;
  local_248 = 6;
  local_240 = 0;
  uStack_218 = 0;
  local_230 = 0xf;
  local_1e8 = 6;
  local_228 = 0;
  uStack_220 = 0;
  local_21a = 0;
  local_210 = 0;
  local_1e0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0xf;
  local_188 = 6;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1ba = 0;
  local_1b0 = 0;
  local_180 = 0;
  uStack_158 = 0;
  local_170 = 0xf;
  local_128 = 6;
  local_120 = 0;
  local_108 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_15a = 0;
  local_150 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_fa = 0;
  local_f0 = 0;
  local_110 = 0xf;
  local_c8 = 6;
  local_c0 = 0;
  uStack_98 = 0;
  local_b0 = 0xf;
  local_54 = 0x101;
  uStack_a0 = 0;
  local_9a = 0;
  local_a8 = 0;
  local_90 = 0;
  local_68 = 6;
  local_60 = 0;
  local_58 = 0x1010101;
  local_310 = 0x10;
  local_308 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x2d0) == 3) {
    uStack_2f8 = 0xc;
    lVar6 = *(long *)(param_2 + 0x18);
  }
  else {
    uStack_2f8 = *(undefined4 *)(param_2 + 0x20);
    lVar6 = *(long *)(param_2 + 0x18);
  }
  local_2e0 = local_2e8;
  local_2d8 = local_2e8;
  uStack_2d0 = local_2e8;
  local_268 = local_2e8;
  uStack_260 = local_2e8;
  local_258 = local_2e8;
  uStack_250 = local_2e8;
  puStack_238 = local_298;
  uStack_208 = local_2e8;
  local_200 = local_2e8;
  uStack_1f8 = local_2e8;
  local_1f0 = local_2e8;
  puStack_1d8 = local_298;
  uStack_1a8 = local_2e8;
  local_1a0 = local_2e8;
  uStack_198 = local_2e8;
  local_190 = local_2e8;
  puStack_178 = local_298;
  uStack_148 = local_2e8;
  local_140 = local_2e8;
  uStack_138 = local_2e8;
  local_130 = local_2e8;
  local_118 = local_298;
  local_e8 = local_2e8;
  local_e0 = local_2e8;
  local_d8 = local_2e8;
  local_d0 = local_2e8;
  local_b8 = local_298;
  local_88 = local_2e8;
  local_80 = local_2e8;
  local_78 = local_2e8;
  local_70 = local_2e8;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar1 = CONCAT26(local_2fa,uStack_300);
  uStack_300 = (undefined6)lVar6;
  local_2fa = (undefined2)((ulong)lVar6 >> 0x30);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  uStack_2f4 = *(undefined1 *)(param_2 + 0x24);
  uStack_2f3 = *(undefined1 *)(param_2 + 0x25);
  local_2f0 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9);
  local_2e8 = *puVar2;
  uVar5 = 0xe;
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    uVar5 = 0xf;
  }
  puVar2 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),uVar5);
  local_2e0 = *puVar2;
  local_2c8 = *(undefined8 *)(param_2 + 0x50);
  lVar6 = *(long *)(param_2 + 0x58);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_2c0 != 0) {
    plVar3 = (long *)(local_2c0 + 0x48);
    local_2c0 = lVar6;
    (**(code **)(*plVar3 + 0x18))();
    lVar6 = local_2c0;
  }
  local_2c0 = lVar6;
  local_2b8 = *(undefined8 *)(param_2 + 0x60);
  local_2b0 = *(undefined8 *)(param_2 + 0x68);
  lVar6 = *(long *)(param_2 + 0x70);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_2a8 != 0) {
    plVar3 = (long *)(local_2a8 + 0x48);
    local_2a8 = lVar6;
    (**(code **)(*plVar3 + 0x18))();
    lVar6 = local_2a8;
  }
  local_2a8 = lVar6;
  local_2a0 = 0;
  local_58 = *(undefined4 *)(param_2 + 0x2c0);
  local_54 = *(undefined2 *)(param_2 + 0x2c4);
  FUN_00c8f420(param_3,&local_318);
  FUN_00c71750(&local_318);
  return;
}


