/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f9020; name: FUN_014f9020
 */


uint FUN_014f9020(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x5cb) == '\0') {
    return 0;
  }
  uVar1 = FUN_010367c0();
  return ~uVar1 & 1;
}


