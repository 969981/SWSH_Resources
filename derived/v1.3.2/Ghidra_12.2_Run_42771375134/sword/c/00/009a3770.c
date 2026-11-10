/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3770; name: FUN_009a3770
 */


void FUN_009a3770(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  long local_28;
  
  uVar3 = FUN_00942380();
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_50,uVar3,uVar4);
  do {
    uVar5 = FUN_00943ae0(auStack_50,&local_28);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar1 = FUN_008e0a00(param_2);
    uVar2 = FUN_008e0a00(local_28);
    uVar5 = FUN_009426e0(param_1,uVar1,uVar2);
  } while ((uVar5 & 1) != 0);
  if (local_28 != 0) {
    uVar3 = FUN_00942380(param_1);
    FUN_0094baf0(uVar3,param_2,local_28);
  }
  return;
}


