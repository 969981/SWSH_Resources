/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c646c0; name: FUN_00c646c0
 */


/* WARNING: Removing unreachable block (ram,0x00c64a70) */

void FUN_00c646c0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 auStack_4e0 [96];
  code *local_480;
  code *local_478;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [96];
  code *local_400;
  code *local_3f8;
  undefined1 *local_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [96];
  code *local_380;
  code *local_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [96];
  code *local_300;
  code *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined1 auStack_2e0 [96];
  code *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined1 auStack_260 [96];
  code *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 auStack_1e0 [96];
  code *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  code *local_58;
  
  puVar1 = PTR_DAT_027108e0;
  pcVar3 = *(code **)(*(long *)PTR_DAT_027108e0 + 0x48);
  local_100 = 0x7800;
  uStack_f8 = 0x7800;
  local_f0 = 0x7800;
  uStack_e8 = 0x7800;
  local_170 = &LAB_00c67520;
  local_e0 = 0x7800;
  uStack_d8 = 0x7800;
  local_1f0 = &LAB_00c67520;
  local_d0 = 0x7800;
  uStack_c8 = 0x7800;
  local_c0 = 0x7800;
  uStack_b8 = 0x7800;
  local_168 = &LAB_00c67530;
  local_178 = FUN_00c67510;
  local_1e8 = &LAB_00c67530;
  local_1f8 = FUN_00c67510;
  local_b0 = 0x7800;
  uStack_a8 = 0x7800;
  local_a0 = 0x7800;
  uStack_98 = 0x7800;
  local_90 = 0x7800;
  uStack_88 = 0x7800;
  local_80 = 0x7800;
  uStack_78 = 0x7800;
  local_70 = 0x7800;
  uStack_68 = 0x7800;
  local_180 = FUN_00c66e10;
  local_200 = FUN_00c66e10;
  if (*(char *)(param_1 + 0x2208) == '\0') {
    local_380 = (code *)&local_100;
    local_280 = pcVar3;
    FUN_00c66e10(auStack_1e0,&local_280,&local_380);
    FUN_00c5f4c0(param_1 + 0x2200);
    *(char *)(param_1 + 0x2208) = '\x01';
    pcVar2 = local_1f8;
    if (local_1f8 != (code *)0x0) goto LAB_00c64784;
  }
  else {
    pcVar2 = FUN_00c67510;
LAB_00c64784:
    local_1e8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    local_200 = (code *)0x0;
    (*pcVar2)(auStack_1e0);
  }
  local_280 = FUN_00c67540;
  local_278 = FUN_00c67c40;
  local_270 = &LAB_00c67c50;
  local_268 = &LAB_00c67c60;
  local_2e8 = &LAB_00c67c60;
  local_2f0 = &LAB_00c67c50;
  local_2f8 = FUN_00c67c40;
  local_300 = FUN_00c67540;
  if (*(char *)(param_1 + 0x25e0) == '\0') {
    local_480 = (code *)PTR_DAT_0271c050;
    local_380 = pcVar3;
    FUN_00c67540(auStack_2e0,&local_380,&local_480);
    FUN_00c5fef0(param_1 + 0x25d8);
    *(char *)(param_1 + 0x25e0) = '\x01';
    pcVar3 = local_2f8;
    if (local_2f8 != (code *)0x0) goto LAB_00c647f4;
  }
  else {
    pcVar3 = FUN_00c67c40;
LAB_00c647f4:
    local_2e8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    local_300 = (code *)0x0;
    (*pcVar3)(auStack_2e0);
  }
  pcVar3 = *(code **)(*(long *)puVar1 + 0x28);
  local_380 = FUN_00c67c70;
  local_378 = FUN_00c67d70;
  local_370 = &LAB_00c67d80;
  puStack_368 = &LAB_00c67d90;
  local_3f0 = &LAB_00c67d80;
  puStack_3e8 = &LAB_00c67d90;
  local_400 = FUN_00c67c70;
  local_3f8 = FUN_00c67d70;
  if (*(char *)(param_1 + 0x2cd0) == '\0') {
    local_58 = (code *)&local_100;
    local_480 = pcVar3;
    FUN_00c67c70(auStack_3e0,&local_480,&local_58);
    FUN_00c61230(param_1 + 0x2cc8);
    *(undefined1 *)(param_1 + 0x2cd0) = 1;
    pcVar2 = local_3f8;
    if (local_3f8 == (code *)0x0) goto LAB_00c6486c;
  }
  else {
    pcVar2 = FUN_00c67d70;
  }
  local_3f0 = (undefined1 *)0x0;
  puStack_3e8 = (undefined1 *)0x0;
  local_400 = (code *)0x0;
  local_3f8 = (code *)0x0;
  (*pcVar2)(auStack_3e0);
LAB_00c6486c:
  local_480 = FUN_00c67da0;
  local_478 = FUN_00c67ea0;
  local_470 = &LAB_00c67eb0;
  puStack_468 = &LAB_00c67ec0;
  if (*(char *)(param_1 + 0x30a8) == '\0') {
    local_60 = PTR_DAT_0271c050;
    local_58 = pcVar3;
    FUN_00c67da0(auStack_4e0,&local_58,&local_60);
    FUN_00c61c60(param_1 + 0x30a0);
    *(undefined1 *)(param_1 + 0x30a8) = 1;
  }
  FUN_00c67ea0(auStack_4e0);
  pcVar3 = local_478;
  if (local_478 != (code *)0x0) {
    local_470 = (undefined1 *)0x0;
    puStack_468 = (undefined1 *)0x0;
    local_480 = (code *)0x0;
    local_478 = (code *)0x0;
    (*pcVar3)(auStack_460);
  }
  pcVar3 = local_378;
  if (local_378 != (code *)0x0) {
    local_370 = (undefined1 *)0x0;
    puStack_368 = (undefined1 *)0x0;
    local_380 = (code *)0x0;
    local_378 = (code *)0x0;
    (*pcVar3)(auStack_360);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_268 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    local_280 = (code *)0x0;
    (*pcVar3)(auStack_260);
  }
  pcVar3 = local_178;
  if (local_178 != (code *)0x0) {
    local_168 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    local_180 = (code *)0x0;
    (*pcVar3)(auStack_160);
  }
  return;
}


