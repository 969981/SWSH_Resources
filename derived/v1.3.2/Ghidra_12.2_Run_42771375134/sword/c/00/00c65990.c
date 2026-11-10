/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c65990; name: FUN_00c65990
 */


void FUN_00c65990(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
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
  
  pcVar2 = (code *)PTR_FUN_0271c168;
  if (param_3 == 0) {
    return;
  }
  local_160 = 0x8000;
  uStack_158 = 0x8000;
  local_150 = 0x8000;
  uStack_148 = 0x8000;
  local_c0 = PTR_LAB_0271c160;
  local_b8 = (code *)PTR_FUN_0271c168;
  local_b0 = PTR_LAB_0271c170;
  local_a8 = PTR_LAB_0271c178;
  local_130 = PTR_LAB_0271c170;
  puStack_128 = PTR_LAB_0271c178;
  local_140 = PTR_LAB_0271c160;
  local_138 = (code *)PTR_FUN_0271c168;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0x1ee8) + 0x10))
            ((long *)(param_1 + 0x1ee8),&local_140,param_2,&local_160);
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    puStack_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
    pcVar2 = local_b8;
    if (local_b8 == (code *)0x0) goto LAB_00c65a5c;
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar2)(local_a0);
LAB_00c65a5c:
  pcVar2 = (code *)PTR_FUN_0271c188;
  local_160 = 0x17f8000;
  uStack_158 = 0x17f8000;
  local_150 = 0x17f8000;
  uStack_148 = 0x17f8000;
  local_c0 = PTR_LAB_0271c180;
  local_b8 = (code *)PTR_FUN_0271c188;
  local_b0 = PTR_LAB_0271c190;
  local_a8 = PTR_LAB_0271c198;
  local_130 = PTR_LAB_0271c190;
  puStack_128 = PTR_LAB_0271c198;
  local_140 = PTR_LAB_0271c180;
  local_138 = (code *)PTR_FUN_0271c188;
  local_120[0] = param_3;
  local_a0[0] = param_3;
  (**(code **)(*(long *)(param_1 + 0x1fc0) + 0x10))(param_1 + 0x1fc0,&local_140,param_2,&local_160);
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


