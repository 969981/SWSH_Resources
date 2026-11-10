/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c970; name: FUN_0048c970
 */


void FUN_0048c970(undefined4 param_1,long param_2,uint param_3)

{
  *(undefined4 *)(param_2 + 0x264) = param_1;
  *(uint *)(param_2 + 0x26b) =
       *(uint *)(param_2 + 0x26b) & 0xfeffffff | (param_3 & 1) << 0x18 | 0xc00000;
  FUN_00468170(5,param_2);
  return;
}


