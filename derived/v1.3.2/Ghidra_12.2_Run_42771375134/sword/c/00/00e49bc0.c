/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e49bc0; name: FUN_00e49bc0
 */


void FUN_00e49bc0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 local_4f0;
  char *local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  undefined *local_4d0;
  code *local_4c8;
  undefined *local_4c0;
  undefined *puStack_4b8;
  long local_4b0;
  undefined *local_4a8;
  undefined8 uStack_4a0;
  undefined *local_450;
  code *local_448;
  undefined *local_440;
  undefined *puStack_438;
  long local_430;
  undefined *local_428;
  undefined8 uStack_420;
  undefined8 local_3d0;
  char *local_3c8;
  undefined8 local_3c0;
  long local_3b8;
  undefined *local_3b0;
  code *local_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  long local_390;
  undefined *puStack_388;
  undefined8 local_380;
  undefined *local_330;
  code *local_328;
  undefined *local_320;
  undefined *puStack_318;
  long local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined *local_290;
  code *local_288;
  undefined *local_280;
  undefined *local_278;
  long local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined *local_210;
  code *local_208;
  undefined *local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  long local_178;
  undefined *local_170;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  
  lVar2 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x68) = 0;
  }
  *(long *)(lVar2 + 0x68) = lVar3;
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x70) = 0;
  }
  *(long *)(lVar2 + 0x70) = lVar3;
  *(undefined8 *)(lVar2 + 0x78) = param_4;
  local_190 = 0xb6831aece3360a75;
  local_188 = "Field/LeftFootIK";
  local_180 = 0x10;
  local_178 = 0;
  local_148 = PTR_LAB_0271f890;
  local_140 = 0;
  local_170 = PTR_LAB_0271f8c8;
  local_168 = (code *)PTR_FUN_0271f8b8;
  local_160 = PTR_LAB_0271f8c0;
  local_158 = PTR_LAB_0271f898;
  local_c8 = PTR_LAB_0271f8a0;
  local_2b0 = 0xf9528062100c4376;
  local_2a8 = "Field/RightFootIK";
  local_c0 = 0;
  local_f0 = PTR_LAB_0271f8c8;
  local_e8 = (code *)PTR_FUN_0271f8b8;
  local_e0 = PTR_LAB_0271f8c0;
  local_d8 = PTR_LAB_0271f898;
  local_2a0 = 0x11;
  local_298 = 0;
  local_268 = PTR_LAB_0271f8a8;
  local_260 = 0;
  local_290 = PTR_LAB_0271f8c8;
  local_288 = (code *)PTR_FUN_0271f8b8;
  local_280 = PTR_LAB_0271f8c0;
  local_278 = PTR_LAB_0271f898;
  local_1e8 = PTR_LAB_0271f8d0;
  local_3d0 = 0xb55fabc08a33398b;
  local_1e0 = 0;
  local_210 = PTR_LAB_0271f8c8;
  local_208 = (code *)PTR_FUN_0271f8b8;
  local_200 = PTR_LAB_0271f8c0;
  local_1f8 = PTR_LAB_0271f898;
  local_3b8 = 0;
  local_3c8 = "Field/WaistOffset";
  local_3c0 = 0x11;
  local_380 = 0;
  puStack_388 = PTR_LAB_0271f8b0;
  local_3b0 = PTR_LAB_0271f8c8;
  local_3a8 = (code *)PTR_FUN_0271f8b8;
  local_3a0 = PTR_LAB_0271f8c0;
  puStack_398 = PTR_LAB_0271f898;
  local_300 = 0;
  local_4d8 = 0;
  local_330 = PTR_LAB_0271f8c8;
  local_328 = (code *)PTR_FUN_0271f8b8;
  local_320 = PTR_LAB_0271f8c0;
  puStack_318 = PTR_LAB_0271f898;
  puStack_308 = PTR_LAB_0271f8d8;
  local_4f0 = 0x1899b7cd0951f972;
  local_4e8 = "Field/FactorLerp";
  local_4e0 = 0x10;
  local_4d0 = PTR_LAB_0271f8c8;
  local_4c8 = (code *)PTR_FUN_0271f8b8;
  local_4c0 = PTR_LAB_0271f8c0;
  puStack_4b8 = PTR_LAB_0271f898;
  local_4a8 = PTR_LAB_0271f8e0;
  uStack_4a0 = 0;
  local_428 = PTR_LAB_0271f8e8;
  uStack_420 = 0;
  local_450 = PTR_LAB_0271f8c8;
  local_448 = (code *)PTR_FUN_0271f8b8;
  local_440 = PTR_LAB_0271f8c0;
  puStack_438 = PTR_LAB_0271f898;
  local_4b0 = lVar2;
  local_430 = lVar2;
  local_390 = lVar2;
  local_310 = lVar2;
  local_270 = lVar2;
  local_1f0 = lVar2;
  local_150 = lVar2;
  local_d0 = lVar2;
  FUN_0069c2c0(param_2,&local_190,&local_170,&local_f0);
  FUN_0069c2c0(param_2,&local_2b0,&local_290,&local_210);
  FUN_0069c2c0(param_2,&local_3d0,&local_3b0,&local_330);
  FUN_0069c2c0(param_2,&local_4f0,&local_4d0,&local_450);
  pcVar1 = local_448;
  if (local_448 != (code *)0x0) {
    local_440 = (undefined *)0x0;
    puStack_438 = (undefined *)0x0;
    local_450 = (undefined *)0x0;
    local_448 = (code *)0x0;
    (*pcVar1)(&local_430);
  }
  pcVar1 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = (undefined *)0x0;
    puStack_4b8 = (undefined *)0x0;
    local_4d0 = (undefined *)0x0;
    local_4c8 = (code *)0x0;
    (*pcVar1)(&local_4b0);
  }
  if (local_4d8 != 0) {
    (**(code **)(*(long *)(local_4d8 + 0x48) + 0x18))();
    local_4d8 = 0;
  }
  pcVar1 = local_328;
  if (local_328 != (code *)0x0) {
    local_320 = (undefined *)0x0;
    puStack_318 = (undefined *)0x0;
    local_330 = (undefined *)0x0;
    local_328 = (code *)0x0;
    (*pcVar1)(&local_310);
  }
  pcVar1 = local_3a8;
  if (local_3a8 != (code *)0x0) {
    local_3a0 = (undefined *)0x0;
    puStack_398 = (undefined *)0x0;
    local_3b0 = (undefined *)0x0;
    local_3a8 = (code *)0x0;
    (*pcVar1)(&local_390);
  }
  if (local_3b8 != 0) {
    (**(code **)(*(long *)(local_3b8 + 0x48) + 0x18))();
    local_3b8 = 0;
  }
  pcVar1 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (undefined *)0x0;
    local_1f8 = (undefined *)0x0;
    local_210 = (undefined *)0x0;
    local_208 = (code *)0x0;
    (*pcVar1)(&local_1f0);
  }
  pcVar1 = local_288;
  if (local_288 != (code *)0x0) {
    local_280 = (undefined *)0x0;
    local_278 = (undefined *)0x0;
    local_290 = (undefined *)0x0;
    local_288 = (code *)0x0;
    (*pcVar1)(&local_270);
  }
  if (local_298 != 0) {
    (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
    local_298 = 0;
  }
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar1)(&local_d0);
  }
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined *)0x0;
    local_158 = (undefined *)0x0;
    local_170 = (undefined *)0x0;
    local_168 = (code *)0x0;
    (*pcVar1)(&local_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
  }
  return;
}


