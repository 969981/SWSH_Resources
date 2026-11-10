/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877160; name: FUN_00877160
 */


ulong FUN_00877160(byte param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_5 & 0xff) / 10;
  if (9 < uVar1) {
    uVar1 = 10;
  }
  uVar1 = (uint)((*(float *)(&DAT_02143a74 + (ulong)uVar1 * 4) *
                  (float)((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2)) *
                 (float)param_1) / DAT_01d4c6b8 + 5.0);
  if ((&DAT_02143aa2)[(ulong)(param_6 & 0xffff) * 5] == -1) {
    iVar2 = 0x5a;
  }
  else {
    if ((&DAT_02143aa2)[(ulong)(param_6 & 0xffff) * 5] != '\x01') {
      return (ulong)uVar1;
    }
    iVar2 = 0x6e;
  }
  return (ulong)(uVar1 * iVar2 & 0xfffe) / 100;
}


