/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092a290; name: FUN_0092a290
 */


void FUN_0092a290(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_0093b420(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar4,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),99,*(undefined1 *)(param_2 + 5));
  uVar2 = uVar2 & 0xff;
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,uVar2);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      FUN_0093b2c0(param_4,uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar4,uVar3 + 6,uVar1);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar2);
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x35);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


