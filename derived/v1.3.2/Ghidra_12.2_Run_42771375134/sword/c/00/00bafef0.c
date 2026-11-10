/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bafef0; name: FUN_00bafef0
 */


void FUN_00bafef0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong uVar3;
  byte local_c0 [64];
  char acStack_80 [64];
  
  uVar3 = 0xcbf29ce484222645;
  snprintf((char *)local_c0,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_contents_00",param_3);
  if (local_c0[0] != 0) {
    pbVar2 = (byte *)((ulong)local_c0 | 1);
    do {
      uVar3 = (uVar3 ^ local_c0[0]) * 0x100000001b3;
      local_c0[0] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (local_c0[0] != 0);
  }
  if (param_2 == 1) {
    uVar1 = 0x7ca1fab1f86779d5;
  }
  else if (param_2 == 2) {
    uVar1 = 0x7ca1f9b1f8677822;
  }
  else {
    uVar1 = 0x78b6ad00ae91a654;
  }
  FUN_00bae160(param_1,0,uVar1,uVar3);
  param_1 = param_1 + 0x100;
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  FUN_00ffcf80(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  return;
}


