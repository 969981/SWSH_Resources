/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c88ef0; name: FUN_00c88ef0
 */


void FUN_00c88ef0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  long local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined8 local_120;
  long local_118;
  undefined4 local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  
  if (*(long *)(param_1 + 0x140) == 0) {
    return;
  }
  local_1a0 = 0;
  local_198 = 0xcbf29ce484222645;
  local_138 = 0;
  local_180 = 0;
  local_178 = 0xcbf29ce484222645;
  local_160 = 0;
  local_158 = 0xcbf29ce484222645;
  local_140 = 0;
  local_110 = 0;
  local_130 = 0xcbf29ce484222645;
  local_128 = &DAT_01d38550;
  local_108 = 0xcbf29ce484222645;
  local_100 = "";
  local_e8 = 0xcbf29ce484222645;
  pcStack_e0 = "";
  local_c8 = 0xcbf29ce484222645;
  local_c0 = "";
  local_a8 = 0xcbf29ce484222645;
  local_a0 = "";
  local_190 = &DAT_01d38550;
  local_188 = 0;
  local_170 = &DAT_01d38550;
  local_168 = 0;
  local_150 = &DAT_01d38550;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  local_64 = 0;
  local_6c = 0;
  local_74 = 0;
  local_7c = 0;
  local_84 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_1c0 = *(undefined8 *)(param_1 + 0x108);
  local_1b8 = *param_3;
  local_1b0 = param_3[1];
  local_1a8 = param_3[2];
  lVar5 = param_3[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_1a0 = lVar5;
  puVar1 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x2e);
  local_198 = *puVar1;
  local_190 = (undefined1 *)puVar1[1];
  local_188 = puVar1[2];
  lVar5 = puVar1[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_180 = lVar5;
  puVar1 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x30);
  local_178 = *puVar1;
  local_170 = (undefined1 *)puVar1[1];
  local_168 = puVar1[2];
  lVar5 = puVar1[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_160 = lVar5;
  puVar1 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x31);
  local_158 = *puVar1;
  local_150 = (undefined1 *)puVar1[1];
  local_148 = puVar1[2];
  lVar5 = puVar1[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_140 = lVar5;
  plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x18);
  if ((*(long *)(param_1 + 200) == *plVar2) ||
     (plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1a),
     *(long *)(param_1 + 200) == *plVar2)) {
    local_138 = 1;
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0x32;
  }
  else {
    plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x19);
    if ((*(long *)(param_1 + 200) != *plVar2) &&
       (plVar2 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1e),
       *(long *)(param_1 + 200) != *plVar2)) goto LAB_00c8918c;
    local_138 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0x33;
  }
  puVar1 = (undefined8 *)FUN_00c7cc60(uVar3,uVar4);
  local_130 = *puVar1;
  local_128 = (undefined1 *)puVar1[1];
  local_120 = puVar1[2];
  lVar5 = puVar1[3];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_118 = lVar5;
LAB_00c8918c:
  local_110 = 1;
  local_108 = 0xe0ddb5a39f4f0f56;
  local_100 = "Top/eye01_default/eye_blink/eye01_01_start";
  local_f8 = 0x2a;
  local_e8 = 0xf5d49fed78bf8347;
  pcStack_e0 = "Top/eye01_default/eye_blink/eye01_03";
  local_c8 = 0xf5d49eed78bf8194;
  local_d8 = 0x24;
  local_c0 = "Top/eye01_default/eye_blink/eye01_02";
  local_b8 = 0x24;
  local_a8 = 0x388201bad70705d3;
  local_a0 = "Top/eye01_default/eye_blink/eye01_01_end";
  local_98 = 0x28;
  FUN_00c77080(*(undefined8 *)(param_1 + 0x140),param_2,&local_1c0);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
    local_118 = 0;
  }
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  return;
}


