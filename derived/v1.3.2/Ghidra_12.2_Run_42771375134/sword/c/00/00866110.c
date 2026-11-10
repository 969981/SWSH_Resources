/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00866110; name: FUN_00866110
 */


void FUN_00866110(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_00877a30();
  puVar1 = PTR_DAT_02717360 + 0x50;
  *param_1 = (long)(PTR_DAT_02717360 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_00866160(param_1,param_2);
  return;
}


