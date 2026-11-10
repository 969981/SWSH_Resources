/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a50c0; name: FUN_009a50c0
 */


void FUN_009a50c0(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  undefined8 local_28;
  
  uVar3 = FUN_00942380();
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_50,uVar3,uVar4);
  while (uVar5 = FUN_00943ae0(auStack_50,&local_28), (uVar5 & 1) != 0) {
    FUN_008e0a00(local_28);
    cVar1 = FUN_008f94e0();
    if (cVar1 == param_2) {
      cVar1 = FUN_00942730(param_1,local_28);
      if (cVar1 == -1) {
        uVar3 = FUN_009423b0(param_1);
        uVar2 = FUN_008e0a00(local_28);
        FUN_0093a0c0(uVar3,uVar2,1);
      }
    }
  }
  return;
}


