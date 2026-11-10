/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c9f10; name: FUN_014c9f10
 */


void FUN_014c9f10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  undefined8 uStack_178;
  undefined1 *local_170;
  long local_168;
  long local_160;
  undefined4 local_158;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [104];
  undefined8 local_38;
  
  uVar4 = *(undefined8 *)PTR_DAT_02710890;
  local_1a0 = 0xb059dd7e20c2c317;
  local_198 = "script/place_name.dat";
  local_190 = 0x15;
  local_188 = 0;
  local_38 = param_3;
  FUN_014bfd20(&local_180,&local_1a0,10);
  FUN_014cd600(&local_150,uVar4,&local_180);
  if ((local_168 != 0) && (local_180 != 0)) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  local_180 = 0;
  uStack_178 = 0xcbf29ce484222645;
  local_170 = &DAT_01d38550;
  local_168 = 0;
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
  }
  local_160 = 0;
  local_158 = 0;
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  if (local_148 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_006e7220(local_148,&local_38);
  }
  FUN_014c9d80(param_1,param_2,uVar3);
  local_150 = PTR_DAT_02710ad8 + 0x10;
  if (local_148 == 0) {
    local_148 = 0;
    pcVar1 = local_b8;
  }
  else {
    FUN_006e2100(local_148,&local_150);
    lVar2 = local_148;
    local_148 = 0;
    pcVar1 = local_b8;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      pcVar1 = local_b8;
    }
  }
  local_b8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar1)(auStack_120);
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
  }
  return;
}


