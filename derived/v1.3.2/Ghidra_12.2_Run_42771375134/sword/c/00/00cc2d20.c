/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2d20; name: FUN_00cc2d20
 */


undefined8 FUN_00cc2d20(byte param_1,uint param_2)

{
  uint uVar1;
  
  if (1 < param_1) {
    param_1 = 0;
  }
  uVar1 = 0;
  if (param_2 < 4) {
    uVar1 = param_2;
  }
  return (&DAT_0215d9e8)[(ulong)param_1 * 4 + (ulong)uVar1];
}


