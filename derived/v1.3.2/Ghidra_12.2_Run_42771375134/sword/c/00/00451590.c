/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451590; name: FUN_00451590
 */


undefined8 FUN_00451590(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x155) >> 3 & 1) == 0) {
    uVar1 = FUN_00482d90(*(undefined8 *)(param_1 + 0x148));
    return uVar1;
  }
  return 0;
}


