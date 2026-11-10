/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01106670; name: FUN_01106670
 */


void FUN_01106670(float param_1,long param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (DAT_01d4c6b8 < param_1) {
    param_1 = DAT_01d4c6b8;
  }
  FUN_00ffd510(DAT_01d4c6b8 - param_1,param_2 + 0x100,param_2 + 0x5e0);
  return;
}


