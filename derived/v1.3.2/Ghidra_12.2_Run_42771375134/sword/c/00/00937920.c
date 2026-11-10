/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937920; name: FUN_00937920
 */


void FUN_00937920(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_008e0a00(param_2);
  FUN_0093c040(*(undefined8 *)(param_1 + 0x20),uVar1,param_3);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x25,uVar1 & 0xff,param_3 & 0xffff);
  return;
}


