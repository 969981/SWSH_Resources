/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141b9f0; name: thunk_FUN_0168ae20
 */


void thunk_FUN_0168ae20(long *param_1)

{
  code *pcVar1;
  
  *param_1 = (long)(PTR_DAT_0272c938 + 0x10);
  pcVar1 = (code *)param_1[0x69];
  if (pcVar1 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar1)(param_1 + 0x6c);
  }
  if ((param_1[0x62] != 0) && (param_1[0x5f] != 0)) {
    (**(code **)(*(long *)(param_1[0x5f] + 0x48) + 0x18))();
    param_1[0x5f] = 0;
  }
  param_1[0x60] = -0x340d631b7bddd9bb;
  param_1[0x5f] = 0;
  param_1[0x61] = (long)&DAT_01d38550;
  param_1[0x62] = 0;
  if (param_1[99] != 0) {
    (**(code **)(*(long *)(param_1[99] + 0x48) + 0x18))();
    param_1[99] = 0;
  }
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_0168aef0(param_1 + 0x32);
  FUN_0168aef0(param_1 + 6);
  return;
}


