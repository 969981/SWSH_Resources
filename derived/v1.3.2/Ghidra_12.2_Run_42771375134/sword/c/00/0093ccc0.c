/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ccc0; name: FUN_0093ccc0
 */


void FUN_0093ccc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined1 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_008e3350(uVar1,1,param_3);
  FUN_008e3350(uVar1,2,param_4);
  FUN_008e3350(uVar1,3,param_5);
  FUN_008e3350(uVar1,4,param_6);
  FUN_008e3350(uVar1,5,param_7);
  FUN_008e3350(uVar1,6,param_8);
  FUN_008e3350(uVar1,7,param_9);
  FUN_008e37c0(uVar1,param_10);
  return;
}


