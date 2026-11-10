/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092e3e0; name: FUN_0092e3e0
 */


undefined4 FUN_0092e3e0(long param_1,undefined8 param_2,long param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_008e0a00(param_3);
  }
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,3,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),4,uVar1);
  FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x38,0x1000,0x19a,0x20000);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x23,param_4);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xb1);
  sVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x23);
  uVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  if (sVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_008ec030(sVar3,uVar5);
  }
  FUN_008db590(*(undefined8 *)(param_1 + 0x10),0x23,uVar4);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xb2);
  uVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x23);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar5;
}


