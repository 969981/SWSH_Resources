/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094bd70; name: FUN_0094bd70
 */


void FUN_0094bd70(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  int local_58;
  int iStack_54;
  
  *param_2 = 0;
  uVar4 = FUN_009424e0(param_1,*param_3);
  uVar5 = FUN_009424e0(param_1,param_3[1]);
  uVar6 = FUN_008e50f0(uVar4);
  if (((((uVar6 & 1) == 0) && (uVar6 = FUN_008e50f0(uVar5), (uVar6 & 1) == 0)) &&
      (uVar6 = FUN_008e2ec0(uVar4), (uVar6 & 1) == 0)) &&
     ((uVar6 = FUN_008e0a10(uVar4), (uVar6 & 1) == 0 ||
      (uVar6 = FUN_008e58d0(uVar5), (uVar6 & 1) != 0)))) {
    iVar1 = FUN_008e12a0(uVar4,0x12);
    uVar6 = FUN_008e5110(uVar4,uVar5);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_009423e0(param_1);
      FUN_009288e0(uVar7,uVar4);
      if (param_3[2] != '\0') {
        uVar7 = FUN_009423b0(param_1);
        FUN_00938920(uVar7,uVar4);
      }
      uVar7 = FUN_009423b0(param_1);
      uVar2 = FUN_008e0a00(uVar4);
      uVar3 = FUN_008e0a00(uVar5);
      FUN_0093a1b0(uVar7,uVar2,uVar3);
      uVar2 = FUN_008e0a00(uVar4);
      uVar3 = FUN_008e0a00(uVar5);
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a660(uVar5,uVar2);
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a6f0(uVar5,uVar2);
      uVar5 = FUN_009423b0(param_1);
      uVar7 = FUN_009423e0(param_1);
      FUN_0092fa00(uVar5,uVar7,uVar4);
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a190(uVar5,uVar2,uVar3);
      uVar5 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar5,param_3 + 4);
      if (param_3[2] != '\0') {
        uVar5 = FUN_009423b0(param_1);
        FUN_009389e0(uVar5,uVar4);
      }
      iStack_54 = FUN_008e12a0(uVar4,0x13);
      if (iVar1 != iStack_54) {
        local_60 = uVar4;
        FUN_00942450(param_1);
        uVar5 = FUN_00925030();
        FUN_00949bb0(uVar5,auStack_68,&local_60);
        local_60 = uVar4;
        local_58 = iVar1;
        FUN_00942450(param_1);
        uVar4 = FUN_00925040();
        FUN_00949a40(uVar4,auStack_68,&local_60);
      }
      *param_2 = 1;
    }
  }
  return;
}


