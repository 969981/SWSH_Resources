/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbc40; name: FUN_008dbc40
 */


undefined8 FUN_008dbc40(long param_1,ushort param_2)

{
  if (param_2 < 0x80) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 8);
  }
  return 0;
}


