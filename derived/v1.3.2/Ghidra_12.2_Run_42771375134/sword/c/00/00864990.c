/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864990; name: FUN_00864990
 */


uint FUN_00864990(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_e0 [192];
  
  FUN_0087f4c0(auStack_e0);
  FUN_0087f540(auStack_e0,param_1,param_2);
  uVar1 = FUN_0087f530(auStack_e0);
  FUN_0087f510(auStack_e0);
  return uVar1 & 1;
}


