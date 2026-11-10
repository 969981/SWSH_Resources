/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ce40; name: FUN_0092ce40
 */


bool FUN_0092ce40(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,2,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0xe,param_4);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x12,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0xd,5);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x1a);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x12);
  *param_5 = uVar2;
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0xd);
  *(undefined1 *)(param_5 + 1) = uVar1;
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar3 == 0;
}


