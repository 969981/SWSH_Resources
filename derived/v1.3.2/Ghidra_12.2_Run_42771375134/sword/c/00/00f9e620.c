/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9e620; name: FUN_00f9e620
 */


void FUN_00f9e620(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar4,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar4) {
      FUN_0175edc0(*param_1,lVar4,1);
    }
  }
  lVar4 = *param_1;
  uVar1 = *param_3;
  piVar2 = (int *)param_3[1];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[2];
  piVar2 = (int *)param_3[3];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[4];
  piVar2 = (int *)param_3[5];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[6];
  piVar2 = (int *)param_3[7];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[8];
  piVar2 = (int *)param_3[9];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[10];
  piVar2 = (int *)param_3[0xb];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[0xc];
  piVar2 = (int *)param_3[0xd];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[0xe];
  piVar2 = (int *)param_3[0xf];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[0x10];
  piVar2 = (int *)param_3[0x11];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,(long)*piVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  FUN_0175ef30(*param_1,0xfffffffe);
  return;
}


