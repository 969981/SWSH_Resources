/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7300; name: FUN_014b7300
 */


uint FUN_014b7300(long *param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
  FUN_008885c0(auStack_40,param_2);
  uVar1 = FUN_014b6790(uVar2,auStack_40,param_4);
  FUN_00888620(auStack_40);
  return uVar1 & 1;
}


