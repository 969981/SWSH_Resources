/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092c270; name: FUN_0092c270
 */


undefined8 FUN_0092c270(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00880ed0(*param_2,0);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar6,3,uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar6,4,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x29,uVar1);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x69);
  cVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  uVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x29);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if ((cVar3 == '\0') && (uVar5 = FUN_008ebfa0(100), uVar5 < (uVar4 & 0xff))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


