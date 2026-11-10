/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5dff0; name: FUN_00e5dff0
 */


void FUN_00e5dff0(long param_1)

{
  long lVar1;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xa90) != 1) {
    lVar1 = FUN_00e612f0();
    *(long *)(param_1 + 0xb88) = lVar1;
    if (lVar1 != -0x340d631b7bddd9bb) {
      if ((*(int *)(param_1 + 0xa90) != 3) && (*(int *)(param_1 + 0xa90) != 0)) {
        FUN_00dc07c0(param_1,param_1 + 0xb88,0xffffffff);
        return;
      }
      local_28 = 0x402411f7cbed6382;
      FUN_00dc07c0(param_1,&local_28,0xffffffff);
      local_28 = 0xe0fcbcaf7f595f4f;
      FUN_00dc07c0(param_1,&local_28,0xffffffff);
      local_28 = 0x821ef5e2f5e350dc;
      FUN_00dc07c0(param_1,&local_28,0xffffffff);
      local_28 = 0x5946a818d544daf9;
      FUN_00dc07c0(param_1,&local_28,0xffffffff);
    }
  }
  return;
}


