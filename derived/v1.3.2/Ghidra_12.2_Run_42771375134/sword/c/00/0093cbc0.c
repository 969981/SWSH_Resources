/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093cbc0; name: FUN_0093cbc0
 */


void FUN_0093cbc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_008e4bf0(uVar1,param_3,param_4,param_5 & 1,param_6,param_7);
  return;
}


