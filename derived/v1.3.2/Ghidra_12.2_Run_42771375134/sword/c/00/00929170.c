/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00929170; name: FUN_00929170
 */


undefined4 FUN_00929170(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_00880b70(param_2);
  uVar1 = FUN_00880ae0(param_2);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar5,3,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x19,iVar3 + 7);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x11);
  uVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x19);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar4;
}


