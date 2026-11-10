/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e10e00; name: FUN_00e10e00
 */


void FUN_00e10e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_2a0;
  long local_298;
  undefined *local_290;
  code *local_288;
  undefined8 local_280;
  code *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [80];
  undefined8 local_210;
  code *local_208;
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [96];
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  if (*(char *)(param_1 + 0x353) != '\0') {
    return;
  }
  local_d0 = *(undefined8 *)(param_1 + 0xf8);
  FUN_00e114a0(&local_2a0,"bin/archive/field/area/texture/",&local_d0,".gfpak");
  FUN_006cf0c0(auStack_c8,&local_2a0);
  local_e0 = *(undefined8 *)(param_1 + 0xf8);
  FUN_00e11590(&local_d8,"bin/archive/field/area/shader/",&local_e0,".gfpak");
  FUN_006cf0c0(auStack_a8,&local_d8);
  local_f0 = *(undefined8 *)(param_1 + 0xf8);
  FUN_00e11680(&local_e8,"bin/archive/field/area/other/",&local_f0,".gfpak");
  FUN_006cf0c0(auStack_88,&local_e8);
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  if (local_2a0 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
    local_2a0 = (undefined *)0x0;
  }
  puVar4 = PTR_DAT_0271e770;
  FUN_00d9fc00(*(undefined8 *)PTR_DAT_0271e770,10);
  FUN_00d9fc00(*(undefined8 *)puVar4,9);
  FUN_00d9fc00(*(undefined8 *)puVar4,0xb);
  puVar1 = PTR_DAT_0271e730 + 0x10;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  local_278 = (code *)0x0;
  local_298 = 0;
  local_290 = PTR_DAT_027194a8 + 0x10;
  local_288 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_2a0 = puVar1;
  FUN_01008430(&local_2a0,auStack_c8,param_3);
  FUN_00d9f180(*(undefined8 *)puVar4,&local_2a0,10);
  pcVar3 = local_168;
  local_2a0 = puVar1;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  local_290 = PTR_DAT_02710a48 + 0x10;
  if (local_288 == (code *)0x0) {
    local_288 = (code *)0x0;
  }
  else {
    FUN_006e2100(local_288,&local_290);
    pcVar3 = local_288;
    local_288 = (code *)0x0;
    if (pcVar3 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar3 + 0x48) + 0x18))();
    }
  }
  pcVar3 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar3)(auStack_1e0);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar3)(auStack_260);
  }
  if (local_288 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
  }
  puVar1 = PTR_DAT_0271e730 + 0x10;
  local_298 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_288 = (code *)0x0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  local_278 = (code *)0x0;
  local_290 = PTR_DAT_027194a8 + 0x10;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_2a0 = puVar1;
  FUN_01008430(&local_2a0,auStack_a8,param_2);
  puVar4 = PTR_DAT_0271e770;
  FUN_00d9f180(*(undefined8 *)PTR_DAT_0271e770,&local_2a0,9);
  pcVar3 = local_168;
  local_2a0 = puVar1;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  puVar1 = PTR_DAT_02710a48;
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  local_290 = puVar1 + 0x10;
  if (local_288 == (code *)0x0) {
    local_288 = (code *)0x0;
    pcVar3 = local_1f8;
  }
  else {
    FUN_006e2100(local_288,&local_290);
    pcVar5 = local_288;
    local_288 = (code *)0x0;
    pcVar3 = local_1f8;
    if (pcVar5 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
      pcVar3 = local_1f8;
    }
  }
  local_1f8 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar3)(auStack_1e0);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar3)(auStack_260);
  }
  if (local_288 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_0271e730 + 0x10;
  local_298 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_288 = (code *)0x0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  local_278 = (code *)0x0;
  local_290 = PTR_DAT_027194a8 + 0x10;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_2a0 = puVar2;
  FUN_01008430(&local_2a0,auStack_88,param_4);
  FUN_00d9f180(*(undefined8 *)puVar4,&local_2a0,0xb);
  pcVar3 = local_168;
  local_2a0 = puVar2;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  local_290 = puVar1 + 0x10;
  if (local_288 == (code *)0x0) {
    local_288 = (code *)0x0;
    pcVar3 = local_1f8;
  }
  else {
    FUN_006e2100(local_288,&local_290);
    pcVar5 = local_288;
    local_288 = (code *)0x0;
    pcVar3 = local_1f8;
    if (pcVar5 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar5 + 0x48) + 0x18))();
      pcVar3 = local_1f8;
    }
  }
  local_1f8 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar3)(auStack_1e0);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar3)(auStack_260);
  }
  if (local_288 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
    local_288 = (code *)0x0;
  }
  lVar6 = FUN_00da09e0(*(undefined8 *)puVar4,0xb);
  local_298 = *(long *)(lVar6 + 0x18);
  uVar7 = *(undefined8 *)PTR_DAT_0271e8d0;
  local_2a0 = puVar1 + 0x10;
  if (local_298 != 0) {
    (**(code **)(*(long *)(local_298 + 0x48) + 0x10))();
  }
  local_280 = 0;
  local_278 = (code *)0x0;
  local_290 = (undefined *)0x0;
  local_288 = (code *)0x0;
  if (*(code **)(lVar6 + 0x30) != (code *)0x0) {
    (**(code **)(lVar6 + 0x30))(lVar6 + 0x40,&local_270);
    local_290 = *(undefined **)(lVar6 + 0x20);
    local_288 = *(code **)(lVar6 + 0x28);
    local_280 = *(undefined8 *)(lVar6 + 0x30);
    local_278 = *(code **)(lVar6 + 0x38);
  }
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_210 = 0;
  local_208 = (code *)0x0;
  if (*(code **)(lVar6 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar6 + 0xb0))(lVar6 + 0xc0,&local_1f0);
    local_210 = *(undefined8 *)(lVar6 + 0xa0);
    local_208 = *(code **)(lVar6 + 0xa8);
    local_200 = *(undefined8 *)(lVar6 + 0xb0);
    local_1f8 = *(code **)(lVar6 + 0xb8);
  }
  local_2a0 = PTR_DAT_027194a8 + 0x10;
  FUN_00e11770(uVar7,&local_2a0,*(undefined4 *)(param_1 + 0x360));
  local_2a0 = puVar1 + 0x10;
  if (local_298 == 0) {
    local_298 = 0;
    pcVar3 = local_208;
  }
  else {
    FUN_006e2100(local_298,&local_2a0);
    lVar6 = local_298;
    local_298 = 0;
    pcVar3 = local_208;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      pcVar3 = local_208;
    }
  }
  local_208 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_200 = 0;
    local_1f8 = (code *)0x0;
    local_210 = 0;
    local_208 = (code *)0x0;
    (*pcVar3)(&local_1f0);
  }
  pcVar3 = local_288;
  if (local_288 != (code *)0x0) {
    local_280 = 0;
    local_278 = (code *)0x0;
    local_290 = (undefined *)0x0;
    local_288 = (code *)0x0;
    (*pcVar3)(&local_270);
  }
  if (local_298 != 0) {
    (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
    local_298 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  return;
}


