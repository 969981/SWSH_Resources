/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bafc70; name: FUN_00bafc70
 */


void FUN_00bafc70(long param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte local_c0 [64];
  char acStack_80 [64];
  
  uVar2 = 0xcbf29ce484222645;
  snprintf((char *)local_c0,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_contents_00",param_3);
  if (local_c0[0] != 0) {
    pbVar1 = (byte *)((ulong)local_c0 | 1);
    do {
      uVar2 = (uVar2 ^ local_c0[0]) * 0x100000001b3;
      local_c0[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_c0[0] != 0);
  }
  FUN_00bae610(param_1,param_2,uVar2);
  param_1 = param_1 + 0x100;
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  FUN_00ffcf80(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  return;
}


