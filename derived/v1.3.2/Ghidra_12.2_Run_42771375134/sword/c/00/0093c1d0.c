/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093c1d0; name: FUN_0093c1d0
 */


void FUN_0093c1d0(long param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined8 uVar1;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
  local_30 = param_7;
  local_2e = param_8;
  local_2c = param_6;
  local_28 = param_5;
  local_27 = param_3;
  local_26 = param_4;
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_008e4cc0(uVar1,&local_30);
  return;
}


