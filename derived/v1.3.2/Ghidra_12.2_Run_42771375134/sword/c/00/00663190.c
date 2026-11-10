/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00663190; name: FUN_00663190
 */


ulong FUN_00663190(ulong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (uVar1 < 0x14) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xf0ffeU) != 0) {
      return param_1;
    }
    if (uVar1 == 0xe) {
      uVar1 = 99;
      if ((param_2 & 1) == 0) {
        uVar1 = 0x61;
      }
      return (ulong)uVar1;
    }
    if (uVar1 == 0xf) {
      uVar1 = 100;
      if ((param_2 & 1) == 0) {
        uVar1 = 0x62;
      }
      return (ulong)uVar1;
    }
  }
  return 0;
}


