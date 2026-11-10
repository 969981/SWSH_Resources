/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b32e0; name: FUN_014b32e0
 */


bool FUN_014b32e0(byte param_1)

{
  if (((byte)(param_1 - 0x1e) < 5) || ((param_1 & 0xfe) == 0x2a)) {
    return true;
  }
  return (param_1 & 0xfe) == 0x2c;
}


