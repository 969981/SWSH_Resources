/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937450; name: FUN_00937450
 */


void FUN_00937450(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  FUN_008e2d10(param_2);
  uVar2 = FUN_00888fc0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00916b10(uVar3,0x97,uVar1,uVar2 & 1);
  return;
}


