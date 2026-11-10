/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936d60; name: FUN_00936d60
 */


undefined8 FUN_00936d60(long param_1,undefined1 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = FUN_0093c310(*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 0;
  FUN_008ed4b0(param_3,(long)&local_28 + 4,&local_28);
  FUN_00916b10(uVar2,0x30,param_2,local_28._4_4_,local_28 & 0xffffffff);
  return 1;
}


