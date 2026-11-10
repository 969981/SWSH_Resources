/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918600; name: FUN_00918600
 */


void FUN_00918600(ulong *param_1,int param_2,ulong param_3,ulong param_4,uint param_5)

{
  *param_1 = (param_3 & 0xffff) << 0x11 |
             (ulong)(uint)(param_2 << 4) & 0x1f0 | (param_4 & 0xff) << 9 |
             (ulong)(param_5 & 0xff) << 0x21 | 2;
  return;
}


