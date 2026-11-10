/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918500; name: FUN_00918500
 */


void FUN_00918500(ulong *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  *param_1 = (ulong)(uint)(param_2 << 4) & 0x1f0 | (ulong)((param_3 & 0xffff) << 0xd) |
             (ulong)(uint)(param_4 << 9) & 0x1e00 | (ulong)(param_5 & 1) << 0x20 |
             (ulong)(param_6 & 1) << 0x21 | 1;
  return;
}


