/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009285d0; name: FUN_009285d0
 */


void FUN_009285d0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00880ba0(*param_5);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar5,3,uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar5,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_5);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1b,param_5[4]);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x2e,uVar2);
  FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x38,0x1000,0x19a,0x20000);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),param_2);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x2e);
  uVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  FUN_008ec010(uVar3,uVar4);
  return;
}


