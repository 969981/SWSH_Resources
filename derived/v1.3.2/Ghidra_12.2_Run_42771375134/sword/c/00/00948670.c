/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948670; name: FUN_00948670
 */


uint FUN_00948670(uint param_1,undefined8 param_2)

{
  uint uVar1;
  
  if (param_1 < 0x25) {
    if ((1L << ((ulong)param_1 & 0x3f) & 0x12c03c8440U) != 0) {
      return 1;
    }
    if ((ulong)param_1 == 0x10) {
      FUN_008e12a0(param_2,0x12);
      uVar1 = FUN_008dd580();
      return (uVar1 ^ 1) & 1;
    }
  }
  return 0;
}


