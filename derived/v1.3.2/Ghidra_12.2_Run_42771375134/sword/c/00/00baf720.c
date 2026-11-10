/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00baf720; name: FUN_00baf720
 */


void FUN_00baf720(long param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_f8;
  undefined2 local_f4 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  byte local_e0 [64];
  undefined4 local_a0 [16];
  char local_54 [4];
  
  uVar3 = 0xcbf29ce484222645;
  snprintf((char *)local_e0,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_pokename_00",param_3);
  if (local_e0[0] != 0) {
    pbVar2 = (byte *)((ulong)local_e0 | 1);
    do {
      uVar3 = (uVar3 ^ local_e0[0]) * 0x100000001b3;
      local_e0[0] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (local_e0[0] != 0);
  }
  FUN_00bae280(param_1,param_2,uVar3);
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4[0] = 0;
  local_f0 = 0;
  local_e8 = 0xffffffff;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_54[0] = '\0';
  local_a0[0] = 0;
  local_100 = param_2;
  FUN_015345e0(lVar4,param_2,&local_f8,local_f4,(ulong)&local_100 | 4,local_a0,local_54);
  local_e8 = local_a0[0];
  if (local_54[0] != '\0') {
    local_f0 = CONCAT44(2,(undefined4)local_f0);
  }
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  local_178 = (code *)0x0;
  FUN_0168c9c0(*(long *)(param_1 + 0x4c8) + (ulong)param_3 * 0x3e0,&local_100,1,&local_180);
  pcVar1 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar1)(&local_160);
  }
  param_1 = param_1 + 0x100;
  snprintf((char *)local_a0,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  FUN_00ffd3a0(param_1,local_a0);
  snprintf((char *)local_a0,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
  FUN_00ffcf80(param_1,local_a0);
  snprintf((char *)local_a0,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
  FUN_00ffd3a0(param_1,local_a0);
  return;
}


