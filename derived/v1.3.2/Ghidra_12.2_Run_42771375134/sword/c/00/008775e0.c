/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008775e0; name: FUN_008775e0
 */


undefined1
FUN_008775e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = (param_1 & 1 | (param_2 & 1) << 1 | (param_3 & 1) << 2 | (param_4 & 1) << 3 |
           (param_5 & 1) << 4 | (param_6 & 1) << 5) * 0xf;
  return (&DAT_01d4b6b0)
         [(ulong)(uVar1 / 0x3f) -
          (ulong)(((uint)((ulong)(uVar1 >> 4) * 0x10410411 >> 0x20) & 0x1fffffc) << 2)];
}


