/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2ce0; name: FUN_00cc2ce0
 */


undefined8 FUN_00cc2ce0(byte *param_1,byte *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(PTR_DAT_0271c670 + 0x18);
  if ((ulong)*param_1 < 2) {
    if ((ulong)*param_2 < 3) {
      puVar1 = (undefined8 *)(PTR_DAT_0271c670 + (ulong)*param_2 * 8 + (ulong)*param_1 * 0x18);
    }
  }
  return *puVar1;
}


