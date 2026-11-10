/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa7750; name: FUN_00fa7750
 */


uint FUN_00fa7750(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 auStack_50 [32];
  
  FUN_0121c650(auStack_50,param_3);
  uVar1 = FUN_0121c6e0(param_3);
  uVar2 = FUN_00fa77b0(param_1,param_2,auStack_50,uVar1);
  return uVar2 & 1;
}


