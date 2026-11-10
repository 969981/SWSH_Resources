/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ddd0; name: FUN_0092ddd0
 */


bool FUN_0092ddd0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00927090(param_1,param_2,param_4);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db380(uVar4,2,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),3,param_3);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x60,uVar2 & 1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x50,0);
  FUN_008dae30(*(undefined8 *)(param_1 + 0x10),0x91);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x50);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar3 != 0;
}


