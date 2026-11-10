/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c95d0; name: FUN_008c95d0
 */


void FUN_008c95d0(long param_1,ulong param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    FUN_00ffd010(param_1 + 0x100,&UNK_02145de0 + (param_2 & 0xffffffff) * 0x10);
    return;
  }
  FUN_00ffd010(param_1 + 0x100,&UNK_02145dd8 + (param_2 & 0xffffffff) * 0x10);
  return;
}


