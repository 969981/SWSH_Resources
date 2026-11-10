/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150e080; name: FUN_0150e080
 */


void FUN_0150e080(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60) & 0xfeffffff;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x60) | 0x1000000;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  return;
}


