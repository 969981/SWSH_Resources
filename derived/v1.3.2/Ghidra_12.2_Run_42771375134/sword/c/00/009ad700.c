/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad700; name: FUN_009ad700
 */


void FUN_009ad700(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [32];
  undefined8 local_28;
  
  iVar1 = FUN_00942620();
  if (iVar1 == 2) {
    uVar2 = FUN_009424b0(param_1,4);
    uVar3 = FUN_008e0a10();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_00942380(param_1);
      uVar5 = FUN_00942390(param_1);
      FUN_00943860(auStack_50,uVar4,uVar5);
      while (uVar3 = FUN_00943ae0(auStack_50,&local_28), (uVar3 & 1) != 0) {
        uVar3 = FUN_00942740(param_1,local_28);
        if ((uVar3 & 1) != 0) {
          uVar4 = FUN_00942380(param_1);
          FUN_0094ba30(uVar4,local_28,uVar2);
        }
      }
    }
  }
  return;
}


