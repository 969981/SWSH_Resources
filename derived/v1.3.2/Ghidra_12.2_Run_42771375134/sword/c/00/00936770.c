/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936770; name: FUN_00936770
 */


void FUN_00936770(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00917e70(uVar2,0xbb,0x120,uVar1,0xffff0000);
  return;
}


