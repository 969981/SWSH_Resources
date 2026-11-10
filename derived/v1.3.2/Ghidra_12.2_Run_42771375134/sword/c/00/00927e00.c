/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927e00; name: FUN_00927e00
 */


undefined4
FUN_00927e00(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar3,3,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar3,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,param_4);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x3d,param_5);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x52);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x3d);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar2;
}


