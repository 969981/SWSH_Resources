/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887e60; name: FUN_00887e60
 */


undefined4 FUN_00887e60(undefined8 param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_008885c0(auStack_30,param_2);
    uVar1 = FUN_00888630(auStack_30,param_3);
    FUN_00888620(auStack_30);
  }
  return uVar1;
}


