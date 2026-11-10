/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092dcf0; name: FUN_0092dcf0
 */


bool FUN_0092dcf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00927090();
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,2,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x60,uVar2 & 1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x50,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x7b,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x90);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x50);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x7b);
  *(bool *)param_4 = iVar4 != 0;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar3 != 0;
}


