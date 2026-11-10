/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00936f30; name: FUN_00936f30
 */


uint FUN_00936f30(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_0093c400(*(undefined8 *)(param_1 + 0x20),uVar1,param_3);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x31,uVar1 & 0xff,param_3 & 0xff);
  return uVar2 & 1;
}


