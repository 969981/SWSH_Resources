/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb0160; name: FUN_00bb0160
 */


void FUN_00bb0160(long param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_c0 [64];
  char acStack_80 [64];
  
  uVar4 = 0xcbf29ce484222645;
  snprintf((char *)local_c0,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_contents_00",param_3);
  uVar5 = 0xcbf29ce484222645;
  if (local_c0[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_c0 | 1);
    bVar1 = local_c0[0];
    do {
      uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if (param_2 == 0x2f) {
    uVar4 = 0x78b6ad00ae91a654;
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar4 = 0x4d3758727834b4;
    uVar2 = 1;
  }
  else {
    snprintf((char *)local_c0,0x40,"initial_%02d",param_2 + -1);
    if (local_c0[0] != 0) {
      pbVar3 = (byte *)((ulong)local_c0 | 1);
      do {
        uVar4 = (uVar4 ^ local_c0[0]) * 0x100000001b3;
        local_c0[0] = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (local_c0[0] != 0);
    }
    uVar2 = 1;
  }
  FUN_00bae160(param_1,uVar2,uVar4,uVar5);
  param_1 = param_1 + 0x100;
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  FUN_00ffcf80(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  snprintf(acStack_80,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
  FUN_00ffd3a0(param_1,acStack_80);
  return;
}


