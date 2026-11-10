/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cae40; name: FUN_009cae40
 */


void FUN_009cae40(long param_1,uint param_2,void *param_3,ulong param_4)

{
  if (param_4 < 0x400) {
    *(ulong *)(param_1 + 0x4a0) = param_4;
    memcpy((void *)(param_1 + 0xa0),param_3,param_4);
    *(uint *)(param_1 + 0x4a8) = param_2 & 0xff;
  }
  return;
}


