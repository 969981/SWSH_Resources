/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6b10; name: FUN_009a6b10
 */


undefined8 FUN_009a6b10(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_50 [8];
  undefined1 local_48 [8];
  
  *param_2 = 5;
  uVar5 = FUN_00942380();
  FUN_00942390(param_1);
  uVar6 = FUN_00931920();
  uVar2 = FUN_008e0a00(param_3);
  uVar2 = FUN_008f9470(uVar5,uVar6,uVar2);
  uVar3 = FUN_00942620(param_1);
  uVar4 = FUN_00942630(param_1);
  FUN_008ed700(auStack_50,7,uVar2);
  bVar1 = FUN_008ed730(auStack_50,uVar3,uVar4,local_48);
  if (bVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar5 = FUN_009424b0(param_1,local_48[uVar8]);
      uVar7 = FUN_008e1600();
      if ((uVar7 & 1) == 0) {
        *param_2 = local_48[uVar8];
        return uVar5;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < bVar1);
  }
  return uVar5;
}


