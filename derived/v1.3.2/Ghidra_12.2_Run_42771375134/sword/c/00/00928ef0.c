/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00928ef0; name: FUN_00928ef0
 */


bool FUN_00928ef0(long param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar3,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),3,param_3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x22,param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x23,param_5);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x68,param_6);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x74,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x79);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x74);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar2 != 0;
}


