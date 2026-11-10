/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ee60; name: FUN_0092ee60
 */


undefined4 FUN_0092ee60(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar3,2,uVar1);
  FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x38,0x1000,0x19a,0x20000);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x9a);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar2;
}


