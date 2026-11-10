/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bae870; name: FUN_00bae870
 */


void FUN_00bae870(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int param4;
  uint uVar2;
  char acStack_a0 [64];
  
  uVar2 = 0;
  param4 = 0;
  param_1 = param_1 + 0x100;
  do {
    while( true ) {
      uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & 3;
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_default",param_3,
               param4);
      if (uVar1 == 0) break;
      FUN_00ffd3a0();
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_blue",param_3,
               param4);
      if (uVar1 != 1) goto LAB_00bae950;
      FUN_00ffcf80(param_1,acStack_a0);
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_red",param_3,
               param4);
LAB_00bae99c:
      FUN_00ffd3a0(param_1,acStack_a0);
      param4 = param4 + 1;
      uVar2 = uVar2 + 2;
      if (param4 == 6) {
        return;
      }
    }
    FUN_00ffcf80(param_1,acStack_a0);
    snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_blue",param_3,param4
            );
LAB_00bae950:
    FUN_00ffd3a0(param_1,acStack_a0);
    snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_red",param_3,param4)
    ;
    if (uVar1 != 2) goto LAB_00bae99c;
    FUN_00ffcf80(param_1,acStack_a0);
    param4 = param4 + 1;
    uVar2 = uVar2 + 2;
    if (param4 == 6) {
      return;
    }
  } while( true );
}


