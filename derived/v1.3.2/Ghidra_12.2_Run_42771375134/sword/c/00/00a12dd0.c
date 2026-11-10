/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a12dd0; name: FUN_00a12dd0
 */


byte FUN_00a12dd0(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    bVar1 = FUN_010367c0();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1 & 1;
}


