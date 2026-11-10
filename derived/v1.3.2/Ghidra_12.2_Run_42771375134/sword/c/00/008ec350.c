/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec350; name: FUN_008ec350
 */


ulong FUN_008ec350(ulong param_1,byte param_2)

{
  uint uVar1;
  
  if (param_2 < 0xd) {
    uVar1 = 0;
    if ((byte)(&DAT_02149a7f)[(ulong)param_2 * 2] != 0) {
      uVar1 = ((uint)(byte)(&DAT_02149a7e)[(ulong)param_2 * 2] * ((uint)param_1 & 0xff)) /
              (uint)(byte)(&DAT_02149a7f)[(ulong)param_2 * 2];
    }
    if (99 < uVar1) {
      uVar1 = 100;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}


