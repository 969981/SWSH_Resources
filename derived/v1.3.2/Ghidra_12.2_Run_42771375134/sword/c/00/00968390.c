/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00968390; name: FUN_00968390
 */


undefined4 FUN_00968390(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 7) {
    uVar5 = FUN_00942380(param_1);
    uVar4 = FUN_008f8ca0(uVar5,*(undefined1 *)(param_2 + 0xb));
    FUN_00942390(param_1);
    uVar5 = FUN_00931a20();
    uVar5 = FUN_009336d0(uVar5,uVar4);
    uVar4 = FUN_00933900(uVar5,*(undefined1 *)(param_2 + 0xb));
  }
  else if (iVar1 == 5) {
    uVar4 = 7;
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_00946b90(param_2);
    uVar3 = FUN_008e0a00(*param_2);
    uVar4 = FUN_008e12a0(*param_2,0xc);
    uVar5 = FUN_009423b0(param_1);
    uVar6 = FUN_0093a550(uVar5,uVar3,uVar2,uVar4);
    uVar5 = FUN_009423e0(param_1);
    uVar4 = FUN_00929170(uVar5,uVar2,*param_2);
    if ((uVar6 & 1) != 0) {
      uVar5 = FUN_009423b0(param_1);
      FUN_0093a5c0(uVar5,uVar3,uVar2);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


