/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005528b0; name: FUN_005528b0
 */


uint FUN_005528b0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return uVar1 >> 0x1f;
}


