/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927150; name: FUN_00927150
 */


void FUN_00927150(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined2 *)(param_4 + 8);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,3,uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar4,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1b,param_4[4]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),99,*(undefined1 *)(param_4 + 5));
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x5d,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x5e,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x33,uVar2);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x47);
  FUN_008db500(*(undefined8 *)(param_1 + 0x10),0x34,0x1000,0x29,0x200000);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x48);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x33);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x34);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  FUN_008ec010(uVar2,uVar3);
  return;
}


