/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092d330; name: FUN_0092d330
 */


undefined4
FUN_0092d330(long param_1,long param_2,undefined8 param_3,undefined4 *param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_0093b420(param_5);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar5,3,uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar5,2,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x6f,*(uint *)(param_2 + 4) >> 1 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x71,*(uint *)(param_2 + 4) >> 3 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,iVar2);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      FUN_0093b2c0(param_5,iVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar5,iVar4 + 6,uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x43,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x13,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x26);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x43);
  iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x13);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    FUN_0093aef0(param_6,iVar2);
  }
  return uVar3;
}


