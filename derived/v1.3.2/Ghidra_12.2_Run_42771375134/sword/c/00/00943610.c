/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943610; name: FUN_00943610
 */


void FUN_00943610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_00942390(param_1);
  FUN_00943860(auStack_58,uVar2,uVar3);
  while (uVar4 = FUN_00943ae0(auStack_58,&local_38), (uVar4 & 1) != 0) {
    uVar1 = FUN_008e0a00(local_38);
    uVar4 = FUN_0093acc0(param_3,uVar1);
    if ((uVar4 & 1) != 0) {
      FUN_0093b0b0(param_2,local_38);
    }
  }
  return;
}


