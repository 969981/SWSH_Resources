/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00133ef0; name: FUN_00133ef0
 */


uint FUN_00133ef0(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2] + 1U | param_1[2] + 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  *param_1 = uVar1 + 1;
  param_1[1] = uVar1;
  FUN_00133f40();
  return param_1[1] & param_2;
}


