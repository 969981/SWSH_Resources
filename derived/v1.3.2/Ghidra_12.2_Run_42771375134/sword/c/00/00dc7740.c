/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc7740; name: FUN_00dc7740
 */


uint FUN_00dc7740(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x610) - 1;
  if (uVar1 < 6) {
    return 0x3bU >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 0;
}


