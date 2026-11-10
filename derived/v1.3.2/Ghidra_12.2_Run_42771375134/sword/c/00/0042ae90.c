/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ae90; name: FUN_0042ae90
 */


void FUN_0042ae90(undefined4 param_1,undefined4 param_2,long *param_3,ulong param_4,uint param_5,
                 void *param_6)

{
  param_4 = param_4 & 0xffffffff;
  if ((*(uint *)(param_3 + 1) & 0xf00) == 0x200) {
    memcpy(param_6,(void *)(*param_3 + (ulong)param_5 * 4),param_4 << 2);
    return;
  }
  if ((*(uint *)(param_3 + 1) & 0xf00) == 0x100) {
    NEON_fminnm(param_1,0x3f800000);
    NEON_fminnm(param_2,0x3f800000);
                    /* WARNING: Subroutine does not return */
    memset(param_6,0,-(param_4 >> 0x1f) & 0xfffffffc00000000 | param_4 << 2);
  }
  return;
}


