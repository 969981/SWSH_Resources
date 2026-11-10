/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007596a0; name: FUN_007596a0
 */


void FUN_007596a0(long param_1,uint param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x484) = (char)(param_2 & 1);
  uVar1 = param_2 & 1 | (uint)*(byte *)(param_1 + 0x485) << 1;
  *(uint *)(param_1 + 0x488) = uVar1;
  *(uint *)(*(long *)(param_1 + 0x268) + 0xfc) = uVar1;
  return;
}


