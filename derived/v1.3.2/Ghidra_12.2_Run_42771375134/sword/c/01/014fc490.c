/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fc490; name: FUN_014fc490
 */


void FUN_014fc490(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x14) << 2;
  uVar1 = uVar1 ^ uVar1 >> 0xf;
  *(uint *)(param_1 + 0x14) = uVar1 ^ uVar1 << 0xd;
  return;
}


