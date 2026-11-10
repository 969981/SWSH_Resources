/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c65610; name: FUN_00c65610
 */


void FUN_00c65610(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
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
  
  pcVar2 = (code *)PTR_FUN_0271c0e0;
  if (param_3 == 0) {
    return;
  }
  local_180 = 0x8000;
  uStack_178 = 0x8000;
  local_170 = 0x8000;
  uStack_168 = 0x8000;
  local_160 = 0x8000;
  uStack_158 = 0x8000;
  local_150 = 0x8000;
  uStack_148 = 0x8000;
  local_c0 = PTR_LAB_0271c0f8;
  local_b8 = (code *)PTR_FUN_0271c0e0;
  local_b0 = PTR_LAB_0271c0e8;
  local_a8 = PTR_LAB_0271c0f0;
  local_130 = PTR_LAB_0271c0e8;
  puStack_128 = PTR_LAB_0271c0f0;
  local_140 = PTR_LAB_0271c0f8;
  local_138 = (code *)PTR_FUN_0271c0e0;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0xcd0) + 0x10))
            ((long *)(param_1 + 0xcd0),&local_140,param_2,&local_180);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    puStack_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
    pcVar2 = local_b8;
    if (local_b8 == (code *)0x0) goto LAB_00c656e0;
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar2)(local_a0);
LAB_00c656e0:
  pcVar2 = (code *)PTR_FUN_0271c100;
  local_180 = 0xbf8000;
  uStack_178 = 0xbf8000;
  local_170 = 0xbf8000;
  uStack_168 = 0xbf8000;
  local_160 = 0xbf8000;
  uStack_158 = 0xbf8000;
  local_150 = 0xbf8000;
  uStack_148 = 0xbf8000;
  local_c0 = PTR_LAB_0271c118;
  local_b8 = (code *)PTR_FUN_0271c100;
  local_b0 = PTR_LAB_0271c108;
  local_a8 = PTR_LAB_0271c110;
  local_130 = PTR_LAB_0271c108;
  puStack_128 = PTR_LAB_0271c110;
  local_140 = PTR_LAB_0271c118;
  local_138 = (code *)PTR_FUN_0271c100;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0xe68) + 0x10))(param_1 + 0xe68,&local_140,param_2,&local_180);
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


