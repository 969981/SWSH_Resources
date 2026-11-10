/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a0f40; name: FUN_009a0f40
 */


void FUN_009a0f40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  FUN_00943e60(auStack_58);
  uVar1 = FUN_009423e0(param_1);
  uVar2 = FUN_0092d1d0(uVar1,param_2,param_3,param_4,auStack_58);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00942400(param_1);
    uVar3 = FUN_009423c0(param_1);
    FUN_0095eb50(uVar3,uVar1);
  }
  else {
    uVar1 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar1,auStack_58);
  }
  return;
}


