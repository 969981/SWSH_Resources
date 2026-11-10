/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5130; name: FUN_00fa5130
 */


uint FUN_00fa5130(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 auStack_50 [32];
  
  FUN_0121c650(auStack_50,param_3);
  uVar1 = FUN_0121c6d0(param_3);
  uVar2 = FUN_0121c6e0(param_3);
  uVar3 = FUN_00fa51a0(param_1,param_2,auStack_50,uVar1,uVar2);
  return uVar3 & 1;
}


