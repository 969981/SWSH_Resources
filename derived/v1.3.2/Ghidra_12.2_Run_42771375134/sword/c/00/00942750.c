/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00942750; name: FUN_00942750
 */


void FUN_00942750(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_0092f6b0(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}


