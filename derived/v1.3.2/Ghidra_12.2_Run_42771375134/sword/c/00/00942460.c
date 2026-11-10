/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00942460; name: FUN_00942460
 */


undefined8 FUN_00942460(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xff) == 5) {
    return 0x1f;
  }
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  FUN_008df770(uVar1,param_2);
  uVar1 = FUN_008e0a00();
  return uVar1;
}


