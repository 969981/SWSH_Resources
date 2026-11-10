/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ac00; name: FUN_0092ac00
 */


undefined4
FUN_0092ac00(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5,
            long param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_5 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_5 + 0x1c);
    uVar4 = *(undefined4 *)(param_5 + 0x10);
  }
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0093b420(param_6);
    uVar2 = uVar2 & 0xff;
  }
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,2,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x19,uVar3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1b,uVar4);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x25,0);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,uVar2);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      FUN_0093b2c0(param_6,uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar6,uVar5 + 6,uVar1);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < uVar2);
  }
  if (param_5 != 0) {
    FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)(param_5 + 0xe));
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),param_4);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x25);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar3;
}


