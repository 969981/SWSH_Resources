/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01316cd0; name: FUN_01316cd0
 */


undefined8 FUN_01316cd0(long param_1,ulong param_2)

{
  if (*(ulong *)(param_1 + 0x60) <= param_2) {
    param_2 = param_2 + 1;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x58) + param_2 * 8 + 0x70);
}


