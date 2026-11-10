/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092cf40; name: FUN_0092cf40
 */


undefined4 FUN_0092cf40(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_008e1650(param_2);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,2,uVar2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x11,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xf);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x11);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar3;
}


