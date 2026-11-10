/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092bbd0; name: FUN_0092bbd0
 */


void FUN_0092bbd0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar2,3,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar2,4,uVar1);
  FUN_008db680(*(undefined8 *)(param_1 + 0x10),0x44,param_5);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1e,param_2);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x7d);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


