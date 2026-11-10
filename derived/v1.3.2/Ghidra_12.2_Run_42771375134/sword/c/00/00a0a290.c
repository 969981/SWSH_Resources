/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a290; name: FUN_00a0a290
 */


bool FUN_00a0a290(uint param_1)

{
  if (param_1 < 7) {
    return (param_1 & 1) == 0;
  }
  return false;
}


