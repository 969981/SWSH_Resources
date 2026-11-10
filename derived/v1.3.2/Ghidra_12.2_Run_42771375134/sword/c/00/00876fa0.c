/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00876fa0; name: FUN_00876fa0
 */


int FUN_00876fa0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6)

{
  if (param_1 == 0x124) {
    return 1;
  }
  if (9 < param_6) {
    param_6 = 10;
  }
  return (int)(*(float *)(&DAT_02143a48 + (ulong)param_6 * 4) *
              (float)((((param_3 & 0xffff) * 2 + (param_4 & 0xffff) + ((param_5 & 0xfffc) >> 2)) *
                      (param_2 & 0xff)) / 100 + (param_2 & 0xff) + 10 & 0xffff));
}


