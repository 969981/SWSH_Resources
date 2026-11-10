/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ae20; name: FUN_0092ae20
 */


undefined4
FUN_0092ae20(long param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_0093b420(param_5);
  FUN_008db3f0(uVar5,5,uVar2);
  lVar3 = FUN_0093b2c0(param_5,0);
  if (lVar3 != 0) {
    iVar4 = 1;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar5,iVar4 + 5,uVar1);
      lVar3 = FUN_0093b2c0(param_5,iVar4);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_4);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x18,param_3);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x23,1);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x66);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x23);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar2;
}


