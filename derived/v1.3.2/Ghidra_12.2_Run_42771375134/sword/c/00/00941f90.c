/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941f90; name: FUN_00941f90
 */


void FUN_00941f90(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_00942390();
  uVar6 = FUN_0092faa0();
  uVar7 = FUN_009423b0(param_1);
  if ((uVar6 & 1) == 0) {
    FUN_00939780(uVar7,*param_3);
  }
  else {
    FUN_009395f0();
  }
  uVar7 = FUN_009425f0(param_1,*param_3);
  FUN_00914330(uVar7,param_3[2]);
  uVar4 = FUN_008e0a00();
  uVar7 = FUN_00942380(param_1);
  uVar8 = FUN_00942390(param_1);
  uVar9 = FUN_009423b0(param_1);
  FUN_0092f930(uVar7,uVar8,uVar9,1,uVar4,0,0);
  uVar7 = FUN_009423b0(param_1);
  uVar1 = param_3[2];
  uVar2 = param_3[1];
  uVar3 = *param_3;
  uVar8 = FUN_00942820(param_1,0);
  FUN_009374f0(uVar7,uVar3,uVar2,uVar1,uVar8);
  uVar7 = FUN_009425f0(param_1,*param_3);
  uVar7 = FUN_00914330(uVar7,param_3[1]);
  uVar4 = FUN_008e0a00();
  uVar8 = FUN_009423b0(param_1);
  uVar9 = FUN_009423e0(param_1);
  FUN_0092fa00(uVar8,uVar9,uVar7);
  uVar8 = FUN_009423b0(param_1);
  uVar5 = FUN_008e0a00(uVar7);
  FUN_0093a780(uVar8,uVar5);
  uVar8 = FUN_009423b0(param_1);
  uVar5 = FUN_008e0a00(uVar7);
  FUN_0093aac0(uVar8,uVar5);
  uVar8 = FUN_00942380(param_1);
  FUN_008f90a0(uVar8,uVar7);
  FUN_009423f0(param_1);
  uVar8 = FUN_00943000();
  FUN_00942230(uVar8,uVar4);
  uVar8 = FUN_009423b0(param_1);
  FUN_00938a30(uVar8,uVar7);
  *param_2 = (char)uVar4;
  return;
}


