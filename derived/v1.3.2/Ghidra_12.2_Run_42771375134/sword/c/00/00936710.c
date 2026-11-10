/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936710; name: FUN_00936710
 */


void FUN_00936710(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008f94e0();
  FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0xf3,uVar1,uVar2,0xffff0000);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xaf,uVar1,0);
  return;
}


