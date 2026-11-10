/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b2f0; name: FUN_0093b2f0
 */


undefined8 FUN_0093b2f0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x4e);
  if (bVar1 < *(byte *)(param_1 + 0x4c)) {
    *(byte *)(param_1 + 0x4e) = bVar1 + 1;
    return *(undefined8 *)(param_1 + (ulong)bVar1 * 8);
  }
  return 0;
}


