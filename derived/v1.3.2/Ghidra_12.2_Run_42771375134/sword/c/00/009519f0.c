/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009519f0; name: FUN_009519f0
 */


void FUN_009519f0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009424e0();
  uVar2 = FUN_009423b0(param_1);
  if ((param_3 & 1) == 0) {
    FUN_00935bf0(uVar2,param_4);
    FUN_009423e0(param_1);
    FUN_0092e9f0();
    return;
  }
  FUN_00938920(uVar2,uVar1);
  uVar2 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar2,param_4);
  FUN_009423e0(param_1);
  FUN_0092e9f0();
  uVar2 = FUN_009423b0(param_1);
  FUN_009389e0(uVar2,uVar1);
  return;
}


