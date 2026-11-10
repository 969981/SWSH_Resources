/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3e50; name: FUN_009a3e50
 */


void FUN_009a3e50(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_00942620();
  if (iVar2 == 2) {
    uVar4 = FUN_009424b0(param_1,4);
    uVar5 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(uVar4);
    FUN_0093ab90(uVar5,uVar3,0);
  }
  iVar2 = FUN_00942620(param_1);
  if (iVar2 == 2) {
    uVar3 = FUN_00942460(param_1,4);
    uVar4 = FUN_009423b0(param_1);
    FUN_009399f0(uVar4,uVar3);
  }
  FUN_009a40d0(param_1);
  iVar2 = FUN_00942620(param_1);
  if (iVar2 == 2) {
    uVar4 = FUN_009424b0(param_1,4);
    FUN_008e0b60();
    FUN_008e5ee0();
    uVar6 = FUN_0093db90();
    if ((uVar6 & 1) != 0) {
      uVar5 = FUN_009423b0(param_1);
      FUN_00937790(uVar5,uVar4,5);
    }
  }
  FUN_009a41a0(param_1);
  FUN_009a4220(param_1);
  FUN_009a45a0(param_1);
  FUN_009a4650(param_1);
  FUN_009423d0(param_1);
  FUN_008dab50();
  FUN_009423e0(param_1);
  FUN_00929130();
  FUN_009a46f0(param_1);
  uVar4 = FUN_00942380(param_1);
  uVar5 = FUN_00942390(param_1);
  uVar7 = FUN_009423b0(param_1);
  FUN_0092f930(uVar4,uVar5,uVar7,7,0x1f,0,0);
  uVar6 = FUN_009a4760(param_1);
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00937300(uVar4,4,0,0x87);
    FUN_009423f0(param_1);
    uVar4 = FUN_00942fe0();
    FUN_00943280(uVar4,4);
  }
  FUN_00942390(param_1);
  FUN_00931a60();
  uVar6 = FUN_00934840();
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00937300(uVar4,4,0,0x87);
  }
  FUN_009423f0(param_1);
  FUN_00942fe0();
  uVar6 = FUN_009432a0();
  if ((uVar6 & 1) == 0) {
    iVar2 = FUN_00942820(param_1,0);
    FUN_00942380(param_1);
    bVar1 = FUN_008f8fa0();
    if ((bVar1 != 0) && ((uint)bVar1 <= iVar2 + 1U)) {
      FUN_009423f0(param_1);
      uVar4 = FUN_00942fe0();
      FUN_00943280(uVar4,7);
    }
  }
  uVar6 = FUN_009426f0(param_1);
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_00942380(param_1);
    uVar6 = FUN_008f35c0(uVar4,0x1000);
    if ((uVar6 & 1) != 0) {
      FUN_009a4820(param_1);
    }
  }
  uVar4 = FUN_009423b0(param_1);
  FUN_00938fb0(uVar4,0);
  FUN_009423f0(param_1);
  FUN_00942fa0();
  FUN_009423f0(param_1);
  FUN_00943030();
  FUN_009423f0(param_1);
  FUN_00942fc0();
  return;
}


