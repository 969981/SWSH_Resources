/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093be40; name: FUN_0093be40
 */


void FUN_0093be40(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_008e37e0(uVar1,param_3);
  uVar2 = FUN_008e1600(uVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_008e15b0(uVar1,param_4,param_5);
  return;
}


