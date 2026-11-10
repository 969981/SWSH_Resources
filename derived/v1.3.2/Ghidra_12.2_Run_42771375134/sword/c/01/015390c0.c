/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015390c0; name: FUN_015390c0
 */


uint FUN_015390c0(long param_1,uint param_2)

{
  if (0x270e < param_2) {
    param_2 = 9999;
  }
  *(uint *)(param_1 + 0x17c) = param_2;
  FUN_015288f0(0x19,param_2);
  return param_2;
}


