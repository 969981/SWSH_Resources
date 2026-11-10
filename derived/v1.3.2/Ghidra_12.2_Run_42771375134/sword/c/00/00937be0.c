/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937be0; name: FUN_00937be0
 */


void FUN_00937be0(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  
  local_38 = FUN_008e1aa0(param_2,6);
  uVar2 = FUN_008ed480(&local_38);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8d,uVar1);
  FUN_00937a20(param_1,param_2,-param_3,2,uVar2,1);
  FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x5e,uVar1,0xffff0000);
  return;
}


