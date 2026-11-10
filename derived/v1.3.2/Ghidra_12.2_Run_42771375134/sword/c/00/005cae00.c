/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cae00; name: FUN_005cae00
 */


uint FUN_005cae00(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  FUN_005c8860(auStack_30,PTR_DAT_02713f48,1);
  uVar2 = FUN_005bf7e0();
  uVar1 = FUN_005c0070(uVar2,param_1);
  FUN_005c88a0(auStack_30);
  return uVar1 & 1;
}


