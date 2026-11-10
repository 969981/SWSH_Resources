/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947690; name: FUN_00947690
 */


void FUN_00947690(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [80];
  long local_28;
  
  FUN_0093b070(auStack_80);
  uVar2 = FUN_00942380(param_1);
  uVar3 = FUN_00942390(param_1);
  FUN_00943860(auStack_a0,uVar2,uVar3);
  uVar4 = FUN_00943ae0(auStack_a0,&local_28);
  while ((uVar4 & 1) != 0) {
    FUN_0093b0b0(auStack_80,local_28);
    uVar4 = FUN_00943ae0(auStack_a0,&local_28);
  }
  local_b0 = auStack_80;
  FUN_00942450(param_1);
  uVar2 = FUN_00925c10();
  FUN_00943cc0(uVar2,auStack_a8,&local_b0);
  FUN_0093b2e0(auStack_80);
  local_28 = FUN_0093b2f0(auStack_80);
  while (local_28 != 0) {
    uVar2 = FUN_009423e0(param_1);
    uVar1 = FUN_008e0a00(local_28);
    FUN_00928940(uVar2,uVar1);
    local_28 = FUN_0093b2f0(auStack_80);
  }
  return;
}


