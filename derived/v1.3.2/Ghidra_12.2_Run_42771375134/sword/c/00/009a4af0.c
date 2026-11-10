/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4af0; name: FUN_009a4af0
 */


void FUN_009a4af0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  FUN_00942390();
  uVar3 = FUN_00931a20();
  FUN_009336d0(uVar3,param_2);
  uVar4 = FUN_00933820();
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar3 = FUN_00942380(param_1);
  uVar1 = FUN_008f8cb0(uVar3,param_2);
  if ((uVar1 & 0xff) != 0) {
    uVar7 = 0;
    do {
      uVar3 = FUN_00942380(param_1);
      uVar2 = FUN_008f93d0(uVar3,param_2,uVar7);
      lVar5 = FUN_009424b0(param_1,uVar2);
      if ((lVar5 != 0) && (uVar4 = FUN_008e0a10(), (uVar4 & 1) != 0)) {
        uVar3 = FUN_009423b0(param_1);
        FUN_00939f80(uVar3,param_2);
        return;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xff) < (uVar1 & 0xff));
  }
  uVar3 = FUN_009423b0();
  uVar4 = FUN_00939f30(uVar3,param_2);
  if ((uVar4 & 1) != 0) {
    FUN_00942390(param_1);
    uVar3 = FUN_00931a20();
    FUN_009336d0(uVar3,param_2);
    uVar2 = FUN_00933960();
    uVar3 = FUN_00942380(param_1);
    uVar6 = FUN_00942390(param_1);
    uVar4 = FUN_009a3a00(uVar3,uVar6,uVar2);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_009423b0(param_1);
      FUN_00939fc0(uVar3,uVar2,1);
      return;
    }
  }
  return;
}


