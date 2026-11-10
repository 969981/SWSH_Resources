/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008882f0; name: FUN_008882f0
 */


uint FUN_008882f0(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  FUN_008885c0(auStack_30,param_2);
  uVar1 = FUN_00888e00(auStack_30,param_3);
  FUN_00888620(auStack_30);
  return uVar1 & 1;
}


