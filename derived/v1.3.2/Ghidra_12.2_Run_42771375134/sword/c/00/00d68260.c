/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68260; name: FUN_00d68260
 */


long FUN_00d68260(long param_1)

{
  ulong uVar1;
  
  param_1 = param_1 + 0x790;
  uVar1 = FUN_006e2fe0(param_1);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  return param_1;
}


