/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2980; name: FUN_007c2980
 */


bool FUN_007c2980(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    return false;
  }
  return (*(byte *)(*(long *)(param_1 + 0x50) + 0x2fa) & 1) == 0;
}


