/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964060; name: FUN_00964060
 */


undefined8 FUN_00964060(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00942380();
  uVar4 = FUN_008f8a90();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_009655e0(param_2);
  iVar1 = FUN_008e12a0(uVar5,0x11);
  iVar2 = FUN_008e4e80(uVar5,3);
  uVar6 = FUN_00942380(param_1);
  FUN_008f9d40(uVar6,iVar1 * (iVar2 + 1) * 100);
  uVar6 = FUN_009423b0(param_1);
  FUN_00936020(uVar6,0x8b);
  uVar6 = FUN_009423b0(param_1);
  uVar3 = FUN_008e0a00(uVar5);
  FUN_00937850(uVar6,uVar3,3);
  return 1;
}


