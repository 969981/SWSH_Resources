/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092a430; name: FUN_0092a430
 */


void FUN_0092a430(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_00943e70(param_11);
  uVar2 = FUN_008e0a00(param_4);
  uVar2 = FUN_00960550(param_5,uVar2);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar4,3,uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar4,4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_2 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x19,param_2[7]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1c,param_2[6]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x55,param_2[9] & 1);
  FUN_008db680(*(undefined8 *)(param_1 + 0x10),0x44,param_11);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x3d,uVar2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x47,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x75,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x76,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),param_6);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x47);
  *(bool *)param_7 = iVar3 != 0;
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
  *(bool *)param_8 = iVar3 != 0;
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x75);
  *(bool *)param_9 = iVar3 != 0;
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x76);
  *(bool *)param_10 = iVar3 != 0;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


