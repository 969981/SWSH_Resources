/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b6a0; name: FUN_0094b6a0
 */


uint FUN_0094b6a0(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_60 [32];
  undefined8 local_38;
  
  uVar5 = FUN_00942380();
  uVar6 = FUN_00942390(param_1);
  FUN_00943860(auStack_60,uVar5,uVar6);
  uVar7 = FUN_00943ae0(auStack_60,&local_38);
  uVar1 = 1;
  while ((uVar7 & 1) != 0) {
    FUN_00942380(param_1);
    uVar2 = FUN_008f98a0();
    FUN_008e0a00(local_38);
    uVar3 = FUN_008f94e0();
    uVar5 = FUN_00942380(param_1);
    uVar7 = FUN_008fafc0(uVar5,uVar2,uVar3);
    uVar4 = uVar1;
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_008e12a0(local_38,0x11);
      if (uVar4 <= uVar1) {
        uVar4 = uVar1;
      }
    }
    uVar7 = FUN_00943ae0(auStack_60,&local_38);
    uVar1 = uVar4;
  }
  return uVar1;
}


