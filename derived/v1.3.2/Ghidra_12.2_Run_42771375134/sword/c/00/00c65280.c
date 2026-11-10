/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c65280; name: FUN_00c65280
 */


void FUN_00c65280(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  code *local_138;
  undefined *local_130;
  undefined *puStack_128;
  int local_120 [24];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  int local_a0 [24];
  
  pcVar2 = (code *)PTR_FUN_0271c060;
  if (param_3 == 0) {
    return;
  }
  local_220 = 0x8000;
  uStack_218 = 0x8000;
  local_210 = 0x8000;
  uStack_208 = 0x8000;
  local_200 = 0x8000;
  uStack_1f8 = 0x8000;
  local_1f0 = 0x8000;
  uStack_1e8 = 0x8000;
  local_1e0 = 0x8000;
  uStack_1d8 = 0x8000;
  local_1d0 = 0x8000;
  uStack_1c8 = 0x8000;
  local_1c0 = 0x8000;
  uStack_1b8 = 0x8000;
  local_1b0 = 0x8000;
  uStack_1a8 = 0x8000;
  local_1a0 = 0x8000;
  uStack_198 = 0x8000;
  local_190 = 0x8000;
  uStack_188 = 0x8000;
  local_180 = 0x8000;
  uStack_178 = 0x8000;
  local_170 = 0x8000;
  uStack_168 = 0x8000;
  local_160 = 0x8000;
  uStack_158 = 0x8000;
  local_150 = 0x8000;
  uStack_148 = 0x8000;
  local_c0 = PTR_LAB_0271c078;
  local_b8 = (code *)PTR_FUN_0271c060;
  local_b0 = PTR_LAB_0271c068;
  local_a8 = PTR_LAB_0271c070;
  local_130 = PTR_LAB_0271c068;
  puStack_128 = PTR_LAB_0271c070;
  local_140 = PTR_LAB_0271c078;
  local_138 = (code *)PTR_FUN_0271c060;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0x1000) + 0x10))
            ((long *)(param_1 + 0x1000),&local_140,param_2,&local_220);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    puStack_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
    pcVar2 = local_b8;
    if (local_b8 == (code *)0x0) goto LAB_00c65374;
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar2)(local_a0);
LAB_00c65374:
  pcVar2 = (code *)PTR_FUN_0271c080;
  local_220 = 0xc78000;
  uStack_218 = 0xc78000;
  local_210 = 0xc78000;
  uStack_208 = 0xc78000;
  local_200 = 0xc78000;
  uStack_1f8 = 0xc78000;
  local_1f0 = 0xc78000;
  uStack_1e8 = 0xc78000;
  local_1e0 = 0xc78000;
  uStack_1d8 = 0xc78000;
  local_1d0 = 0xc78000;
  uStack_1c8 = 0xc78000;
  local_1c0 = 0xc78000;
  uStack_1b8 = 0xc78000;
  local_1b0 = 0xc78000;
  uStack_1a8 = 0xc78000;
  local_1a0 = 0xc78000;
  uStack_198 = 0xc78000;
  local_190 = 0xc78000;
  uStack_188 = 0xc78000;
  local_180 = 0xc78000;
  uStack_178 = 0xc78000;
  local_170 = 0xc78000;
  uStack_168 = 0xc78000;
  local_160 = 0xc78000;
  uStack_158 = 0xc78000;
  local_150 = 0xc78000;
  uStack_148 = 0xc78000;
  local_c0 = PTR_LAB_0271c098;
  local_b8 = (code *)PTR_FUN_0271c080;
  local_b0 = PTR_LAB_0271c088;
  local_a8 = PTR_LAB_0271c090;
  local_130 = PTR_LAB_0271c088;
  puStack_128 = PTR_LAB_0271c090;
  local_140 = PTR_LAB_0271c098;
  local_138 = (code *)PTR_FUN_0271c080;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0x1558) + 0x10))(param_1 + 0x1558,&local_140,param_2,&local_220);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    puStack_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
    pcVar2 = local_b8;
    if (local_b8 == (code *)0x0) {
      return;
    }
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar2)(local_a0);
  return;
}


