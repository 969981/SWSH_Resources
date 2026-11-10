/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092c7d0; name: FUN_0092c7d0
 */


void FUN_0092c7d0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,uint param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar3,3,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),4,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x14,param_4[1]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x3d,param_5);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1b,param_4[4]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x35,param_6);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x4c,param_7 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x4d,param_8 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),99,*(undefined1 *)(param_4 + 5));
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x4e,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x61);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x62);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),99);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),100);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


