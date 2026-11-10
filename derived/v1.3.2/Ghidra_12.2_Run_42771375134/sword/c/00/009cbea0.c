/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cbea0; name: FUN_009cbea0
 */


uint FUN_009cbea0(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return 1;
  }
  uVar1 = FUN_007d4b30(*(long *)(param_1 + 0xd8) + 0xd0);
  return (uVar1 ^ 1) & 1;
}


