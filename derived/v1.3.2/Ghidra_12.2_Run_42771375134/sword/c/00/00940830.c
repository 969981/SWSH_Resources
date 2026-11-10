/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940830; name: FUN_00940830
 */


undefined8 FUN_00940830(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_008f8110(*param_1);
  if (((iVar2 == 2) || (iVar2 = FUN_008f3790(*param_1), iVar2 != 0)) ||
     (bVar1 = FUN_008f94e0(param_2), (bVar1 | 2) != 3)) {
    uVar5 = FUN_00931920(param_1[1]);
    uVar5 = FUN_008df3f0(uVar5,param_3);
    uVar3 = FUN_008e1290();
    uVar4 = FUN_008e2d10(uVar5);
    uVar6 = FUN_00940650(uVar3,uVar4);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_00931920(param_1[1]);
      uVar5 = FUN_008df3f0(uVar5,param_2);
      uVar7 = FUN_00931920(param_1[1]);
      uVar7 = FUN_008df3f0(uVar7,param_3);
      uVar3 = FUN_008e1290(uVar5);
      uVar4 = FUN_008e2d10(uVar7);
      uVar5 = FUN_00940650(uVar3,uVar4);
      return uVar5;
    }
  }
  return 1;
}


