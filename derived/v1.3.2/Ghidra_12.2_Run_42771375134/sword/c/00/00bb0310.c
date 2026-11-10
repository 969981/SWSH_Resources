/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb0310; name: FUN_00bb0310
 */


void FUN_00bb0310(long param_1,uint param_2,uint param_3,int param_4)

{
  char *__format;
  char acStack_70 [64];
  
  if (2 < param_2) {
    return;
  }
  param_1 = param_1 + 0x100;
  snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  if (param_2 == 0) {
    FUN_00ffcf80(param_1,acStack_70);
    snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
LAB_00bb03b8:
    FUN_00ffd3a0(param_1,acStack_70);
    snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
    if (param_2 != 2) goto LAB_00bb04b8;
    FUN_00ffcf80(param_1,acStack_70);
    snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_marking_default",param_3);
    if (param_4 == 0) {
      FUN_00ffcf80(param_1,acStack_70);
      snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_marking_blue",param_3);
    }
    else {
      FUN_00ffd3a0();
      snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_marking_blue",param_3);
      if (param_4 == 1) {
        FUN_00ffcf80(param_1,acStack_70);
        __format = "anime_L_btn_search_sub_%02d_marking_red";
        goto LAB_00bb044c;
      }
    }
    FUN_00ffd3a0(param_1,acStack_70);
    snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_marking_red",param_3);
    if (param_4 == 2) {
      FUN_00ffcf80(param_1,acStack_70);
      return;
    }
  }
  else {
    FUN_00ffd3a0();
    snprintf(acStack_70,0x40,"anime_L_btn_search_sub_%02d_pokemon",param_3);
    if (param_2 != 1) goto LAB_00bb03b8;
    FUN_00ffcf80(param_1,acStack_70);
    __format = "anime_L_btn_search_sub_%02d_marking";
LAB_00bb044c:
    snprintf(acStack_70,0x40,__format,(ulong)param_3);
  }
LAB_00bb04b8:
  FUN_00ffd3a0(param_1,acStack_70);
  return;
}


