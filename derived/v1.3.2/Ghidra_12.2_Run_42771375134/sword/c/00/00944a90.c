/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944a90; name: FUN_00944a90
 */


void FUN_00944a90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined1 local_28;
  undefined1 local_27;
  
  uVar1 = FUN_008e0a00(*param_3);
  uVar3 = FUN_00942380(param_1);
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_60,uVar3,uVar4);
  uVar5 = FUN_00943ae0(auStack_60,&local_40);
  while ((uVar5 & 1) != 0) {
    uVar2 = FUN_008e0a00(local_40);
    uVar5 = FUN_009426e0(param_1,uVar1,uVar2);
    if ((uVar5 & 1) == 0) {
      local_28 = FUN_008e0a00(local_40);
      local_27 = 7;
      FUN_00942450(param_1);
      uVar3 = FUN_00925140();
      FUN_00944c20(uVar3,auStack_38,&local_28);
    }
    uVar5 = FUN_00943ae0(auStack_60,&local_40);
  }
  return;
}


