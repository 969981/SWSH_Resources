/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d1a50; name: FUN_008d1a50
 */


void FUN_008d1a50(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_328;
  char *pcStack_320;
  undefined8 local_318;
  long local_310;
  long local_308;
  undefined8 local_300;
  undefined1 *local_2f8;
  long local_2f0;
  long local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined *local_2c8;
  undefined4 local_2c0;
  char *local_2b8;
  char *pcStack_2b0;
  char *local_2a8;
  char *pcStack_2a0;
  char *local_298;
  char *pcStack_290;
  char *local_288;
  long local_280;
  undefined8 local_278;
  undefined1 *local_270;
  long local_268;
  long local_260;
  undefined4 local_258;
  long local_250;
  undefined8 local_248;
  undefined1 *local_240;
  long local_238;
  long local_230;
  undefined4 local_228;
  long local_220;
  undefined8 local_218;
  undefined1 *local_210;
  long local_208;
  long local_200;
  undefined4 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  long local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined4 local_198;
  long local_190;
  undefined8 local_188;
  undefined1 *local_180;
  long local_178;
  long local_170;
  undefined4 local_168;
  long local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  long local_148;
  long local_140;
  undefined4 local_138;
  long local_130;
  undefined8 local_128;
  undefined1 *local_120;
  long local_118;
  long local_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  local_2d8 = 6;
  uStack_2d4 = 6;
  local_258 = 0;
  local_280 = 0;
  local_278 = 0xcbf29ce484222645;
  local_270 = &DAT_01d38550;
  local_268 = 0;
  local_260 = 0;
  local_250 = 0;
  local_248 = 0xcbf29ce484222645;
  local_240 = &DAT_01d38550;
  local_238 = 0;
  local_228 = 0;
  local_230 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_168 = 0;
  local_170 = 0;
  local_138 = 0;
  local_140 = 0;
  local_130 = 0;
  local_128 = 0xcbf29ce484222645;
  local_120 = &DAT_01d38550;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_f8 = 0xcbf29ce484222645;
  local_f0 = &DAT_01d38550;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0xcbf29ce484222645;
  local_c0 = &DAT_01d38550;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_2d0 = 4;
  uStack_2cc = 4;
  local_220 = 0;
  local_218 = 0xcbf29ce484222645;
  local_210 = &DAT_01d38550;
  local_208 = 0;
  local_1f0 = 0;
  local_1e8 = 0xcbf29ce484222645;
  local_1e0 = &DAT_01d38550;
  local_1d8 = 0;
  local_1c0 = 0;
  local_1b8 = 0xcbf29ce484222645;
  local_1b0 = &DAT_01d38550;
  local_1a8 = 0;
  local_190 = 0;
  local_188 = 0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  local_160 = 0;
  uStack_158 = 0xcbf29ce484222645;
  local_150 = &DAT_01d38550;
  local_148 = 0;
  local_2c8 = PTR_PTR_02717b80;
  local_2c0 = 4;
  local_2b8 = "bin/pml/personal";
  pcStack_2b0 = "bin/pml/waza";
  local_2a8 = "bin/pml/waza_oboe";
  pcStack_2a0 = "bin/pml/grow_table";
  local_298 = "bin/pml/tamagowaza";
  pcStack_290 = "bin/pml/evolution";
  local_288 = "bin/pml/item";
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,0);
  if ((local_268 != 0) && (local_280 != 0)) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
  }
  local_280 = 0;
  local_278 = 0xcbf29ce484222645;
  local_270 = &DAT_01d38550;
  local_268 = 0;
  if (local_260 != 0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x18))();
  }
  local_260 = local_2e8;
  local_278 = local_300;
  local_270 = local_2f8;
  local_2e8 = 0;
  local_268 = local_2f0;
  local_258 = local_2e0;
  if (local_2f0 == 0) {
    local_280 = local_308;
  }
  else {
    if (local_280 != 0) {
      (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
    }
    local_280 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,0);
  if ((local_238 != 0) && (local_250 != 0)) {
    (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
  }
  local_250 = 0;
  local_248 = 0xcbf29ce484222645;
  local_240 = &DAT_01d38550;
  local_238 = 0;
  if (local_230 != 0) {
    (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
  }
  local_230 = local_2e8;
  local_248 = local_300;
  local_240 = local_2f8;
  local_2e8 = 0;
  local_238 = local_2f0;
  local_228 = local_2e0;
  if (local_2f0 == 0) {
    local_250 = local_308;
  }
  else {
    if (local_250 != 0) {
      (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
    }
    local_250 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,2);
  if ((local_208 != 0) && (local_220 != 0)) {
    (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
  }
  local_220 = 0;
  local_218 = 0xcbf29ce484222645;
  local_210 = &DAT_01d38550;
  local_208 = 0;
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
  }
  local_200 = local_2e8;
  local_218 = local_300;
  local_210 = local_2f8;
  local_2e8 = 0;
  local_208 = local_2f0;
  local_1f8 = local_2e0;
  if (local_2f0 == 0) {
    local_220 = local_308;
  }
  else {
    if (local_220 != 0) {
      (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
    }
    local_220 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,3);
  if ((local_1d8 != 0) && (local_1f0 != 0)) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
  }
  local_1f0 = 0;
  local_1e8 = 0xcbf29ce484222645;
  local_1e0 = &DAT_01d38550;
  local_1d8 = 0;
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
  }
  local_1d0 = local_2e8;
  local_1e8 = local_300;
  local_1e0 = local_2f8;
  local_2e8 = 0;
  local_1d8 = local_2f0;
  local_1c8 = local_2e0;
  if (local_2f0 == 0) {
    local_1f0 = local_308;
  }
  else {
    if (local_1f0 != 0) {
      (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    }
    local_1f0 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,4);
  if ((local_1a8 != 0) && (local_1c0 != 0)) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
  }
  local_1c0 = 0;
  local_1b8 = 0xcbf29ce484222645;
  local_1b0 = &DAT_01d38550;
  local_1a8 = 0;
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = local_2e8;
  local_1b8 = local_300;
  local_1b0 = local_2f8;
  local_2e8 = 0;
  local_1a8 = local_2f0;
  local_198 = local_2e0;
  if (local_2f0 == 0) {
    local_1c0 = local_308;
  }
  else {
    if (local_1c0 != 0) {
      (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    }
    local_1c0 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,5);
  if ((local_178 != 0) && (local_190 != 0)) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  local_190 = 0;
  local_188 = 0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  local_170 = local_2e8;
  local_188 = local_300;
  local_180 = local_2f8;
  local_2e8 = 0;
  local_178 = local_2f0;
  local_168 = local_2e0;
  if (local_2f0 == 0) {
    local_190 = local_308;
  }
  else {
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    }
    local_190 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,6);
  if ((local_118 != 0) && (local_130 != 0)) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
  }
  local_130 = 0;
  local_128 = 0xcbf29ce484222645;
  local_120 = &DAT_01d38550;
  local_118 = 0;
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  local_128 = local_300;
  local_118 = local_2f0;
  local_110 = local_2e8;
  local_120 = local_2f8;
  local_2e8 = 0;
  local_108 = local_2e0;
  if (local_2f0 == 0) {
    local_130 = local_308;
  }
  else {
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    }
    local_130 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,7);
  if ((local_e8 != 0) && (local_100 != 0)) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
  local_100 = 0;
  local_f8 = 0xcbf29ce484222645;
  local_f0 = &DAT_01d38550;
  local_e8 = 0;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_f8 = local_300;
  local_e8 = local_2f0;
  local_e0 = local_2e8;
  local_f0 = local_2f8;
  local_2e8 = 0;
  local_d8 = local_2e0;
  if (local_2f0 == 0) {
    local_100 = local_308;
  }
  else {
    if (local_100 != 0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    }
    local_100 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,8);
  if ((local_b8 != 0) && (local_d0 != 0)) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  local_d0 = 0;
  local_c8 = 0xcbf29ce484222645;
  local_c0 = &DAT_01d38550;
  local_b8 = 0;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_c8 = local_300;
  local_b8 = local_2f0;
  local_b0 = local_2e8;
  local_c0 = local_2f8;
  local_2e8 = 0;
  local_a8 = local_2e0;
  if (local_2f0 == 0) {
    local_d0 = local_308;
  }
  else {
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
    local_d0 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
  }
  local_318 = 0x13;
  local_310 = 0;
  local_328 = 0xcbdc15e3ceed118e;
  pcStack_320 = "common/monsname.dat";
  FUN_014bfd20(&local_308,&local_328,9);
  if ((local_88 != 0) && (local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = 0;
  local_98 = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_98 = local_300;
  local_88 = local_2f0;
  local_80 = local_2e8;
  local_90 = local_2f8;
  local_2e8 = 0;
  local_78 = local_2e0;
  if (local_2f0 == 0) {
    local_a0 = local_308;
  }
  else {
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    }
    local_a0 = local_308;
  }
  local_308 = 0;
  local_300 = 0xcbf29ce484222645;
  local_2f8 = &DAT_01d38550;
  local_2f0 = 0;
  if (local_2e8 != 0) {
    (**(code **)(*(long *)(local_2e8 + 0x48) + 0x18))();
  }
  local_2e8 = 0;
  local_2e0 = 0;
  if (local_310 != 0) {
    (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
    local_310 = 0;
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    plVar1 = (long *)(local_68 + 0x48);
    local_68 = lVar2;
    (**(code **)(*plVar1 + 0x18))();
    lVar2 = local_68;
  }
  local_68 = lVar2;
  local_60 = FUN_008d3750();
  local_5f = FUN_008d4270();
  local_58 = PTR_LAB_02717b88;
  local_50 = PTR_LAB_02717b90;
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_02717b78 + 0x28);
  FUN_00865230(*(undefined8 *)(param_1 + 0x98),&local_2d8);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if ((local_88 != 0) && (local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = 0;
  local_98 = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = 0;
  if ((local_b8 != 0) && (local_d0 != 0)) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  local_d0 = 0;
  local_c8 = 0xcbf29ce484222645;
  local_c0 = &DAT_01d38550;
  local_b8 = 0;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  local_a8 = 0;
  if ((local_e8 != 0) && (local_100 != 0)) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
  local_100 = 0;
  local_f8 = 0xcbf29ce484222645;
  local_f0 = &DAT_01d38550;
  local_e8 = 0;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = 0;
  local_d8 = 0;
  if ((local_118 != 0) && (local_130 != 0)) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
  }
  local_130 = 0;
  local_128 = 0xcbf29ce484222645;
  local_120 = &DAT_01d38550;
  local_118 = 0;
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  local_110 = 0;
  local_108 = 0;
  if ((local_148 != 0) && (local_160 != 0)) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
  }
  local_160 = 0;
  uStack_158 = 0xcbf29ce484222645;
  local_150 = &DAT_01d38550;
  local_148 = 0;
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_178 != 0) && (local_190 != 0)) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  local_190 = 0;
  local_188 = 0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  local_170 = 0;
  local_168 = 0;
  if ((local_1a8 != 0) && (local_1c0 != 0)) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
  }
  local_1c0 = 0;
  local_1b8 = 0xcbf29ce484222645;
  local_1b0 = &DAT_01d38550;
  local_1a8 = 0;
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = 0;
  local_198 = 0;
  if ((local_1d8 != 0) && (local_1f0 != 0)) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
  }
  local_1f0 = 0;
  local_1e8 = 0xcbf29ce484222645;
  local_1e0 = &DAT_01d38550;
  local_1d8 = 0;
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
  }
  local_1d0 = 0;
  local_1c8 = 0;
  if ((local_208 != 0) && (local_220 != 0)) {
    (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
  }
  local_220 = 0;
  local_218 = 0xcbf29ce484222645;
  local_210 = &DAT_01d38550;
  local_208 = 0;
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
  }
  local_200 = 0;
  local_1f8 = 0;
  if ((local_238 != 0) && (local_250 != 0)) {
    (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
  }
  local_250 = 0;
  local_248 = 0xcbf29ce484222645;
  local_240 = &DAT_01d38550;
  local_238 = 0;
  if (local_230 != 0) {
    (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
  }
  local_230 = 0;
  local_228 = 0;
  if ((local_268 != 0) && (local_280 != 0)) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
  }
  local_280 = 0;
  local_278 = 0xcbf29ce484222645;
  local_270 = &DAT_01d38550;
  local_268 = 0;
  if (local_260 != 0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x18))();
  }
  return;
}


