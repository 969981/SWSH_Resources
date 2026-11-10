/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00960170; name: FUN_00960170
 */


undefined8
FUN_00960170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  FUN_008e0b60(param_3);
  uVar3 = FUN_008e5ee0();
  uVar4 = FUN_0093db50();
  if (((uVar4 & 1) == 0) || (uVar4 = FUN_0093db80(uVar3), (uVar4 & 1) != 0)) {
    return 0;
  }
  uVar4 = FUN_008e0a10(param_2);
  if ((uVar4 & 1) == 0) {
    iVar2 = FUN_00880b40(*param_4);
    uVar6 = 1;
    if (iVar2 == 9) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 2;
  }
  uVar5 = FUN_009423b0(param_1);
  uVar1 = FUN_008e0a00(param_3);
  FUN_00939c20(uVar5,uVar1,uVar6);
  iVar2 = FUN_00880b40(*param_4);
  if (iVar2 == 9) {
    uVar5 = FUN_009423b0(param_1);
    FUN_00936020(uVar5,0x192);
  }
  uVar3 = FUN_0093db80(uVar3);
  return uVar3;
}


