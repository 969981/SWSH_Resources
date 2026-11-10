/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927830; name: FUN_00927830
 */


undefined4 FUN_00927830(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_008e29c0(param_2,param_3);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,2,uVar1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,uVar2 & 1);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x55);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
  uVar4 = 0x1800;
  if (iVar3 == 0) {
    uVar4 = 0x1000;
  }
  FUN_008db3f0(0x1000,*(undefined8 *)(param_1 + 0x10),0x4b,iVar3 != 0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x38,uVar4);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x56);
  uVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar4;
}


