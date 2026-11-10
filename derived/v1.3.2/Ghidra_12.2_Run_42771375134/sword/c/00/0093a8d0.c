/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093a8d0; name: FUN_0093a8d0
 */


void FUN_0093a8d0(long param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  FUN_0093d880(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  local_38 = 0;
  FUN_008ed4b0(param_4,(long)&local_38 + 4,&local_38);
  FUN_00916b10(uVar1,0x79,param_2,param_3,local_38._4_4_,local_38 & 0xffffffff);
  return;
}


