/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec1d0; name: FUN_008ec1d0
 */


uint FUN_008ec1d0(int param_1,uint param_2)

{
  int iVar1;
  
  if (2 < param_1 - 3U) {
    if (param_1 == 2) {
      iVar1 = FUN_008ed5b0(DAT_02a4d198,3);
      return iVar1 * 0x100 + 0x200U & 0x3f00 | (param_2 & 0x1f) << 3 | 2;
    }
    if (param_1 != 1) {
      return (param_2 & 0x1f) << 3;
    }
  }
  return (param_2 & 0x1f) << 3 | 1;
}


