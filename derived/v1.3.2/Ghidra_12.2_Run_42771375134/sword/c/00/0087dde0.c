/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087dde0; name: FUN_0087dde0
 */


void FUN_0087dde0(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auStack_5c [28];
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 != param_2) {
    FUN_0086f8d0(*(undefined8 *)(param_1 + 0x98),param_2);
    FUN_00872100(*(undefined8 *)(param_1 + 0x98),param_3);
    uVar3 = FUN_0086b860(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_0086b9a0(*(undefined8 *)(param_1 + 0x98));
    uVar1 = 2;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar3 & 1;
    }
    uVar5 = FUN_00877590(param_2,param_3,uVar1);
    FUN_008724f0(*(undefined8 *)(param_1 + 0x98),uVar1 == 0);
    FUN_00872640(*(undefined8 *)(param_1 + 0x98),uVar1 == 1);
    FUN_00872790(*(undefined8 *)(param_1 + 0x98),uVar4 & 1);
    FUN_0086fff0(*(undefined8 *)(param_1 + 0x98),uVar5);
    uVar5 = FUN_0086b220(*(undefined8 *)(param_1 + 0x98));
    uVar5 = FUN_00877490(param_2,param_3,uVar5);
    FUN_00871fb0(*(undefined8 *)(param_1 + 0x98),uVar5);
    uVar7 = FUN_0086ae60(*(undefined8 *)(param_1 + 0x98));
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
      uVar6 = FUN_00869620(*(undefined8 *)(param_1 + 0x98));
      FUN_00864810(auStack_5c,uVar5,uVar6);
      FUN_00872cd0(*(undefined8 *)(param_1 + 0x98),auStack_5c);
      FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),0);
    }
    FUN_00879500(param_1,1);
  }
  return;
}


