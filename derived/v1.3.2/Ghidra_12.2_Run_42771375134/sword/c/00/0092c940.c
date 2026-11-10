/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092c940; name: FUN_0092c940
 */


bool FUN_0092c940(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar5,3,uVar1);
  cVar2 = FUN_0093b430(param_4);
  uVar3 = FUN_0093b420(param_4);
  uVar3 = uVar3 & 0xff;
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,uVar3);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x47,1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x78,0);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      FUN_0093b2c0(param_4,uVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar5,uVar6 + 6,uVar1);
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < uVar3);
  }
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_2);
  if (cVar2 == '\0') {
    uVar5 = 200;
  }
  else {
    uVar5 = 199;
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),uVar5);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
  *(bool *)param_5 = iVar4 != 0;
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x78);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return iVar4 != 0;
}


