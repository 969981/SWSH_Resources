/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093c230; name: FUN_0093c230
 */


void FUN_0093c230(long param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_008df3b0(uVar3,param_2 & 0xff);
  if ((param_3 & 0xff) != (param_4 & 0xff)) {
    FUN_00914350(uVar3,param_3,param_4);
  }
  uVar3 = FUN_00914310(uVar3,param_3);
  FUN_008e3d70(uVar3,param_5);
  FUN_008e45d0(uVar3);
  uVar1 = FUN_008f79e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar4 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_008e0a00(uVar3);
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  FUN_009138f0(uVar4,uVar5,uVar1,uVar2,uVar3);
  return;
}


