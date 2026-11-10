/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001592e0; name: FUN_001592e0
 */


void FUN_001592e0(long param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_00147050(param_1,param_2);
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}


