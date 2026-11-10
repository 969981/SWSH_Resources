/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ab20; name: FUN_0087ab20
 */


void FUN_0087ab20(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_0087a6e0();
  uVar1 = param_3;
  if (param_3 <= uVar2) {
    uVar1 = uVar2;
  }
  FUN_0087a8a0(param_1,param_2,uVar1 - param_3);
  return;
}


