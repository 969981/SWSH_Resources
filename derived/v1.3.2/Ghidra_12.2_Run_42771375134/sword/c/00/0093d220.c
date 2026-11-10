/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093d220; name: FUN_0093d220
 */


void FUN_0093d220(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_008deea0(uVar1,param_2);
  FUN_008e0b60();
  uVar2 = FUN_008e5ee0();
  FUN_0093dbd0(uVar2,0);
  FUN_0093db30(uVar2);
  FUN_008e4e00(uVar1,5,0);
  return;
}


