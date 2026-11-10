/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aaa10; name: FUN_009aaa10
 */


void FUN_009aaa10(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_00942390(param_1);
  FUN_00943860(auStack_48,uVar2,uVar3);
  uVar4 = FUN_00943ae0(auStack_48,&local_28);
  while ((uVar4 & 1) != 0) {
    uVar1 = FUN_008e0a00(local_28);
    FUN_009423f0(param_1);
    uVar2 = FUN_00943000();
    FUN_00942230(uVar2,uVar1);
    uVar4 = FUN_00943ae0(auStack_48,&local_28);
  }
  return;
}


